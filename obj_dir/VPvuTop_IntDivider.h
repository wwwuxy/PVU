// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPvuTop.h for the primary calling header

#ifndef VERILATED_VPVUTOP_INTDIVIDER_H_
#define VERILATED_VPVUTOP_INTDIVIDER_H_  // guard

#include "verilated.h"

class VPvuTop__Syms;

class VPvuTop_IntDivider final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg;
    };
    struct {
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __VdfgTmp_h339331ad__0;
        VL_IN(io_dividend,29,0);
        VL_IN(io_divisor,29,0);
        VlWide<3>/*89:0*/ __PVT__reciprocalMod__DOT__x1_x_new_full;
        VlWide<3>/*89:0*/ __PVT__reciprocalMod__DOT__x2_x_new_full;
        VlWide<3>/*89:0*/ __PVT__reciprocalMod__DOT__x3_x_new_full;
        VlWide<113>/*3599:0*/ boothMult__DOT____Vcellout__genProds__io_partial_prods;
        VlWide<4>/*123:0*/ __PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o;
        VlWide<4>/*123:0*/ __PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o;
        VlWide<4>/*123:0*/ __PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o;
    };
    struct {
        VlWide<4>/*123:0*/ __PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o;
        VlWide<4>/*122:0*/ __PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o;
        VlWide<4>/*122:0*/ __PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o;
        VlWide<4>/*122:0*/ __PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o;
        VlWide<4>/*122:0*/ __PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o;
        VlWide<4>/*119:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e7f94__0;
        VlWide<4>/*122:0*/ __PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o;
        VlWide<4>/*122:0*/ __PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o;
        VlWide<4>/*122:0*/ __PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o;
        VlWide<4>/*122:0*/ __PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o;
        VlWide<4>/*119:0*/ __VdfgTmp_h270c8384__0;
        VlWide<4>/*119:0*/ __VdfgTmp_h769702d4__0;
        VlWide<4>/*119:0*/ __VdfgTmp_hdf2d4ee4__0;
        VlWide<4>/*119:0*/ __VdfgTmp_h4eb69f7e__0;
        VlWide<3>/*67:0*/ __VdfgTmp_hdd1a36ee__0;
        VlWide<4>/*119:0*/ __VdfgTmp_h5b916b27__0;
        VlWide<4>/*119:0*/ __VdfgTmp_h253db874__0;
        VlWide<4>/*119:0*/ __VdfgTmp_he55e6e02__0;
        VlWide<4>/*119:0*/ __VdfgTmp_h062aa866__0;
        VlWide<3>/*75:0*/ __VdfgTmp_h4a73c73b__0;
        VlWide<3>/*83:0*/ __VdfgTmp_h6b408d73__0;
        VlWide<4>/*119:0*/ __VdfgTmp_hc2bb2add__0;
        VlWide<4>/*119:0*/ __VdfgTmp_hc9c11027__0;
        VlWide<4>/*119:0*/ __VdfgTmp_h870317ba__0;
        VlWide<4>/*119:0*/ __VdfgTmp_h842981dd__0;
        VlWide<3>/*91:0*/ __VdfgTmp_h5cdbe361__0;
        VlWide<4>/*97:0*/ __VdfgTmp_he0e5becf__0;
        VlWide<4>/*119:0*/ __VdfgTmp_h6106a37a__0;
        VlWide<4>/*119:0*/ __VdfgTmp_h1fd7069f__0;
        VlWide<4>/*119:0*/ __VdfgTmp_h291def22__0;
        VlWide<4>/*119:0*/ __VdfgTmp_h3653544f__0;
        VlWide<4>/*105:0*/ __VdfgTmp_h740638af__0;
        VlWide<4>/*113:0*/ __VdfgTmp_hd462b4a7__0;
        VL_OUT64(io_quotient,59,0);
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod;
        QData/*60:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod;
    };

    // INTERNAL VARIABLES
    VPvuTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPvuTop_IntDivider(VPvuTop__Syms* symsp, const char* v__name);
    ~VPvuTop_IntDivider();
    VL_UNCOPYABLE(VPvuTop_IntDivider);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
