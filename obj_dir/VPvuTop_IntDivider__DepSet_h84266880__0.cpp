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
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h2c91e606__0;
    VlWide<3>/*95:0*/ __Vtemp_he90e6e5d__0;
    VlWide<3>/*95:0*/ __Vtemp_h7bc177bc__0;
    VlWide<3>/*95:0*/ __Vtemp_hba4a56f5__0;
    VlWide<3>/*95:0*/ __Vtemp_h5ce10a39__0;
    VlWide<3>/*95:0*/ __Vtemp_ha183e862__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f8c8a78__0;
    VlWide<3>/*95:0*/ __Vtemp_h5baa320b__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f83c2a8__0;
    VlWide<3>/*95:0*/ __Vtemp_h2959ef8b__0;
    VlWide<3>/*95:0*/ __Vtemp_h98c5846f__0;
    VlWide<3>/*95:0*/ __Vtemp_heb67e788__0;
    VlWide<3>/*95:0*/ __Vtemp_h04f75829__0;
    VlWide<3>/*95:0*/ __Vtemp_h2774f9bd__0;
    VlWide<3>/*95:0*/ __Vtemp_h8a5575f7__0;
    // Body
    __Vtemp_h2c91e606__0[0U] = (IData)((0xffffffffffffffULL 
                                        & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))));
    __Vtemp_h2c91e606__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))) 
                                        >> 0x20U));
    __Vtemp_h2c91e606__0[2U] = 0U;
    __Vtemp_he90e6e5d__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)) 
                                              * (0xffffffffffffffULL 
                                                 & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))))))));
    __Vtemp_he90e6e5d__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)) 
                                               * (0xffffffffffffffULL 
                                                  & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))))))) 
                                        >> 0x20U));
    __Vtemp_he90e6e5d__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_h7bc177bc__0, __Vtemp_h2c91e606__0, __Vtemp_he90e6e5d__0);
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U] 
        = __Vtemp_h7bc177bc__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U] 
        = __Vtemp_h7bc177bc__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U] 
        = (0xfffffU & __Vtemp_h7bc177bc__0[2U]);
    VL_SHIFTR_WWI(84,84,32, __Vtemp_hba4a56f5__0, vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full, 0x1cU);
    __Vtemp_h5ce10a39__0[0U] = __Vtemp_hba4a56f5__0[0U];
    __Vtemp_h5ce10a39__0[1U] = __Vtemp_hba4a56f5__0[1U];
    __Vtemp_h5ce10a39__0[2U] = (0xfffffU & __Vtemp_hba4a56f5__0[2U]);
    __Vtemp_ha183e862__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)) 
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
    __Vtemp_ha183e862__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)) 
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
    __Vtemp_ha183e862__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_h5f8c8a78__0, __Vtemp_h5ce10a39__0, __Vtemp_ha183e862__0);
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U] 
        = __Vtemp_h5f8c8a78__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U] 
        = __Vtemp_h5f8c8a78__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U] 
        = (0xfffffU & __Vtemp_h5f8c8a78__0[2U]);
    VL_SHIFTR_WWI(84,84,32, __Vtemp_h5baa320b__0, vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full, 0x1cU);
    __Vtemp_h5f83c2a8__0[0U] = __Vtemp_h5baa320b__0[0U];
    __Vtemp_h5f83c2a8__0[1U] = __Vtemp_h5baa320b__0[1U];
    __Vtemp_h5f83c2a8__0[2U] = (0xfffffU & __Vtemp_h5baa320b__0[2U]);
    __Vtemp_h2959ef8b__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)) 
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
    __Vtemp_h2959ef8b__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)) 
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
    __Vtemp_h2959ef8b__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_h98c5846f__0, __Vtemp_h5f83c2a8__0, __Vtemp_h2959ef8b__0);
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
        = __Vtemp_h98c5846f__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
        = __Vtemp_h98c5846f__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
        = (0xfffffU & __Vtemp_h98c5846f__0[2U]);
    VL_SHIFTR_WWI(84,84,32, __Vtemp_heb67e788__0, vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full, 0x1cU);
    __Vtemp_h04f75829__0[0U] = __Vtemp_heb67e788__0[0U];
    __Vtemp_h04f75829__0[1U] = __Vtemp_heb67e788__0[1U];
    __Vtemp_h04f75829__0[2U] = (0xfffffU & __Vtemp_heb67e788__0[2U]);
    __Vtemp_h2774f9bd__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)) 
                                              * (0xffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])) 
                                                          >> 0x1cU))))))));
    __Vtemp_h2774f9bd__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)) 
                                               * (0xffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])) 
                                                           >> 0x1cU))))))) 
                                        >> 0x20U));
    __Vtemp_h2774f9bd__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_h8a5575f7__0, __Vtemp_h04f75829__0, __Vtemp_h2774f9bd__0);
    vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
        = __Vtemp_h8a5575f7__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
        = __Vtemp_h8a5575f7__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
        = (0xfffffU & __Vtemp_h8a5575f7__0[2U]);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 5U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 5U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 7U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 7U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 9U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 9U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                   >> 0x1dU)) | (2U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                        >> 0x1dU)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                   >> 0x1dU)) | (4U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                        >> 0x1dU)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 1U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 1U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 3U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 3U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 5U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 5U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 7U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 7U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x17U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x17U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x19U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x19U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x1bU))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x1bU))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                   >> 0x1dU)) | (2U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                   >> 0x1dU)) | (4U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 1U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 1U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 3U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 3U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 9U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 9U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x13U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x13U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x15U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x15U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                   >> 0x1dU)) | (6U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                        >> 0x1dU)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (6U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 1U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 3U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 5U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->__VdfgTmp_h1a5d0b9a__0 = (1U & (~ ((0U 
                                                == 
                                                (3U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                    >> 0x1cU))) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                      >> 0x1cU))))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 5U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 7U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 9U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 7U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x17U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x19U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x1bU))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                   >> 0x1dU)) | (6U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (6U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 1U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 9U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x13U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 3U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x15U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                       >> 0x1dU)) | ((1U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                             >> 0x1dU)) 
                                     | ((2U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                >> 0x1dU)) 
                                        | (3U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                  >> 0x1dU)))))) 
           & ((4U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                      >> 0x1dU)) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                              << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                        >> 0x1fU)))) 
               | ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                 << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                           >> 0x1fU)))) 
                  | ((2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                              >> 0x1fU)))) 
                     | (3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                      << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                >> 0x1fU)))))))) 
           & ((4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                       >> 0x1fU)))) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 1U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 1U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 3U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 3U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 5U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 5U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_h1a5d0b9a__0) 
           & ((2U == (3U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                            >> 0x1cU))) | (3U == (3U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                     >> 0x1cU)))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 5U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 5U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 7U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 7U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 9U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 9U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 0xdU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                     >> 0xfU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 0xfU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                      >> 0x11U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 0x11U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 7U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 7U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0x17U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x17U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x17U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0x17U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0x17U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0x19U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x19U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x19U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0x19U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0x19U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0x1bU))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x1bU))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x1bU))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0x1bU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0x1bU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                       >> 0x1dU)) | ((1U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                             >> 0x1dU)) 
                                     | ((2U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x1dU)) 
                                        | (3U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 0x1dU)))))) 
           & ((4U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                      >> 0x1dU)) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                              << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                        >> 0x1fU)))) 
               | ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                 << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                           >> 0x1fU)))) 
                  | ((2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                    << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                              >> 0x1fU)))) 
                     | (3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                      << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x1fU)))))))) 
           & ((4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                       >> 0x1fU)))) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 1U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 1U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 9U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 9U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                     >> 0xbU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0xbU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0xdU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                     >> 0xfU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0xfU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0x11U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0x11U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0x13U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x13U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x13U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0x13U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0x13U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                     >> 0xbU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 0xbU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 3U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 3U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0x15U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x15U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x15U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0x15U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0x15U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__1(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__1\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h39fc04c9__0;
    VlWide<6>/*191:0*/ __Vtemp_h1d14d617__0;
    VlWide<9>/*287:0*/ __Vtemp_hd13505e4__0;
    VlWide<13>/*415:0*/ __Vtemp_hb4e6fd41__0;
    VlWide<17>/*543:0*/ __Vtemp_h6af672e8__0;
    VlWide<20>/*639:0*/ __Vtemp_hb9717988__0;
    VlWide<24>/*767:0*/ __Vtemp_hc1951516__0;
    VlWide<63>/*2015:0*/ __Vtemp_h1dd31c53__0;
    VlWide<65>/*2079:0*/ __Vtemp_he0f6b068__0;
    VlWide<65>/*2079:0*/ __Vtemp_h50c889ca__0;
    VlWide<65>/*2079:0*/ __Vtemp_h33ec7127__0;
    VlWide<66>/*2111:0*/ __Vtemp_h09fa584f__0;
    VlWide<66>/*2111:0*/ __Vtemp_h0f03ac56__0;
    VlWide<68>/*2175:0*/ __Vtemp_h462a2890__0;
    VlWide<68>/*2175:0*/ __Vtemp_h8a52d648__0;
    VlWide<68>/*2175:0*/ __Vtemp_h2d40729a__0;
    VlWide<70>/*2239:0*/ __Vtemp_h4eef64a2__0;
    VlWide<70>/*2239:0*/ __Vtemp_h683806ba__0;
    VlWide<72>/*2303:0*/ __Vtemp_ha6ab7c17__0;
    VlWide<72>/*2303:0*/ __Vtemp_h26126a58__0;
    VlWide<72>/*2303:0*/ __Vtemp_h1d625194__0;
    VlWide<74>/*2367:0*/ __Vtemp_heb0225dc__0;
    VlWide<74>/*2367:0*/ __Vtemp_h8e18d15d__0;
    VlWide<75>/*2399:0*/ __Vtemp_hdfe11afe__0;
    VlWide<75>/*2399:0*/ __Vtemp_hd0544889__0;
    VlWide<75>/*2399:0*/ __Vtemp_h953538c4__0;
    VlWide<77>/*2463:0*/ __Vtemp_ha01bdffc__0;
    VlWide<77>/*2463:0*/ __Vtemp_h6d010505__0;
    VlWide<79>/*2527:0*/ __Vtemp_h68a543c8__0;
    VlWide<79>/*2527:0*/ __Vtemp_hdfe6313e__0;
    VlWide<79>/*2527:0*/ __Vtemp_h3c668931__0;
    VlWide<81>/*2591:0*/ __Vtemp_h7133bd97__0;
    VlWide<81>/*2591:0*/ __Vtemp_h8ba5402e__0;
    VlWide<82>/*2623:0*/ __Vtemp_h3d4331e7__0;
    VlWide<82>/*2623:0*/ __Vtemp_h54702b29__0;
    VlWide<82>/*2623:0*/ __Vtemp_hd8466465__0;
    VlWide<84>/*2687:0*/ __Vtemp_h19eb5bfd__0;
    VlWide<84>/*2687:0*/ __Vtemp_h0eda559f__0;
    VlWide<86>/*2751:0*/ __Vtemp_he5a6cfb3__0;
    VlWide<86>/*2751:0*/ __Vtemp_h919996d1__0;
    VlWide<86>/*2751:0*/ __Vtemp_haef884ba__0;
    VlWide<88>/*2815:0*/ __Vtemp_h7b7ce73e__0;
    VlWide<88>/*2815:0*/ __Vtemp_h4d96f044__0;
    VlWide<89>/*2847:0*/ __Vtemp_h246a9968__0;
    VlWide<90>/*2879:0*/ __Vtemp_hd579f41c__0;
    VlWide<90>/*2879:0*/ __Vtemp_hea0813ba__0;
    VlWide<91>/*2911:0*/ __Vtemp_hc0d9eb5e__0;
    VlWide<91>/*2911:0*/ __Vtemp_hde573156__0;
    VlWide<93>/*2975:0*/ __Vtemp_ha35b0233__0;
    VlWide<93>/*2975:0*/ __Vtemp_h8bde5fe7__0;
    VlWide<93>/*2975:0*/ __Vtemp_h1419945e__0;
    VlWide<95>/*3039:0*/ __Vtemp_h9be2ae9d__0;
    VlWide<95>/*3039:0*/ __Vtemp_ha2c4b09b__0;
    VlWide<97>/*3103:0*/ __Vtemp_hdbc4d19c__0;
    VlWide<97>/*3103:0*/ __Vtemp_h7de2012a__0;
    VlWide<97>/*3103:0*/ __Vtemp_hff41ae2c__0;
    VlWide<98>/*3135:0*/ __Vtemp_h54db9096__0;
    VlWide<98>/*3135:0*/ __Vtemp_h79bc0c9d__0;
    VlWide<100>/*3199:0*/ __Vtemp_h3f9515a0__0;
    VlWide<100>/*3199:0*/ __Vtemp_hbbdbbe6d__0;
    VlWide<100>/*3199:0*/ __Vtemp_h498041bb__0;
    VlWide<102>/*3263:0*/ __Vtemp_h736f6778__0;
    // Body
    vlSelf->__VdfgTmp_hf62111dd__0 = ((0x80000U & (
                                                   vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   & vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U]))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : 0ULL);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 5U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 5U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 7U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 7U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 9U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 9U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 0xdU))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 0xdU))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 0xfU))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 0xfU))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 0x11U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 0x11U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    __Vtemp_h39fc04c9__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
                                         << 0x3bU) 
                                        | (((QData)((IData)(
                                                            (3U 
                                                             & (- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                                            << 0x39U) 
                                           | (0x1ffffffffffffffULL 
                                              & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                 ^ 
                                                 (((0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                        >> 0x1cU))) 
                                                   & ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                           >> 0x1cU))) 
                                                      | (IData)(
                                                                ((0x30000000U 
                                                                  == 
                                                                  (0x30000000U 
                                                                   & vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U])) 
                                                                 & (2U 
                                                                    != 
                                                                    (3U 
                                                                     & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                                        >> 0x1cU)))))))
                                                   ? 
                                                  ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                   << 0x1cU)
                                                   : 
                                                  (((IData)(vlSelf->__VdfgTmp_h1a5d0b9a__0) 
                                                    & (0x20000000U 
                                                       == 
                                                       (0x30000000U 
                                                        & vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U])))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                    << 0x1dU)
                                                    : 0ULL)))))));
    __Vtemp_h39fc04c9__0[1U] = (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
                                          << 0x3bU) 
                                         | (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                                             << 0x39U) 
                                            | (0x1ffffffffffffffULL 
                                               & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                  ^ 
                                                  (((0U 
                                                     != 
                                                     (3U 
                                                      & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                         >> 0x1cU))) 
                                                    & ((1U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                            >> 0x1cU))) 
                                                       | (IData)(
                                                                 ((0x30000000U 
                                                                   == 
                                                                   (0x30000000U 
                                                                    & vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U])) 
                                                                  & (2U 
                                                                     != 
                                                                     (3U 
                                                                      & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                                         >> 0x1cU)))))))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                    << 0x1cU)
                                                    : 
                                                   (((IData)(vlSelf->__VdfgTmp_h1a5d0b9a__0) 
                                                     & (0x20000000U 
                                                        == 
                                                        (0x30000000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U])))
                                                     ? 
                                                    ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                     << 0x1dU)
                                                     : 0ULL)))))) 
                                        >> 0x20U));
    __Vtemp_h1d14d617__0[4U] = (((IData)((0x1ffffffffffffffULL 
                                          & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                             ^ (((0U 
                                                  != 
                                                  (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                   >> 0x1dU)) 
                                                 & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                    | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                       & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                 ? 
                                                ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                 << 0x1cU)
                                                 : 
                                                (((~ 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                      >> 0x1dU)) 
                                                    | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                  ? 
                                                 ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                  << 0x1dU)
                                                  : 0ULL))))) 
                                 >> 0xeU) | ((IData)(
                                                     ((0x1ffffffffffffffULL 
                                                       & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                                          ^ 
                                                          (((0U 
                                                             != 
                                                             (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                              >> 0x1dU)) 
                                                            & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                               | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                            ? 
                                                           ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                            << 0x1cU)
                                                            : 
                                                           (((~ 
                                                              ((0U 
                                                                == 
                                                                (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                                 >> 0x1dU)) 
                                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                             ? 
                                                            ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                             << 0x1dU)
                                                             : 0ULL)))) 
                                                      >> 0x20U)) 
                                             << 0x12U));
    __Vtemp_hd13505e4__0[7U] = (((IData)((0x1ffffffffffffffULL 
                                          & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                             ^ (((0U 
                                                  != 
                                                  (7U 
                                                   & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                       << 1U) 
                                                      | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                         >> 0x1fU)))) 
                                                 & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                                    | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                       & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                 ? 
                                                ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                 << 0x1cU)
                                                 : 
                                                (((~ 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                          << 1U) 
                                                         | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                            >> 0x1fU)))) 
                                                    | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                  ? 
                                                 ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                  << 0x1dU)
                                                  : 0ULL))))) 
                                 << 4U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                           << 2U));
    __Vtemp_hd13505e4__0[8U] = (((IData)((0x1ffffffffffffffULL 
                                          & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                             ^ (((0U 
                                                  != 
                                                  (7U 
                                                   & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                       << 1U) 
                                                      | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                         >> 0x1fU)))) 
                                                 & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                                    | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                       & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                 ? 
                                                ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                 << 0x1cU)
                                                 : 
                                                (((~ 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                          << 1U) 
                                                         | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                            >> 0x1fU)))) 
                                                    | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                  ? 
                                                 ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                  << 0x1dU)
                                                  : 0ULL))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x1ffffffffffffffULL 
                                                        & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           (((0U 
                                                              != 
                                                              (7U 
                                                               & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                   << 1U) 
                                                                  | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                                     >> 0x1fU)))) 
                                                             & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                                                | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                   & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                             ? 
                                                            ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                             << 0x1cU)
                                                             : 
                                                            (((~ 
                                                               ((0U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                      << 1U) 
                                                                     | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                                        >> 0x1fU)))) 
                                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                              ? 
                                                             ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                              << 0x1dU)
                                                              : 0ULL)))) 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_hb4e6fd41__0[0xbU] = (((IData)((0x1ffffffffffffffULL 
                                            & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                               ^ ((
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                                      | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                   ? 
                                                  ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                   << 0x1cU)
                                                   : 
                                                  (((~ 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                           >> 1U))) 
                                                      | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                    << 0x1dU)
                                                    : 0ULL))))) 
                                   >> 0xaU) | ((IData)(
                                                       ((0x1ffffffffffffffULL 
                                                         & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                                            ^ 
                                                            (((0U 
                                                               != 
                                                               (7U 
                                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                   >> 1U))) 
                                                              & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                                                 | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                              ? 
                                                             ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                              << 0x1cU)
                                                              : 
                                                             (((~ 
                                                                ((0U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                      >> 1U))) 
                                                                 | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                                               & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                               ? 
                                                              ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                               << 0x1dU)
                                                               : 0ULL)))) 
                                                        >> 0x20U)) 
                                               << 0x16U));
    __Vtemp_h6af672e8__0[0xfU] = (((IData)((0x1ffffffffffffffULL 
                                            & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                               ^ ((
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                        >> 3U))) 
                                                   & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                                      | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                   ? 
                                                  ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                   << 0x1cU)
                                                   : 
                                                  (((~ 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                           >> 3U))) 
                                                      | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                    << 0x1dU)
                                                    : 0ULL))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0x1ffffffffffffffULL 
                                                          & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                                             ^ 
                                                             (((0U 
                                                                != 
                                                                (7U 
                                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                    >> 3U))) 
                                                               & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                                                  | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                     & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                               ? 
                                                              ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                               << 0x1cU)
                                                               : 
                                                              (((~ 
                                                                 ((0U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                       >> 3U))) 
                                                                  | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                                                & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                ? 
                                                               ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                                << 0x1dU)
                                                                : 0ULL)))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_hb9717988__0[0x12U] = (((IData)((0x1ffffffffffffffULL 
                                             & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                         >> 5U))) 
                                                    & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                                       | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                    << 0x1cU)
                                                    : 
                                                   (((~ 
                                                      ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                            >> 5U))) 
                                                       | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                                     & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                     ? 
                                                    ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                     << 0x1dU)
                                                     : 0ULL))))) 
                                    >> 6U) | ((IData)(
                                                      ((0x1ffffffffffffffULL 
                                                        & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           (((0U 
                                                              != 
                                                              (7U 
                                                               & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                  >> 5U))) 
                                                             & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                                                | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                   & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                             ? 
                                                            ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                             << 0x1cU)
                                                             : 
                                                            (((~ 
                                                               ((0U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                     >> 5U))) 
                                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                              ? 
                                                             ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                              << 0x1dU)
                                                              : 0ULL)))) 
                                                       >> 0x20U)) 
                                              << 0x1aU));
    __Vtemp_hc1951516__0[0x16U] = (((IData)((0x1ffffffffffffffULL 
                                             & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                         >> 7U))) 
                                                    & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                                       | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                    << 0x1cU)
                                                    : 
                                                   (((~ 
                                                      ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                            >> 7U))) 
                                                       | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                                     & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                     ? 
                                                    ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                     << 0x1dU)
                                                     : 0ULL))))) 
                                    >> 0x14U) | ((IData)(
                                                         ((0x1ffffffffffffffULL 
                                                           & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                              ^ 
                                                              (((0U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                     >> 7U))) 
                                                                & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                                                   | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                ? 
                                                               ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                                << 0x1cU)
                                                                : 
                                                               (((~ 
                                                                  ((0U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                        >> 7U))) 
                                                                   | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                                                 & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                 ? 
                                                                ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                                 << 0x1dU)
                                                                 : 0ULL)))) 
                                                          >> 0x20U)) 
                                                 << 0xcU));
    vlSelf->__VdfgTmp_hcc9d1910__0[0U] = __Vtemp_h39fc04c9__0[0U];
    vlSelf->__VdfgTmp_hcc9d1910__0[1U] = __Vtemp_h39fc04c9__0[1U];
    vlSelf->__VdfgTmp_hcc9d1910__0[2U] = 0U;
    vlSelf->__VdfgTmp_hcc9d1910__0[3U] = (((IData)(
                                                   (0x1ffffffffffffffULL 
                                                    & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                                       ^ 
                                                       (((0U 
                                                          != 
                                                          (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                           >> 0x1dU)) 
                                                         & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                            | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                               & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                         ? 
                                                        ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                         << 0x1cU)
                                                         : 
                                                        (((~ 
                                                           ((0U 
                                                             == 
                                                             (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                              >> 0x1dU)) 
                                                            | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                          ? 
                                                         ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                          << 0x1dU)
                                                          : 0ULL))))) 
                                           << 0x12U) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                             << 0x10U));
    vlSelf->__VdfgTmp_hcc9d1910__0[4U] = __Vtemp_h1d14d617__0[4U];
    vlSelf->__VdfgTmp_hcc9d1910__0[5U] = (0x1000U | 
                                          ((0x800U 
                                            & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                               << 0xbU)) 
                                           | ((IData)(
                                                      ((0x1ffffffffffffffULL 
                                                        & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           (((0U 
                                                              != 
                                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                               >> 0x1dU)) 
                                                             & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                                | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                   & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                             ? 
                                                            ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                             << 0x1cU)
                                                             : 
                                                            (((~ 
                                                               ((0U 
                                                                 == 
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                                  >> 0x1dU)) 
                                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                              ? 
                                                             ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                              << 0x1dU)
                                                              : 0ULL)))) 
                                                       >> 0x20U)) 
                                              >> 0xeU)));
    vlSelf->__VdfgTmp_hcc9d1910__0[6U] = 0U;
    vlSelf->__VdfgTmp_hcc9d1910__0[7U] = __Vtemp_hd13505e4__0[7U];
    vlSelf->__VdfgTmp_hcc9d1910__0[8U] = (0x40000000U 
                                          | ((0x20000000U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                 << 0x1dU)) 
                                             | __Vtemp_hd13505e4__0[8U]));
    vlSelf->__VdfgTmp_hcc9d1910__0[9U] = 0U;
    vlSelf->__VdfgTmp_hcc9d1910__0[0xaU] = (((IData)(
                                                     (0x1ffffffffffffffULL 
                                                      & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                                         ^ 
                                                         (((0U 
                                                            != 
                                                            (7U 
                                                             & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                >> 1U))) 
                                                           & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                                              | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                 & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                           ? 
                                                          ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                           << 0x1cU)
                                                           : 
                                                          (((~ 
                                                             ((0U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                   >> 1U))) 
                                                              | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                            ? 
                                                           ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                            << 0x1dU)
                                                            : 0ULL))))) 
                                             << 0x16U) 
                                            | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                               << 0x14U));
    vlSelf->__VdfgTmp_hcc9d1910__0[0xbU] = __Vtemp_hb4e6fd41__0[0xbU];
    vlSelf->__VdfgTmp_hcc9d1910__0[0xcU] = (0x10000U 
                                            | ((0x8000U 
                                                & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                   << 0xfU)) 
                                               | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                                               ^ 
                                                               (((0U 
                                                                  != 
                                                                  (7U 
                                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                      >> 1U))) 
                                                                 & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                                                    | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                       & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                 ? 
                                                                ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                                 << 0x1cU)
                                                                 : 
                                                                (((~ 
                                                                   ((0U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                         >> 1U))) 
                                                                    | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                  ? 
                                                                 ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                                  << 0x1dU)
                                                                  : 0ULL)))) 
                                                           >> 0x20U)) 
                                                  >> 0xaU)));
    vlSelf->__VdfgTmp_hcc9d1910__0[0xdU] = 0U;
    vlSelf->__VdfgTmp_hcc9d1910__0[0xeU] = (((IData)(
                                                     (0x1ffffffffffffffULL 
                                                      & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                                         ^ 
                                                         (((0U 
                                                            != 
                                                            (7U 
                                                             & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                >> 3U))) 
                                                           & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                                              | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                 & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                           ? 
                                                          ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                           << 0x1cU)
                                                           : 
                                                          (((~ 
                                                             ((0U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                   >> 3U))) 
                                                              | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                            ? 
                                                           ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                            << 0x1dU)
                                                            : 0ULL))))) 
                                             << 8U) 
                                            | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                               << 6U));
    vlSelf->__VdfgTmp_hcc9d1910__0[0xfU] = __Vtemp_h6af672e8__0[0xfU];
    vlSelf->__VdfgTmp_hcc9d1910__0[0x10U] = (4U | (
                                                   (2U 
                                                    & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                       << 1U)) 
                                                   | ((IData)(
                                                              ((0x1ffffffffffffffULL 
                                                                & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                                                   ^ 
                                                                   (((0U 
                                                                      != 
                                                                      (7U 
                                                                       & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                          >> 3U))) 
                                                                     & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                                                        | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                     ? 
                                                                    ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                                     << 0x1cU)
                                                                     : 
                                                                    (((~ 
                                                                       ((0U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                             >> 3U))) 
                                                                        | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                      ? 
                                                                     ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                                      << 0x1dU)
                                                                      : 0ULL)))) 
                                                               >> 0x20U)) 
                                                      >> 0x18U)));
    vlSelf->__VdfgTmp_hcc9d1910__0[0x11U] = (((IData)(
                                                      (0x1ffffffffffffffULL 
                                                       & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                                          ^ 
                                                          (((0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                 >> 5U))) 
                                                            & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                                               | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                            ? 
                                                           ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                            << 0x1cU)
                                                            : 
                                                           (((~ 
                                                              ((0U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                    >> 5U))) 
                                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                             ? 
                                                            ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                             << 0x1dU)
                                                             : 0ULL))))) 
                                              << 0x1aU) 
                                             | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                << 0x18U));
    vlSelf->__VdfgTmp_hcc9d1910__0[0x12U] = __Vtemp_hb9717988__0[0x12U];
    vlSelf->__VdfgTmp_hcc9d1910__0[0x13U] = (0x100000U 
                                             | ((0x80000U 
                                                 & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                                    << 0x13U)) 
                                                | ((IData)(
                                                           ((0x1ffffffffffffffULL 
                                                             & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                                                ^ 
                                                                (((0U 
                                                                   != 
                                                                   (7U 
                                                                    & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                       >> 5U))) 
                                                                  & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                                                     | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                        & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                  ? 
                                                                 ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                                  << 0x1cU)
                                                                  : 
                                                                 (((~ 
                                                                    ((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                          >> 5U))) 
                                                                     | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                                                   & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                   ? 
                                                                  ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                                   << 0x1dU)
                                                                   : 0ULL)))) 
                                                            >> 0x20U)) 
                                                   >> 6U)));
    vlSelf->__VdfgTmp_hcc9d1910__0[0x14U] = 0U;
    vlSelf->__VdfgTmp_hcc9d1910__0[0x15U] = (((IData)(
                                                      (0x1ffffffffffffffULL 
                                                       & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                          ^ 
                                                          (((0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                 >> 7U))) 
                                                            & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                                               | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                            ? 
                                                           ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                            << 0x1cU)
                                                            : 
                                                           (((~ 
                                                              ((0U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                    >> 7U))) 
                                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                             ? 
                                                            ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                             << 0x1dU)
                                                             : 0ULL))))) 
                                              << 0xcU) 
                                             | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                << 0xaU));
    vlSelf->__VdfgTmp_hcc9d1910__0[0x16U] = __Vtemp_hc1951516__0[0x16U];
    vlSelf->__VdfgTmp_hcc9d1910__0[0x17U] = ((0x20U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                 << 5U)) 
                                             | ((IData)(
                                                        ((0x1ffffffffffffffULL 
                                                          & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                             ^ 
                                                             (((0U 
                                                                != 
                                                                (7U 
                                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                    >> 7U))) 
                                                               & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                                                  | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                     & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                               ? 
                                                              ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                               << 0x1cU)
                                                               : 
                                                              (((~ 
                                                                 ((0U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                       >> 7U))) 
                                                                  | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                                                & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                ? 
                                                               ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                                                << 0x1dU)
                                                                : 0ULL)))) 
                                                         >> 0x20U)) 
                                                >> 0x14U));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x17U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x17U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x19U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x19U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x1bU))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x1bU))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x1dU)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                 >> 0x1dU)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                 << 1U) 
                                                | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 0x1fU)))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                     << 1U) 
                                                    | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                       >> 0x1fU)))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 1U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 1U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 9U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 9U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0xbU))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0xbU))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0xdU))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0xdU))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0xfU))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0xfU))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x11U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x11U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x13U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x13U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 0xbU))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 0xbU))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 3U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 3U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x15U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x15U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                   << 0x30U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
            << 0x12U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                  << 0x30U) >> 0x20U)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
            >> 0xeU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                 >> 0x20U)) << 0x12U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = (0x1000U | ((0x800U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                 << 0xbU)) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                       >> 0x20U)) 
                                              >> 0xeU)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
            << 4U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg) 
                      << 2U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = (0x40000000U | ((0x20000000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                                          << 0x1dU)) 
                          | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                              >> 0x1cU) | ((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 4U))));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            << 0x16U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg) 
                         << 0x14U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            >> 0xaU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                 >> 0x20U)) << 0x16U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
        = ((0x8000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                       << 0xfU)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                             >> 0x20U)) 
                                    >> 0xaU));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
        = (((IData)(vlSelf->__VdfgTmp_hf62111dd__0) 
            << 8U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg) 
                      << 6U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
        = (((IData)(vlSelf->__VdfgTmp_hf62111dd__0) 
            >> 0x18U) | ((IData)((vlSelf->__VdfgTmp_hf62111dd__0 
                                  >> 0x20U)) << 8U));
    vlSelf->__VdfgTmp_hf757b9f2__0[0U] = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                                  << 0x28U));
    vlSelf->__VdfgTmp_hf757b9f2__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                           << 0xaU) 
                                          | (IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                                      << 0x28U) 
                                                     >> 0x20U)));
    vlSelf->__VdfgTmp_hf757b9f2__0[2U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                           >> 0x16U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xaU));
    vlSelf->__VdfgTmp_hf757b9f2__0[3U] = (0x10U | (
                                                   (8U 
                                                    & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                                                       << 3U)) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                               >> 0x20U)) 
                                                      >> 0x16U)));
    vlSelf->__VdfgTmp_hf757b9f2__0[4U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                           << 0x1cU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg) 
                                             << 0x1aU));
    vlSelf->__VdfgTmp_hf757b9f2__0[5U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                           >> 4U) | 
                                          ((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1cU));
    vlSelf->__VdfgTmp_hf757b9f2__0[6U] = (0x400000U 
                                          | ((0x200000U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                                                 << 0x15U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 4U)));
    vlSelf->__VdfgTmp_hf757b9f2__0[7U] = 0U;
    vlSelf->__VdfgTmp_hf757b9f2__0[8U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
                                           << 0xeU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    vlSelf->__VdfgTmp_hf757b9f2__0[9U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
                                           >> 0x12U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xeU));
    vlSelf->__VdfgTmp_hf757b9f2__0[0xaU] = (0x100U 
                                            | ((0x80U 
                                                & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                                                   << 7U)) 
                                               | ((IData)(
                                                          (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 0x12U)));
    vlSelf->__VdfgTmp_hf757b9f2__0[0xbU] = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg) 
                                            << 0x1eU);
    vlSelf->__VdfgTmp_hf757b9f2__0[0xcU] = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod);
    vlSelf->__VdfgTmp_hf757b9f2__0[0xdU] = ((0x2000000U 
                                             & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                                << 0x19U)) 
                                            | (IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                                       >> 0x20U)));
    vlSelf->__VdfgTmp_hffadf5d6__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                           << 0x1cU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                             << 0x1aU));
    vlSelf->__VdfgTmp_hffadf5d6__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                           >> 4U) | 
                                          ((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1cU));
    vlSelf->__VdfgTmp_hffadf5d6__0[2U] = (0x400000U 
                                          | ((0x200000U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg)) 
                                                 << 0x15U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 4U)));
    vlSelf->__VdfgTmp_hffadf5d6__0[3U] = 0U;
    vlSelf->__VdfgTmp_hffadf5d6__0[4U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                           << 0xeU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    vlSelf->__VdfgTmp_hffadf5d6__0[5U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                           >> 0x12U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xeU));
    vlSelf->__VdfgTmp_hffadf5d6__0[6U] = (0x100U | 
                                          ((0x80U & 
                                            ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg)) 
                                             << 7U)) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                       >> 0x20U)) 
                                              >> 0x12U)));
    vlSelf->__VdfgTmp_hffadf5d6__0[7U] = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
                                          << 0x1eU);
    vlSelf->__VdfgTmp_hffadf5d6__0[8U] = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod);
    vlSelf->__VdfgTmp_hffadf5d6__0[9U] = (0x4000000U 
                                          | ((0x2000000U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                 << 0x19U)) 
                                             | (IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                                        >> 0x20U))));
    vlSelf->__VdfgTmp_hffadf5d6__0[0xaU] = 0U;
    vlSelf->__VdfgTmp_hffadf5d6__0[0xbU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                             << 0x12U) 
                                            | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg) 
                                               << 0x10U));
    vlSelf->__VdfgTmp_hffadf5d6__0[0xcU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                             >> 0xeU) 
                                            | ((IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                        >> 0x20U)) 
                                               << 0x12U));
    vlSelf->__VdfgTmp_hffadf5d6__0[0xdU] = (0x1000U 
                                            | ((0x800U 
                                                & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                                                   << 0xbU)) 
                                               | ((IData)(
                                                          (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 0xeU)));
    vlSelf->__VdfgTmp_hffadf5d6__0[0xeU] = 0U;
    vlSelf->__VdfgTmp_hffadf5d6__0[0xfU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                             << 4U) 
                                            | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg) 
                                               << 2U));
    vlSelf->__VdfgTmp_hffadf5d6__0[0x10U] = (0x40000000U 
                                             | ((0x20000000U 
                                                 & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                                                    << 0x1dU)) 
                                                | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                                    >> 0x1cU) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                                               >> 0x20U)) 
                                                      << 4U))));
    vlSelf->__VdfgTmp_hffadf5d6__0[0x11U] = 0U;
    vlSelf->__VdfgTmp_hffadf5d6__0[0x12U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
                                              << 0x16U) 
                                             | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg) 
                                                << 0x14U));
    vlSelf->__VdfgTmp_hffadf5d6__0[0x13U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
                                              >> 0xaU) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x16U));
    vlSelf->__VdfgTmp_hffadf5d6__0[0x14U] = (0x10000U 
                                             | ((0x8000U 
                                                 & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                                                    << 0xfU)) 
                                                | ((IData)(
                                                           (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 0xaU)));
    vlSelf->__VdfgTmp_hffadf5d6__0[0x15U] = 0U;
    vlSelf->__VdfgTmp_hffadf5d6__0[0x16U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
                                              << 8U) 
                                             | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg) 
                                                << 6U));
    vlSelf->__VdfgTmp_hffadf5d6__0[0x17U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
                                              >> 0x18U) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 8U));
    vlSelf->__VdfgTmp_hffadf5d6__0[0x18U] = ((2U & 
                                              ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                               << 1U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x18U));
    __Vtemp_h1dd31c53__0[0U] = vlSelf->__VdfgTmp_hcc9d1910__0[0U];
    __Vtemp_h1dd31c53__0[1U] = vlSelf->__VdfgTmp_hcc9d1910__0[1U];
    __Vtemp_h1dd31c53__0[2U] = vlSelf->__VdfgTmp_hcc9d1910__0[2U];
    __Vtemp_h1dd31c53__0[3U] = vlSelf->__VdfgTmp_hcc9d1910__0[3U];
    __Vtemp_h1dd31c53__0[4U] = vlSelf->__VdfgTmp_hcc9d1910__0[4U];
    __Vtemp_h1dd31c53__0[5U] = vlSelf->__VdfgTmp_hcc9d1910__0[5U];
    __Vtemp_h1dd31c53__0[6U] = vlSelf->__VdfgTmp_hcc9d1910__0[6U];
    __Vtemp_h1dd31c53__0[7U] = vlSelf->__VdfgTmp_hcc9d1910__0[7U];
    __Vtemp_h1dd31c53__0[8U] = vlSelf->__VdfgTmp_hcc9d1910__0[8U];
    __Vtemp_h1dd31c53__0[9U] = vlSelf->__VdfgTmp_hcc9d1910__0[9U];
    __Vtemp_h1dd31c53__0[0xaU] = vlSelf->__VdfgTmp_hcc9d1910__0[0xaU];
    __Vtemp_h1dd31c53__0[0xbU] = vlSelf->__VdfgTmp_hcc9d1910__0[0xbU];
    __Vtemp_h1dd31c53__0[0xcU] = vlSelf->__VdfgTmp_hcc9d1910__0[0xcU];
    __Vtemp_h1dd31c53__0[0xdU] = vlSelf->__VdfgTmp_hcc9d1910__0[0xdU];
    __Vtemp_h1dd31c53__0[0xeU] = vlSelf->__VdfgTmp_hcc9d1910__0[0xeU];
    __Vtemp_h1dd31c53__0[0xfU] = vlSelf->__VdfgTmp_hcc9d1910__0[0xfU];
    __Vtemp_h1dd31c53__0[0x10U] = vlSelf->__VdfgTmp_hcc9d1910__0[0x10U];
    __Vtemp_h1dd31c53__0[0x11U] = vlSelf->__VdfgTmp_hcc9d1910__0[0x11U];
    __Vtemp_h1dd31c53__0[0x12U] = vlSelf->__VdfgTmp_hcc9d1910__0[0x12U];
    __Vtemp_h1dd31c53__0[0x13U] = vlSelf->__VdfgTmp_hcc9d1910__0[0x13U];
    __Vtemp_h1dd31c53__0[0x14U] = vlSelf->__VdfgTmp_hcc9d1910__0[0x14U];
    __Vtemp_h1dd31c53__0[0x15U] = vlSelf->__VdfgTmp_hcc9d1910__0[0x15U];
    __Vtemp_h1dd31c53__0[0x16U] = vlSelf->__VdfgTmp_hcc9d1910__0[0x16U];
    __Vtemp_h1dd31c53__0[0x17U] = (0x40U | vlSelf->__VdfgTmp_hcc9d1910__0[0x17U]);
    __Vtemp_h1dd31c53__0[0x18U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    << 0x1eU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                 << 0x1cU));
    __Vtemp_h1dd31c53__0[0x19U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    >> 2U) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1eU));
    __Vtemp_h1dd31c53__0[0x1aU] = (0x1000000U | ((0x800000U 
                                                  & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                     << 0x17U)) 
                                                 | ((IData)(
                                                            (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                             >> 0x20U)) 
                                                    >> 2U)));
    __Vtemp_h1dd31c53__0[0x1bU] = 0U;
    __Vtemp_h1dd31c53__0[0x1cU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    << 0x10U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                 << 0xeU));
    __Vtemp_h1dd31c53__0[0x1dU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_h1dd31c53__0[0x1eU] = (0x400U | ((0x200U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                 << 9U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x10U)));
    __Vtemp_h1dd31c53__0[0x1fU] = 0U;
    __Vtemp_h1dd31c53__0[0x20U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                    << 2U) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    __Vtemp_h1dd31c53__0[0x21U] = (0x10000000U | ((0x8000000U 
                                                   & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                      << 0x1bU)) 
                                                  | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                                      >> 0x1eU) 
                                                     | ((IData)(
                                                                (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                                 >> 0x20U)) 
                                                        << 2U))));
    __Vtemp_h1dd31c53__0[0x22U] = 0U;
    __Vtemp_h1dd31c53__0[0x23U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    << 0x14U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                 << 0x12U));
    __Vtemp_h1dd31c53__0[0x24U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    >> 0xcU) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x14U));
    __Vtemp_h1dd31c53__0[0x25U] = (0x4000U | ((0x2000U 
                                               & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                  << 0xdU)) 
                                              | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 0xcU)));
    __Vtemp_h1dd31c53__0[0x26U] = 0U;
    __Vtemp_h1dd31c53__0[0x27U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                    << 6U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                              << 4U));
    __Vtemp_h1dd31c53__0[0x28U] = (((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                    << 0x1fU) | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                                  >> 0x1aU) 
                                                 | ((IData)(
                                                            (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                             >> 0x20U)) 
                                                    << 6U)));
    __Vtemp_h1dd31c53__0[0x29U] = 1U;
    __Vtemp_h1dd31c53__0[0x2aU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    << 0x18U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                 << 0x16U));
    __Vtemp_h1dd31c53__0[0x2bU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    >> 8U) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x18U));
    __Vtemp_h1dd31c53__0[0x2cU] = (0x40000U | ((0x20000U 
                                                & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                   << 0x11U)) 
                                               | ((IData)(
                                                          (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 8U)));
    __Vtemp_h1dd31c53__0[0x2dU] = 0U;
    __Vtemp_h1dd31c53__0[0x2eU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    << 0xaU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                << 8U));
    __Vtemp_h1dd31c53__0[0x2fU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xaU));
    __Vtemp_h1dd31c53__0[0x30U] = (0x10U | ((8U & (
                                                   (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                   << 3U)) 
                                            | ((IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x16U)));
    __Vtemp_h1dd31c53__0[0x31U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    << 0x1cU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                 << 0x1aU));
    __Vtemp_h1dd31c53__0[0x32U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    >> 4U) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    __Vtemp_h1dd31c53__0[0x33U] = (0x400000U | ((0x200000U 
                                                 & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg)) 
                                                    << 0x15U)) 
                                                | ((IData)(
                                                           (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 4U)));
    __Vtemp_h1dd31c53__0[0x34U] = 0U;
    __Vtemp_h1dd31c53__0[0x35U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                    << 0xeU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg) 
                                                << 0xcU));
    __Vtemp_h1dd31c53__0[0x36U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                    >> 0x12U) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xeU));
    __Vtemp_h1dd31c53__0[0x37U] = (0x100U | ((0x80U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg)) 
                                                 << 7U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x12U)));
    __Vtemp_h1dd31c53__0[0x38U] = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
                                   << 0x1eU);
    __Vtemp_h1dd31c53__0[0x39U] = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod);
    __Vtemp_h1dd31c53__0[0x3aU] = (0x4000000U | ((0x2000000U 
                                                  & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                     << 0x19U)) 
                                                 | (IData)(
                                                           (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                                            >> 0x20U))));
    __Vtemp_h1dd31c53__0[0x3bU] = 0U;
    __Vtemp_h1dd31c53__0[0x3cU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                    << 0x12U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg) 
                                                 << 0x10U));
    __Vtemp_h1dd31c53__0[0x3dU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                    >> 0xeU) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x12U));
    __Vtemp_h1dd31c53__0[0x3eU] = ((0x800U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                                              << 0xbU)) 
                                   | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                               >> 0x20U)) 
                                      >> 0xeU));
    VL_CONCAT_WQW(2050,54,1996, __Vtemp_he0f6b068__0, 1ULL, __Vtemp_h1dd31c53__0);
    VL_CONCAT_WIW(2051,1,2050, __Vtemp_h50c889ca__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg), __Vtemp_he0f6b068__0);
    VL_EXTEND_WW(2052,2051, __Vtemp_h33ec7127__0, __Vtemp_h50c889ca__0);
    VL_CONCAT_WQW(2109,57,2052, __Vtemp_h09fa584f__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod, __Vtemp_h33ec7127__0);
    VL_CONCAT_WIW(2110,1,2109, __Vtemp_h0f03ac56__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg))), __Vtemp_h09fa584f__0);
    VL_CONCAT_WQW(2164,54,2110, __Vtemp_h462a2890__0, 1ULL, __Vtemp_h0f03ac56__0);
    VL_CONCAT_WIW(2165,1,2164, __Vtemp_h8a52d648__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg), __Vtemp_h462a2890__0);
    VL_EXTEND_WW(2166,2165, __Vtemp_h2d40729a__0, __Vtemp_h8a52d648__0);
    VL_CONCAT_WQW(2223,57,2166, __Vtemp_h4eef64a2__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod, __Vtemp_h2d40729a__0);
    VL_CONCAT_WIW(2224,1,2223, __Vtemp_h683806ba__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg))), __Vtemp_h4eef64a2__0);
    VL_CONCAT_WQW(2278,54,2224, __Vtemp_ha6ab7c17__0, 1ULL, __Vtemp_h683806ba__0);
    VL_CONCAT_WIW(2279,1,2278, __Vtemp_h26126a58__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg), __Vtemp_ha6ab7c17__0);
    VL_EXTEND_WW(2280,2279, __Vtemp_h1d625194__0, __Vtemp_h26126a58__0);
    VL_CONCAT_WQW(2337,57,2280, __Vtemp_heb0225dc__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod, __Vtemp_h1d625194__0);
    VL_CONCAT_WIW(2338,1,2337, __Vtemp_h8e18d15d__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg))), __Vtemp_heb0225dc__0);
    VL_CONCAT_WQW(2392,54,2338, __Vtemp_hdfe11afe__0, 1ULL, __Vtemp_h8e18d15d__0);
    VL_CONCAT_WIW(2393,1,2392, __Vtemp_hd0544889__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg), __Vtemp_hdfe11afe__0);
    VL_EXTEND_WW(2394,2393, __Vtemp_h953538c4__0, __Vtemp_hd0544889__0);
    VL_CONCAT_WQW(2451,57,2394, __Vtemp_ha01bdffc__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod, __Vtemp_h953538c4__0);
    VL_CONCAT_WIW(2452,1,2451, __Vtemp_h6d010505__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg))), __Vtemp_ha01bdffc__0);
    VL_CONCAT_WQW(2506,54,2452, __Vtemp_h68a543c8__0, 1ULL, __Vtemp_h6d010505__0);
    VL_CONCAT_WIW(2507,1,2506, __Vtemp_hdfe6313e__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg), __Vtemp_h68a543c8__0);
    VL_EXTEND_WW(2508,2507, __Vtemp_h3c668931__0, __Vtemp_hdfe6313e__0);
    VL_CONCAT_WQW(2565,57,2508, __Vtemp_h7133bd97__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod, __Vtemp_h3c668931__0);
    VL_CONCAT_WIW(2566,1,2565, __Vtemp_h8ba5402e__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg))), __Vtemp_h7133bd97__0);
    VL_CONCAT_WQW(2620,54,2566, __Vtemp_h3d4331e7__0, 1ULL, __Vtemp_h8ba5402e__0);
    VL_CONCAT_WIW(2621,1,2620, __Vtemp_h54702b29__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg), __Vtemp_h3d4331e7__0);
    VL_EXTEND_WW(2622,2621, __Vtemp_hd8466465__0, __Vtemp_h54702b29__0);
    VL_CONCAT_WQW(2679,57,2622, __Vtemp_h19eb5bfd__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod, __Vtemp_hd8466465__0);
    VL_CONCAT_WIW(2680,1,2679, __Vtemp_h0eda559f__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg))), __Vtemp_h19eb5bfd__0);
    VL_CONCAT_WQW(2734,54,2680, __Vtemp_he5a6cfb3__0, 1ULL, __Vtemp_h0eda559f__0);
    VL_CONCAT_WIW(2735,1,2734, __Vtemp_h919996d1__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg), __Vtemp_he5a6cfb3__0);
    VL_EXTEND_WW(2736,2735, __Vtemp_haef884ba__0, __Vtemp_h919996d1__0);
    VL_CONCAT_WQW(2793,57,2736, __Vtemp_h7b7ce73e__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod, __Vtemp_haef884ba__0);
    VL_CONCAT_WIW(2794,1,2793, __Vtemp_h4d96f044__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg))), __Vtemp_h7b7ce73e__0);
    VL_CONCAT_WQW(2848,54,2794, __Vtemp_h246a9968__0, 1ULL, __Vtemp_h4d96f044__0);
    VL_CONCAT_WIW(2849,1,2848, __Vtemp_hd579f41c__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg), __Vtemp_h246a9968__0);
    VL_EXTEND_WW(2850,2849, __Vtemp_hea0813ba__0, __Vtemp_hd579f41c__0);
    VL_CONCAT_WQW(2907,57,2850, __Vtemp_hc0d9eb5e__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod, __Vtemp_hea0813ba__0);
    VL_CONCAT_WIW(2908,1,2907, __Vtemp_hde573156__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg))), __Vtemp_hc0d9eb5e__0);
    VL_CONCAT_WQW(2962,54,2908, __Vtemp_ha35b0233__0, 1ULL, __Vtemp_hde573156__0);
    VL_CONCAT_WIW(2963,1,2962, __Vtemp_h8bde5fe7__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg), __Vtemp_ha35b0233__0);
    VL_EXTEND_WW(2964,2963, __Vtemp_h1419945e__0, __Vtemp_h8bde5fe7__0);
    VL_CONCAT_WQW(3021,57,2964, __Vtemp_h9be2ae9d__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod, __Vtemp_h1419945e__0);
    VL_CONCAT_WIW(3022,1,3021, __Vtemp_ha2c4b09b__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg))), __Vtemp_h9be2ae9d__0);
    VL_CONCAT_WQW(3076,54,3022, __Vtemp_hdbc4d19c__0, 1ULL, __Vtemp_ha2c4b09b__0);
    VL_CONCAT_WIW(3077,1,3076, __Vtemp_h7de2012a__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg), __Vtemp_hdbc4d19c__0);
    VL_EXTEND_WW(3078,3077, __Vtemp_hff41ae2c__0, __Vtemp_h7de2012a__0);
    VL_CONCAT_WQW(3135,57,3078, __Vtemp_h54db9096__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod, __Vtemp_hff41ae2c__0);
    VL_CONCAT_WIW(3136,1,3135, __Vtemp_h79bc0c9d__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg))), __Vtemp_h54db9096__0);
    VL_EXTEND_WW(3190,3136, __Vtemp_h3f9515a0__0, __Vtemp_h79bc0c9d__0);
    VL_CONCAT_WIW(3191,1,3190, __Vtemp_hbbdbbe6d__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg), __Vtemp_h3f9515a0__0);
    VL_EXTEND_WW(3192,3191, __Vtemp_h498041bb__0, __Vtemp_hbbdbbe6d__0);
    VL_CONCAT_WQW(3248,56,3192, __Vtemp_h736f6778__0, vlSelf->__VdfgTmp_hf62111dd__0, __Vtemp_h498041bb__0);
    VL_ASSIGN_W(3248,vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods, __Vtemp_h736f6778__0);
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
            << 0xeU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                        << 0xcU));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
            >> 0x12U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                  >> 0x20U)) << 0xeU));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[2U] 
        = (0x100U | ((0x80U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                               << 7U)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0x12U)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[3U] 
        = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
           << 0x1eU);
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[4U] 
        = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod);
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[5U] 
        = (0x4000000U | ((0x2000000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                        << 0x19U)) 
                         | (IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                    >> 0x20U))));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[6U] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[7U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            << 0x12U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[8U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            >> 0xeU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                 >> 0x20U)) << 0x12U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[9U] 
        = (0x1000U | ((0x800U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                 << 0xbU)) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                       >> 0x20U)) 
                                              >> 0xeU)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xaU] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xbU] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
            << 4U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                      << 2U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xcU] 
        = (0x40000000U | ((0x20000000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                          << 0x1dU)) 
                          | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                              >> 0x1cU) | ((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 4U))));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xdU] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xeU] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
            << 0x16U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                         << 0x14U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xfU] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
            >> 0xaU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                 >> 0x20U)) << 0x16U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x10U] 
        = (0x10000U | ((0x8000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                   << 0xfU)) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0xaU)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x11U] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x12U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            << 8U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                      << 6U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x13U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            >> 0x18U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                  >> 0x20U)) << 8U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x14U] 
        = (4U | ((2U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                        << 1U)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x18U)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x15U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            << 0x1aU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                         << 0x18U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x16U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            >> 6U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                               >> 0x20U)) << 0x1aU));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x17U] 
        = (0x100000U | ((0x80000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                     << 0x13U)) | ((IData)(
                                                           (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 6U)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x18U] = 0U;
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__0\n"); );
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
    VlWide<3>/*95:0*/ __Vtemp_heb67e788__0;
    VlWide<3>/*95:0*/ __Vtemp_h04f75829__0;
    VlWide<3>/*95:0*/ __Vtemp_ha018d1f1__0;
    VlWide<3>/*95:0*/ __Vtemp_hd505a186__0;
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
    VL_SHIFTR_WWI(84,84,32, __Vtemp_heb67e788__0, vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full, 0x1cU);
    __Vtemp_h04f75829__0[0U] = __Vtemp_heb67e788__0[0U];
    __Vtemp_h04f75829__0[1U] = __Vtemp_heb67e788__0[1U];
    __Vtemp_h04f75829__0[2U] = (0xfffffU & __Vtemp_heb67e788__0[2U]);
    __Vtemp_ha018d1f1__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)) 
                                              * (0xffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])) 
                                                          >> 0x1cU))))))));
    __Vtemp_ha018d1f1__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)) 
                                               * (0xffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])) 
                                                           >> 0x1cU))))))) 
                                        >> 0x20U));
    __Vtemp_ha018d1f1__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_hd505a186__0, __Vtemp_h04f75829__0, __Vtemp_ha018d1f1__0);
    vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
        = __Vtemp_hd505a186__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
        = __Vtemp_hd505a186__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
        = (0xfffffU & __Vtemp_hd505a186__0[2U]);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 5U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 5U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 7U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 7U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 9U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 9U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                   >> 0x1dU)) | (2U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                        >> 0x1dU)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                   >> 0x1dU)) | (4U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                        >> 0x1dU)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 1U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 1U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 3U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 3U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 5U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 5U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 7U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 7U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x17U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x17U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x19U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x19U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x1bU))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x1bU))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                   >> 0x1dU)) | (2U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                   >> 0x1dU)) | (4U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 1U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 1U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 3U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 3U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 9U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 9U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x13U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x13U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x15U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x15U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                   >> 0x1dU)) | (6U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                        >> 0x1dU)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (6U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 1U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 3U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 5U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->__VdfgTmp_h1a5d0b9a__0 = (1U & (~ ((0U 
                                                == 
                                                (3U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                    >> 0x1cU))) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                      >> 0x1cU))))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 5U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 7U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 9U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 7U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x17U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x19U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x1bU))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                   >> 0x1dU)) | (6U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (6U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 1U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 9U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x13U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 3U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x15U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                       >> 0x1dU)) | ((1U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                             >> 0x1dU)) 
                                     | ((2U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                >> 0x1dU)) 
                                        | (3U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                  >> 0x1dU)))))) 
           & ((4U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                      >> 0x1dU)) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                              << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                        >> 0x1fU)))) 
               | ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                 << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                           >> 0x1fU)))) 
                  | ((2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                              >> 0x1fU)))) 
                     | (3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                      << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                >> 0x1fU)))))))) 
           & ((4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                       >> 0x1fU)))) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 1U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 1U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 3U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 3U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 5U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 5U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_h1a5d0b9a__0) 
           & ((2U == (3U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                            >> 0x1cU))) | (3U == (3U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                     >> 0x1cU)))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 5U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 5U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 7U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 7U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 9U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 9U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 0xdU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                     >> 0xfU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 0xfU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                      >> 0x11U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 0x11U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 7U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 7U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0x17U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x17U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x17U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0x17U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0x17U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0x19U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x19U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x19U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0x19U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0x19U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0x1bU))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x1bU))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x1bU))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0x1bU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0x1bU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                       >> 0x1dU)) | ((1U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                             >> 0x1dU)) 
                                     | ((2U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x1dU)) 
                                        | (3U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 0x1dU)))))) 
           & ((4U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                      >> 0x1dU)) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                              << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                        >> 0x1fU)))) 
               | ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                 << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                           >> 0x1fU)))) 
                  | ((2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                    << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                              >> 0x1fU)))) 
                     | (3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                      << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x1fU)))))))) 
           & ((4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                       >> 0x1fU)))) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 1U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 1U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 9U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 9U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                     >> 0xbU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0xbU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0xdU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                     >> 0xfU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0xfU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0x11U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0x11U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0x13U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x13U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x13U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0x13U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0x13U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                     >> 0xbU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 0xbU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 3U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 3U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0x15U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x15U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x15U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0x15U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0x15U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__1(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__1\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hd51a7312__0;
    VlWide<6>/*191:0*/ __Vtemp_h212968ea__0;
    VlWide<9>/*287:0*/ __Vtemp_hb7e48924__0;
    VlWide<13>/*415:0*/ __Vtemp_h47e2f498__0;
    VlWide<17>/*543:0*/ __Vtemp_hae08dcb3__0;
    VlWide<20>/*639:0*/ __Vtemp_hf6878985__0;
    VlWide<24>/*767:0*/ __Vtemp_hda79a21f__0;
    VlWide<63>/*2015:0*/ __Vtemp_h1dd31c53__0;
    VlWide<65>/*2079:0*/ __Vtemp_he0f6b068__0;
    VlWide<65>/*2079:0*/ __Vtemp_h50c889ca__0;
    VlWide<65>/*2079:0*/ __Vtemp_h33ec7127__0;
    VlWide<66>/*2111:0*/ __Vtemp_h09fa584f__0;
    VlWide<66>/*2111:0*/ __Vtemp_h0f03ac56__0;
    VlWide<68>/*2175:0*/ __Vtemp_h462a2890__0;
    VlWide<68>/*2175:0*/ __Vtemp_h8a52d648__0;
    VlWide<68>/*2175:0*/ __Vtemp_h2d40729a__0;
    VlWide<70>/*2239:0*/ __Vtemp_h4eef64a2__0;
    VlWide<70>/*2239:0*/ __Vtemp_h683806ba__0;
    VlWide<72>/*2303:0*/ __Vtemp_ha6ab7c17__0;
    VlWide<72>/*2303:0*/ __Vtemp_h26126a58__0;
    VlWide<72>/*2303:0*/ __Vtemp_h1d625194__0;
    VlWide<74>/*2367:0*/ __Vtemp_heb0225dc__0;
    VlWide<74>/*2367:0*/ __Vtemp_h8e18d15d__0;
    VlWide<75>/*2399:0*/ __Vtemp_hdfe11afe__0;
    VlWide<75>/*2399:0*/ __Vtemp_hd0544889__0;
    VlWide<75>/*2399:0*/ __Vtemp_h953538c4__0;
    VlWide<77>/*2463:0*/ __Vtemp_ha01bdffc__0;
    VlWide<77>/*2463:0*/ __Vtemp_h6d010505__0;
    VlWide<79>/*2527:0*/ __Vtemp_h68a543c8__0;
    VlWide<79>/*2527:0*/ __Vtemp_hdfe6313e__0;
    VlWide<79>/*2527:0*/ __Vtemp_h3c668931__0;
    VlWide<81>/*2591:0*/ __Vtemp_h7133bd97__0;
    VlWide<81>/*2591:0*/ __Vtemp_h8ba5402e__0;
    VlWide<82>/*2623:0*/ __Vtemp_h3d4331e7__0;
    VlWide<82>/*2623:0*/ __Vtemp_h54702b29__0;
    VlWide<82>/*2623:0*/ __Vtemp_hd8466465__0;
    VlWide<84>/*2687:0*/ __Vtemp_h19eb5bfd__0;
    VlWide<84>/*2687:0*/ __Vtemp_h0eda559f__0;
    VlWide<86>/*2751:0*/ __Vtemp_he5a6cfb3__0;
    VlWide<86>/*2751:0*/ __Vtemp_h919996d1__0;
    VlWide<86>/*2751:0*/ __Vtemp_haef884ba__0;
    VlWide<88>/*2815:0*/ __Vtemp_h7b7ce73e__0;
    VlWide<88>/*2815:0*/ __Vtemp_h4d96f044__0;
    VlWide<89>/*2847:0*/ __Vtemp_h246a9968__0;
    VlWide<90>/*2879:0*/ __Vtemp_hd579f41c__0;
    VlWide<90>/*2879:0*/ __Vtemp_hea0813ba__0;
    VlWide<91>/*2911:0*/ __Vtemp_hc0d9eb5e__0;
    VlWide<91>/*2911:0*/ __Vtemp_hde573156__0;
    VlWide<93>/*2975:0*/ __Vtemp_ha35b0233__0;
    VlWide<93>/*2975:0*/ __Vtemp_h8bde5fe7__0;
    VlWide<93>/*2975:0*/ __Vtemp_h1419945e__0;
    VlWide<95>/*3039:0*/ __Vtemp_h9be2ae9d__0;
    VlWide<95>/*3039:0*/ __Vtemp_ha2c4b09b__0;
    VlWide<97>/*3103:0*/ __Vtemp_hdbc4d19c__0;
    VlWide<97>/*3103:0*/ __Vtemp_h7de2012a__0;
    VlWide<97>/*3103:0*/ __Vtemp_hff41ae2c__0;
    VlWide<98>/*3135:0*/ __Vtemp_h54db9096__0;
    VlWide<98>/*3135:0*/ __Vtemp_h79bc0c9d__0;
    VlWide<100>/*3199:0*/ __Vtemp_h3f9515a0__0;
    VlWide<100>/*3199:0*/ __Vtemp_hbbdbbe6d__0;
    VlWide<100>/*3199:0*/ __Vtemp_h498041bb__0;
    VlWide<102>/*3263:0*/ __Vtemp_h736f6778__0;
    // Body
    vlSelf->__VdfgTmp_hf62111dd__0 = ((0x80000U & (
                                                   vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   & vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U]))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : 0ULL);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 5U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 5U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 7U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 7U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 9U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 9U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 0xdU))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 0xdU))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 0xfU))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 0xfU))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 0x11U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 0x11U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    __Vtemp_hd51a7312__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
                                         << 0x3bU) 
                                        | (((QData)((IData)(
                                                            (3U 
                                                             & (- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                                            << 0x39U) 
                                           | (0x1ffffffffffffffULL 
                                              & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                 ^ 
                                                 (((0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                        >> 0x1cU))) 
                                                   & ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                           >> 0x1cU))) 
                                                      | (IData)(
                                                                ((0x30000000U 
                                                                  == 
                                                                  (0x30000000U 
                                                                   & vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U])) 
                                                                 & (2U 
                                                                    != 
                                                                    (3U 
                                                                     & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                                        >> 0x1cU)))))))
                                                   ? 
                                                  ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                   << 0x1cU)
                                                   : 
                                                  (((IData)(vlSelf->__VdfgTmp_h1a5d0b9a__0) 
                                                    & (0x20000000U 
                                                       == 
                                                       (0x30000000U 
                                                        & vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U])))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                    << 0x1dU)
                                                    : 0ULL)))))));
    __Vtemp_hd51a7312__0[1U] = (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
                                          << 0x3bU) 
                                         | (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                                             << 0x39U) 
                                            | (0x1ffffffffffffffULL 
                                               & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                  ^ 
                                                  (((0U 
                                                     != 
                                                     (3U 
                                                      & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                         >> 0x1cU))) 
                                                    & ((1U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                            >> 0x1cU))) 
                                                       | (IData)(
                                                                 ((0x30000000U 
                                                                   == 
                                                                   (0x30000000U 
                                                                    & vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U])) 
                                                                  & (2U 
                                                                     != 
                                                                     (3U 
                                                                      & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                                         >> 0x1cU)))))))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                    << 0x1cU)
                                                    : 
                                                   (((IData)(vlSelf->__VdfgTmp_h1a5d0b9a__0) 
                                                     & (0x20000000U 
                                                        == 
                                                        (0x30000000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U])))
                                                     ? 
                                                    ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                     << 0x1dU)
                                                     : 0ULL)))))) 
                                        >> 0x20U));
    __Vtemp_h212968ea__0[4U] = (((IData)((0x1ffffffffffffffULL 
                                          & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                             ^ (((0U 
                                                  != 
                                                  (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                   >> 0x1dU)) 
                                                 & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                    | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                       & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                 ? 
                                                ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                 << 0x1cU)
                                                 : 
                                                (((~ 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                      >> 0x1dU)) 
                                                    | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                  ? 
                                                 ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                  << 0x1dU)
                                                  : 0ULL))))) 
                                 >> 0xeU) | ((IData)(
                                                     ((0x1ffffffffffffffULL 
                                                       & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                                          ^ 
                                                          (((0U 
                                                             != 
                                                             (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                              >> 0x1dU)) 
                                                            & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                               | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                            ? 
                                                           ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                            << 0x1cU)
                                                            : 
                                                           (((~ 
                                                              ((0U 
                                                                == 
                                                                (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                                 >> 0x1dU)) 
                                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                             ? 
                                                            ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                             << 0x1dU)
                                                             : 0ULL)))) 
                                                      >> 0x20U)) 
                                             << 0x12U));
    __Vtemp_hb7e48924__0[7U] = (((IData)((0x1ffffffffffffffULL 
                                          & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                             ^ (((0U 
                                                  != 
                                                  (7U 
                                                   & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                       << 1U) 
                                                      | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                         >> 0x1fU)))) 
                                                 & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                                    | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                       & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                 ? 
                                                ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                 << 0x1cU)
                                                 : 
                                                (((~ 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                          << 1U) 
                                                         | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                            >> 0x1fU)))) 
                                                    | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                  ? 
                                                 ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                  << 0x1dU)
                                                  : 0ULL))))) 
                                 << 4U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                           << 2U));
    __Vtemp_hb7e48924__0[8U] = (((IData)((0x1ffffffffffffffULL 
                                          & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                             ^ (((0U 
                                                  != 
                                                  (7U 
                                                   & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                       << 1U) 
                                                      | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                         >> 0x1fU)))) 
                                                 & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                                    | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                       & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                 ? 
                                                ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                 << 0x1cU)
                                                 : 
                                                (((~ 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                          << 1U) 
                                                         | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                            >> 0x1fU)))) 
                                                    | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                  ? 
                                                 ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                  << 0x1dU)
                                                  : 0ULL))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x1ffffffffffffffULL 
                                                        & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           (((0U 
                                                              != 
                                                              (7U 
                                                               & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                   << 1U) 
                                                                  | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                                     >> 0x1fU)))) 
                                                             & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                                                | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                   & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                             ? 
                                                            ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                             << 0x1cU)
                                                             : 
                                                            (((~ 
                                                               ((0U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                      << 1U) 
                                                                     | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                                        >> 0x1fU)))) 
                                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                              ? 
                                                             ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                              << 0x1dU)
                                                              : 0ULL)))) 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_h47e2f498__0[0xbU] = (((IData)((0x1ffffffffffffffULL 
                                            & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                               ^ ((
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                                      | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                   ? 
                                                  ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                   << 0x1cU)
                                                   : 
                                                  (((~ 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                           >> 1U))) 
                                                      | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                    << 0x1dU)
                                                    : 0ULL))))) 
                                   >> 0xaU) | ((IData)(
                                                       ((0x1ffffffffffffffULL 
                                                         & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                                            ^ 
                                                            (((0U 
                                                               != 
                                                               (7U 
                                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                   >> 1U))) 
                                                              & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                                                 | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                              ? 
                                                             ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                              << 0x1cU)
                                                              : 
                                                             (((~ 
                                                                ((0U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                      >> 1U))) 
                                                                 | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                                               & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                               ? 
                                                              ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                               << 0x1dU)
                                                               : 0ULL)))) 
                                                        >> 0x20U)) 
                                               << 0x16U));
    __Vtemp_hae08dcb3__0[0xfU] = (((IData)((0x1ffffffffffffffULL 
                                            & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                               ^ ((
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                        >> 3U))) 
                                                   & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                                      | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                   ? 
                                                  ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                   << 0x1cU)
                                                   : 
                                                  (((~ 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                           >> 3U))) 
                                                      | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                    << 0x1dU)
                                                    : 0ULL))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0x1ffffffffffffffULL 
                                                          & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                                             ^ 
                                                             (((0U 
                                                                != 
                                                                (7U 
                                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                    >> 3U))) 
                                                               & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                                                  | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                     & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                               ? 
                                                              ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                               << 0x1cU)
                                                               : 
                                                              (((~ 
                                                                 ((0U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                       >> 3U))) 
                                                                  | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                                                & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                ? 
                                                               ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                                << 0x1dU)
                                                                : 0ULL)))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_hf6878985__0[0x12U] = (((IData)((0x1ffffffffffffffULL 
                                             & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                         >> 5U))) 
                                                    & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                                       | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                    << 0x1cU)
                                                    : 
                                                   (((~ 
                                                      ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                            >> 5U))) 
                                                       | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                                     & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                     ? 
                                                    ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                     << 0x1dU)
                                                     : 0ULL))))) 
                                    >> 6U) | ((IData)(
                                                      ((0x1ffffffffffffffULL 
                                                        & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           (((0U 
                                                              != 
                                                              (7U 
                                                               & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                  >> 5U))) 
                                                             & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                                                | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                   & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                             ? 
                                                            ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                             << 0x1cU)
                                                             : 
                                                            (((~ 
                                                               ((0U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                     >> 5U))) 
                                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                              ? 
                                                             ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                              << 0x1dU)
                                                              : 0ULL)))) 
                                                       >> 0x20U)) 
                                              << 0x1aU));
    __Vtemp_hda79a21f__0[0x16U] = (((IData)((0x1ffffffffffffffULL 
                                             & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                         >> 7U))) 
                                                    & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                                       | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                    << 0x1cU)
                                                    : 
                                                   (((~ 
                                                      ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                            >> 7U))) 
                                                       | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                                     & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                     ? 
                                                    ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                     << 0x1dU)
                                                     : 0ULL))))) 
                                    >> 0x14U) | ((IData)(
                                                         ((0x1ffffffffffffffULL 
                                                           & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                              ^ 
                                                              (((0U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                     >> 7U))) 
                                                                & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                                                   | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                ? 
                                                               ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                                << 0x1cU)
                                                                : 
                                                               (((~ 
                                                                  ((0U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                        >> 7U))) 
                                                                   | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                                                 & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                 ? 
                                                                ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                                 << 0x1dU)
                                                                 : 0ULL)))) 
                                                          >> 0x20U)) 
                                                 << 0xcU));
    vlSelf->__VdfgTmp_hcc9d1910__0[0U] = __Vtemp_hd51a7312__0[0U];
    vlSelf->__VdfgTmp_hcc9d1910__0[1U] = __Vtemp_hd51a7312__0[1U];
    vlSelf->__VdfgTmp_hcc9d1910__0[2U] = 0U;
    vlSelf->__VdfgTmp_hcc9d1910__0[3U] = (((IData)(
                                                   (0x1ffffffffffffffULL 
                                                    & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                                       ^ 
                                                       (((0U 
                                                          != 
                                                          (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                           >> 0x1dU)) 
                                                         & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                            | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                               & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                         ? 
                                                        ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                         << 0x1cU)
                                                         : 
                                                        (((~ 
                                                           ((0U 
                                                             == 
                                                             (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                              >> 0x1dU)) 
                                                            | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                          ? 
                                                         ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                          << 0x1dU)
                                                          : 0ULL))))) 
                                           << 0x12U) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                             << 0x10U));
    vlSelf->__VdfgTmp_hcc9d1910__0[4U] = __Vtemp_h212968ea__0[4U];
    vlSelf->__VdfgTmp_hcc9d1910__0[5U] = (0x1000U | 
                                          ((0x800U 
                                            & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                               << 0xbU)) 
                                           | ((IData)(
                                                      ((0x1ffffffffffffffULL 
                                                        & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           (((0U 
                                                              != 
                                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                               >> 0x1dU)) 
                                                             & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                                | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                   & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                             ? 
                                                            ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                             << 0x1cU)
                                                             : 
                                                            (((~ 
                                                               ((0U 
                                                                 == 
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                                  >> 0x1dU)) 
                                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                              ? 
                                                             ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                              << 0x1dU)
                                                              : 0ULL)))) 
                                                       >> 0x20U)) 
                                              >> 0xeU)));
    vlSelf->__VdfgTmp_hcc9d1910__0[6U] = 0U;
    vlSelf->__VdfgTmp_hcc9d1910__0[7U] = __Vtemp_hb7e48924__0[7U];
    vlSelf->__VdfgTmp_hcc9d1910__0[8U] = (0x40000000U 
                                          | ((0x20000000U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                 << 0x1dU)) 
                                             | __Vtemp_hb7e48924__0[8U]));
    vlSelf->__VdfgTmp_hcc9d1910__0[9U] = 0U;
    vlSelf->__VdfgTmp_hcc9d1910__0[0xaU] = (((IData)(
                                                     (0x1ffffffffffffffULL 
                                                      & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                                         ^ 
                                                         (((0U 
                                                            != 
                                                            (7U 
                                                             & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                >> 1U))) 
                                                           & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                                              | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                 & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                           ? 
                                                          ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                           << 0x1cU)
                                                           : 
                                                          (((~ 
                                                             ((0U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                   >> 1U))) 
                                                              | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                            ? 
                                                           ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                            << 0x1dU)
                                                            : 0ULL))))) 
                                             << 0x16U) 
                                            | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                               << 0x14U));
    vlSelf->__VdfgTmp_hcc9d1910__0[0xbU] = __Vtemp_h47e2f498__0[0xbU];
    vlSelf->__VdfgTmp_hcc9d1910__0[0xcU] = (0x10000U 
                                            | ((0x8000U 
                                                & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                   << 0xfU)) 
                                               | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                                               ^ 
                                                               (((0U 
                                                                  != 
                                                                  (7U 
                                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                      >> 1U))) 
                                                                 & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                                                    | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                       & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                 ? 
                                                                ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                                 << 0x1cU)
                                                                 : 
                                                                (((~ 
                                                                   ((0U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                         >> 1U))) 
                                                                    | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                  ? 
                                                                 ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                                  << 0x1dU)
                                                                  : 0ULL)))) 
                                                           >> 0x20U)) 
                                                  >> 0xaU)));
    vlSelf->__VdfgTmp_hcc9d1910__0[0xdU] = 0U;
    vlSelf->__VdfgTmp_hcc9d1910__0[0xeU] = (((IData)(
                                                     (0x1ffffffffffffffULL 
                                                      & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                                         ^ 
                                                         (((0U 
                                                            != 
                                                            (7U 
                                                             & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                >> 3U))) 
                                                           & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                                              | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                 & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                           ? 
                                                          ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                           << 0x1cU)
                                                           : 
                                                          (((~ 
                                                             ((0U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                   >> 3U))) 
                                                              | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                            ? 
                                                           ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                            << 0x1dU)
                                                            : 0ULL))))) 
                                             << 8U) 
                                            | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                               << 6U));
    vlSelf->__VdfgTmp_hcc9d1910__0[0xfU] = __Vtemp_hae08dcb3__0[0xfU];
    vlSelf->__VdfgTmp_hcc9d1910__0[0x10U] = (4U | (
                                                   (2U 
                                                    & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                       << 1U)) 
                                                   | ((IData)(
                                                              ((0x1ffffffffffffffULL 
                                                                & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                                                   ^ 
                                                                   (((0U 
                                                                      != 
                                                                      (7U 
                                                                       & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                          >> 3U))) 
                                                                     & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                                                        | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                     ? 
                                                                    ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                                     << 0x1cU)
                                                                     : 
                                                                    (((~ 
                                                                       ((0U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                             >> 3U))) 
                                                                        | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                      ? 
                                                                     ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                                      << 0x1dU)
                                                                      : 0ULL)))) 
                                                               >> 0x20U)) 
                                                      >> 0x18U)));
    vlSelf->__VdfgTmp_hcc9d1910__0[0x11U] = (((IData)(
                                                      (0x1ffffffffffffffULL 
                                                       & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                                          ^ 
                                                          (((0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                 >> 5U))) 
                                                            & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                                               | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                            ? 
                                                           ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                            << 0x1cU)
                                                            : 
                                                           (((~ 
                                                              ((0U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                    >> 5U))) 
                                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                             ? 
                                                            ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                             << 0x1dU)
                                                             : 0ULL))))) 
                                              << 0x1aU) 
                                             | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                << 0x18U));
    vlSelf->__VdfgTmp_hcc9d1910__0[0x12U] = __Vtemp_hf6878985__0[0x12U];
    vlSelf->__VdfgTmp_hcc9d1910__0[0x13U] = (0x100000U 
                                             | ((0x80000U 
                                                 & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                                    << 0x13U)) 
                                                | ((IData)(
                                                           ((0x1ffffffffffffffULL 
                                                             & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                                                ^ 
                                                                (((0U 
                                                                   != 
                                                                   (7U 
                                                                    & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                       >> 5U))) 
                                                                  & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                                                     | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                        & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                  ? 
                                                                 ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                                  << 0x1cU)
                                                                  : 
                                                                 (((~ 
                                                                    ((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                          >> 5U))) 
                                                                     | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                                                   & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                   ? 
                                                                  ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                                   << 0x1dU)
                                                                   : 0ULL)))) 
                                                            >> 0x20U)) 
                                                   >> 6U)));
    vlSelf->__VdfgTmp_hcc9d1910__0[0x14U] = 0U;
    vlSelf->__VdfgTmp_hcc9d1910__0[0x15U] = (((IData)(
                                                      (0x1ffffffffffffffULL 
                                                       & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                          ^ 
                                                          (((0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                 >> 7U))) 
                                                            & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                                               | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                            ? 
                                                           ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                            << 0x1cU)
                                                            : 
                                                           (((~ 
                                                              ((0U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                    >> 7U))) 
                                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                             ? 
                                                            ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                             << 0x1dU)
                                                             : 0ULL))))) 
                                              << 0xcU) 
                                             | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                << 0xaU));
    vlSelf->__VdfgTmp_hcc9d1910__0[0x16U] = __Vtemp_hda79a21f__0[0x16U];
    vlSelf->__VdfgTmp_hcc9d1910__0[0x17U] = ((0x20U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                 << 5U)) 
                                             | ((IData)(
                                                        ((0x1ffffffffffffffULL 
                                                          & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                             ^ 
                                                             (((0U 
                                                                != 
                                                                (7U 
                                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                    >> 7U))) 
                                                               & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                                                  | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                     & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                               ? 
                                                              ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                               << 0x1cU)
                                                               : 
                                                              (((~ 
                                                                 ((0U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                                       >> 7U))) 
                                                                  | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                                                & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                ? 
                                                               ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                                << 0x1dU)
                                                                : 0ULL)))) 
                                                         >> 0x20U)) 
                                                >> 0x14U));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x17U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x17U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x19U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x19U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x1bU))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x1bU))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x1dU)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                 >> 0x1dU)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                 << 1U) 
                                                | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 0x1fU)))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                     << 1U) 
                                                    | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                       >> 0x1fU)))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 1U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 1U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 9U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 9U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0xbU))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0xbU))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0xdU))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0xdU))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0xfU))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0xfU))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x11U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x11U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x13U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x13U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 0xbU))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 0xbU))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 3U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 3U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x15U))) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x15U))) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                   << 0x30U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
            << 0x12U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                  << 0x30U) >> 0x20U)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
            >> 0xeU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                 >> 0x20U)) << 0x12U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = (0x1000U | ((0x800U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                 << 0xbU)) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                       >> 0x20U)) 
                                              >> 0xeU)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
            << 4U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg) 
                      << 2U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = (0x40000000U | ((0x20000000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                                          << 0x1dU)) 
                          | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                              >> 0x1cU) | ((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 4U))));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            << 0x16U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg) 
                         << 0x14U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            >> 0xaU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                 >> 0x20U)) << 0x16U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
        = ((0x8000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                       << 0xfU)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                             >> 0x20U)) 
                                    >> 0xaU));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
        = (((IData)(vlSelf->__VdfgTmp_hf62111dd__0) 
            << 8U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg) 
                      << 6U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
        = (((IData)(vlSelf->__VdfgTmp_hf62111dd__0) 
            >> 0x18U) | ((IData)((vlSelf->__VdfgTmp_hf62111dd__0 
                                  >> 0x20U)) << 8U));
    vlSelf->__VdfgTmp_hf757b9f2__0[0U] = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                                  << 0x28U));
    vlSelf->__VdfgTmp_hf757b9f2__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                           << 0xaU) 
                                          | (IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                                      << 0x28U) 
                                                     >> 0x20U)));
    vlSelf->__VdfgTmp_hf757b9f2__0[2U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                           >> 0x16U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xaU));
    vlSelf->__VdfgTmp_hf757b9f2__0[3U] = (0x10U | (
                                                   (8U 
                                                    & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                                                       << 3U)) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                               >> 0x20U)) 
                                                      >> 0x16U)));
    vlSelf->__VdfgTmp_hf757b9f2__0[4U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                           << 0x1cU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg) 
                                             << 0x1aU));
    vlSelf->__VdfgTmp_hf757b9f2__0[5U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                           >> 4U) | 
                                          ((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1cU));
    vlSelf->__VdfgTmp_hf757b9f2__0[6U] = (0x400000U 
                                          | ((0x200000U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                                                 << 0x15U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 4U)));
    vlSelf->__VdfgTmp_hf757b9f2__0[7U] = 0U;
    vlSelf->__VdfgTmp_hf757b9f2__0[8U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
                                           << 0xeU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    vlSelf->__VdfgTmp_hf757b9f2__0[9U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
                                           >> 0x12U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xeU));
    vlSelf->__VdfgTmp_hf757b9f2__0[0xaU] = (0x100U 
                                            | ((0x80U 
                                                & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                                                   << 7U)) 
                                               | ((IData)(
                                                          (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 0x12U)));
    vlSelf->__VdfgTmp_hf757b9f2__0[0xbU] = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg) 
                                            << 0x1eU);
    vlSelf->__VdfgTmp_hf757b9f2__0[0xcU] = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod);
    vlSelf->__VdfgTmp_hf757b9f2__0[0xdU] = ((0x2000000U 
                                             & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                                << 0x19U)) 
                                            | (IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                                       >> 0x20U)));
    vlSelf->__VdfgTmp_hffadf5d6__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                           << 0x1cU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                             << 0x1aU));
    vlSelf->__VdfgTmp_hffadf5d6__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                           >> 4U) | 
                                          ((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1cU));
    vlSelf->__VdfgTmp_hffadf5d6__0[2U] = (0x400000U 
                                          | ((0x200000U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg)) 
                                                 << 0x15U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 4U)));
    vlSelf->__VdfgTmp_hffadf5d6__0[3U] = 0U;
    vlSelf->__VdfgTmp_hffadf5d6__0[4U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                           << 0xeU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    vlSelf->__VdfgTmp_hffadf5d6__0[5U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                           >> 0x12U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xeU));
    vlSelf->__VdfgTmp_hffadf5d6__0[6U] = (0x100U | 
                                          ((0x80U & 
                                            ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg)) 
                                             << 7U)) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                       >> 0x20U)) 
                                              >> 0x12U)));
    vlSelf->__VdfgTmp_hffadf5d6__0[7U] = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
                                          << 0x1eU);
    vlSelf->__VdfgTmp_hffadf5d6__0[8U] = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod);
    vlSelf->__VdfgTmp_hffadf5d6__0[9U] = (0x4000000U 
                                          | ((0x2000000U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                 << 0x19U)) 
                                             | (IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                                        >> 0x20U))));
    vlSelf->__VdfgTmp_hffadf5d6__0[0xaU] = 0U;
    vlSelf->__VdfgTmp_hffadf5d6__0[0xbU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                             << 0x12U) 
                                            | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg) 
                                               << 0x10U));
    vlSelf->__VdfgTmp_hffadf5d6__0[0xcU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                             >> 0xeU) 
                                            | ((IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                        >> 0x20U)) 
                                               << 0x12U));
    vlSelf->__VdfgTmp_hffadf5d6__0[0xdU] = (0x1000U 
                                            | ((0x800U 
                                                & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                                                   << 0xbU)) 
                                               | ((IData)(
                                                          (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 0xeU)));
    vlSelf->__VdfgTmp_hffadf5d6__0[0xeU] = 0U;
    vlSelf->__VdfgTmp_hffadf5d6__0[0xfU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                             << 4U) 
                                            | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg) 
                                               << 2U));
    vlSelf->__VdfgTmp_hffadf5d6__0[0x10U] = (0x40000000U 
                                             | ((0x20000000U 
                                                 & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                                                    << 0x1dU)) 
                                                | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                                    >> 0x1cU) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                                               >> 0x20U)) 
                                                      << 4U))));
    vlSelf->__VdfgTmp_hffadf5d6__0[0x11U] = 0U;
    vlSelf->__VdfgTmp_hffadf5d6__0[0x12U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
                                              << 0x16U) 
                                             | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg) 
                                                << 0x14U));
    vlSelf->__VdfgTmp_hffadf5d6__0[0x13U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
                                              >> 0xaU) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x16U));
    vlSelf->__VdfgTmp_hffadf5d6__0[0x14U] = (0x10000U 
                                             | ((0x8000U 
                                                 & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                                                    << 0xfU)) 
                                                | ((IData)(
                                                           (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 0xaU)));
    vlSelf->__VdfgTmp_hffadf5d6__0[0x15U] = 0U;
    vlSelf->__VdfgTmp_hffadf5d6__0[0x16U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
                                              << 8U) 
                                             | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg) 
                                                << 6U));
    vlSelf->__VdfgTmp_hffadf5d6__0[0x17U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
                                              >> 0x18U) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 8U));
    vlSelf->__VdfgTmp_hffadf5d6__0[0x18U] = ((2U & 
                                              ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                               << 1U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x18U));
    __Vtemp_h1dd31c53__0[0U] = vlSelf->__VdfgTmp_hcc9d1910__0[0U];
    __Vtemp_h1dd31c53__0[1U] = vlSelf->__VdfgTmp_hcc9d1910__0[1U];
    __Vtemp_h1dd31c53__0[2U] = vlSelf->__VdfgTmp_hcc9d1910__0[2U];
    __Vtemp_h1dd31c53__0[3U] = vlSelf->__VdfgTmp_hcc9d1910__0[3U];
    __Vtemp_h1dd31c53__0[4U] = vlSelf->__VdfgTmp_hcc9d1910__0[4U];
    __Vtemp_h1dd31c53__0[5U] = vlSelf->__VdfgTmp_hcc9d1910__0[5U];
    __Vtemp_h1dd31c53__0[6U] = vlSelf->__VdfgTmp_hcc9d1910__0[6U];
    __Vtemp_h1dd31c53__0[7U] = vlSelf->__VdfgTmp_hcc9d1910__0[7U];
    __Vtemp_h1dd31c53__0[8U] = vlSelf->__VdfgTmp_hcc9d1910__0[8U];
    __Vtemp_h1dd31c53__0[9U] = vlSelf->__VdfgTmp_hcc9d1910__0[9U];
    __Vtemp_h1dd31c53__0[0xaU] = vlSelf->__VdfgTmp_hcc9d1910__0[0xaU];
    __Vtemp_h1dd31c53__0[0xbU] = vlSelf->__VdfgTmp_hcc9d1910__0[0xbU];
    __Vtemp_h1dd31c53__0[0xcU] = vlSelf->__VdfgTmp_hcc9d1910__0[0xcU];
    __Vtemp_h1dd31c53__0[0xdU] = vlSelf->__VdfgTmp_hcc9d1910__0[0xdU];
    __Vtemp_h1dd31c53__0[0xeU] = vlSelf->__VdfgTmp_hcc9d1910__0[0xeU];
    __Vtemp_h1dd31c53__0[0xfU] = vlSelf->__VdfgTmp_hcc9d1910__0[0xfU];
    __Vtemp_h1dd31c53__0[0x10U] = vlSelf->__VdfgTmp_hcc9d1910__0[0x10U];
    __Vtemp_h1dd31c53__0[0x11U] = vlSelf->__VdfgTmp_hcc9d1910__0[0x11U];
    __Vtemp_h1dd31c53__0[0x12U] = vlSelf->__VdfgTmp_hcc9d1910__0[0x12U];
    __Vtemp_h1dd31c53__0[0x13U] = vlSelf->__VdfgTmp_hcc9d1910__0[0x13U];
    __Vtemp_h1dd31c53__0[0x14U] = vlSelf->__VdfgTmp_hcc9d1910__0[0x14U];
    __Vtemp_h1dd31c53__0[0x15U] = vlSelf->__VdfgTmp_hcc9d1910__0[0x15U];
    __Vtemp_h1dd31c53__0[0x16U] = vlSelf->__VdfgTmp_hcc9d1910__0[0x16U];
    __Vtemp_h1dd31c53__0[0x17U] = (0x40U | vlSelf->__VdfgTmp_hcc9d1910__0[0x17U]);
    __Vtemp_h1dd31c53__0[0x18U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    << 0x1eU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                 << 0x1cU));
    __Vtemp_h1dd31c53__0[0x19U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    >> 2U) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1eU));
    __Vtemp_h1dd31c53__0[0x1aU] = (0x1000000U | ((0x800000U 
                                                  & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                     << 0x17U)) 
                                                 | ((IData)(
                                                            (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                             >> 0x20U)) 
                                                    >> 2U)));
    __Vtemp_h1dd31c53__0[0x1bU] = 0U;
    __Vtemp_h1dd31c53__0[0x1cU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    << 0x10U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                 << 0xeU));
    __Vtemp_h1dd31c53__0[0x1dU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_h1dd31c53__0[0x1eU] = (0x400U | ((0x200U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                 << 9U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x10U)));
    __Vtemp_h1dd31c53__0[0x1fU] = 0U;
    __Vtemp_h1dd31c53__0[0x20U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                    << 2U) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    __Vtemp_h1dd31c53__0[0x21U] = (0x10000000U | ((0x8000000U 
                                                   & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                      << 0x1bU)) 
                                                  | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                                      >> 0x1eU) 
                                                     | ((IData)(
                                                                (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                                 >> 0x20U)) 
                                                        << 2U))));
    __Vtemp_h1dd31c53__0[0x22U] = 0U;
    __Vtemp_h1dd31c53__0[0x23U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    << 0x14U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                 << 0x12U));
    __Vtemp_h1dd31c53__0[0x24U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    >> 0xcU) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x14U));
    __Vtemp_h1dd31c53__0[0x25U] = (0x4000U | ((0x2000U 
                                               & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                  << 0xdU)) 
                                              | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 0xcU)));
    __Vtemp_h1dd31c53__0[0x26U] = 0U;
    __Vtemp_h1dd31c53__0[0x27U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                    << 6U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                              << 4U));
    __Vtemp_h1dd31c53__0[0x28U] = (((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                    << 0x1fU) | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                                  >> 0x1aU) 
                                                 | ((IData)(
                                                            (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                             >> 0x20U)) 
                                                    << 6U)));
    __Vtemp_h1dd31c53__0[0x29U] = 1U;
    __Vtemp_h1dd31c53__0[0x2aU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    << 0x18U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                 << 0x16U));
    __Vtemp_h1dd31c53__0[0x2bU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    >> 8U) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x18U));
    __Vtemp_h1dd31c53__0[0x2cU] = (0x40000U | ((0x20000U 
                                                & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                   << 0x11U)) 
                                               | ((IData)(
                                                          (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 8U)));
    __Vtemp_h1dd31c53__0[0x2dU] = 0U;
    __Vtemp_h1dd31c53__0[0x2eU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    << 0xaU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                << 8U));
    __Vtemp_h1dd31c53__0[0x2fU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xaU));
    __Vtemp_h1dd31c53__0[0x30U] = (0x10U | ((8U & (
                                                   (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                   << 3U)) 
                                            | ((IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x16U)));
    __Vtemp_h1dd31c53__0[0x31U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    << 0x1cU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                 << 0x1aU));
    __Vtemp_h1dd31c53__0[0x32U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    >> 4U) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    __Vtemp_h1dd31c53__0[0x33U] = (0x400000U | ((0x200000U 
                                                 & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg)) 
                                                    << 0x15U)) 
                                                | ((IData)(
                                                           (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 4U)));
    __Vtemp_h1dd31c53__0[0x34U] = 0U;
    __Vtemp_h1dd31c53__0[0x35U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                    << 0xeU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg) 
                                                << 0xcU));
    __Vtemp_h1dd31c53__0[0x36U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                    >> 0x12U) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xeU));
    __Vtemp_h1dd31c53__0[0x37U] = (0x100U | ((0x80U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg)) 
                                                 << 7U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x12U)));
    __Vtemp_h1dd31c53__0[0x38U] = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
                                   << 0x1eU);
    __Vtemp_h1dd31c53__0[0x39U] = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod);
    __Vtemp_h1dd31c53__0[0x3aU] = (0x4000000U | ((0x2000000U 
                                                  & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                     << 0x19U)) 
                                                 | (IData)(
                                                           (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                                            >> 0x20U))));
    __Vtemp_h1dd31c53__0[0x3bU] = 0U;
    __Vtemp_h1dd31c53__0[0x3cU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                    << 0x12U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg) 
                                                 << 0x10U));
    __Vtemp_h1dd31c53__0[0x3dU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                    >> 0xeU) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x12U));
    __Vtemp_h1dd31c53__0[0x3eU] = ((0x800U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                                              << 0xbU)) 
                                   | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                               >> 0x20U)) 
                                      >> 0xeU));
    VL_CONCAT_WQW(2050,54,1996, __Vtemp_he0f6b068__0, 1ULL, __Vtemp_h1dd31c53__0);
    VL_CONCAT_WIW(2051,1,2050, __Vtemp_h50c889ca__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg), __Vtemp_he0f6b068__0);
    VL_EXTEND_WW(2052,2051, __Vtemp_h33ec7127__0, __Vtemp_h50c889ca__0);
    VL_CONCAT_WQW(2109,57,2052, __Vtemp_h09fa584f__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod, __Vtemp_h33ec7127__0);
    VL_CONCAT_WIW(2110,1,2109, __Vtemp_h0f03ac56__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg))), __Vtemp_h09fa584f__0);
    VL_CONCAT_WQW(2164,54,2110, __Vtemp_h462a2890__0, 1ULL, __Vtemp_h0f03ac56__0);
    VL_CONCAT_WIW(2165,1,2164, __Vtemp_h8a52d648__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg), __Vtemp_h462a2890__0);
    VL_EXTEND_WW(2166,2165, __Vtemp_h2d40729a__0, __Vtemp_h8a52d648__0);
    VL_CONCAT_WQW(2223,57,2166, __Vtemp_h4eef64a2__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod, __Vtemp_h2d40729a__0);
    VL_CONCAT_WIW(2224,1,2223, __Vtemp_h683806ba__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg))), __Vtemp_h4eef64a2__0);
    VL_CONCAT_WQW(2278,54,2224, __Vtemp_ha6ab7c17__0, 1ULL, __Vtemp_h683806ba__0);
    VL_CONCAT_WIW(2279,1,2278, __Vtemp_h26126a58__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg), __Vtemp_ha6ab7c17__0);
    VL_EXTEND_WW(2280,2279, __Vtemp_h1d625194__0, __Vtemp_h26126a58__0);
    VL_CONCAT_WQW(2337,57,2280, __Vtemp_heb0225dc__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod, __Vtemp_h1d625194__0);
    VL_CONCAT_WIW(2338,1,2337, __Vtemp_h8e18d15d__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg))), __Vtemp_heb0225dc__0);
    VL_CONCAT_WQW(2392,54,2338, __Vtemp_hdfe11afe__0, 1ULL, __Vtemp_h8e18d15d__0);
    VL_CONCAT_WIW(2393,1,2392, __Vtemp_hd0544889__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg), __Vtemp_hdfe11afe__0);
    VL_EXTEND_WW(2394,2393, __Vtemp_h953538c4__0, __Vtemp_hd0544889__0);
    VL_CONCAT_WQW(2451,57,2394, __Vtemp_ha01bdffc__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod, __Vtemp_h953538c4__0);
    VL_CONCAT_WIW(2452,1,2451, __Vtemp_h6d010505__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg))), __Vtemp_ha01bdffc__0);
    VL_CONCAT_WQW(2506,54,2452, __Vtemp_h68a543c8__0, 1ULL, __Vtemp_h6d010505__0);
    VL_CONCAT_WIW(2507,1,2506, __Vtemp_hdfe6313e__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg), __Vtemp_h68a543c8__0);
    VL_EXTEND_WW(2508,2507, __Vtemp_h3c668931__0, __Vtemp_hdfe6313e__0);
    VL_CONCAT_WQW(2565,57,2508, __Vtemp_h7133bd97__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod, __Vtemp_h3c668931__0);
    VL_CONCAT_WIW(2566,1,2565, __Vtemp_h8ba5402e__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg))), __Vtemp_h7133bd97__0);
    VL_CONCAT_WQW(2620,54,2566, __Vtemp_h3d4331e7__0, 1ULL, __Vtemp_h8ba5402e__0);
    VL_CONCAT_WIW(2621,1,2620, __Vtemp_h54702b29__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg), __Vtemp_h3d4331e7__0);
    VL_EXTEND_WW(2622,2621, __Vtemp_hd8466465__0, __Vtemp_h54702b29__0);
    VL_CONCAT_WQW(2679,57,2622, __Vtemp_h19eb5bfd__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod, __Vtemp_hd8466465__0);
    VL_CONCAT_WIW(2680,1,2679, __Vtemp_h0eda559f__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg))), __Vtemp_h19eb5bfd__0);
    VL_CONCAT_WQW(2734,54,2680, __Vtemp_he5a6cfb3__0, 1ULL, __Vtemp_h0eda559f__0);
    VL_CONCAT_WIW(2735,1,2734, __Vtemp_h919996d1__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg), __Vtemp_he5a6cfb3__0);
    VL_EXTEND_WW(2736,2735, __Vtemp_haef884ba__0, __Vtemp_h919996d1__0);
    VL_CONCAT_WQW(2793,57,2736, __Vtemp_h7b7ce73e__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod, __Vtemp_haef884ba__0);
    VL_CONCAT_WIW(2794,1,2793, __Vtemp_h4d96f044__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg))), __Vtemp_h7b7ce73e__0);
    VL_CONCAT_WQW(2848,54,2794, __Vtemp_h246a9968__0, 1ULL, __Vtemp_h4d96f044__0);
    VL_CONCAT_WIW(2849,1,2848, __Vtemp_hd579f41c__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg), __Vtemp_h246a9968__0);
    VL_EXTEND_WW(2850,2849, __Vtemp_hea0813ba__0, __Vtemp_hd579f41c__0);
    VL_CONCAT_WQW(2907,57,2850, __Vtemp_hc0d9eb5e__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod, __Vtemp_hea0813ba__0);
    VL_CONCAT_WIW(2908,1,2907, __Vtemp_hde573156__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg))), __Vtemp_hc0d9eb5e__0);
    VL_CONCAT_WQW(2962,54,2908, __Vtemp_ha35b0233__0, 1ULL, __Vtemp_hde573156__0);
    VL_CONCAT_WIW(2963,1,2962, __Vtemp_h8bde5fe7__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg), __Vtemp_ha35b0233__0);
    VL_EXTEND_WW(2964,2963, __Vtemp_h1419945e__0, __Vtemp_h8bde5fe7__0);
    VL_CONCAT_WQW(3021,57,2964, __Vtemp_h9be2ae9d__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod, __Vtemp_h1419945e__0);
    VL_CONCAT_WIW(3022,1,3021, __Vtemp_ha2c4b09b__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg))), __Vtemp_h9be2ae9d__0);
    VL_CONCAT_WQW(3076,54,3022, __Vtemp_hdbc4d19c__0, 1ULL, __Vtemp_ha2c4b09b__0);
    VL_CONCAT_WIW(3077,1,3076, __Vtemp_h7de2012a__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg), __Vtemp_hdbc4d19c__0);
    VL_EXTEND_WW(3078,3077, __Vtemp_hff41ae2c__0, __Vtemp_h7de2012a__0);
    VL_CONCAT_WQW(3135,57,3078, __Vtemp_h54db9096__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod, __Vtemp_hff41ae2c__0);
    VL_CONCAT_WIW(3136,1,3135, __Vtemp_h79bc0c9d__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg))), __Vtemp_h54db9096__0);
    VL_EXTEND_WW(3190,3136, __Vtemp_h3f9515a0__0, __Vtemp_h79bc0c9d__0);
    VL_CONCAT_WIW(3191,1,3190, __Vtemp_hbbdbbe6d__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg), __Vtemp_h3f9515a0__0);
    VL_EXTEND_WW(3192,3191, __Vtemp_h498041bb__0, __Vtemp_hbbdbbe6d__0);
    VL_CONCAT_WQW(3248,56,3192, __Vtemp_h736f6778__0, vlSelf->__VdfgTmp_hf62111dd__0, __Vtemp_h498041bb__0);
    VL_ASSIGN_W(3248,vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods, __Vtemp_h736f6778__0);
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
            << 0xeU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                        << 0xcU));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
            >> 0x12U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                  >> 0x20U)) << 0xeU));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[2U] 
        = (0x100U | ((0x80U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                               << 7U)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0x12U)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[3U] 
        = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
           << 0x1eU);
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[4U] 
        = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod);
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[5U] 
        = (0x4000000U | ((0x2000000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                        << 0x19U)) 
                         | (IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                    >> 0x20U))));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[6U] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[7U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            << 0x12U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[8U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            >> 0xeU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                 >> 0x20U)) << 0x12U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[9U] 
        = (0x1000U | ((0x800U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                 << 0xbU)) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                       >> 0x20U)) 
                                              >> 0xeU)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xaU] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xbU] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
            << 4U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                      << 2U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xcU] 
        = (0x40000000U | ((0x20000000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                          << 0x1dU)) 
                          | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                              >> 0x1cU) | ((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 4U))));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xdU] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xeU] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
            << 0x16U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                         << 0x14U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xfU] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
            >> 0xaU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                 >> 0x20U)) << 0x16U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x10U] 
        = (0x10000U | ((0x8000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                   << 0xfU)) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0xaU)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x11U] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x12U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            << 8U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                      << 6U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x13U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            >> 0x18U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                  >> 0x20U)) << 8U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x14U] 
        = (4U | ((2U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                        << 1U)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x18U)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x15U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            << 0x1aU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                         << 0x18U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x16U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            >> 6U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                               >> 0x20U)) << 0x1aU));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x17U] 
        = (0x100000U | ((0x80000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                     << 0x13U)) | ((IData)(
                                                           (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 6U)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x18U] = 0U;
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_2__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_2__0\n"); );
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
    VlWide<3>/*95:0*/ __Vtemp_heb67e788__0;
    VlWide<3>/*95:0*/ __Vtemp_h04f75829__0;
    VlWide<3>/*95:0*/ __Vtemp_hdee32737__0;
    VlWide<3>/*95:0*/ __Vtemp_he85dfef8__0;
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
    VL_SHIFTR_WWI(84,84,32, __Vtemp_heb67e788__0, vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full, 0x1cU);
    __Vtemp_h04f75829__0[0U] = __Vtemp_heb67e788__0[0U];
    __Vtemp_h04f75829__0[1U] = __Vtemp_heb67e788__0[1U];
    __Vtemp_h04f75829__0[2U] = (0xfffffU & __Vtemp_heb67e788__0[2U]);
    __Vtemp_hdee32737__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)) 
                                              * (0xffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])) 
                                                          >> 0x1cU))))))));
    __Vtemp_hdee32737__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)) 
                                               * (0xffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])) 
                                                           >> 0x1cU))))))) 
                                        >> 0x20U));
    __Vtemp_hdee32737__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_he85dfef8__0, __Vtemp_h04f75829__0, __Vtemp_hdee32737__0);
    vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
        = __Vtemp_he85dfef8__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
        = __Vtemp_he85dfef8__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
        = (0xfffffU & __Vtemp_he85dfef8__0[2U]);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 5U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 5U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 7U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 7U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 9U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 9U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                   >> 0x1dU)) | (2U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                        >> 0x1dU)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                   >> 0x1dU)) | (4U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                        >> 0x1dU)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 1U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 1U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 3U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 3U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 5U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 5U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 7U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 7U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x17U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x17U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x19U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x19U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x1bU))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x1bU))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                   >> 0x1dU)) | (2U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                   >> 0x1dU)) | (4U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 1U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 1U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 3U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 3U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 9U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 9U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x13U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x13U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x15U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x15U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                   >> 0x1dU)) | (6U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                        >> 0x1dU)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (6U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 1U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 3U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 5U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->__VdfgTmp_h1a5d0b9a__0 = (1U & (~ ((0U 
                                                == 
                                                (3U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                    >> 0x1cU))) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                      >> 0x1cU))))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 5U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 7U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 9U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 7U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x17U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x19U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x1bU))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                   >> 0x1dU)) | (6U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (6U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 1U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 9U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x13U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                         >> 3U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                         >> 0x15U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                       >> 0x1dU)) | ((1U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                             >> 0x1dU)) 
                                     | ((2U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                >> 0x1dU)) 
                                        | (3U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                  >> 0x1dU)))))) 
           & ((4U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                      >> 0x1dU)) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                              << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                        >> 0x1fU)))) 
               | ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                 << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                           >> 0x1fU)))) 
                  | ((2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                    << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                              >> 0x1fU)))) 
                     | (3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                      << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                >> 0x1fU)))))))) 
           & ((4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                       >> 0x1fU)))) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 1U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 1U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 3U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 3U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 5U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 5U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_h1a5d0b9a__0) 
           & ((2U == (3U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                            >> 0x1cU))) | (3U == (3U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[0U] 
                                                     >> 0x1cU)))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 5U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 5U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 7U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 7U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 9U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 9U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 0xdU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                     >> 0xfU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 0xfU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                      >> 0x11U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 0x11U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 7U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 7U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0x17U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x17U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x17U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0x17U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0x17U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0x19U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x19U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x19U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0x19U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0x19U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0x1bU))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x1bU))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x1bU))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0x1bU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0x1bU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                       >> 0x1dU)) | ((1U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                             >> 0x1dU)) 
                                     | ((2U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x1dU)) 
                                        | (3U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                  >> 0x1dU)))))) 
           & ((4U == (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                      >> 0x1dU)) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                              << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                        >> 0x1fU)))) 
               | ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                 << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                           >> 0x1fU)))) 
                  | ((2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                    << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                              >> 0x1fU)))) 
                     | (3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                      << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                >> 0x1fU)))))))) 
           & ((4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                       >> 0x1fU)))) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 1U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 1U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 9U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 9U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                     >> 0xbU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0xbU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0xdU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                     >> 0xfU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0xfU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0x11U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0x11U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0x13U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x13U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x13U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0x13U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0x13U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                     >> 0xbU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 0xbU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                                                   >> 3U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[2U] 
                            >> 3U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                             >> 0x15U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                               >> 0x15U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                    >> 0x15U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                                                      >> 0x15U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x4_x_new_full[1U] 
                            >> 0x15U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
}
