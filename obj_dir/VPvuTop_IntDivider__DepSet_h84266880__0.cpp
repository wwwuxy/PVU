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
    VlWide<3>/*95:0*/ __Vtemp_h3ea662f2__0;
    VlWide<3>/*95:0*/ __Vtemp_h3a6df86d__0;
    VlWide<3>/*95:0*/ __Vtemp_h503bbae0__0;
    VlWide<3>/*95:0*/ __Vtemp_hd285f68c__0;
    VlWide<3>/*95:0*/ __Vtemp_hf7abd9f8__0;
    VlWide<3>/*95:0*/ __Vtemp_h707da369__0;
    VlWide<3>/*95:0*/ __Vtemp_h35bec5fb__0;
    VlWide<3>/*95:0*/ __Vtemp_h4b912a01__0;
    VlWide<3>/*95:0*/ __Vtemp_hfd8d7096__0;
    VlWide<3>/*95:0*/ __Vtemp_h1cc6c24f__0;
    VlWide<3>/*95:0*/ __Vtemp_h0d64f524__0;
    // Body
    __Vtemp_h3ea662f2__0[0U] = (IData)((0xfffffffffffffffULL 
                                        & VL_DIV_QQQ(60, 0x40000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0)))));
    __Vtemp_h3ea662f2__0[1U] = (IData)(((0xfffffffffffffffULL 
                                         & VL_DIV_QQQ(60, 0x40000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0)))) 
                                        >> 0x20U));
    __Vtemp_h3ea662f2__0[2U] = 0U;
    __Vtemp_h3a6df86d__0[0U] = (IData)((0xfffffffffffffffULL 
                                        & (0x80000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0)) 
                                              * (0xfffffffffffffffULL 
                                                 & VL_DIV_QQQ(60, 0x40000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0))))))));
    __Vtemp_h3a6df86d__0[1U] = (IData)(((0xfffffffffffffffULL 
                                         & (0x80000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0)) 
                                               * (0xfffffffffffffffULL 
                                                  & VL_DIV_QQQ(60, 0x40000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0))))))) 
                                        >> 0x20U));
    __Vtemp_h3a6df86d__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_h503bbae0__0, __Vtemp_h3ea662f2__0, __Vtemp_h3a6df86d__0);
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U] 
        = __Vtemp_h503bbae0__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U] 
        = __Vtemp_h503bbae0__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U] 
        = (0x3ffffffU & __Vtemp_h503bbae0__0[2U]);
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd285f68c__0, vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full, 0x1eU);
    __Vtemp_hf7abd9f8__0[0U] = __Vtemp_hd285f68c__0[0U];
    __Vtemp_hf7abd9f8__0[1U] = __Vtemp_hd285f68c__0[1U];
    __Vtemp_hf7abd9f8__0[2U] = (0x3ffffffU & __Vtemp_hd285f68c__0[2U]);
    __Vtemp_h707da369__0[0U] = (IData)((0xfffffffffffffffULL 
                                        & (0x80000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0)) 
                                              * (0xfffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U])) 
                                                     << 0x22U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U])) 
                                                        << 2U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U])) 
                                                          >> 0x1eU))))))));
    __Vtemp_h707da369__0[1U] = (IData)(((0xfffffffffffffffULL 
                                         & (0x80000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0)) 
                                               * (0xfffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U])) 
                                                      << 0x22U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U])) 
                                                         << 2U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U])) 
                                                           >> 0x1eU))))))) 
                                        >> 0x20U));
    __Vtemp_h707da369__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_h35bec5fb__0, __Vtemp_hf7abd9f8__0, __Vtemp_h707da369__0);
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U] 
        = __Vtemp_h35bec5fb__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U] 
        = __Vtemp_h35bec5fb__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U] 
        = (0x3ffffffU & __Vtemp_h35bec5fb__0[2U]);
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h4b912a01__0, vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full, 0x1eU);
    __Vtemp_hfd8d7096__0[0U] = __Vtemp_h4b912a01__0[0U];
    __Vtemp_hfd8d7096__0[1U] = __Vtemp_h4b912a01__0[1U];
    __Vtemp_hfd8d7096__0[2U] = (0x3ffffffU & __Vtemp_h4b912a01__0[2U]);
    __Vtemp_h1cc6c24f__0[0U] = (IData)((0xfffffffffffffffULL 
                                        & (0x80000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0)) 
                                              * (0xfffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U])) 
                                                     << 0x22U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U])) 
                                                        << 2U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U])) 
                                                          >> 0x1eU))))))));
    __Vtemp_h1cc6c24f__0[1U] = (IData)(((0xfffffffffffffffULL 
                                         & (0x80000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0)) 
                                               * (0xfffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U])) 
                                                      << 0x22U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U])) 
                                                         << 2U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U])) 
                                                           >> 0x1eU))))))) 
                                        >> 0x20U));
    __Vtemp_h1cc6c24f__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_h0d64f524__0, __Vtemp_hfd8d7096__0, __Vtemp_h1cc6c24f__0);
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
        = __Vtemp_h0d64f524__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
        = __Vtemp_h0d64f524__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
        = (0x3ffffffU & __Vtemp_h0d64f524__0[2U]);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 1U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 1U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x1bU))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x1bU))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                   >> 0x1dU)) | (2U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                   >> 0x1dU)) | (4U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x17U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x17U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x17U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x17U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x17U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x17U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 3U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 3U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 5U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 5U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 7U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 7U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 9U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 9U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x13U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x13U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x15U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x15U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x17U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x17U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x19U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x19U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 1U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 1U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 3U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 3U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 5U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 5U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 7U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 7U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 9U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 9U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x13U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x13U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x13U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x13U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x15U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x15U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x15U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x15U))));
    vlSelf->__VdfgTmp_h339331ad__0 = (1U & (~ ((0U 
                                                == 
                                                (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                 >> 0x1eU)) 
                                               | (1U 
                                                  == 
                                                  (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                   >> 0x1eU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (6U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x1bU))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                   >> 0x1dU)) | (6U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 1U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (6U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x19U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x15U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x15U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 3U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 5U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 7U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 9U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x13U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x15U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x17U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 1U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 3U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 5U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 7U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 9U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x13U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x13U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_h339331ad__0) 
           & ((2U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                      >> 0x1eU)) | (3U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                           >> 0x1eU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                              << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                        >> 0x1fU)))) 
               | ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                 << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                           >> 0x1fU)))) 
                  | ((2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                              >> 0x1fU)))) 
                     | (3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                      << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                >> 0x1fU)))))))) 
           & ((4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                       >> 0x1fU)))) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0x1bU))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x1bU))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x1bU))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x1bU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 0x1bU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                       >> 0x1dU)) | ((1U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                             >> 0x1dU)) 
                                     | ((2U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1dU)) 
                                        | (3U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 0x1dU)))))) 
           & ((4U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                      >> 0x1dU)) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 1U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 1U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                              << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                        >> 0x1fU)))) 
               | ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                 << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x1fU)))) 
                  | ((2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                    << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                              >> 0x1fU)))) 
                     | (3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                      << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1fU)))))))) 
           & ((4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                       >> 0x1fU)))) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0x19U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x19U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x19U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x19U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 0x19U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 0x15U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0x15U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 0x15U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0x15U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 0x15U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 3U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 3U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 5U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 5U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 7U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 7U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 9U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 9U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0xbU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 0xbU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 0xdU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0xfU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 0xfU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x11U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 0x11U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0x13U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x13U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x13U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x13U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 0x13U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0x15U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x15U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x15U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x15U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 0x15U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0x17U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x17U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x17U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x17U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 0x17U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 1U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 1U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 3U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 3U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 5U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 5U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 7U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 7U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 9U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 9U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0xbU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 0xbU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 0xdU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0xfU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 0xfU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0x11U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 0x11U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 0x13U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0x13U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 0x13U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0x13U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 0x13U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__1(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__1\n"); );
    // Init
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0);
    VlWide<4>/*127:0*/ __Vtemp_h017be803__0;
    VlWide<63>/*2015:0*/ __Vtemp_h0cddaa1a__0;
    VlWide<65>/*2079:0*/ __Vtemp_h57e94e67__0;
    VlWide<65>/*2079:0*/ __Vtemp_hc890542c__0;
    VlWide<65>/*2079:0*/ __Vtemp_h663f772c__0;
    VlWide<67>/*2143:0*/ __Vtemp_hf924b3c4__0;
    VlWide<67>/*2143:0*/ __Vtemp_he9ea4533__0;
    VlWide<69>/*2207:0*/ __Vtemp_hbe090f2f__0;
    VlWide<69>/*2207:0*/ __Vtemp_hae8e8145__0;
    VlWide<69>/*2207:0*/ __Vtemp_h09d88698__0;
    VlWide<71>/*2271:0*/ __Vtemp_hd1db61cd__0;
    VlWide<71>/*2271:0*/ __Vtemp_h95b2dff4__0;
    VlWide<73>/*2335:0*/ __Vtemp_h25ead714__0;
    VlWide<73>/*2335:0*/ __Vtemp_h5120e0a7__0;
    VlWide<73>/*2335:0*/ __Vtemp_h64038db8__0;
    VlWide<75>/*2399:0*/ __Vtemp_h2eb306ca__0;
    VlWide<75>/*2399:0*/ __Vtemp_hb1d850ed__0;
    VlWide<77>/*2463:0*/ __Vtemp_h3dcb9a47__0;
    VlWide<77>/*2463:0*/ __Vtemp_hd6a553ca__0;
    VlWide<77>/*2463:0*/ __Vtemp_h219cb7c9__0;
    VlWide<79>/*2527:0*/ __Vtemp_h0cab2a3a__0;
    VlWide<79>/*2527:0*/ __Vtemp_h69b1ffd6__0;
    VlWide<80>/*2559:0*/ __Vtemp_he5a53008__0;
    VlWide<81>/*2591:0*/ __Vtemp_h6867891a__0;
    VlWide<81>/*2591:0*/ __Vtemp_h1577155c__0;
    VlWide<82>/*2623:0*/ __Vtemp_h0e5da945__0;
    VlWide<82>/*2623:0*/ __Vtemp_he9c632bd__0;
    VlWide<84>/*2687:0*/ __Vtemp_h5bb0c4a1__0;
    VlWide<84>/*2687:0*/ __Vtemp_hfbc37c4c__0;
    VlWide<84>/*2687:0*/ __Vtemp_hc6f66bb0__0;
    VlWide<86>/*2751:0*/ __Vtemp_hd32c3d23__0;
    VlWide<86>/*2751:0*/ __Vtemp_h1af1975c__0;
    VlWide<88>/*2815:0*/ __Vtemp_h6a9fc0b6__0;
    VlWide<88>/*2815:0*/ __Vtemp_h0cdb9d26__0;
    VlWide<88>/*2815:0*/ __Vtemp_h693cd145__0;
    VlWide<90>/*2879:0*/ __Vtemp_hb77a40ad__0;
    VlWide<90>/*2879:0*/ __Vtemp_h03064eb5__0;
    VlWide<92>/*2943:0*/ __Vtemp_h6d7e70d3__0;
    VlWide<92>/*2943:0*/ __Vtemp_h3756ebe2__0;
    VlWide<92>/*2943:0*/ __Vtemp_h3da5ce2a__0;
    VlWide<94>/*3007:0*/ __Vtemp_h49e8e98e__0;
    VlWide<94>/*3007:0*/ __Vtemp_h89707bef__0;
    VlWide<96>/*3071:0*/ __Vtemp_h1d743690__0;
    VlWide<96>/*3071:0*/ __Vtemp_hc62de718__0;
    VlWide<96>/*3071:0*/ __Vtemp_hb2176a5c__0;
    VlWide<98>/*3135:0*/ __Vtemp_hf31a2ebc__0;
    VlWide<98>/*3135:0*/ __Vtemp_h6018367e__0;
    VlWide<100>/*3199:0*/ __Vtemp_h7fcc86c3__0;
    VlWide<100>/*3199:0*/ __Vtemp_hb4cbd5ba__0;
    VlWide<100>/*3199:0*/ __Vtemp_hada77702__0;
    VlWide<102>/*3263:0*/ __Vtemp_hcc277918__0;
    VlWide<102>/*3263:0*/ __Vtemp_h42751d47__0;
    VlWide<103>/*3295:0*/ __Vtemp_hef742d79__0;
    VlWide<103>/*3295:0*/ __Vtemp_he7715101__0;
    VlWide<103>/*3295:0*/ __Vtemp_h45cd30e5__0;
    VlWide<105>/*3359:0*/ __Vtemp_hc9a739cb__0;
    VlWide<105>/*3359:0*/ __Vtemp_h96c4b6ff__0;
    VlWide<107>/*3423:0*/ __Vtemp_h2ff197d6__0;
    VlWide<107>/*3423:0*/ __Vtemp_hc5c7ee47__0;
    VlWide<107>/*3423:0*/ __Vtemp_hd6171b80__0;
    VlWide<109>/*3487:0*/ __Vtemp_hff7a621b__0;
    VlWide<109>/*3487:0*/ __Vtemp_h087811c1__0;
    VlWide<111>/*3551:0*/ __Vtemp_h246d6008__0;
    VlWide<111>/*3551:0*/ __Vtemp_hdf11c1e6__0;
    VlWide<111>/*3551:0*/ __Vtemp_hddfb9ea1__0;
    VlWide<113>/*3615:0*/ __Vtemp_h1f51cf5f__0;
    VlWide<113>/*3615:0*/ __Vtemp_he13cd002__0;
    // Body
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(
                                                       ((~ 
                                                         ((0U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                               >> 0x17U))) 
                                                          | ((1U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                                  >> 0x17U))) 
                                                             | ((2U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                                     >> 0x17U))) 
                                                                | (3U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                                       >> 0x17U))))))) 
                                                        & ((4U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                                >> 0x17U))) 
                                                           | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)))))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0x17U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0x17U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    __Vtemp_h017be803__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (3U 
                                                             & (- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                                            << 0x3dU) 
                                           | (0x1fffffffffffffffULL 
                                              & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                 ^ 
                                                 (((0U 
                                                    != 
                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                     >> 0x1eU)) 
                                                   & ((1U 
                                                       == 
                                                       (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                        >> 0x1eU)) 
                                                      | ((2U 
                                                          != 
                                                          (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                           >> 0x1eU)) 
                                                         & (3U 
                                                            == 
                                                            (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                             >> 0x1eU)))))
                                                   ? 
                                                  ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                                   << 0x1eU)
                                                   : 
                                                  (((IData)(vlSelf->__VdfgTmp_h339331ad__0) 
                                                    & (2U 
                                                       == 
                                                       (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                        >> 0x1eU)))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                                    << 0x1fU)
                                                    : 0ULL)))))));
    __Vtemp_h017be803__0[1U] = (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                                             << 0x3dU) 
                                            | (0x1fffffffffffffffULL 
                                               & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                  ^ 
                                                  (((0U 
                                                     != 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                      >> 0x1eU)) 
                                                    & ((1U 
                                                        == 
                                                        (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                         >> 0x1eU)) 
                                                       | ((2U 
                                                           != 
                                                           (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                            >> 0x1eU)) 
                                                          & (3U 
                                                             == 
                                                             (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                              >> 0x1eU)))))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                                    << 0x1eU)
                                                    : 
                                                   (((IData)(vlSelf->__VdfgTmp_h339331ad__0) 
                                                     & (2U 
                                                        == 
                                                        (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                         >> 0x1eU)))
                                                     ? 
                                                    ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                                     << 0x1fU)
                                                     : 0ULL)))))) 
                                        >> 0x20U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[0U] 
        = __Vtemp_h017be803__0[0U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[1U] 
        = __Vtemp_h017be803__0[1U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[2U] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[3U] = 0U;
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    << 1U) 
                                                   | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                      >> 0x1fU)))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      << 1U) 
                                                     | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                        >> 0x1fU)))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x1bU))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0x1bU))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1dU)) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 0x1dU)) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 1U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 1U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    << 1U) 
                                                   | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x1fU)))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      << 1U) 
                                                     | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                        >> 0x1fU)))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x19U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0x19U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0x15U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0x15U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 3U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 3U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 5U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 5U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 7U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 7U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 9U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 9U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0xbU))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0xbU))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0xdU))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0xdU))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0xfU))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0xfU))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x11U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0x11U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x13U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0x13U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x15U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0x15U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x17U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0x17U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 1U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 1U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 3U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 3U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 5U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 5U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 7U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 7U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 9U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 9U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0xbU))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0xbU))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0xdU))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0xdU))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0xfU))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0xfU))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0x11U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0x11U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0x13U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0x13U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg)) 
                   << 0x38U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod) 
            << 0x1aU) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg)) 
                                  << 0x38U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod) 
            >> 6U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod 
                               >> 0x20U)) << 0x1aU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod 
                    >> 0x20U)) >> 6U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (IData)((((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))))) 
                    << 0x3fU) | ((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                  << 2U) | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (IData)(((((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))))) 
                     << 0x3fU) | ((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                   << 2U) | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))) 
                   >> 0x20U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] = 1U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] = 0U;
    vlSelf->__VdfgTmp_h5cdbe361__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                           << 0x1eU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg) 
                                             << 0x1cU));
    vlSelf->__VdfgTmp_h5cdbe361__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                           >> 2U) | 
                                          ((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1eU));
    vlSelf->__VdfgTmp_h5cdbe361__0[2U] = ((0x8000000U 
                                           & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg)) 
                                              << 0x1bU)) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 2U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
           << 0x1eU);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (0x40000000U | ((0x20000000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                          << 0x1dU)) 
                          | (IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                     >> 0x20U))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
            << 4U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                      << 2U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
            >> 0x1cU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                  >> 0x20U)) << 4U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (4U | ((2U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                        << 1U)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x1cU)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                   << 0x20U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
            << 2U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                               << 0x20U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
            << 0x1fU) | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                          >> 0x1eU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                >> 0x20U)) 
                                       << 2U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] = 1U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
            << 0x1cU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                         << 0x1aU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
            >> 4U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                               >> 0x20U)) << 0x1cU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U] 
        = (0x4000000U | ((0x2000000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg)) 
                                        << 0x19U)) 
                         | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                     >> 0x20U)) >> 4U)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                   << 0x36U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod) 
            << 0x18U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                                  << 0x36U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod) 
            >> 8U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
                               >> 0x20U)) << 0x18U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
        = (0x400000U | ((0x200000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg)) 
                                      << 0x15U)) | 
                        ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
                                  >> 0x20U)) >> 8U)));
    vlSelf->__VdfgTmp_hdd1a36ee__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                           << 6U) | 
                                          ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                           << 4U));
    vlSelf->__VdfgTmp_hdd1a36ee__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                           >> 0x1aU) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 6U));
    vlSelf->__VdfgTmp_hdd1a36ee__0[2U] = ((8U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                 << 3U)) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 0x1aU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
            << 8U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                      << 6U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
            >> 0x18U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                  >> 0x20U)) << 8U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (0x40U | ((0x20U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                              << 5U)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                  >> 0x20U)) 
                                         >> 0x18U)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
            << 0xaU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                        << 8U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
            >> 0x16U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                  >> 0x20U)) << 0xaU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (0x100U | ((0x80U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                               << 7U)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0x16U)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
            << 0xcU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                        << 0xaU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
            >> 0x14U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                  >> 0x20U)) << 0xcU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U] 
        = (0x400U | ((0x200U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                << 9U)) | ((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                    >> 0x20U)) 
                                           >> 0x14U)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U] = 0U;
    vlSelf->__VdfgTmp_h4a73c73b__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                           << 0xeU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    vlSelf->__VdfgTmp_h4a73c73b__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                           >> 0x12U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xeU));
    vlSelf->__VdfgTmp_h4a73c73b__0[2U] = ((0x800U & 
                                           ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                            << 0xbU)) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 0x12U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
            << 0x10U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                         << 0xeU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
            >> 0x10U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                  >> 0x20U)) << 0x10U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (0x4000U | ((0x2000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                  << 0xdU)) | ((IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x10U)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            << 0x12U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                         << 0x10U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            >> 0xeU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                 >> 0x20U)) << 0x12U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (0x10000U | ((0x8000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                   << 0xfU)) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0xeU)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
            << 0x14U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                         << 0x12U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
            >> 0xcU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                 >> 0x20U)) << 0x14U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U] 
        = (0x40000U | ((0x20000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                    << 0x11U)) | ((IData)(
                                                          (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 0xcU)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U] = 0U;
    vlSelf->__VdfgTmp_h6b408d73__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                           << 0x16U) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                             << 0x14U));
    vlSelf->__VdfgTmp_h6b408d73__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                           >> 0xaU) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x16U));
    vlSelf->__VdfgTmp_h6b408d73__0[2U] = ((0x80000U 
                                           & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                              << 0x13U)) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 0xaU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            << 0x18U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                         << 0x16U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            >> 8U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                               >> 0x20U)) << 0x18U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (0x400000U | ((0x200000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                      << 0x15U)) | 
                        ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                  >> 0x20U)) >> 8U)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            << 0x1aU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                         << 0x18U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            >> 6U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                               >> 0x20U)) << 0x1aU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (0x1000000U | ((0x800000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                       << 0x17U)) | 
                         ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                   >> 0x20U)) >> 6U)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] = 0U;
    vlSelf->__VdfgTmp_he0e5becf__0[0U] = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                                                  << 0x22U));
    vlSelf->__VdfgTmp_he0e5becf__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                           << 4U) | (IData)(
                                                            (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                                                              << 0x22U) 
                                                             >> 0x20U)));
    vlSelf->__VdfgTmp_he0e5becf__0[2U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                           >> 0x1cU) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 4U));
    vlSelf->__VdfgTmp_he0e5becf__0[3U] = ((2U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                                                 << 1U)) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 0x1cU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                   << 0x24U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
            << 6U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                               << 0x24U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
            >> 0x1aU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                  >> 0x20U)) << 6U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
        = (0x10U | ((8U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                           << 3U)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                               >> 0x20U)) 
                                      >> 0x1aU)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                   << 0x26U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
            << 8U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                               << 0x26U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
            >> 0x18U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                  >> 0x20U)) << 8U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
        = (0x40U | ((0x20U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                              << 5U)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                                  >> 0x20U)) 
                                         >> 0x18U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                   << 0x28U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
            << 0xaU) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                 << 0x28U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
            >> 0x16U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                  >> 0x20U)) << 0xaU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U] 
        = (0x100U | ((0x80U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                               << 7U)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0x16U)));
    vlSelf->__VdfgTmp_h740638af__0[0U] = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                                                  << 0x2aU));
    vlSelf->__VdfgTmp_h740638af__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                           << 0xcU) 
                                          | (IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                                                      << 0x2aU) 
                                                     >> 0x20U)));
    vlSelf->__VdfgTmp_h740638af__0[2U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                           >> 0x14U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xcU));
    vlSelf->__VdfgTmp_h740638af__0[3U] = ((0x200U & 
                                           ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                                            << 9U)) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 0x14U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                   << 0x2cU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
            << 0xeU) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                                 << 0x2cU) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
            >> 0x12U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                  >> 0x20U)) << 0xeU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
        = (0x1000U | ((0x800U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                                 << 0xbU)) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                                       >> 0x20U)) 
                                              >> 0x12U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                   << 0x2eU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
            << 0x10U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                                  << 0x2eU) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
            >> 0x10U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                  >> 0x20U)) << 0x10U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
        = (0x4000U | ((0x2000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                  << 0xdU)) | ((IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x10U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                   << 0x30U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
            << 0x12U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                  << 0x30U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
            >> 0xeU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                 >> 0x20U)) << 0x12U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U] 
        = (0x10000U | ((0x8000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                   << 0xfU)) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0xeU)));
    vlSelf->__VdfgTmp_hd462b4a7__0[0U] = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                                  << 0x32U));
    vlSelf->__VdfgTmp_hd462b4a7__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                                           << 0x14U) 
                                          | (IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                                      << 0x32U) 
                                                     >> 0x20U)));
    vlSelf->__VdfgTmp_hd462b4a7__0[2U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                                           >> 0xcU) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x14U));
    vlSelf->__VdfgTmp_hd462b4a7__0[3U] = ((0x20000U 
                                           & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                                              << 0x11U)) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 0xcU));
    __Vtemp_h0cddaa1a__0[0U] = vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[0U];
    __Vtemp_h0cddaa1a__0[1U] = vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[1U];
    __Vtemp_h0cddaa1a__0[2U] = vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[2U];
    __Vtemp_h0cddaa1a__0[3U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 << 0x1aU) | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                               << 0x18U) 
                                              | vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[3U]));
    __Vtemp_h0cddaa1a__0[4U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 >> 6U) | ((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1aU));
    __Vtemp_h0cddaa1a__0[5U] = (0x1000000U | ((0x800000U 
                                               & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                  << 0x17U)) 
                                              | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 6U)));
    __Vtemp_h0cddaa1a__0[6U] = 0U;
    __Vtemp_h0cddaa1a__0[7U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 << 0x14U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x12U));
    __Vtemp_h0cddaa1a__0[8U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 >> 0xcU) | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h0cddaa1a__0[9U] = (0x40000U | ((0x20000U 
                                             & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                << 0x11U)) 
                                            | ((IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0xcU)));
    __Vtemp_h0cddaa1a__0[0xaU] = 0U;
    __Vtemp_h0cddaa1a__0[0xbU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                   << 0xeU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                               << 0xcU));
    __Vtemp_h0cddaa1a__0[0xcU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                   >> 0x12U) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0xeU));
    __Vtemp_h0cddaa1a__0[0xdU] = (0x1000U | ((0x800U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                 << 0xbU)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x12U)));
    __Vtemp_h0cddaa1a__0[0xeU] = 0U;
    __Vtemp_h0cddaa1a__0[0xfU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
                                   << 8U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                             << 6U));
    __Vtemp_h0cddaa1a__0[0x10U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
                                    >> 0x18U) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 8U));
    __Vtemp_h0cddaa1a__0[0x11U] = (0x40U | ((0x20U 
                                             & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                << 5U)) 
                                            | ((IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x18U)));
    __Vtemp_h0cddaa1a__0[0x12U] = 0U;
    __Vtemp_h0cddaa1a__0[0x13U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                    << 2U) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    __Vtemp_h0cddaa1a__0[0x14U] = (((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                    << 0x1fU) | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                                  >> 0x1eU) 
                                                 | ((IData)(
                                                            (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                                             >> 0x20U)) 
                                                    << 2U)));
    __Vtemp_h0cddaa1a__0[0x15U] = 1U;
    __Vtemp_h0cddaa1a__0[0x16U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                    << 0x1cU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                 << 0x1aU));
    __Vtemp_h0cddaa1a__0[0x17U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                    >> 4U) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    __Vtemp_h0cddaa1a__0[0x18U] = (0x4000000U | ((0x2000000U 
                                                  & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                     << 0x19U)) 
                                                 | ((IData)(
                                                            (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                             >> 0x20U)) 
                                                    >> 4U)));
    __Vtemp_h0cddaa1a__0[0x19U] = 0U;
    __Vtemp_h0cddaa1a__0[0x1aU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    << 0x16U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                 << 0x14U));
    __Vtemp_h0cddaa1a__0[0x1bU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    >> 0xaU) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x16U));
    __Vtemp_h0cddaa1a__0[0x1cU] = (0x100000U | ((0x80000U 
                                                 & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                    << 0x13U)) 
                                                | ((IData)(
                                                           (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 0xaU)));
    __Vtemp_h0cddaa1a__0[0x1dU] = 0U;
    __Vtemp_h0cddaa1a__0[0x1eU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    << 0x10U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                 << 0xeU));
    __Vtemp_h0cddaa1a__0[0x1fU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_h0cddaa1a__0[0x20U] = (0x4000U | ((0x2000U 
                                               & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                  << 0xdU)) 
                                              | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 0x10U)));
    __Vtemp_h0cddaa1a__0[0x21U] = 0U;
    __Vtemp_h0cddaa1a__0[0x22U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                    << 0xaU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                << 8U));
    __Vtemp_h0cddaa1a__0[0x23U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xaU));
    __Vtemp_h0cddaa1a__0[0x24U] = (0x100U | ((0x80U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                 << 7U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x16U)));
    __Vtemp_h0cddaa1a__0[0x25U] = 0U;
    __Vtemp_h0cddaa1a__0[0x26U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    << 4U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                              << 2U));
    __Vtemp_h0cddaa1a__0[0x27U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    >> 0x1cU) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 4U));
    __Vtemp_h0cddaa1a__0[0x28U] = (4U | ((2U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                << 1U)) 
                                         | ((IData)(
                                                    (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                     >> 0x20U)) 
                                            >> 0x1cU)));
    __Vtemp_h0cddaa1a__0[0x29U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                    << 0x1eU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                 << 0x1cU));
    __Vtemp_h0cddaa1a__0[0x2aU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                    >> 2U) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1eU));
    __Vtemp_h0cddaa1a__0[0x2bU] = (0x10000000U | ((0x8000000U 
                                                   & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                      << 0x1bU)) 
                                                  | ((IData)(
                                                             (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                              >> 0x20U)) 
                                                     >> 2U)));
    __Vtemp_h0cddaa1a__0[0x2cU] = 0U;
    __Vtemp_h0cddaa1a__0[0x2dU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    << 0x18U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                 << 0x16U));
    __Vtemp_h0cddaa1a__0[0x2eU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    >> 8U) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x18U));
    __Vtemp_h0cddaa1a__0[0x2fU] = (0x400000U | ((0x200000U 
                                                 & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                    << 0x15U)) 
                                                | ((IData)(
                                                           (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 8U)));
    __Vtemp_h0cddaa1a__0[0x30U] = 0U;
    __Vtemp_h0cddaa1a__0[0x31U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    << 0x12U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                 << 0x10U));
    __Vtemp_h0cddaa1a__0[0x32U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    >> 0xeU) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x12U));
    __Vtemp_h0cddaa1a__0[0x33U] = (0x10000U | ((0x8000U 
                                                & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                   << 0xfU)) 
                                               | ((IData)(
                                                          (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 0xeU)));
    __Vtemp_h0cddaa1a__0[0x34U] = 0U;
    __Vtemp_h0cddaa1a__0[0x35U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    << 0xcU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                << 0xaU));
    __Vtemp_h0cddaa1a__0[0x36U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    >> 0x14U) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xcU));
    __Vtemp_h0cddaa1a__0[0x37U] = (0x400U | ((0x200U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg)) 
                                                 << 9U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x14U)));
    __Vtemp_h0cddaa1a__0[0x38U] = 0U;
    __Vtemp_h0cddaa1a__0[0x39U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                    << 6U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg) 
                                              << 4U));
    __Vtemp_h0cddaa1a__0[0x3aU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                    >> 0x1aU) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 6U));
    __Vtemp_h0cddaa1a__0[0x3bU] = (0x10U | ((8U & (
                                                   (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg)) 
                                                   << 3U)) 
                                            | ((IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x1aU)));
    __Vtemp_h0cddaa1a__0[0x3cU] = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
                                   << 0x1eU);
    __Vtemp_h0cddaa1a__0[0x3dU] = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod);
    __Vtemp_h0cddaa1a__0[0x3eU] = ((0x20000000U & (
                                                   (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                   << 0x1dU)) 
                                   | (IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                              >> 0x20U)));
    VL_CONCAT_WQW(2072,58,2014, __Vtemp_h57e94e67__0, 1ULL, __Vtemp_h0cddaa1a__0);
    VL_CONCAT_WIW(2073,1,2072, __Vtemp_hc890542c__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg), __Vtemp_h57e94e67__0);
    VL_EXTEND_WW(2074,2073, __Vtemp_h663f772c__0, __Vtemp_hc890542c__0);
    VL_CONCAT_WQW(2135,61,2074, __Vtemp_hf924b3c4__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod, __Vtemp_h663f772c__0);
    VL_CONCAT_WIW(2136,1,2135, __Vtemp_he9ea4533__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg))), __Vtemp_hf924b3c4__0);
    VL_CONCAT_WQW(2194,58,2136, __Vtemp_hbe090f2f__0, 1ULL, __Vtemp_he9ea4533__0);
    VL_CONCAT_WIW(2195,1,2194, __Vtemp_hae8e8145__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg), __Vtemp_hbe090f2f__0);
    VL_EXTEND_WW(2196,2195, __Vtemp_h09d88698__0, __Vtemp_hae8e8145__0);
    VL_CONCAT_WQW(2257,61,2196, __Vtemp_hd1db61cd__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod, __Vtemp_h09d88698__0);
    VL_CONCAT_WIW(2258,1,2257, __Vtemp_h95b2dff4__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg))), __Vtemp_hd1db61cd__0);
    VL_CONCAT_WQW(2316,58,2258, __Vtemp_h25ead714__0, 1ULL, __Vtemp_h95b2dff4__0);
    VL_CONCAT_WIW(2317,1,2316, __Vtemp_h5120e0a7__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg), __Vtemp_h25ead714__0);
    VL_EXTEND_WW(2318,2317, __Vtemp_h64038db8__0, __Vtemp_h5120e0a7__0);
    VL_CONCAT_WQW(2379,61,2318, __Vtemp_h2eb306ca__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod, __Vtemp_h64038db8__0);
    VL_CONCAT_WIW(2380,1,2379, __Vtemp_hb1d850ed__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg))), __Vtemp_h2eb306ca__0);
    VL_CONCAT_WQW(2438,58,2380, __Vtemp_h3dcb9a47__0, 1ULL, __Vtemp_hb1d850ed__0);
    VL_CONCAT_WIW(2439,1,2438, __Vtemp_hd6a553ca__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg), __Vtemp_h3dcb9a47__0);
    VL_EXTEND_WW(2440,2439, __Vtemp_h219cb7c9__0, __Vtemp_hd6a553ca__0);
    VL_CONCAT_WQW(2501,61,2440, __Vtemp_h0cab2a3a__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod, __Vtemp_h219cb7c9__0);
    VL_CONCAT_WIW(2502,1,2501, __Vtemp_h69b1ffd6__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg))), __Vtemp_h0cab2a3a__0);
    VL_CONCAT_WQW(2560,58,2502, __Vtemp_he5a53008__0, 1ULL, __Vtemp_h69b1ffd6__0);
    VL_CONCAT_WIW(2561,1,2560, __Vtemp_h6867891a__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg), __Vtemp_he5a53008__0);
    VL_EXTEND_WW(2562,2561, __Vtemp_h1577155c__0, __Vtemp_h6867891a__0);
    VL_CONCAT_WQW(2623,61,2562, __Vtemp_h0e5da945__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod, __Vtemp_h1577155c__0);
    VL_CONCAT_WIW(2624,1,2623, __Vtemp_he9c632bd__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg))), __Vtemp_h0e5da945__0);
    VL_CONCAT_WQW(2682,58,2624, __Vtemp_h5bb0c4a1__0, 1ULL, __Vtemp_he9c632bd__0);
    VL_CONCAT_WIW(2683,1,2682, __Vtemp_hfbc37c4c__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg), __Vtemp_h5bb0c4a1__0);
    VL_EXTEND_WW(2684,2683, __Vtemp_hc6f66bb0__0, __Vtemp_hfbc37c4c__0);
    VL_CONCAT_WQW(2745,61,2684, __Vtemp_hd32c3d23__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod, __Vtemp_hc6f66bb0__0);
    VL_CONCAT_WIW(2746,1,2745, __Vtemp_h1af1975c__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg))), __Vtemp_hd32c3d23__0);
    VL_CONCAT_WQW(2804,58,2746, __Vtemp_h6a9fc0b6__0, 1ULL, __Vtemp_h1af1975c__0);
    VL_CONCAT_WIW(2805,1,2804, __Vtemp_h0cdb9d26__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg), __Vtemp_h6a9fc0b6__0);
    VL_EXTEND_WW(2806,2805, __Vtemp_h693cd145__0, __Vtemp_h0cdb9d26__0);
    VL_CONCAT_WQW(2867,61,2806, __Vtemp_hb77a40ad__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod, __Vtemp_h693cd145__0);
    VL_CONCAT_WIW(2868,1,2867, __Vtemp_h03064eb5__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg))), __Vtemp_hb77a40ad__0);
    VL_CONCAT_WQW(2926,58,2868, __Vtemp_h6d7e70d3__0, 1ULL, __Vtemp_h03064eb5__0);
    VL_CONCAT_WIW(2927,1,2926, __Vtemp_h3756ebe2__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg), __Vtemp_h6d7e70d3__0);
    VL_EXTEND_WW(2928,2927, __Vtemp_h3da5ce2a__0, __Vtemp_h3756ebe2__0);
    VL_CONCAT_WQW(2989,61,2928, __Vtemp_h49e8e98e__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod, __Vtemp_h3da5ce2a__0);
    VL_CONCAT_WIW(2990,1,2989, __Vtemp_h89707bef__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg))), __Vtemp_h49e8e98e__0);
    VL_CONCAT_WQW(3048,58,2990, __Vtemp_h1d743690__0, 1ULL, __Vtemp_h89707bef__0);
    VL_CONCAT_WIW(3049,1,3048, __Vtemp_hc62de718__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg), __Vtemp_h1d743690__0);
    VL_EXTEND_WW(3050,3049, __Vtemp_hb2176a5c__0, __Vtemp_hc62de718__0);
    VL_CONCAT_WQW(3111,61,3050, __Vtemp_hf31a2ebc__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod, __Vtemp_hb2176a5c__0);
    VL_CONCAT_WIW(3112,1,3111, __Vtemp_h6018367e__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg))), __Vtemp_hf31a2ebc__0);
    VL_CONCAT_WQW(3170,58,3112, __Vtemp_h7fcc86c3__0, 1ULL, __Vtemp_h6018367e__0);
    VL_CONCAT_WIW(3171,1,3170, __Vtemp_hb4cbd5ba__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg), __Vtemp_h7fcc86c3__0);
    VL_EXTEND_WW(3172,3171, __Vtemp_hada77702__0, __Vtemp_hb4cbd5ba__0);
    VL_CONCAT_WQW(3233,61,3172, __Vtemp_hcc277918__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod, __Vtemp_hada77702__0);
    VL_CONCAT_WIW(3234,1,3233, __Vtemp_h42751d47__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg))), __Vtemp_hcc277918__0);
    VL_CONCAT_WQW(3292,58,3234, __Vtemp_hef742d79__0, 1ULL, __Vtemp_h42751d47__0);
    VL_CONCAT_WIW(3293,1,3292, __Vtemp_he7715101__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg), __Vtemp_hef742d79__0);
    VL_EXTEND_WW(3294,3293, __Vtemp_h45cd30e5__0, __Vtemp_he7715101__0);
    VL_CONCAT_WQW(3355,61,3294, __Vtemp_hc9a739cb__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod, __Vtemp_h45cd30e5__0);
    VL_CONCAT_WIW(3356,1,3355, __Vtemp_h96c4b6ff__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg))), __Vtemp_hc9a739cb__0);
    VL_CONCAT_WQW(3414,58,3356, __Vtemp_h2ff197d6__0, 1ULL, __Vtemp_h96c4b6ff__0);
    VL_CONCAT_WIW(3415,1,3414, __Vtemp_hc5c7ee47__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg), __Vtemp_h2ff197d6__0);
    VL_EXTEND_WW(3416,3415, __Vtemp_hd6171b80__0, __Vtemp_hc5c7ee47__0);
    VL_CONCAT_WQW(3477,61,3416, __Vtemp_hff7a621b__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod, __Vtemp_hd6171b80__0);
    VL_CONCAT_WIW(3478,1,3477, __Vtemp_h087811c1__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg))), __Vtemp_hff7a621b__0);
    VL_CONCAT_WQW(3536,58,3478, __Vtemp_h246d6008__0, 1ULL, __Vtemp_h087811c1__0);
    VL_CONCAT_WIW(3537,1,3536, __Vtemp_hdf11c1e6__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg), __Vtemp_h246d6008__0);
    VL_EXTEND_WW(3538,3537, __Vtemp_hddfb9ea1__0, __Vtemp_hdf11c1e6__0);
    VL_CONCAT_WQW(3599,61,3538, __Vtemp_h1f51cf5f__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod, __Vtemp_hddfb9ea1__0);
    VL_EXTEND_WW(3600,3599, __Vtemp_he13cd002__0, __Vtemp_h1f51cf5f__0);
    VL_ASSIGN_W(3600,vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods, __Vtemp_he13cd002__0);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                   << 0x34U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            << 0x16U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                                  << 0x34U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            >> 0xaU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                 >> 0x20U)) << 0x16U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
        = (0x100000U | ((0x80000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                                     << 0x13U)) | ((IData)(
                                                           (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 0xaU)));
    vlSelf->__VdfgTmp_h4eb69f7e__0[0U] = (vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]));
    vlSelf->__VdfgTmp_h4eb69f7e__0[1U] = (vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]));
    vlSelf->__VdfgTmp_h4eb69f7e__0[2U] = (vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]));
    vlSelf->__VdfgTmp_h4eb69f7e__0[3U] = (vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]));
    vlSelf->__VdfgTmp_hdf2d4ee4__0[0U] = ((vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              | vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[0U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]));
    vlSelf->__VdfgTmp_hdf2d4ee4__0[1U] = ((vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              | vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[1U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]));
    vlSelf->__VdfgTmp_hdf2d4ee4__0[2U] = ((vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              | vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[2U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]));
    vlSelf->__VdfgTmp_hdf2d4ee4__0[3U] = ((vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                              | vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[3U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]));
    vlSelf->__VdfgTmp_h842981dd__0[0U] = (vlSelf->__VdfgTmp_h5cdbe361__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]));
    vlSelf->__VdfgTmp_h842981dd__0[1U] = (vlSelf->__VdfgTmp_h5cdbe361__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]));
    vlSelf->__VdfgTmp_h842981dd__0[2U] = ((0x10000000U 
                                           | vlSelf->__VdfgTmp_h5cdbe361__0[2U]) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]));
    vlSelf->__VdfgTmp_h842981dd__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                          ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]);
    vlSelf->__VdfgTmp_h870317ba__0[0U] = ((vlSelf->__VdfgTmp_h5cdbe361__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              | vlSelf->__VdfgTmp_h5cdbe361__0[0U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]));
    vlSelf->__VdfgTmp_h870317ba__0[1U] = ((vlSelf->__VdfgTmp_h5cdbe361__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              | vlSelf->__VdfgTmp_h5cdbe361__0[1U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]));
    vlSelf->__VdfgTmp_h870317ba__0[2U] = (((0x10000000U 
                                            | vlSelf->__VdfgTmp_h5cdbe361__0[2U]) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((0x10000000U 
                                              | (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                                 | vlSelf->__VdfgTmp_h5cdbe361__0[2U])) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]));
    vlSelf->__VdfgTmp_h870317ba__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                          & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]);
    vlSelf->__VdfgTmp_h769702d4__0[0U] = (vlSelf->__VdfgTmp_hdd1a36ee__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])));
    vlSelf->__VdfgTmp_h769702d4__0[1U] = (vlSelf->__VdfgTmp_hdd1a36ee__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])));
    vlSelf->__VdfgTmp_h769702d4__0[2U] = ((0x10U | 
                                           vlSelf->__VdfgTmp_hdd1a36ee__0[2U]) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])));
    vlSelf->__VdfgTmp_h769702d4__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]));
    vlSelf->__VdfgTmp_h270c8384__0[0U] = ((vlSelf->__VdfgTmp_hdd1a36ee__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_hdd1a36ee__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_hdd1a36ee__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])))));
    vlSelf->__VdfgTmp_h270c8384__0[1U] = ((vlSelf->__VdfgTmp_hdd1a36ee__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_hdd1a36ee__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_hdd1a36ee__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])))));
    vlSelf->__VdfgTmp_h270c8384__0[2U] = (((0x10U | 
                                            vlSelf->__VdfgTmp_hdd1a36ee__0[2U]) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U]) 
                                                | (((0x10U 
                                                     | vlSelf->__VdfgTmp_hdd1a36ee__0[2U]) 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                                   | ((0x10U 
                                                       | (vlSelf->__VdfgTmp_hdd1a36ee__0[2U] 
                                                          | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U])) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])))));
    vlSelf->__VdfgTmp_h270c8384__0[3U] = ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]) 
                                             | (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])));
    vlSelf->__VdfgTmp_h062aa866__0[0U] = (vlSelf->__VdfgTmp_h4a73c73b__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])));
    vlSelf->__VdfgTmp_h062aa866__0[1U] = (vlSelf->__VdfgTmp_h4a73c73b__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])));
    vlSelf->__VdfgTmp_h062aa866__0[2U] = ((0x1000U 
                                           | vlSelf->__VdfgTmp_h4a73c73b__0[2U]) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])));
    vlSelf->__VdfgTmp_h062aa866__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]));
    vlSelf->__VdfgTmp_he55e6e02__0[0U] = ((vlSelf->__VdfgTmp_h4a73c73b__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_h4a73c73b__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_h4a73c73b__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])))));
    vlSelf->__VdfgTmp_he55e6e02__0[1U] = ((vlSelf->__VdfgTmp_h4a73c73b__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_h4a73c73b__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_h4a73c73b__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])))));
    vlSelf->__VdfgTmp_he55e6e02__0[2U] = (((0x1000U 
                                            | vlSelf->__VdfgTmp_h4a73c73b__0[2U]) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U]) 
                                                | (((0x1000U 
                                                     | vlSelf->__VdfgTmp_h4a73c73b__0[2U]) 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                                   | ((0x1000U 
                                                       | (vlSelf->__VdfgTmp_h4a73c73b__0[2U] 
                                                          | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U])) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])))));
    vlSelf->__VdfgTmp_he55e6e02__0[3U] = ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]) 
                                             | (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])));
    vlSelf->__VdfgTmp_h253db874__0[0U] = (vlSelf->__VdfgTmp_h6b408d73__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])));
    vlSelf->__VdfgTmp_h253db874__0[1U] = (vlSelf->__VdfgTmp_h6b408d73__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])));
    vlSelf->__VdfgTmp_h253db874__0[2U] = ((0x100000U 
                                           | vlSelf->__VdfgTmp_h6b408d73__0[2U]) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])));
    vlSelf->__VdfgTmp_h253db874__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]));
    vlSelf->__VdfgTmp_h5b916b27__0[0U] = ((vlSelf->__VdfgTmp_h6b408d73__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_h6b408d73__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_h6b408d73__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])))));
    vlSelf->__VdfgTmp_h5b916b27__0[1U] = ((vlSelf->__VdfgTmp_h6b408d73__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_h6b408d73__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_h6b408d73__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])))));
    vlSelf->__VdfgTmp_h5b916b27__0[2U] = (((0x100000U 
                                            | vlSelf->__VdfgTmp_h6b408d73__0[2U]) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U]) 
                                                | (((0x100000U 
                                                     | vlSelf->__VdfgTmp_h6b408d73__0[2U]) 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                                   | ((0x100000U 
                                                       | (vlSelf->__VdfgTmp_h6b408d73__0[2U] 
                                                          | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U])) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])))));
    vlSelf->__VdfgTmp_h5b916b27__0[3U] = ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]) 
                                             | (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])));
    vlSelf->__VdfgTmp_hc9c11027__0[0U] = (vlSelf->__VdfgTmp_he0e5becf__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])));
    vlSelf->__VdfgTmp_hc9c11027__0[1U] = (vlSelf->__VdfgTmp_he0e5becf__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])));
    vlSelf->__VdfgTmp_hc9c11027__0[2U] = (vlSelf->__VdfgTmp_he0e5becf__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])));
    vlSelf->__VdfgTmp_hc9c11027__0[3U] = ((4U | vlSelf->__VdfgTmp_he0e5becf__0[3U]) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])));
    vlSelf->__VdfgTmp_hc2bb2add__0[0U] = ((vlSelf->__VdfgTmp_he0e5becf__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_he0e5becf__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_he0e5becf__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])))));
    vlSelf->__VdfgTmp_hc2bb2add__0[1U] = ((vlSelf->__VdfgTmp_he0e5becf__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_he0e5becf__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_he0e5becf__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])))));
    vlSelf->__VdfgTmp_hc2bb2add__0[2U] = ((vlSelf->__VdfgTmp_he0e5becf__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_he0e5becf__0[2U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_he0e5becf__0[2U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])))));
    vlSelf->__VdfgTmp_hc2bb2add__0[3U] = (((4U | vlSelf->__VdfgTmp_he0e5becf__0[3U]) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]) 
                                                | (((4U 
                                                     | vlSelf->__VdfgTmp_he0e5becf__0[3U]) 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                                   | ((4U 
                                                       | (vlSelf->__VdfgTmp_he0e5becf__0[3U] 
                                                          | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U])) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])))));
    vlSelf->__VdfgTmp_h3653544f__0[0U] = (vlSelf->__VdfgTmp_h740638af__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])));
    vlSelf->__VdfgTmp_h3653544f__0[1U] = (vlSelf->__VdfgTmp_h740638af__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])));
    vlSelf->__VdfgTmp_h3653544f__0[2U] = (vlSelf->__VdfgTmp_h740638af__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])));
    vlSelf->__VdfgTmp_h3653544f__0[3U] = ((0x400U | 
                                           vlSelf->__VdfgTmp_h740638af__0[3U]) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])));
    vlSelf->__VdfgTmp_h291def22__0[0U] = ((vlSelf->__VdfgTmp_h740638af__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_h740638af__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_h740638af__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])))));
    vlSelf->__VdfgTmp_h291def22__0[1U] = ((vlSelf->__VdfgTmp_h740638af__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_h740638af__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_h740638af__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])))));
    vlSelf->__VdfgTmp_h291def22__0[2U] = ((vlSelf->__VdfgTmp_h740638af__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_h740638af__0[2U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_h740638af__0[2U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])))));
    vlSelf->__VdfgTmp_h291def22__0[3U] = (((0x400U 
                                            | vlSelf->__VdfgTmp_h740638af__0[3U]) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]) 
                                                | (((0x400U 
                                                     | vlSelf->__VdfgTmp_h740638af__0[3U]) 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                                   | ((0x400U 
                                                       | (vlSelf->__VdfgTmp_h740638af__0[3U] 
                                                          | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U])) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])))));
    vlSelf->__VdfgTmp_h1fd7069f__0[0U] = (vlSelf->__VdfgTmp_hd462b4a7__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])));
    vlSelf->__VdfgTmp_h1fd7069f__0[1U] = (vlSelf->__VdfgTmp_hd462b4a7__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])));
    vlSelf->__VdfgTmp_h1fd7069f__0[2U] = (vlSelf->__VdfgTmp_hd462b4a7__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])));
    vlSelf->__VdfgTmp_h1fd7069f__0[3U] = ((0x40000U 
                                           | vlSelf->__VdfgTmp_hd462b4a7__0[3U]) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])));
    vlSelf->__VdfgTmp_h6106a37a__0[0U] = ((vlSelf->__VdfgTmp_hd462b4a7__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_hd462b4a7__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_hd462b4a7__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])))));
    vlSelf->__VdfgTmp_h6106a37a__0[1U] = ((vlSelf->__VdfgTmp_hd462b4a7__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_hd462b4a7__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_hd462b4a7__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])))));
    vlSelf->__VdfgTmp_h6106a37a__0[2U] = ((vlSelf->__VdfgTmp_hd462b4a7__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_hd462b4a7__0[2U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_hd462b4a7__0[2U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])))));
    vlSelf->__VdfgTmp_h6106a37a__0[3U] = (((0x40000U 
                                            | vlSelf->__VdfgTmp_hd462b4a7__0[3U]) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]) 
                                                | (((0x40000U 
                                                     | vlSelf->__VdfgTmp_hd462b4a7__0[3U]) 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                                   | ((0x40000U 
                                                       | (vlSelf->__VdfgTmp_hd462b4a7__0[3U] 
                                                          | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U])) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h4eb69f7e__0[0U] & vlSelf->__VdfgTmp_hdf2d4ee4__0[0U]) 
           | ((vlSelf->__VdfgTmp_hdf2d4ee4__0[0U] & 
               vlSelf->__VdfgTmp_h769702d4__0[0U]) 
              | ((vlSelf->__VdfgTmp_h769702d4__0[0U] 
                  & vlSelf->__VdfgTmp_h270c8384__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h4eb69f7e__0[0U] 
                     & vlSelf->__VdfgTmp_h769702d4__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h4eb69f7e__0[0U] 
                        | vlSelf->__VdfgTmp_hdf2d4ee4__0[0U]) 
                       & vlSelf->__VdfgTmp_h270c8384__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h4eb69f7e__0[1U] & vlSelf->__VdfgTmp_hdf2d4ee4__0[1U]) 
           | ((vlSelf->__VdfgTmp_hdf2d4ee4__0[1U] & 
               vlSelf->__VdfgTmp_h769702d4__0[1U]) 
              | ((vlSelf->__VdfgTmp_h769702d4__0[1U] 
                  & vlSelf->__VdfgTmp_h270c8384__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h4eb69f7e__0[1U] 
                     & vlSelf->__VdfgTmp_h769702d4__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h4eb69f7e__0[1U] 
                        | vlSelf->__VdfgTmp_hdf2d4ee4__0[1U]) 
                       & vlSelf->__VdfgTmp_h270c8384__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h4eb69f7e__0[2U] & vlSelf->__VdfgTmp_hdf2d4ee4__0[2U]) 
           | ((vlSelf->__VdfgTmp_hdf2d4ee4__0[2U] & 
               vlSelf->__VdfgTmp_h769702d4__0[2U]) 
              | ((vlSelf->__VdfgTmp_h769702d4__0[2U] 
                  & vlSelf->__VdfgTmp_h270c8384__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h4eb69f7e__0[2U] 
                     & vlSelf->__VdfgTmp_h769702d4__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h4eb69f7e__0[2U] 
                        | vlSelf->__VdfgTmp_hdf2d4ee4__0[2U]) 
                       & vlSelf->__VdfgTmp_h270c8384__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h4eb69f7e__0[3U] & vlSelf->__VdfgTmp_hdf2d4ee4__0[3U]) 
           | ((vlSelf->__VdfgTmp_hdf2d4ee4__0[3U] & 
               vlSelf->__VdfgTmp_h769702d4__0[3U]) 
              | ((vlSelf->__VdfgTmp_h769702d4__0[3U] 
                  & vlSelf->__VdfgTmp_h270c8384__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h4eb69f7e__0[3U] 
                     & vlSelf->__VdfgTmp_h769702d4__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h4eb69f7e__0[3U] 
                        | vlSelf->__VdfgTmp_hdf2d4ee4__0[3U]) 
                       & vlSelf->__VdfgTmp_h270c8384__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h4eb69f7e__0[0U] ^ (vlSelf->__VdfgTmp_hdf2d4ee4__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h769702d4__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h270c8384__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h4eb69f7e__0[1U] ^ (vlSelf->__VdfgTmp_hdf2d4ee4__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h769702d4__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h270c8384__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h4eb69f7e__0[2U] ^ (vlSelf->__VdfgTmp_hdf2d4ee4__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h769702d4__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h270c8384__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h4eb69f7e__0[3U] ^ (vlSelf->__VdfgTmp_hdf2d4ee4__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h769702d4__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h270c8384__0[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h062aa866__0[0U] & vlSelf->__VdfgTmp_he55e6e02__0[0U]) 
           | ((vlSelf->__VdfgTmp_he55e6e02__0[0U] & 
               vlSelf->__VdfgTmp_h253db874__0[0U]) 
              | ((vlSelf->__VdfgTmp_h253db874__0[0U] 
                  & vlSelf->__VdfgTmp_h5b916b27__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h062aa866__0[0U] 
                     & vlSelf->__VdfgTmp_h253db874__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h062aa866__0[0U] 
                        | vlSelf->__VdfgTmp_he55e6e02__0[0U]) 
                       & vlSelf->__VdfgTmp_h5b916b27__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h062aa866__0[1U] & vlSelf->__VdfgTmp_he55e6e02__0[1U]) 
           | ((vlSelf->__VdfgTmp_he55e6e02__0[1U] & 
               vlSelf->__VdfgTmp_h253db874__0[1U]) 
              | ((vlSelf->__VdfgTmp_h253db874__0[1U] 
                  & vlSelf->__VdfgTmp_h5b916b27__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h062aa866__0[1U] 
                     & vlSelf->__VdfgTmp_h253db874__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h062aa866__0[1U] 
                        | vlSelf->__VdfgTmp_he55e6e02__0[1U]) 
                       & vlSelf->__VdfgTmp_h5b916b27__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h062aa866__0[2U] & vlSelf->__VdfgTmp_he55e6e02__0[2U]) 
           | ((vlSelf->__VdfgTmp_he55e6e02__0[2U] & 
               vlSelf->__VdfgTmp_h253db874__0[2U]) 
              | ((vlSelf->__VdfgTmp_h253db874__0[2U] 
                  & vlSelf->__VdfgTmp_h5b916b27__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h062aa866__0[2U] 
                     & vlSelf->__VdfgTmp_h253db874__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h062aa866__0[2U] 
                        | vlSelf->__VdfgTmp_he55e6e02__0[2U]) 
                       & vlSelf->__VdfgTmp_h5b916b27__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h062aa866__0[3U] & vlSelf->__VdfgTmp_he55e6e02__0[3U]) 
           | ((vlSelf->__VdfgTmp_he55e6e02__0[3U] & 
               vlSelf->__VdfgTmp_h253db874__0[3U]) 
              | ((vlSelf->__VdfgTmp_h253db874__0[3U] 
                  & vlSelf->__VdfgTmp_h5b916b27__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h062aa866__0[3U] 
                     & vlSelf->__VdfgTmp_h253db874__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h062aa866__0[3U] 
                        | vlSelf->__VdfgTmp_he55e6e02__0[3U]) 
                       & vlSelf->__VdfgTmp_h5b916b27__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h062aa866__0[0U] ^ (vlSelf->__VdfgTmp_he55e6e02__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h253db874__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h5b916b27__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h062aa866__0[1U] ^ (vlSelf->__VdfgTmp_he55e6e02__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h253db874__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h5b916b27__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h062aa866__0[2U] ^ (vlSelf->__VdfgTmp_he55e6e02__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h253db874__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h5b916b27__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h062aa866__0[3U] ^ (vlSelf->__VdfgTmp_he55e6e02__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h253db874__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h5b916b27__0[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h842981dd__0[0U] & vlSelf->__VdfgTmp_h870317ba__0[0U]) 
           | ((vlSelf->__VdfgTmp_h870317ba__0[0U] & 
               vlSelf->__VdfgTmp_hc9c11027__0[0U]) 
              | ((vlSelf->__VdfgTmp_hc9c11027__0[0U] 
                  & vlSelf->__VdfgTmp_hc2bb2add__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h842981dd__0[0U] 
                     & vlSelf->__VdfgTmp_hc9c11027__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h842981dd__0[0U] 
                        | vlSelf->__VdfgTmp_h870317ba__0[0U]) 
                       & vlSelf->__VdfgTmp_hc2bb2add__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h842981dd__0[1U] & vlSelf->__VdfgTmp_h870317ba__0[1U]) 
           | ((vlSelf->__VdfgTmp_h870317ba__0[1U] & 
               vlSelf->__VdfgTmp_hc9c11027__0[1U]) 
              | ((vlSelf->__VdfgTmp_hc9c11027__0[1U] 
                  & vlSelf->__VdfgTmp_hc2bb2add__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h842981dd__0[1U] 
                     & vlSelf->__VdfgTmp_hc9c11027__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h842981dd__0[1U] 
                        | vlSelf->__VdfgTmp_h870317ba__0[1U]) 
                       & vlSelf->__VdfgTmp_hc2bb2add__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h842981dd__0[2U] & vlSelf->__VdfgTmp_h870317ba__0[2U]) 
           | ((vlSelf->__VdfgTmp_h870317ba__0[2U] & 
               vlSelf->__VdfgTmp_hc9c11027__0[2U]) 
              | ((vlSelf->__VdfgTmp_hc9c11027__0[2U] 
                  & vlSelf->__VdfgTmp_hc2bb2add__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h842981dd__0[2U] 
                     & vlSelf->__VdfgTmp_hc9c11027__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h842981dd__0[2U] 
                        | vlSelf->__VdfgTmp_h870317ba__0[2U]) 
                       & vlSelf->__VdfgTmp_hc2bb2add__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h842981dd__0[3U] & vlSelf->__VdfgTmp_h870317ba__0[3U]) 
           | ((vlSelf->__VdfgTmp_h870317ba__0[3U] & 
               vlSelf->__VdfgTmp_hc9c11027__0[3U]) 
              | ((vlSelf->__VdfgTmp_hc9c11027__0[3U] 
                  & vlSelf->__VdfgTmp_hc2bb2add__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h842981dd__0[3U] 
                     & vlSelf->__VdfgTmp_hc9c11027__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h842981dd__0[3U] 
                        | vlSelf->__VdfgTmp_h870317ba__0[3U]) 
                       & vlSelf->__VdfgTmp_hc2bb2add__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h842981dd__0[0U] ^ (vlSelf->__VdfgTmp_h870317ba__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc9c11027__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hc2bb2add__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h842981dd__0[1U] ^ (vlSelf->__VdfgTmp_h870317ba__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc9c11027__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hc2bb2add__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h842981dd__0[2U] ^ (vlSelf->__VdfgTmp_h870317ba__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc9c11027__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hc2bb2add__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h842981dd__0[3U] ^ (vlSelf->__VdfgTmp_h870317ba__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc9c11027__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hc2bb2add__0[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h3653544f__0[0U] & vlSelf->__VdfgTmp_h291def22__0[0U]) 
           | ((vlSelf->__VdfgTmp_h291def22__0[0U] & 
               vlSelf->__VdfgTmp_h1fd7069f__0[0U]) 
              | ((vlSelf->__VdfgTmp_h1fd7069f__0[0U] 
                  & vlSelf->__VdfgTmp_h6106a37a__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h3653544f__0[0U] 
                     & vlSelf->__VdfgTmp_h1fd7069f__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h3653544f__0[0U] 
                        | vlSelf->__VdfgTmp_h291def22__0[0U]) 
                       & vlSelf->__VdfgTmp_h6106a37a__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h3653544f__0[1U] & vlSelf->__VdfgTmp_h291def22__0[1U]) 
           | ((vlSelf->__VdfgTmp_h291def22__0[1U] & 
               vlSelf->__VdfgTmp_h1fd7069f__0[1U]) 
              | ((vlSelf->__VdfgTmp_h1fd7069f__0[1U] 
                  & vlSelf->__VdfgTmp_h6106a37a__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h3653544f__0[1U] 
                     & vlSelf->__VdfgTmp_h1fd7069f__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h3653544f__0[1U] 
                        | vlSelf->__VdfgTmp_h291def22__0[1U]) 
                       & vlSelf->__VdfgTmp_h6106a37a__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h3653544f__0[2U] & vlSelf->__VdfgTmp_h291def22__0[2U]) 
           | ((vlSelf->__VdfgTmp_h291def22__0[2U] & 
               vlSelf->__VdfgTmp_h1fd7069f__0[2U]) 
              | ((vlSelf->__VdfgTmp_h1fd7069f__0[2U] 
                  & vlSelf->__VdfgTmp_h6106a37a__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h3653544f__0[2U] 
                     & vlSelf->__VdfgTmp_h1fd7069f__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h3653544f__0[2U] 
                        | vlSelf->__VdfgTmp_h291def22__0[2U]) 
                       & vlSelf->__VdfgTmp_h6106a37a__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h3653544f__0[3U] & vlSelf->__VdfgTmp_h291def22__0[3U]) 
           | ((vlSelf->__VdfgTmp_h291def22__0[3U] & 
               vlSelf->__VdfgTmp_h1fd7069f__0[3U]) 
              | ((vlSelf->__VdfgTmp_h1fd7069f__0[3U] 
                  & vlSelf->__VdfgTmp_h6106a37a__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h3653544f__0[3U] 
                     & vlSelf->__VdfgTmp_h1fd7069f__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h3653544f__0[3U] 
                        | vlSelf->__VdfgTmp_h291def22__0[3U]) 
                       & vlSelf->__VdfgTmp_h6106a37a__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h3653544f__0[0U] ^ (vlSelf->__VdfgTmp_h291def22__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h1fd7069f__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h6106a37a__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h3653544f__0[1U] ^ (vlSelf->__VdfgTmp_h291def22__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h1fd7069f__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h6106a37a__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h3653544f__0[2U] ^ (vlSelf->__VdfgTmp_h291def22__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h1fd7069f__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h6106a37a__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h3653544f__0[3U] ^ (vlSelf->__VdfgTmp_h291def22__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h1fd7069f__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h6106a37a__0[3U])));
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

VL_INLINE_OPT void VPvuTop_IntDivider___nba_sequent__TOP__PvuTop__DOT__div__DOT__intdivider__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___nba_sequent__TOP__PvuTop__DOT__div__DOT__intdivider__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h8219940e__0;
    VlWide<4>/*127:0*/ __Vtemp_hfb5b6400__0;
    VlWide<4>/*127:0*/ __Vtemp_hcc03a59e__0;
    VlWide<4>/*127:0*/ __Vtemp_h4abb38d2__0;
    VlWide<4>/*127:0*/ __Vtemp_h1b177089__0;
    VlWide<4>/*127:0*/ __Vtemp_h3a18fc9c__0;
    VlWide<4>/*127:0*/ __Vtemp_hb6512ed9__0;
    VlWide<4>/*127:0*/ __Vtemp_he38d074a__0;
    VlWide<4>/*127:0*/ __Vtemp_h04620793__0;
    VlWide<4>/*127:0*/ __Vtemp_ha28c0755__0;
    VlWide<4>/*127:0*/ __Vtemp_h1c358ea1__0;
    VlWide<4>/*127:0*/ __Vtemp_ha04ae60e__0;
    VlWide<4>/*127:0*/ __Vtemp_h44832ece__0;
    VlWide<4>/*127:0*/ __Vtemp_hf7a95735__0;
    VlWide<4>/*127:0*/ __Vtemp_h0a328b6d__0;
    VlWide<4>/*127:0*/ __Vtemp_hace9f881__0;
    VlWide<4>/*127:0*/ __Vtemp_h47420661__0;
    VlWide<4>/*127:0*/ __Vtemp_h79915217__0;
    VlWide<4>/*127:0*/ __Vtemp_hfa5b0b80__0;
    VlWide<4>/*127:0*/ __Vtemp_hde5f5d16__0;
    VlWide<4>/*127:0*/ __Vtemp_ha57d55aa__0;
    VlWide<4>/*127:0*/ __Vtemp_h271cdee9__0;
    VlWide<4>/*127:0*/ __Vtemp_hb1f2c275__0;
    VlWide<4>/*127:0*/ __Vtemp_h033604a2__0;
    VlWide<4>/*127:0*/ __Vtemp_heb4c0c30__0;
    VlWide<4>/*127:0*/ __Vtemp_h38228efb__0;
    VlWide<4>/*127:0*/ __Vtemp_h52082521__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7ef5087__0;
    VlWide<4>/*127:0*/ __Vtemp_h0c5eb545__0;
    VlWide<4>/*127:0*/ __Vtemp_h8b852cda__0;
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"multiplier = %b\n",
                   61,(0x1ffffffffffffffeULL & (((QData)((IData)(
                                                                 vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                                    << 3U) 
                                                   | (0x7fffffffeULL 
                                                      & ((QData)((IData)(
                                                                         vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])) 
                                                         >> 0x1dU))))));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP.reset))))) {
        __Vtemp_h8219940e__0[0U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0U];
        __Vtemp_h8219940e__0[1U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[1U];
        __Vtemp_h8219940e__0[2U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[2U];
        __Vtemp_h8219940e__0[3U] = (0xffffffU & vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[3U]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[0] = %x\n",
                   120,__Vtemp_h8219940e__0.data());
        __Vtemp_hfb5b6400__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[4U] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[3U] 
                                               >> 0x18U));
        __Vtemp_hfb5b6400__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[5U] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[4U] 
                                               >> 0x18U));
        __Vtemp_hfb5b6400__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[6U] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[5U] 
                                               >> 0x18U));
        __Vtemp_hfb5b6400__0[3U] = (0xffffffU & ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[7U] 
                                                  << 8U) 
                                                 | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[6U] 
                                                    >> 0x18U)));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[1] = %x\n",
                   120,__Vtemp_hfb5b6400__0.data());
        __Vtemp_hcc03a59e__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[8U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[7U] 
                                                  >> 0x10U));
        __Vtemp_hcc03a59e__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[9U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[8U] 
                                                  >> 0x10U));
        __Vtemp_hcc03a59e__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0xaU] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[9U] 
                                                  >> 0x10U));
        __Vtemp_hcc03a59e__0[3U] = (0xffffffU & ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0xbU] 
                                                  << 0x10U) 
                                                 | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0xaU] 
                                                    >> 0x10U)));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[2] = %x\n",
                   120,__Vtemp_hcc03a59e__0.data());
        __Vtemp_h4abb38d2__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0xcU] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0xbU] 
                                                  >> 8U));
        __Vtemp_h4abb38d2__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0xdU] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0xcU] 
                                                  >> 8U));
        __Vtemp_h4abb38d2__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0xeU] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0xdU] 
                                                  >> 8U));
        __Vtemp_h4abb38d2__0[3U] = (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0xeU] 
                                    >> 8U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[3] = %x\n",
                   120,__Vtemp_h4abb38d2__0.data());
        __Vtemp_h1b177089__0[0U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0xfU];
        __Vtemp_h1b177089__0[1U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x10U];
        __Vtemp_h1b177089__0[2U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x11U];
        __Vtemp_h1b177089__0[3U] = (0xffffffU & vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x12U]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[4] = %x\n",
                   120,__Vtemp_h1b177089__0.data());
        __Vtemp_h3a18fc9c__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x13U] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x12U] 
                                               >> 0x18U));
        __Vtemp_h3a18fc9c__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x14U] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x13U] 
                                               >> 0x18U));
        __Vtemp_h3a18fc9c__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x15U] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x14U] 
                                               >> 0x18U));
        __Vtemp_h3a18fc9c__0[3U] = (0xffffffU & ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x16U] 
                                                  << 8U) 
                                                 | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x15U] 
                                                    >> 0x18U)));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[5] = %x\n",
                   120,__Vtemp_h3a18fc9c__0.data());
        __Vtemp_hb6512ed9__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x17U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x16U] 
                                                  >> 0x10U));
        __Vtemp_hb6512ed9__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x18U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x17U] 
                                                  >> 0x10U));
        __Vtemp_hb6512ed9__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x19U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x18U] 
                                                  >> 0x10U));
        __Vtemp_hb6512ed9__0[3U] = (0xffffffU & ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1aU] 
                                                  << 0x10U) 
                                                 | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x19U] 
                                                    >> 0x10U)));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[6] = %x\n",
                   120,__Vtemp_hb6512ed9__0.data());
        __Vtemp_he38d074a__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1bU] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1aU] 
                                                  >> 8U));
        __Vtemp_he38d074a__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1cU] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1bU] 
                                                  >> 8U));
        __Vtemp_he38d074a__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1dU] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1cU] 
                                                  >> 8U));
        __Vtemp_he38d074a__0[3U] = (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1dU] 
                                    >> 8U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[7] = %x\n",
                   120,__Vtemp_he38d074a__0.data());
        __Vtemp_h04620793__0[0U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1eU];
        __Vtemp_h04620793__0[1U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1fU];
        __Vtemp_h04620793__0[2U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x20U];
        __Vtemp_h04620793__0[3U] = (0xffffffU & vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x21U]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[ 8] = %x\n",
                   120,__Vtemp_h04620793__0.data());
        __Vtemp_ha28c0755__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x22U] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x21U] 
                                               >> 0x18U));
        __Vtemp_ha28c0755__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x23U] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x22U] 
                                               >> 0x18U));
        __Vtemp_ha28c0755__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x24U] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x23U] 
                                               >> 0x18U));
        __Vtemp_ha28c0755__0[3U] = (0xffffffU & ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x25U] 
                                                  << 8U) 
                                                 | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x24U] 
                                                    >> 0x18U)));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[ 9] = %x\n",
                   120,__Vtemp_ha28c0755__0.data());
        __Vtemp_h1c358ea1__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x26U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x25U] 
                                                  >> 0x10U));
        __Vtemp_h1c358ea1__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x27U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x26U] 
                                                  >> 0x10U));
        __Vtemp_h1c358ea1__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x28U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x27U] 
                                                  >> 0x10U));
        __Vtemp_h1c358ea1__0[3U] = (0xffffffU & ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x29U] 
                                                  << 0x10U) 
                                                 | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x28U] 
                                                    >> 0x10U)));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[10] = %x\n",
                   120,__Vtemp_h1c358ea1__0.data());
        __Vtemp_ha04ae60e__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x2aU] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x29U] 
                                                  >> 8U));
        __Vtemp_ha04ae60e__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x2bU] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x2aU] 
                                                  >> 8U));
        __Vtemp_ha04ae60e__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x2cU] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x2bU] 
                                                  >> 8U));
        __Vtemp_ha04ae60e__0[3U] = (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x2cU] 
                                    >> 8U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[11] = %x\n",
                   120,__Vtemp_ha04ae60e__0.data());
        __Vtemp_h44832ece__0[0U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x2dU];
        __Vtemp_h44832ece__0[1U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x2eU];
        __Vtemp_h44832ece__0[2U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x2fU];
        __Vtemp_h44832ece__0[3U] = (0xffffffU & vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x30U]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[12] = %x\n",
                   120,__Vtemp_h44832ece__0.data());
        __Vtemp_hf7a95735__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x31U] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x30U] 
                                               >> 0x18U));
        __Vtemp_hf7a95735__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x32U] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x31U] 
                                               >> 0x18U));
        __Vtemp_hf7a95735__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x33U] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x32U] 
                                               >> 0x18U));
        __Vtemp_hf7a95735__0[3U] = (0xffffffU & ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x34U] 
                                                  << 8U) 
                                                 | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x33U] 
                                                    >> 0x18U)));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[13] = %x\n",
                   120,__Vtemp_hf7a95735__0.data());
        __Vtemp_h0a328b6d__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x35U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x34U] 
                                                  >> 0x10U));
        __Vtemp_h0a328b6d__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x36U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x35U] 
                                                  >> 0x10U));
        __Vtemp_h0a328b6d__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x37U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x36U] 
                                                  >> 0x10U));
        __Vtemp_h0a328b6d__0[3U] = (0xffffffU & ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x38U] 
                                                  << 0x10U) 
                                                 | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x37U] 
                                                    >> 0x10U)));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[14] = %x\n",
                   120,__Vtemp_h0a328b6d__0.data());
        __Vtemp_hace9f881__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x39U] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x38U] 
                                                  >> 8U));
        __Vtemp_hace9f881__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3aU] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x39U] 
                                                  >> 8U));
        __Vtemp_hace9f881__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3bU] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3aU] 
                                                  >> 8U));
        __Vtemp_hace9f881__0[3U] = (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3bU] 
                                    >> 8U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[15] = %x\n",
                   120,__Vtemp_hace9f881__0.data());
        __Vtemp_h47420661__0[0U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3cU];
        __Vtemp_h47420661__0[1U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3dU];
        __Vtemp_h47420661__0[2U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3eU];
        __Vtemp_h47420661__0[3U] = (0xffffffU & vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3fU]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[16] = %x\n",
                   120,__Vtemp_h47420661__0.data());
        __Vtemp_h79915217__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x40U] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3fU] 
                                               >> 0x18U));
        __Vtemp_h79915217__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x41U] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x40U] 
                                               >> 0x18U));
        __Vtemp_h79915217__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x42U] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x41U] 
                                               >> 0x18U));
        __Vtemp_h79915217__0[3U] = (0xffffffU & ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x43U] 
                                                  << 8U) 
                                                 | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x42U] 
                                                    >> 0x18U)));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[17] = %x\n",
                   120,__Vtemp_h79915217__0.data());
        __Vtemp_hfa5b0b80__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x44U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x43U] 
                                                  >> 0x10U));
        __Vtemp_hfa5b0b80__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x45U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x44U] 
                                                  >> 0x10U));
        __Vtemp_hfa5b0b80__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x46U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x45U] 
                                                  >> 0x10U));
        __Vtemp_hfa5b0b80__0[3U] = (0xffffffU & ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x47U] 
                                                  << 0x10U) 
                                                 | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x46U] 
                                                    >> 0x10U)));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[18] = %x\n",
                   120,__Vtemp_hfa5b0b80__0.data());
        __Vtemp_hde5f5d16__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x48U] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x47U] 
                                                  >> 8U));
        __Vtemp_hde5f5d16__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x49U] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x48U] 
                                                  >> 8U));
        __Vtemp_hde5f5d16__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x4aU] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x49U] 
                                                  >> 8U));
        __Vtemp_hde5f5d16__0[3U] = (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x4aU] 
                                    >> 8U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[19] = %x\n",
                   120,__Vtemp_hde5f5d16__0.data());
        __Vtemp_ha57d55aa__0[0U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x4bU];
        __Vtemp_ha57d55aa__0[1U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x4cU];
        __Vtemp_ha57d55aa__0[2U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x4dU];
        __Vtemp_ha57d55aa__0[3U] = (0xffffffU & vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x4eU]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[20] = %x\n",
                   120,__Vtemp_ha57d55aa__0.data());
        __Vtemp_h271cdee9__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x4fU] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x4eU] 
                                               >> 0x18U));
        __Vtemp_h271cdee9__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x50U] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x4fU] 
                                               >> 0x18U));
        __Vtemp_h271cdee9__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x51U] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x50U] 
                                               >> 0x18U));
        __Vtemp_h271cdee9__0[3U] = (0xffffffU & ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x52U] 
                                                  << 8U) 
                                                 | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x51U] 
                                                    >> 0x18U)));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[21] = %x\n",
                   120,__Vtemp_h271cdee9__0.data());
        __Vtemp_hb1f2c275__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x53U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x52U] 
                                                  >> 0x10U));
        __Vtemp_hb1f2c275__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x54U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x53U] 
                                                  >> 0x10U));
        __Vtemp_hb1f2c275__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x55U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x54U] 
                                                  >> 0x10U));
        __Vtemp_hb1f2c275__0[3U] = (0xffffffU & ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x56U] 
                                                  << 0x10U) 
                                                 | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x55U] 
                                                    >> 0x10U)));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[22] = %x\n",
                   120,__Vtemp_hb1f2c275__0.data());
        __Vtemp_h033604a2__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x57U] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x56U] 
                                                  >> 8U));
        __Vtemp_h033604a2__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x58U] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x57U] 
                                                  >> 8U));
        __Vtemp_h033604a2__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x59U] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x58U] 
                                                  >> 8U));
        __Vtemp_h033604a2__0[3U] = (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x59U] 
                                    >> 8U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[23] = %x\n",
                   120,__Vtemp_h033604a2__0.data());
        __Vtemp_heb4c0c30__0[0U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x5aU];
        __Vtemp_heb4c0c30__0[1U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x5bU];
        __Vtemp_heb4c0c30__0[2U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x5cU];
        __Vtemp_heb4c0c30__0[3U] = (0xffffffU & vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x5dU]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[24] = %x\n",
                   120,__Vtemp_heb4c0c30__0.data());
        __Vtemp_h38228efb__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x5eU] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x5dU] 
                                               >> 0x18U));
        __Vtemp_h38228efb__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x5fU] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x5eU] 
                                               >> 0x18U));
        __Vtemp_h38228efb__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x60U] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x5fU] 
                                               >> 0x18U));
        __Vtemp_h38228efb__0[3U] = (0xffffffU & ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x61U] 
                                                  << 8U) 
                                                 | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x60U] 
                                                    >> 0x18U)));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[25] = %x\n",
                   120,__Vtemp_h38228efb__0.data());
        __Vtemp_h52082521__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x62U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x61U] 
                                                  >> 0x10U));
        __Vtemp_h52082521__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x63U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x62U] 
                                                  >> 0x10U));
        __Vtemp_h52082521__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x64U] 
                                     << 0x10U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x63U] 
                                                  >> 0x10U));
        __Vtemp_h52082521__0[3U] = (0xffffffU & ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x65U] 
                                                  << 0x10U) 
                                                 | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x64U] 
                                                    >> 0x10U)));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[26] = %x\n",
                   120,__Vtemp_h52082521__0.data());
        __Vtemp_ha7ef5087__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x66U] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x65U] 
                                                  >> 8U));
        __Vtemp_ha7ef5087__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x67U] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x66U] 
                                                  >> 8U));
        __Vtemp_ha7ef5087__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x68U] 
                                     << 0x18U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x67U] 
                                                  >> 8U));
        __Vtemp_ha7ef5087__0[3U] = (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x68U] 
                                    >> 8U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[27] = %x\n",
                   120,__Vtemp_ha7ef5087__0.data());
        __Vtemp_h0c5eb545__0[0U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x69U];
        __Vtemp_h0c5eb545__0[1U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x6aU];
        __Vtemp_h0c5eb545__0[2U] = vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x6bU];
        __Vtemp_h0c5eb545__0[3U] = (0xffffffU & vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x6cU]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[28] = %x\n",
                   120,__Vtemp_h0c5eb545__0.data());
        __Vtemp_h8b852cda__0[0U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x6dU] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x6cU] 
                                               >> 0x18U));
        __Vtemp_h8b852cda__0[1U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x6eU] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x6dU] 
                                               >> 0x18U));
        __Vtemp_h8b852cda__0[2U] = ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x6fU] 
                                     << 8U) | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x6eU] 
                                               >> 0x18U));
        __Vtemp_h8b852cda__0[3U] = (0xffffffU & ((vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x70U] 
                                                  << 8U) 
                                                 | (vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods[0x6fU] 
                                                    >> 0x18U)));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[29] = %x\n",
                   120,__Vtemp_h8b852cda__0.data());
    }
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h51949c10__0;
    VlWide<3>/*95:0*/ __Vtemp_h8aae7fae__0;
    VlWide<3>/*95:0*/ __Vtemp_hb1930dda__0;
    VlWide<3>/*95:0*/ __Vtemp_hd285f68c__0;
    VlWide<3>/*95:0*/ __Vtemp_hf7abd9f8__0;
    VlWide<3>/*95:0*/ __Vtemp_h2a7133a0__0;
    VlWide<3>/*95:0*/ __Vtemp_hd346330f__0;
    VlWide<3>/*95:0*/ __Vtemp_h4b912a01__0;
    VlWide<3>/*95:0*/ __Vtemp_hfd8d7096__0;
    VlWide<3>/*95:0*/ __Vtemp_ha93c6972__0;
    VlWide<3>/*95:0*/ __Vtemp_h98181313__0;
    // Body
    __Vtemp_h51949c10__0[0U] = (IData)((0xfffffffffffffffULL 
                                        & VL_DIV_QQQ(60, 0x40000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0)))));
    __Vtemp_h51949c10__0[1U] = (IData)(((0xfffffffffffffffULL 
                                         & VL_DIV_QQQ(60, 0x40000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0)))) 
                                        >> 0x20U));
    __Vtemp_h51949c10__0[2U] = 0U;
    __Vtemp_h8aae7fae__0[0U] = (IData)((0xfffffffffffffffULL 
                                        & (0x80000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0)) 
                                              * (0xfffffffffffffffULL 
                                                 & VL_DIV_QQQ(60, 0x40000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0))))))));
    __Vtemp_h8aae7fae__0[1U] = (IData)(((0xfffffffffffffffULL 
                                         & (0x80000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0)) 
                                               * (0xfffffffffffffffULL 
                                                  & VL_DIV_QQQ(60, 0x40000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0))))))) 
                                        >> 0x20U));
    __Vtemp_h8aae7fae__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_hb1930dda__0, __Vtemp_h51949c10__0, __Vtemp_h8aae7fae__0);
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U] 
        = __Vtemp_hb1930dda__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U] 
        = __Vtemp_hb1930dda__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U] 
        = (0x3ffffffU & __Vtemp_hb1930dda__0[2U]);
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd285f68c__0, vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full, 0x1eU);
    __Vtemp_hf7abd9f8__0[0U] = __Vtemp_hd285f68c__0[0U];
    __Vtemp_hf7abd9f8__0[1U] = __Vtemp_hd285f68c__0[1U];
    __Vtemp_hf7abd9f8__0[2U] = (0x3ffffffU & __Vtemp_hd285f68c__0[2U]);
    __Vtemp_h2a7133a0__0[0U] = (IData)((0xfffffffffffffffULL 
                                        & (0x80000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0)) 
                                              * (0xfffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U])) 
                                                     << 0x22U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U])) 
                                                        << 2U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U])) 
                                                          >> 0x1eU))))))));
    __Vtemp_h2a7133a0__0[1U] = (IData)(((0xfffffffffffffffULL 
                                         & (0x80000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0)) 
                                               * (0xfffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U])) 
                                                      << 0x22U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U])) 
                                                         << 2U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U])) 
                                                           >> 0x1eU))))))) 
                                        >> 0x20U));
    __Vtemp_h2a7133a0__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_hd346330f__0, __Vtemp_hf7abd9f8__0, __Vtemp_h2a7133a0__0);
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U] 
        = __Vtemp_hd346330f__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U] 
        = __Vtemp_hd346330f__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U] 
        = (0x3ffffffU & __Vtemp_hd346330f__0[2U]);
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h4b912a01__0, vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full, 0x1eU);
    __Vtemp_hfd8d7096__0[0U] = __Vtemp_h4b912a01__0[0U];
    __Vtemp_hfd8d7096__0[1U] = __Vtemp_h4b912a01__0[1U];
    __Vtemp_hfd8d7096__0[2U] = (0x3ffffffU & __Vtemp_h4b912a01__0[2U]);
    __Vtemp_ha93c6972__0[0U] = (IData)((0xfffffffffffffffULL 
                                        & (0x80000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0)) 
                                              * (0xfffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U])) 
                                                     << 0x22U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U])) 
                                                        << 2U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U])) 
                                                          >> 0x1eU))))))));
    __Vtemp_ha93c6972__0[1U] = (IData)(((0xfffffffffffffffULL 
                                         & (0x80000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0)) 
                                               * (0xfffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U])) 
                                                      << 0x22U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U])) 
                                                         << 2U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U])) 
                                                           >> 0x1eU))))))) 
                                        >> 0x20U));
    __Vtemp_ha93c6972__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_h98181313__0, __Vtemp_hfd8d7096__0, __Vtemp_ha93c6972__0);
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
        = __Vtemp_h98181313__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
        = __Vtemp_h98181313__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
        = (0x3ffffffU & __Vtemp_h98181313__0[2U]);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 1U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 1U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x1bU))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x1bU))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                   >> 0x1dU)) | (2U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                   >> 0x1dU)) | (4U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x17U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x17U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x17U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x17U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x17U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x17U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 3U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 3U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 5U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 5U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 7U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 7U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 9U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 9U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x13U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x13U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x15U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x15U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x17U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x17U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x19U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x19U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 1U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 1U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 3U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 3U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 5U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 5U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 7U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 7U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 9U))) | (2U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 9U))) | (4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x13U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x13U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x13U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x13U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x15U))) | (2U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x15U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x15U))) | (4U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x15U))));
    vlSelf->__VdfgTmp_h339331ad__0 = (1U & (~ ((0U 
                                                == 
                                                (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                 >> 0x1eU)) 
                                               | (1U 
                                                  == 
                                                  (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                   >> 0x1eU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (6U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x1bU))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                   >> 0x1dU)) | (6U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 1U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (6U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x19U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x15U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x15U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 3U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 5U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 7U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 9U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x13U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x15U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x17U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 1U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 3U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 5U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 7U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 9U))) | (6U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x13U))) | (6U == (7U & 
                                               (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x13U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_h339331ad__0) 
           & ((2U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                      >> 0x1eU)) | (3U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                           >> 0x1eU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                              << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                        >> 0x1fU)))) 
               | ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                 << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                           >> 0x1fU)))) 
                  | ((2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                              >> 0x1fU)))) 
                     | (3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                      << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                >> 0x1fU)))))))) 
           & ((4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                       >> 0x1fU)))) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0x1bU))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x1bU))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x1bU))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x1bU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 0x1bU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                       >> 0x1dU)) | ((1U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                             >> 0x1dU)) 
                                     | ((2U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1dU)) 
                                        | (3U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 0x1dU)))))) 
           & ((4U == (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                      >> 0x1dU)) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 1U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 1U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                              << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                        >> 0x1fU)))) 
               | ((1U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                 << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x1fU)))) 
                  | ((2U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                    << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                              >> 0x1fU)))) 
                     | (3U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                      << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1fU)))))))) 
           & ((4U == (7U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             << 1U) | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                       >> 0x1fU)))) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0x19U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x19U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x19U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x19U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 0x19U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 0x15U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0x15U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 0x15U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0x15U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 0x15U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 3U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 3U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 5U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 5U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 7U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 7U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 9U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 9U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0xbU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 0xbU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 0xdU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0xfU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 0xfU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x11U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 0x11U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0x13U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x13U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x13U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x13U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 0x13U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0x15U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x15U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x15U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x15U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 0x15U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0x17U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x17U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x17U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x17U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                            >> 0x17U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 1U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 1U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 3U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 3U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 5U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 5U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 7U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 7U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 9U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 9U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0xbU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 0xbU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 0xdU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0xfU))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 0xfU))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0x11U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 0x11U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 0x13U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0x13U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 0x13U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0x13U))))))) 
           & ((4U == (7U & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                            >> 0x13U))) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__1(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__1\n"); );
    // Init
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0;
    VL_ZERO_W(120, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0);
    VlWide<4>/*127:0*/ __Vtemp_h89f91ab6__0;
    VlWide<63>/*2015:0*/ __Vtemp_h0cddaa1a__0;
    VlWide<65>/*2079:0*/ __Vtemp_h57e94e67__0;
    VlWide<65>/*2079:0*/ __Vtemp_hc890542c__0;
    VlWide<65>/*2079:0*/ __Vtemp_h663f772c__0;
    VlWide<67>/*2143:0*/ __Vtemp_hf924b3c4__0;
    VlWide<67>/*2143:0*/ __Vtemp_he9ea4533__0;
    VlWide<69>/*2207:0*/ __Vtemp_hbe090f2f__0;
    VlWide<69>/*2207:0*/ __Vtemp_hae8e8145__0;
    VlWide<69>/*2207:0*/ __Vtemp_h09d88698__0;
    VlWide<71>/*2271:0*/ __Vtemp_hd1db61cd__0;
    VlWide<71>/*2271:0*/ __Vtemp_h95b2dff4__0;
    VlWide<73>/*2335:0*/ __Vtemp_h25ead714__0;
    VlWide<73>/*2335:0*/ __Vtemp_h5120e0a7__0;
    VlWide<73>/*2335:0*/ __Vtemp_h64038db8__0;
    VlWide<75>/*2399:0*/ __Vtemp_h2eb306ca__0;
    VlWide<75>/*2399:0*/ __Vtemp_hb1d850ed__0;
    VlWide<77>/*2463:0*/ __Vtemp_h3dcb9a47__0;
    VlWide<77>/*2463:0*/ __Vtemp_hd6a553ca__0;
    VlWide<77>/*2463:0*/ __Vtemp_h219cb7c9__0;
    VlWide<79>/*2527:0*/ __Vtemp_h0cab2a3a__0;
    VlWide<79>/*2527:0*/ __Vtemp_h69b1ffd6__0;
    VlWide<80>/*2559:0*/ __Vtemp_he5a53008__0;
    VlWide<81>/*2591:0*/ __Vtemp_h6867891a__0;
    VlWide<81>/*2591:0*/ __Vtemp_h1577155c__0;
    VlWide<82>/*2623:0*/ __Vtemp_h0e5da945__0;
    VlWide<82>/*2623:0*/ __Vtemp_he9c632bd__0;
    VlWide<84>/*2687:0*/ __Vtemp_h5bb0c4a1__0;
    VlWide<84>/*2687:0*/ __Vtemp_hfbc37c4c__0;
    VlWide<84>/*2687:0*/ __Vtemp_hc6f66bb0__0;
    VlWide<86>/*2751:0*/ __Vtemp_hd32c3d23__0;
    VlWide<86>/*2751:0*/ __Vtemp_h1af1975c__0;
    VlWide<88>/*2815:0*/ __Vtemp_h6a9fc0b6__0;
    VlWide<88>/*2815:0*/ __Vtemp_h0cdb9d26__0;
    VlWide<88>/*2815:0*/ __Vtemp_h693cd145__0;
    VlWide<90>/*2879:0*/ __Vtemp_hb77a40ad__0;
    VlWide<90>/*2879:0*/ __Vtemp_h03064eb5__0;
    VlWide<92>/*2943:0*/ __Vtemp_h6d7e70d3__0;
    VlWide<92>/*2943:0*/ __Vtemp_h3756ebe2__0;
    VlWide<92>/*2943:0*/ __Vtemp_h3da5ce2a__0;
    VlWide<94>/*3007:0*/ __Vtemp_h49e8e98e__0;
    VlWide<94>/*3007:0*/ __Vtemp_h89707bef__0;
    VlWide<96>/*3071:0*/ __Vtemp_h1d743690__0;
    VlWide<96>/*3071:0*/ __Vtemp_hc62de718__0;
    VlWide<96>/*3071:0*/ __Vtemp_hb2176a5c__0;
    VlWide<98>/*3135:0*/ __Vtemp_hf31a2ebc__0;
    VlWide<98>/*3135:0*/ __Vtemp_h6018367e__0;
    VlWide<100>/*3199:0*/ __Vtemp_h7fcc86c3__0;
    VlWide<100>/*3199:0*/ __Vtemp_hb4cbd5ba__0;
    VlWide<100>/*3199:0*/ __Vtemp_hada77702__0;
    VlWide<102>/*3263:0*/ __Vtemp_hcc277918__0;
    VlWide<102>/*3263:0*/ __Vtemp_h42751d47__0;
    VlWide<103>/*3295:0*/ __Vtemp_hef742d79__0;
    VlWide<103>/*3295:0*/ __Vtemp_he7715101__0;
    VlWide<103>/*3295:0*/ __Vtemp_h45cd30e5__0;
    VlWide<105>/*3359:0*/ __Vtemp_hc9a739cb__0;
    VlWide<105>/*3359:0*/ __Vtemp_h96c4b6ff__0;
    VlWide<107>/*3423:0*/ __Vtemp_h2ff197d6__0;
    VlWide<107>/*3423:0*/ __Vtemp_hc5c7ee47__0;
    VlWide<107>/*3423:0*/ __Vtemp_hd6171b80__0;
    VlWide<109>/*3487:0*/ __Vtemp_hff7a621b__0;
    VlWide<109>/*3487:0*/ __Vtemp_h087811c1__0;
    VlWide<111>/*3551:0*/ __Vtemp_h246d6008__0;
    VlWide<111>/*3551:0*/ __Vtemp_hdf11c1e6__0;
    VlWide<111>/*3551:0*/ __Vtemp_hddfb9ea1__0;
    VlWide<113>/*3615:0*/ __Vtemp_h1f51cf5f__0;
    VlWide<113>/*3615:0*/ __Vtemp_he13cd002__0;
    // Body
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(
                                                       ((~ 
                                                         ((0U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                               >> 0x17U))) 
                                                          | ((1U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                                  >> 0x17U))) 
                                                             | ((2U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                                     >> 0x17U))) 
                                                                | (3U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                                       >> 0x17U))))))) 
                                                        & ((4U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                                >> 0x17U))) 
                                                           | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)))))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0x17U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0x17U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    __Vtemp_h89f91ab6__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (3U 
                                                             & (- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                                            << 0x3dU) 
                                           | (0x1fffffffffffffffULL 
                                              & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                 ^ 
                                                 (((0U 
                                                    != 
                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                     >> 0x1eU)) 
                                                   & ((1U 
                                                       == 
                                                       (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                        >> 0x1eU)) 
                                                      | ((2U 
                                                          != 
                                                          (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                           >> 0x1eU)) 
                                                         & (3U 
                                                            == 
                                                            (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                             >> 0x1eU)))))
                                                   ? 
                                                  ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                                   << 0x1eU)
                                                   : 
                                                  (((IData)(vlSelf->__VdfgTmp_h339331ad__0) 
                                                    & (2U 
                                                       == 
                                                       (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                        >> 0x1eU)))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                                    << 0x1fU)
                                                    : 0ULL)))))));
    __Vtemp_h89f91ab6__0[1U] = (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                                             << 0x3dU) 
                                            | (0x1fffffffffffffffULL 
                                               & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                  ^ 
                                                  (((0U 
                                                     != 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                      >> 0x1eU)) 
                                                    & ((1U 
                                                        == 
                                                        (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                         >> 0x1eU)) 
                                                       | ((2U 
                                                           != 
                                                           (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                            >> 0x1eU)) 
                                                          & (3U 
                                                             == 
                                                             (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                              >> 0x1eU)))))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                                    << 0x1eU)
                                                    : 
                                                   (((IData)(vlSelf->__VdfgTmp_h339331ad__0) 
                                                     & (2U 
                                                        == 
                                                        (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                         >> 0x1eU)))
                                                     ? 
                                                    ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                                     << 0x1fU)
                                                     : 0ULL)))))) 
                                        >> 0x20U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[0U] 
        = __Vtemp_h89f91ab6__0[0U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[1U] 
        = __Vtemp_h89f91ab6__0[1U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[2U] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[3U] = 0U;
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    << 1U) 
                                                   | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                      >> 0x1fU)))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      << 1U) 
                                                     | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                        >> 0x1fU)))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x1bU))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0x1bU))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1dU)) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 0x1dU)) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 1U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 1U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    << 1U) 
                                                   | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x1fU)))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      << 1U) 
                                                     | (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                        >> 0x1fU)))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x19U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0x19U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0x15U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0x15U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 3U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 3U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 5U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 5U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 7U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 7U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 9U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 9U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0xbU))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0xbU))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0xdU))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0xdU))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0xfU))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0xfU))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x11U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0x11U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x13U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0x13U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x15U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0x15U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x17U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0x17U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 1U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 1U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 3U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 3U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 5U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 5U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 7U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 7U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 9U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 9U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0xbU))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0xbU))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0xdU))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0xdU))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0xfU))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0xfU))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0x11U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0x11U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0x13U))) 
                                        & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0x13U))) 
                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0)) 
                                               << 0x1fU)
                                            : 0ULL))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg)) 
                   << 0x38U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod) 
            << 0x1aU) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg)) 
                                  << 0x38U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod) 
            >> 6U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod 
                               >> 0x20U)) << 0x1aU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod 
                    >> 0x20U)) >> 6U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (IData)((((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))))) 
                    << 0x3fU) | ((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                  << 2U) | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (IData)(((((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))))) 
                     << 0x3fU) | ((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                   << 2U) | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))) 
                   >> 0x20U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] = 1U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] = 0U;
    vlSelf->__VdfgTmp_h5cdbe361__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                           << 0x1eU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg) 
                                             << 0x1cU));
    vlSelf->__VdfgTmp_h5cdbe361__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                           >> 2U) | 
                                          ((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1eU));
    vlSelf->__VdfgTmp_h5cdbe361__0[2U] = ((0x8000000U 
                                           & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg)) 
                                              << 0x1bU)) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 2U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
           << 0x1eU);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (0x40000000U | ((0x20000000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                          << 0x1dU)) 
                          | (IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                     >> 0x20U))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
            << 4U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                      << 2U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
            >> 0x1cU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                  >> 0x20U)) << 4U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (4U | ((2U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                        << 1U)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x1cU)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                   << 0x20U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
            << 2U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                               << 0x20U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
            << 0x1fU) | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                          >> 0x1eU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                >> 0x20U)) 
                                       << 2U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] = 1U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
            << 0x1cU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                         << 0x1aU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
            >> 4U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                               >> 0x20U)) << 0x1cU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U] 
        = (0x4000000U | ((0x2000000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg)) 
                                        << 0x19U)) 
                         | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                     >> 0x20U)) >> 4U)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                   << 0x36U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod) 
            << 0x18U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                                  << 0x36U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod) 
            >> 8U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
                               >> 0x20U)) << 0x18U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
        = (0x400000U | ((0x200000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg)) 
                                      << 0x15U)) | 
                        ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
                                  >> 0x20U)) >> 8U)));
    vlSelf->__VdfgTmp_hdd1a36ee__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                           << 6U) | 
                                          ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                           << 4U));
    vlSelf->__VdfgTmp_hdd1a36ee__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                           >> 0x1aU) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 6U));
    vlSelf->__VdfgTmp_hdd1a36ee__0[2U] = ((8U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                 << 3U)) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 0x1aU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
            << 8U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                      << 6U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
            >> 0x18U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                  >> 0x20U)) << 8U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (0x40U | ((0x20U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                              << 5U)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                  >> 0x20U)) 
                                         >> 0x18U)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
            << 0xaU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                        << 8U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
            >> 0x16U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                  >> 0x20U)) << 0xaU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (0x100U | ((0x80U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                               << 7U)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0x16U)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
            << 0xcU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                        << 0xaU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
            >> 0x14U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                  >> 0x20U)) << 0xcU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U] 
        = (0x400U | ((0x200U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                << 9U)) | ((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                    >> 0x20U)) 
                                           >> 0x14U)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U] = 0U;
    vlSelf->__VdfgTmp_h4a73c73b__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                           << 0xeU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    vlSelf->__VdfgTmp_h4a73c73b__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                           >> 0x12U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xeU));
    vlSelf->__VdfgTmp_h4a73c73b__0[2U] = ((0x800U & 
                                           ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                            << 0xbU)) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 0x12U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
            << 0x10U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                         << 0xeU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
            >> 0x10U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                  >> 0x20U)) << 0x10U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (0x4000U | ((0x2000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                  << 0xdU)) | ((IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x10U)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            << 0x12U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                         << 0x10U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            >> 0xeU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                 >> 0x20U)) << 0x12U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (0x10000U | ((0x8000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                   << 0xfU)) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0xeU)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
            << 0x14U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                         << 0x12U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
            >> 0xcU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                 >> 0x20U)) << 0x14U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U] 
        = (0x40000U | ((0x20000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                    << 0x11U)) | ((IData)(
                                                          (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 0xcU)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U] = 0U;
    vlSelf->__VdfgTmp_h6b408d73__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                           << 0x16U) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                             << 0x14U));
    vlSelf->__VdfgTmp_h6b408d73__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                           >> 0xaU) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x16U));
    vlSelf->__VdfgTmp_h6b408d73__0[2U] = ((0x80000U 
                                           & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                              << 0x13U)) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 0xaU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            << 0x18U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                         << 0x16U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            >> 8U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                               >> 0x20U)) << 0x18U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (0x400000U | ((0x200000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                      << 0x15U)) | 
                        ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                  >> 0x20U)) >> 8U)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            << 0x1aU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                         << 0x18U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            >> 6U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                               >> 0x20U)) << 0x1aU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (0x1000000U | ((0x800000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                       << 0x17U)) | 
                         ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                   >> 0x20U)) >> 6U)));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] = 0U;
    vlSelf->__VdfgTmp_he0e5becf__0[0U] = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                                                  << 0x22U));
    vlSelf->__VdfgTmp_he0e5becf__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                           << 4U) | (IData)(
                                                            (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                                                              << 0x22U) 
                                                             >> 0x20U)));
    vlSelf->__VdfgTmp_he0e5becf__0[2U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                           >> 0x1cU) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 4U));
    vlSelf->__VdfgTmp_he0e5becf__0[3U] = ((2U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                                                 << 1U)) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 0x1cU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                   << 0x24U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
            << 6U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                               << 0x24U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
            >> 0x1aU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                  >> 0x20U)) << 6U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
        = (0x10U | ((8U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                           << 3U)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                               >> 0x20U)) 
                                      >> 0x1aU)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                   << 0x26U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
            << 8U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                               << 0x26U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
            >> 0x18U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                  >> 0x20U)) << 8U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
        = (0x40U | ((0x20U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                              << 5U)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                                  >> 0x20U)) 
                                         >> 0x18U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                   << 0x28U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
            << 0xaU) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                 << 0x28U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
            >> 0x16U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                  >> 0x20U)) << 0xaU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U] 
        = (0x100U | ((0x80U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                               << 7U)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0x16U)));
    vlSelf->__VdfgTmp_h740638af__0[0U] = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                                                  << 0x2aU));
    vlSelf->__VdfgTmp_h740638af__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                           << 0xcU) 
                                          | (IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                                                      << 0x2aU) 
                                                     >> 0x20U)));
    vlSelf->__VdfgTmp_h740638af__0[2U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                           >> 0x14U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xcU));
    vlSelf->__VdfgTmp_h740638af__0[3U] = ((0x200U & 
                                           ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                                            << 9U)) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 0x14U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                   << 0x2cU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
            << 0xeU) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                                 << 0x2cU) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
            >> 0x12U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                  >> 0x20U)) << 0xeU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
        = (0x1000U | ((0x800U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                                 << 0xbU)) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                                       >> 0x20U)) 
                                              >> 0x12U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                   << 0x2eU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
            << 0x10U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                                  << 0x2eU) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
            >> 0x10U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                  >> 0x20U)) << 0x10U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
        = (0x4000U | ((0x2000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                  << 0xdU)) | ((IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x10U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                   << 0x30U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
            << 0x12U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                  << 0x30U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
            >> 0xeU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                 >> 0x20U)) << 0x12U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U] 
        = (0x10000U | ((0x8000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                   << 0xfU)) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0xeU)));
    vlSelf->__VdfgTmp_hd462b4a7__0[0U] = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                                  << 0x32U));
    vlSelf->__VdfgTmp_hd462b4a7__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                                           << 0x14U) 
                                          | (IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                                      << 0x32U) 
                                                     >> 0x20U)));
    vlSelf->__VdfgTmp_hd462b4a7__0[2U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                                           >> 0xcU) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x14U));
    vlSelf->__VdfgTmp_hd462b4a7__0[3U] = ((0x20000U 
                                           & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                                              << 0x11U)) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 0xcU));
    __Vtemp_h0cddaa1a__0[0U] = vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[0U];
    __Vtemp_h0cddaa1a__0[1U] = vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[1U];
    __Vtemp_h0cddaa1a__0[2U] = vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[2U];
    __Vtemp_h0cddaa1a__0[3U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 << 0x1aU) | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                               << 0x18U) 
                                              | vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[3U]));
    __Vtemp_h0cddaa1a__0[4U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 >> 6U) | ((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1aU));
    __Vtemp_h0cddaa1a__0[5U] = (0x1000000U | ((0x800000U 
                                               & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                  << 0x17U)) 
                                              | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 6U)));
    __Vtemp_h0cddaa1a__0[6U] = 0U;
    __Vtemp_h0cddaa1a__0[7U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 << 0x14U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x12U));
    __Vtemp_h0cddaa1a__0[8U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 >> 0xcU) | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h0cddaa1a__0[9U] = (0x40000U | ((0x20000U 
                                             & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                << 0x11U)) 
                                            | ((IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0xcU)));
    __Vtemp_h0cddaa1a__0[0xaU] = 0U;
    __Vtemp_h0cddaa1a__0[0xbU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                   << 0xeU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                               << 0xcU));
    __Vtemp_h0cddaa1a__0[0xcU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                   >> 0x12U) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0xeU));
    __Vtemp_h0cddaa1a__0[0xdU] = (0x1000U | ((0x800U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                 << 0xbU)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x12U)));
    __Vtemp_h0cddaa1a__0[0xeU] = 0U;
    __Vtemp_h0cddaa1a__0[0xfU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
                                   << 8U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                             << 6U));
    __Vtemp_h0cddaa1a__0[0x10U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
                                    >> 0x18U) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 8U));
    __Vtemp_h0cddaa1a__0[0x11U] = (0x40U | ((0x20U 
                                             & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                << 5U)) 
                                            | ((IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x18U)));
    __Vtemp_h0cddaa1a__0[0x12U] = 0U;
    __Vtemp_h0cddaa1a__0[0x13U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                    << 2U) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    __Vtemp_h0cddaa1a__0[0x14U] = (((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                    << 0x1fU) | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                                  >> 0x1eU) 
                                                 | ((IData)(
                                                            (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                                             >> 0x20U)) 
                                                    << 2U)));
    __Vtemp_h0cddaa1a__0[0x15U] = 1U;
    __Vtemp_h0cddaa1a__0[0x16U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                    << 0x1cU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                 << 0x1aU));
    __Vtemp_h0cddaa1a__0[0x17U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                    >> 4U) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    __Vtemp_h0cddaa1a__0[0x18U] = (0x4000000U | ((0x2000000U 
                                                  & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                     << 0x19U)) 
                                                 | ((IData)(
                                                            (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                             >> 0x20U)) 
                                                    >> 4U)));
    __Vtemp_h0cddaa1a__0[0x19U] = 0U;
    __Vtemp_h0cddaa1a__0[0x1aU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    << 0x16U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                 << 0x14U));
    __Vtemp_h0cddaa1a__0[0x1bU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    >> 0xaU) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x16U));
    __Vtemp_h0cddaa1a__0[0x1cU] = (0x100000U | ((0x80000U 
                                                 & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                    << 0x13U)) 
                                                | ((IData)(
                                                           (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 0xaU)));
    __Vtemp_h0cddaa1a__0[0x1dU] = 0U;
    __Vtemp_h0cddaa1a__0[0x1eU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    << 0x10U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                 << 0xeU));
    __Vtemp_h0cddaa1a__0[0x1fU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_h0cddaa1a__0[0x20U] = (0x4000U | ((0x2000U 
                                               & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                  << 0xdU)) 
                                              | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 0x10U)));
    __Vtemp_h0cddaa1a__0[0x21U] = 0U;
    __Vtemp_h0cddaa1a__0[0x22U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                    << 0xaU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                << 8U));
    __Vtemp_h0cddaa1a__0[0x23U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xaU));
    __Vtemp_h0cddaa1a__0[0x24U] = (0x100U | ((0x80U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                 << 7U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x16U)));
    __Vtemp_h0cddaa1a__0[0x25U] = 0U;
    __Vtemp_h0cddaa1a__0[0x26U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    << 4U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                              << 2U));
    __Vtemp_h0cddaa1a__0[0x27U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    >> 0x1cU) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 4U));
    __Vtemp_h0cddaa1a__0[0x28U] = (4U | ((2U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                << 1U)) 
                                         | ((IData)(
                                                    (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                     >> 0x20U)) 
                                            >> 0x1cU)));
    __Vtemp_h0cddaa1a__0[0x29U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                    << 0x1eU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                 << 0x1cU));
    __Vtemp_h0cddaa1a__0[0x2aU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                    >> 2U) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1eU));
    __Vtemp_h0cddaa1a__0[0x2bU] = (0x10000000U | ((0x8000000U 
                                                   & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                      << 0x1bU)) 
                                                  | ((IData)(
                                                             (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                              >> 0x20U)) 
                                                     >> 2U)));
    __Vtemp_h0cddaa1a__0[0x2cU] = 0U;
    __Vtemp_h0cddaa1a__0[0x2dU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    << 0x18U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                 << 0x16U));
    __Vtemp_h0cddaa1a__0[0x2eU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    >> 8U) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x18U));
    __Vtemp_h0cddaa1a__0[0x2fU] = (0x400000U | ((0x200000U 
                                                 & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                    << 0x15U)) 
                                                | ((IData)(
                                                           (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 8U)));
    __Vtemp_h0cddaa1a__0[0x30U] = 0U;
    __Vtemp_h0cddaa1a__0[0x31U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    << 0x12U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                 << 0x10U));
    __Vtemp_h0cddaa1a__0[0x32U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    >> 0xeU) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x12U));
    __Vtemp_h0cddaa1a__0[0x33U] = (0x10000U | ((0x8000U 
                                                & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                   << 0xfU)) 
                                               | ((IData)(
                                                          (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 0xeU)));
    __Vtemp_h0cddaa1a__0[0x34U] = 0U;
    __Vtemp_h0cddaa1a__0[0x35U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    << 0xcU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                << 0xaU));
    __Vtemp_h0cddaa1a__0[0x36U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    >> 0x14U) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xcU));
    __Vtemp_h0cddaa1a__0[0x37U] = (0x400U | ((0x200U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg)) 
                                                 << 9U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x14U)));
    __Vtemp_h0cddaa1a__0[0x38U] = 0U;
    __Vtemp_h0cddaa1a__0[0x39U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                    << 6U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg) 
                                              << 4U));
    __Vtemp_h0cddaa1a__0[0x3aU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                    >> 0x1aU) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 6U));
    __Vtemp_h0cddaa1a__0[0x3bU] = (0x10U | ((8U & (
                                                   (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg)) 
                                                   << 3U)) 
                                            | ((IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x1aU)));
    __Vtemp_h0cddaa1a__0[0x3cU] = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
                                   << 0x1eU);
    __Vtemp_h0cddaa1a__0[0x3dU] = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod);
    __Vtemp_h0cddaa1a__0[0x3eU] = ((0x20000000U & (
                                                   (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                   << 0x1dU)) 
                                   | (IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                              >> 0x20U)));
    VL_CONCAT_WQW(2072,58,2014, __Vtemp_h57e94e67__0, 1ULL, __Vtemp_h0cddaa1a__0);
    VL_CONCAT_WIW(2073,1,2072, __Vtemp_hc890542c__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg), __Vtemp_h57e94e67__0);
    VL_EXTEND_WW(2074,2073, __Vtemp_h663f772c__0, __Vtemp_hc890542c__0);
    VL_CONCAT_WQW(2135,61,2074, __Vtemp_hf924b3c4__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod, __Vtemp_h663f772c__0);
    VL_CONCAT_WIW(2136,1,2135, __Vtemp_he9ea4533__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg))), __Vtemp_hf924b3c4__0);
    VL_CONCAT_WQW(2194,58,2136, __Vtemp_hbe090f2f__0, 1ULL, __Vtemp_he9ea4533__0);
    VL_CONCAT_WIW(2195,1,2194, __Vtemp_hae8e8145__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg), __Vtemp_hbe090f2f__0);
    VL_EXTEND_WW(2196,2195, __Vtemp_h09d88698__0, __Vtemp_hae8e8145__0);
    VL_CONCAT_WQW(2257,61,2196, __Vtemp_hd1db61cd__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod, __Vtemp_h09d88698__0);
    VL_CONCAT_WIW(2258,1,2257, __Vtemp_h95b2dff4__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg))), __Vtemp_hd1db61cd__0);
    VL_CONCAT_WQW(2316,58,2258, __Vtemp_h25ead714__0, 1ULL, __Vtemp_h95b2dff4__0);
    VL_CONCAT_WIW(2317,1,2316, __Vtemp_h5120e0a7__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg), __Vtemp_h25ead714__0);
    VL_EXTEND_WW(2318,2317, __Vtemp_h64038db8__0, __Vtemp_h5120e0a7__0);
    VL_CONCAT_WQW(2379,61,2318, __Vtemp_h2eb306ca__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod, __Vtemp_h64038db8__0);
    VL_CONCAT_WIW(2380,1,2379, __Vtemp_hb1d850ed__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg))), __Vtemp_h2eb306ca__0);
    VL_CONCAT_WQW(2438,58,2380, __Vtemp_h3dcb9a47__0, 1ULL, __Vtemp_hb1d850ed__0);
    VL_CONCAT_WIW(2439,1,2438, __Vtemp_hd6a553ca__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg), __Vtemp_h3dcb9a47__0);
    VL_EXTEND_WW(2440,2439, __Vtemp_h219cb7c9__0, __Vtemp_hd6a553ca__0);
    VL_CONCAT_WQW(2501,61,2440, __Vtemp_h0cab2a3a__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod, __Vtemp_h219cb7c9__0);
    VL_CONCAT_WIW(2502,1,2501, __Vtemp_h69b1ffd6__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg))), __Vtemp_h0cab2a3a__0);
    VL_CONCAT_WQW(2560,58,2502, __Vtemp_he5a53008__0, 1ULL, __Vtemp_h69b1ffd6__0);
    VL_CONCAT_WIW(2561,1,2560, __Vtemp_h6867891a__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg), __Vtemp_he5a53008__0);
    VL_EXTEND_WW(2562,2561, __Vtemp_h1577155c__0, __Vtemp_h6867891a__0);
    VL_CONCAT_WQW(2623,61,2562, __Vtemp_h0e5da945__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod, __Vtemp_h1577155c__0);
    VL_CONCAT_WIW(2624,1,2623, __Vtemp_he9c632bd__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg))), __Vtemp_h0e5da945__0);
    VL_CONCAT_WQW(2682,58,2624, __Vtemp_h5bb0c4a1__0, 1ULL, __Vtemp_he9c632bd__0);
    VL_CONCAT_WIW(2683,1,2682, __Vtemp_hfbc37c4c__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg), __Vtemp_h5bb0c4a1__0);
    VL_EXTEND_WW(2684,2683, __Vtemp_hc6f66bb0__0, __Vtemp_hfbc37c4c__0);
    VL_CONCAT_WQW(2745,61,2684, __Vtemp_hd32c3d23__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod, __Vtemp_hc6f66bb0__0);
    VL_CONCAT_WIW(2746,1,2745, __Vtemp_h1af1975c__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg))), __Vtemp_hd32c3d23__0);
    VL_CONCAT_WQW(2804,58,2746, __Vtemp_h6a9fc0b6__0, 1ULL, __Vtemp_h1af1975c__0);
    VL_CONCAT_WIW(2805,1,2804, __Vtemp_h0cdb9d26__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg), __Vtemp_h6a9fc0b6__0);
    VL_EXTEND_WW(2806,2805, __Vtemp_h693cd145__0, __Vtemp_h0cdb9d26__0);
    VL_CONCAT_WQW(2867,61,2806, __Vtemp_hb77a40ad__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod, __Vtemp_h693cd145__0);
    VL_CONCAT_WIW(2868,1,2867, __Vtemp_h03064eb5__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg))), __Vtemp_hb77a40ad__0);
    VL_CONCAT_WQW(2926,58,2868, __Vtemp_h6d7e70d3__0, 1ULL, __Vtemp_h03064eb5__0);
    VL_CONCAT_WIW(2927,1,2926, __Vtemp_h3756ebe2__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg), __Vtemp_h6d7e70d3__0);
    VL_EXTEND_WW(2928,2927, __Vtemp_h3da5ce2a__0, __Vtemp_h3756ebe2__0);
    VL_CONCAT_WQW(2989,61,2928, __Vtemp_h49e8e98e__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod, __Vtemp_h3da5ce2a__0);
    VL_CONCAT_WIW(2990,1,2989, __Vtemp_h89707bef__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg))), __Vtemp_h49e8e98e__0);
    VL_CONCAT_WQW(3048,58,2990, __Vtemp_h1d743690__0, 1ULL, __Vtemp_h89707bef__0);
    VL_CONCAT_WIW(3049,1,3048, __Vtemp_hc62de718__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg), __Vtemp_h1d743690__0);
    VL_EXTEND_WW(3050,3049, __Vtemp_hb2176a5c__0, __Vtemp_hc62de718__0);
    VL_CONCAT_WQW(3111,61,3050, __Vtemp_hf31a2ebc__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod, __Vtemp_hb2176a5c__0);
    VL_CONCAT_WIW(3112,1,3111, __Vtemp_h6018367e__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg))), __Vtemp_hf31a2ebc__0);
    VL_CONCAT_WQW(3170,58,3112, __Vtemp_h7fcc86c3__0, 1ULL, __Vtemp_h6018367e__0);
    VL_CONCAT_WIW(3171,1,3170, __Vtemp_hb4cbd5ba__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg), __Vtemp_h7fcc86c3__0);
    VL_EXTEND_WW(3172,3171, __Vtemp_hada77702__0, __Vtemp_hb4cbd5ba__0);
    VL_CONCAT_WQW(3233,61,3172, __Vtemp_hcc277918__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod, __Vtemp_hada77702__0);
    VL_CONCAT_WIW(3234,1,3233, __Vtemp_h42751d47__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg))), __Vtemp_hcc277918__0);
    VL_CONCAT_WQW(3292,58,3234, __Vtemp_hef742d79__0, 1ULL, __Vtemp_h42751d47__0);
    VL_CONCAT_WIW(3293,1,3292, __Vtemp_he7715101__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg), __Vtemp_hef742d79__0);
    VL_EXTEND_WW(3294,3293, __Vtemp_h45cd30e5__0, __Vtemp_he7715101__0);
    VL_CONCAT_WQW(3355,61,3294, __Vtemp_hc9a739cb__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod, __Vtemp_h45cd30e5__0);
    VL_CONCAT_WIW(3356,1,3355, __Vtemp_h96c4b6ff__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg))), __Vtemp_hc9a739cb__0);
    VL_CONCAT_WQW(3414,58,3356, __Vtemp_h2ff197d6__0, 1ULL, __Vtemp_h96c4b6ff__0);
    VL_CONCAT_WIW(3415,1,3414, __Vtemp_hc5c7ee47__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg), __Vtemp_h2ff197d6__0);
    VL_EXTEND_WW(3416,3415, __Vtemp_hd6171b80__0, __Vtemp_hc5c7ee47__0);
    VL_CONCAT_WQW(3477,61,3416, __Vtemp_hff7a621b__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod, __Vtemp_hd6171b80__0);
    VL_CONCAT_WIW(3478,1,3477, __Vtemp_h087811c1__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg))), __Vtemp_hff7a621b__0);
    VL_CONCAT_WQW(3536,58,3478, __Vtemp_h246d6008__0, 1ULL, __Vtemp_h087811c1__0);
    VL_CONCAT_WIW(3537,1,3536, __Vtemp_hdf11c1e6__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg), __Vtemp_h246d6008__0);
    VL_EXTEND_WW(3538,3537, __Vtemp_hddfb9ea1__0, __Vtemp_hdf11c1e6__0);
    VL_CONCAT_WQW(3599,61,3538, __Vtemp_h1f51cf5f__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod, __Vtemp_hddfb9ea1__0);
    VL_EXTEND_WW(3600,3599, __Vtemp_he13cd002__0, __Vtemp_h1f51cf5f__0);
    VL_ASSIGN_W(3600,vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods, __Vtemp_he13cd002__0);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                   << 0x34U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            << 0x16U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                                  << 0x34U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            >> 0xaU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                 >> 0x20U)) << 0x16U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
        = (0x100000U | ((0x80000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                                     << 0x13U)) | ((IData)(
                                                           (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 0xaU)));
    vlSelf->__VdfgTmp_h4eb69f7e__0[0U] = (vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]));
    vlSelf->__VdfgTmp_h4eb69f7e__0[1U] = (vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]));
    vlSelf->__VdfgTmp_h4eb69f7e__0[2U] = (vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]));
    vlSelf->__VdfgTmp_h4eb69f7e__0[3U] = (vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]));
    vlSelf->__VdfgTmp_hdf2d4ee4__0[0U] = ((vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              | vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[0U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]));
    vlSelf->__VdfgTmp_hdf2d4ee4__0[1U] = ((vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              | vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[1U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]));
    vlSelf->__VdfgTmp_hdf2d4ee4__0[2U] = ((vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              | vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[2U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]));
    vlSelf->__VdfgTmp_hdf2d4ee4__0[3U] = ((vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                              | vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0[3U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]));
    vlSelf->__VdfgTmp_h842981dd__0[0U] = (vlSelf->__VdfgTmp_h5cdbe361__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]));
    vlSelf->__VdfgTmp_h842981dd__0[1U] = (vlSelf->__VdfgTmp_h5cdbe361__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]));
    vlSelf->__VdfgTmp_h842981dd__0[2U] = ((0x10000000U 
                                           | vlSelf->__VdfgTmp_h5cdbe361__0[2U]) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]));
    vlSelf->__VdfgTmp_h842981dd__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                          ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]);
    vlSelf->__VdfgTmp_h870317ba__0[0U] = ((vlSelf->__VdfgTmp_h5cdbe361__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              | vlSelf->__VdfgTmp_h5cdbe361__0[0U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]));
    vlSelf->__VdfgTmp_h870317ba__0[1U] = ((vlSelf->__VdfgTmp_h5cdbe361__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              | vlSelf->__VdfgTmp_h5cdbe361__0[1U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]));
    vlSelf->__VdfgTmp_h870317ba__0[2U] = (((0x10000000U 
                                            | vlSelf->__VdfgTmp_h5cdbe361__0[2U]) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((0x10000000U 
                                              | (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                                 | vlSelf->__VdfgTmp_h5cdbe361__0[2U])) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]));
    vlSelf->__VdfgTmp_h870317ba__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                          & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]);
    vlSelf->__VdfgTmp_h769702d4__0[0U] = (vlSelf->__VdfgTmp_hdd1a36ee__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])));
    vlSelf->__VdfgTmp_h769702d4__0[1U] = (vlSelf->__VdfgTmp_hdd1a36ee__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])));
    vlSelf->__VdfgTmp_h769702d4__0[2U] = ((0x10U | 
                                           vlSelf->__VdfgTmp_hdd1a36ee__0[2U]) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])));
    vlSelf->__VdfgTmp_h769702d4__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]));
    vlSelf->__VdfgTmp_h270c8384__0[0U] = ((vlSelf->__VdfgTmp_hdd1a36ee__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_hdd1a36ee__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_hdd1a36ee__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])))));
    vlSelf->__VdfgTmp_h270c8384__0[1U] = ((vlSelf->__VdfgTmp_hdd1a36ee__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_hdd1a36ee__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_hdd1a36ee__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])))));
    vlSelf->__VdfgTmp_h270c8384__0[2U] = (((0x10U | 
                                            vlSelf->__VdfgTmp_hdd1a36ee__0[2U]) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U]) 
                                                | (((0x10U 
                                                     | vlSelf->__VdfgTmp_hdd1a36ee__0[2U]) 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                                   | ((0x10U 
                                                       | (vlSelf->__VdfgTmp_hdd1a36ee__0[2U] 
                                                          | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U])) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])))));
    vlSelf->__VdfgTmp_h270c8384__0[3U] = ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]) 
                                             | (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])));
    vlSelf->__VdfgTmp_h062aa866__0[0U] = (vlSelf->__VdfgTmp_h4a73c73b__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])));
    vlSelf->__VdfgTmp_h062aa866__0[1U] = (vlSelf->__VdfgTmp_h4a73c73b__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])));
    vlSelf->__VdfgTmp_h062aa866__0[2U] = ((0x1000U 
                                           | vlSelf->__VdfgTmp_h4a73c73b__0[2U]) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])));
    vlSelf->__VdfgTmp_h062aa866__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]));
    vlSelf->__VdfgTmp_he55e6e02__0[0U] = ((vlSelf->__VdfgTmp_h4a73c73b__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_h4a73c73b__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_h4a73c73b__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])))));
    vlSelf->__VdfgTmp_he55e6e02__0[1U] = ((vlSelf->__VdfgTmp_h4a73c73b__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_h4a73c73b__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_h4a73c73b__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])))));
    vlSelf->__VdfgTmp_he55e6e02__0[2U] = (((0x1000U 
                                            | vlSelf->__VdfgTmp_h4a73c73b__0[2U]) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U]) 
                                                | (((0x1000U 
                                                     | vlSelf->__VdfgTmp_h4a73c73b__0[2U]) 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                                   | ((0x1000U 
                                                       | (vlSelf->__VdfgTmp_h4a73c73b__0[2U] 
                                                          | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U])) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])))));
    vlSelf->__VdfgTmp_he55e6e02__0[3U] = ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]) 
                                             | (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])));
    vlSelf->__VdfgTmp_h253db874__0[0U] = (vlSelf->__VdfgTmp_h6b408d73__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])));
    vlSelf->__VdfgTmp_h253db874__0[1U] = (vlSelf->__VdfgTmp_h6b408d73__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])));
    vlSelf->__VdfgTmp_h253db874__0[2U] = ((0x100000U 
                                           | vlSelf->__VdfgTmp_h6b408d73__0[2U]) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])));
    vlSelf->__VdfgTmp_h253db874__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]));
    vlSelf->__VdfgTmp_h5b916b27__0[0U] = ((vlSelf->__VdfgTmp_h6b408d73__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_h6b408d73__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_h6b408d73__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])))));
    vlSelf->__VdfgTmp_h5b916b27__0[1U] = ((vlSelf->__VdfgTmp_h6b408d73__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_h6b408d73__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_h6b408d73__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])))));
    vlSelf->__VdfgTmp_h5b916b27__0[2U] = (((0x100000U 
                                            | vlSelf->__VdfgTmp_h6b408d73__0[2U]) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U]) 
                                                | (((0x100000U 
                                                     | vlSelf->__VdfgTmp_h6b408d73__0[2U]) 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                                   | ((0x100000U 
                                                       | (vlSelf->__VdfgTmp_h6b408d73__0[2U] 
                                                          | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U])) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])))));
    vlSelf->__VdfgTmp_h5b916b27__0[3U] = ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]) 
                                             | (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])));
    vlSelf->__VdfgTmp_hc9c11027__0[0U] = (vlSelf->__VdfgTmp_he0e5becf__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])));
    vlSelf->__VdfgTmp_hc9c11027__0[1U] = (vlSelf->__VdfgTmp_he0e5becf__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])));
    vlSelf->__VdfgTmp_hc9c11027__0[2U] = (vlSelf->__VdfgTmp_he0e5becf__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])));
    vlSelf->__VdfgTmp_hc9c11027__0[3U] = ((4U | vlSelf->__VdfgTmp_he0e5becf__0[3U]) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])));
    vlSelf->__VdfgTmp_hc2bb2add__0[0U] = ((vlSelf->__VdfgTmp_he0e5becf__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_he0e5becf__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_he0e5becf__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])))));
    vlSelf->__VdfgTmp_hc2bb2add__0[1U] = ((vlSelf->__VdfgTmp_he0e5becf__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_he0e5becf__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_he0e5becf__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])))));
    vlSelf->__VdfgTmp_hc2bb2add__0[2U] = ((vlSelf->__VdfgTmp_he0e5becf__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_he0e5becf__0[2U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_he0e5becf__0[2U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])))));
    vlSelf->__VdfgTmp_hc2bb2add__0[3U] = (((4U | vlSelf->__VdfgTmp_he0e5becf__0[3U]) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]) 
                                                | (((4U 
                                                     | vlSelf->__VdfgTmp_he0e5becf__0[3U]) 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                                   | ((4U 
                                                       | (vlSelf->__VdfgTmp_he0e5becf__0[3U] 
                                                          | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U])) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])))));
    vlSelf->__VdfgTmp_h3653544f__0[0U] = (vlSelf->__VdfgTmp_h740638af__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])));
    vlSelf->__VdfgTmp_h3653544f__0[1U] = (vlSelf->__VdfgTmp_h740638af__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])));
    vlSelf->__VdfgTmp_h3653544f__0[2U] = (vlSelf->__VdfgTmp_h740638af__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])));
    vlSelf->__VdfgTmp_h3653544f__0[3U] = ((0x400U | 
                                           vlSelf->__VdfgTmp_h740638af__0[3U]) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])));
    vlSelf->__VdfgTmp_h291def22__0[0U] = ((vlSelf->__VdfgTmp_h740638af__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_h740638af__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_h740638af__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])))));
    vlSelf->__VdfgTmp_h291def22__0[1U] = ((vlSelf->__VdfgTmp_h740638af__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_h740638af__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_h740638af__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])))));
    vlSelf->__VdfgTmp_h291def22__0[2U] = ((vlSelf->__VdfgTmp_h740638af__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_h740638af__0[2U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_h740638af__0[2U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])))));
    vlSelf->__VdfgTmp_h291def22__0[3U] = (((0x400U 
                                            | vlSelf->__VdfgTmp_h740638af__0[3U]) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]) 
                                                | (((0x400U 
                                                     | vlSelf->__VdfgTmp_h740638af__0[3U]) 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                                   | ((0x400U 
                                                       | (vlSelf->__VdfgTmp_h740638af__0[3U] 
                                                          | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U])) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])))));
    vlSelf->__VdfgTmp_h1fd7069f__0[0U] = (vlSelf->__VdfgTmp_hd462b4a7__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])));
    vlSelf->__VdfgTmp_h1fd7069f__0[1U] = (vlSelf->__VdfgTmp_hd462b4a7__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])));
    vlSelf->__VdfgTmp_h1fd7069f__0[2U] = (vlSelf->__VdfgTmp_hd462b4a7__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])));
    vlSelf->__VdfgTmp_h1fd7069f__0[3U] = ((0x40000U 
                                           | vlSelf->__VdfgTmp_hd462b4a7__0[3U]) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])));
    vlSelf->__VdfgTmp_h6106a37a__0[0U] = ((vlSelf->__VdfgTmp_hd462b4a7__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_hd462b4a7__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_hd462b4a7__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])))));
    vlSelf->__VdfgTmp_h6106a37a__0[1U] = ((vlSelf->__VdfgTmp_hd462b4a7__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_hd462b4a7__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_hd462b4a7__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])))));
    vlSelf->__VdfgTmp_h6106a37a__0[2U] = ((vlSelf->__VdfgTmp_hd462b4a7__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_hd462b4a7__0[2U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_hd462b4a7__0[2U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])))));
    vlSelf->__VdfgTmp_h6106a37a__0[3U] = (((0x40000U 
                                            | vlSelf->__VdfgTmp_hd462b4a7__0[3U]) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]) 
                                                | (((0x40000U 
                                                     | vlSelf->__VdfgTmp_hd462b4a7__0[3U]) 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                                   | ((0x40000U 
                                                       | (vlSelf->__VdfgTmp_hd462b4a7__0[3U] 
                                                          | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U])) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h4eb69f7e__0[0U] & vlSelf->__VdfgTmp_hdf2d4ee4__0[0U]) 
           | ((vlSelf->__VdfgTmp_hdf2d4ee4__0[0U] & 
               vlSelf->__VdfgTmp_h769702d4__0[0U]) 
              | ((vlSelf->__VdfgTmp_h769702d4__0[0U] 
                  & vlSelf->__VdfgTmp_h270c8384__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h4eb69f7e__0[0U] 
                     & vlSelf->__VdfgTmp_h769702d4__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h4eb69f7e__0[0U] 
                        | vlSelf->__VdfgTmp_hdf2d4ee4__0[0U]) 
                       & vlSelf->__VdfgTmp_h270c8384__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h4eb69f7e__0[1U] & vlSelf->__VdfgTmp_hdf2d4ee4__0[1U]) 
           | ((vlSelf->__VdfgTmp_hdf2d4ee4__0[1U] & 
               vlSelf->__VdfgTmp_h769702d4__0[1U]) 
              | ((vlSelf->__VdfgTmp_h769702d4__0[1U] 
                  & vlSelf->__VdfgTmp_h270c8384__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h4eb69f7e__0[1U] 
                     & vlSelf->__VdfgTmp_h769702d4__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h4eb69f7e__0[1U] 
                        | vlSelf->__VdfgTmp_hdf2d4ee4__0[1U]) 
                       & vlSelf->__VdfgTmp_h270c8384__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h4eb69f7e__0[2U] & vlSelf->__VdfgTmp_hdf2d4ee4__0[2U]) 
           | ((vlSelf->__VdfgTmp_hdf2d4ee4__0[2U] & 
               vlSelf->__VdfgTmp_h769702d4__0[2U]) 
              | ((vlSelf->__VdfgTmp_h769702d4__0[2U] 
                  & vlSelf->__VdfgTmp_h270c8384__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h4eb69f7e__0[2U] 
                     & vlSelf->__VdfgTmp_h769702d4__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h4eb69f7e__0[2U] 
                        | vlSelf->__VdfgTmp_hdf2d4ee4__0[2U]) 
                       & vlSelf->__VdfgTmp_h270c8384__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h4eb69f7e__0[3U] & vlSelf->__VdfgTmp_hdf2d4ee4__0[3U]) 
           | ((vlSelf->__VdfgTmp_hdf2d4ee4__0[3U] & 
               vlSelf->__VdfgTmp_h769702d4__0[3U]) 
              | ((vlSelf->__VdfgTmp_h769702d4__0[3U] 
                  & vlSelf->__VdfgTmp_h270c8384__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h4eb69f7e__0[3U] 
                     & vlSelf->__VdfgTmp_h769702d4__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h4eb69f7e__0[3U] 
                        | vlSelf->__VdfgTmp_hdf2d4ee4__0[3U]) 
                       & vlSelf->__VdfgTmp_h270c8384__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h4eb69f7e__0[0U] ^ (vlSelf->__VdfgTmp_hdf2d4ee4__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h769702d4__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h270c8384__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h4eb69f7e__0[1U] ^ (vlSelf->__VdfgTmp_hdf2d4ee4__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h769702d4__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h270c8384__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h4eb69f7e__0[2U] ^ (vlSelf->__VdfgTmp_hdf2d4ee4__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h769702d4__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h270c8384__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h4eb69f7e__0[3U] ^ (vlSelf->__VdfgTmp_hdf2d4ee4__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h769702d4__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h270c8384__0[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h062aa866__0[0U] & vlSelf->__VdfgTmp_he55e6e02__0[0U]) 
           | ((vlSelf->__VdfgTmp_he55e6e02__0[0U] & 
               vlSelf->__VdfgTmp_h253db874__0[0U]) 
              | ((vlSelf->__VdfgTmp_h253db874__0[0U] 
                  & vlSelf->__VdfgTmp_h5b916b27__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h062aa866__0[0U] 
                     & vlSelf->__VdfgTmp_h253db874__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h062aa866__0[0U] 
                        | vlSelf->__VdfgTmp_he55e6e02__0[0U]) 
                       & vlSelf->__VdfgTmp_h5b916b27__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h062aa866__0[1U] & vlSelf->__VdfgTmp_he55e6e02__0[1U]) 
           | ((vlSelf->__VdfgTmp_he55e6e02__0[1U] & 
               vlSelf->__VdfgTmp_h253db874__0[1U]) 
              | ((vlSelf->__VdfgTmp_h253db874__0[1U] 
                  & vlSelf->__VdfgTmp_h5b916b27__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h062aa866__0[1U] 
                     & vlSelf->__VdfgTmp_h253db874__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h062aa866__0[1U] 
                        | vlSelf->__VdfgTmp_he55e6e02__0[1U]) 
                       & vlSelf->__VdfgTmp_h5b916b27__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h062aa866__0[2U] & vlSelf->__VdfgTmp_he55e6e02__0[2U]) 
           | ((vlSelf->__VdfgTmp_he55e6e02__0[2U] & 
               vlSelf->__VdfgTmp_h253db874__0[2U]) 
              | ((vlSelf->__VdfgTmp_h253db874__0[2U] 
                  & vlSelf->__VdfgTmp_h5b916b27__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h062aa866__0[2U] 
                     & vlSelf->__VdfgTmp_h253db874__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h062aa866__0[2U] 
                        | vlSelf->__VdfgTmp_he55e6e02__0[2U]) 
                       & vlSelf->__VdfgTmp_h5b916b27__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h062aa866__0[3U] & vlSelf->__VdfgTmp_he55e6e02__0[3U]) 
           | ((vlSelf->__VdfgTmp_he55e6e02__0[3U] & 
               vlSelf->__VdfgTmp_h253db874__0[3U]) 
              | ((vlSelf->__VdfgTmp_h253db874__0[3U] 
                  & vlSelf->__VdfgTmp_h5b916b27__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h062aa866__0[3U] 
                     & vlSelf->__VdfgTmp_h253db874__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h062aa866__0[3U] 
                        | vlSelf->__VdfgTmp_he55e6e02__0[3U]) 
                       & vlSelf->__VdfgTmp_h5b916b27__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h062aa866__0[0U] ^ (vlSelf->__VdfgTmp_he55e6e02__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h253db874__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h5b916b27__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h062aa866__0[1U] ^ (vlSelf->__VdfgTmp_he55e6e02__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h253db874__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h5b916b27__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h062aa866__0[2U] ^ (vlSelf->__VdfgTmp_he55e6e02__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h253db874__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h5b916b27__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h062aa866__0[3U] ^ (vlSelf->__VdfgTmp_he55e6e02__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h253db874__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h5b916b27__0[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h842981dd__0[0U] & vlSelf->__VdfgTmp_h870317ba__0[0U]) 
           | ((vlSelf->__VdfgTmp_h870317ba__0[0U] & 
               vlSelf->__VdfgTmp_hc9c11027__0[0U]) 
              | ((vlSelf->__VdfgTmp_hc9c11027__0[0U] 
                  & vlSelf->__VdfgTmp_hc2bb2add__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h842981dd__0[0U] 
                     & vlSelf->__VdfgTmp_hc9c11027__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h842981dd__0[0U] 
                        | vlSelf->__VdfgTmp_h870317ba__0[0U]) 
                       & vlSelf->__VdfgTmp_hc2bb2add__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h842981dd__0[1U] & vlSelf->__VdfgTmp_h870317ba__0[1U]) 
           | ((vlSelf->__VdfgTmp_h870317ba__0[1U] & 
               vlSelf->__VdfgTmp_hc9c11027__0[1U]) 
              | ((vlSelf->__VdfgTmp_hc9c11027__0[1U] 
                  & vlSelf->__VdfgTmp_hc2bb2add__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h842981dd__0[1U] 
                     & vlSelf->__VdfgTmp_hc9c11027__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h842981dd__0[1U] 
                        | vlSelf->__VdfgTmp_h870317ba__0[1U]) 
                       & vlSelf->__VdfgTmp_hc2bb2add__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h842981dd__0[2U] & vlSelf->__VdfgTmp_h870317ba__0[2U]) 
           | ((vlSelf->__VdfgTmp_h870317ba__0[2U] & 
               vlSelf->__VdfgTmp_hc9c11027__0[2U]) 
              | ((vlSelf->__VdfgTmp_hc9c11027__0[2U] 
                  & vlSelf->__VdfgTmp_hc2bb2add__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h842981dd__0[2U] 
                     & vlSelf->__VdfgTmp_hc9c11027__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h842981dd__0[2U] 
                        | vlSelf->__VdfgTmp_h870317ba__0[2U]) 
                       & vlSelf->__VdfgTmp_hc2bb2add__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h842981dd__0[3U] & vlSelf->__VdfgTmp_h870317ba__0[3U]) 
           | ((vlSelf->__VdfgTmp_h870317ba__0[3U] & 
               vlSelf->__VdfgTmp_hc9c11027__0[3U]) 
              | ((vlSelf->__VdfgTmp_hc9c11027__0[3U] 
                  & vlSelf->__VdfgTmp_hc2bb2add__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h842981dd__0[3U] 
                     & vlSelf->__VdfgTmp_hc9c11027__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h842981dd__0[3U] 
                        | vlSelf->__VdfgTmp_h870317ba__0[3U]) 
                       & vlSelf->__VdfgTmp_hc2bb2add__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h842981dd__0[0U] ^ (vlSelf->__VdfgTmp_h870317ba__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc9c11027__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hc2bb2add__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h842981dd__0[1U] ^ (vlSelf->__VdfgTmp_h870317ba__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc9c11027__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hc2bb2add__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h842981dd__0[2U] ^ (vlSelf->__VdfgTmp_h870317ba__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc9c11027__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hc2bb2add__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h842981dd__0[3U] ^ (vlSelf->__VdfgTmp_h870317ba__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc9c11027__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hc2bb2add__0[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h3653544f__0[0U] & vlSelf->__VdfgTmp_h291def22__0[0U]) 
           | ((vlSelf->__VdfgTmp_h291def22__0[0U] & 
               vlSelf->__VdfgTmp_h1fd7069f__0[0U]) 
              | ((vlSelf->__VdfgTmp_h1fd7069f__0[0U] 
                  & vlSelf->__VdfgTmp_h6106a37a__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h3653544f__0[0U] 
                     & vlSelf->__VdfgTmp_h1fd7069f__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h3653544f__0[0U] 
                        | vlSelf->__VdfgTmp_h291def22__0[0U]) 
                       & vlSelf->__VdfgTmp_h6106a37a__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h3653544f__0[1U] & vlSelf->__VdfgTmp_h291def22__0[1U]) 
           | ((vlSelf->__VdfgTmp_h291def22__0[1U] & 
               vlSelf->__VdfgTmp_h1fd7069f__0[1U]) 
              | ((vlSelf->__VdfgTmp_h1fd7069f__0[1U] 
                  & vlSelf->__VdfgTmp_h6106a37a__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h3653544f__0[1U] 
                     & vlSelf->__VdfgTmp_h1fd7069f__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h3653544f__0[1U] 
                        | vlSelf->__VdfgTmp_h291def22__0[1U]) 
                       & vlSelf->__VdfgTmp_h6106a37a__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h3653544f__0[2U] & vlSelf->__VdfgTmp_h291def22__0[2U]) 
           | ((vlSelf->__VdfgTmp_h291def22__0[2U] & 
               vlSelf->__VdfgTmp_h1fd7069f__0[2U]) 
              | ((vlSelf->__VdfgTmp_h1fd7069f__0[2U] 
                  & vlSelf->__VdfgTmp_h6106a37a__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h3653544f__0[2U] 
                     & vlSelf->__VdfgTmp_h1fd7069f__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h3653544f__0[2U] 
                        | vlSelf->__VdfgTmp_h291def22__0[2U]) 
                       & vlSelf->__VdfgTmp_h6106a37a__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h3653544f__0[3U] & vlSelf->__VdfgTmp_h291def22__0[3U]) 
           | ((vlSelf->__VdfgTmp_h291def22__0[3U] & 
               vlSelf->__VdfgTmp_h1fd7069f__0[3U]) 
              | ((vlSelf->__VdfgTmp_h1fd7069f__0[3U] 
                  & vlSelf->__VdfgTmp_h6106a37a__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h3653544f__0[3U] 
                     & vlSelf->__VdfgTmp_h1fd7069f__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h3653544f__0[3U] 
                        | vlSelf->__VdfgTmp_h291def22__0[3U]) 
                       & vlSelf->__VdfgTmp_h6106a37a__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h3653544f__0[0U] ^ (vlSelf->__VdfgTmp_h291def22__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h1fd7069f__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h6106a37a__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h3653544f__0[1U] ^ (vlSelf->__VdfgTmp_h291def22__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h1fd7069f__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h6106a37a__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h3653544f__0[2U] ^ (vlSelf->__VdfgTmp_h291def22__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h1fd7069f__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h6106a37a__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h3653544f__0[3U] ^ (vlSelf->__VdfgTmp_h291def22__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h1fd7069f__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h6106a37a__0[3U])));
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
