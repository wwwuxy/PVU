// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPvuTop.h for the primary calling header

#ifndef VERILATED_VPVUTOP_MUL_H_
#define VERILATED_VPVUTOP_MUL_H_  // guard

#include "verilated.h"

class VPvuTop__Syms;

class VPvuTop_Mul final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_pir_sign1_i,0,0);
        VL_IN8(io_pir_sign2_i,0,0);
        VL_IN8(io_pir_exp1_i,7,0);
        VL_IN8(io_pir_exp2_i,7,0);
        VL_OUT8(io_pir_sign_o,0,0);
        VL_OUT8(io_pir_exp_o,7,0);
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
    };
    struct {
        CData/*0:0*/ __VdfgTmp_he79a7065__0;
        SData/*8:0*/ __PVT__sum;
        VL_IN(io_pir_frac1_i,29,0);
        VL_IN(io_pir_frac2_i,29,0);
        IData/*30:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdLast_io_partial_prod;
        IData/*30:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod;
        IData/*30:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod;
        IData/*30:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod;
        IData/*30:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod;
        IData/*30:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod;
        IData/*30:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_7_io_partial_prod;
        IData/*30:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod;
        IData/*30:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod;
        IData/*30:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod;
        IData/*30:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod;
        IData/*30:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod;
        IData/*30:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod;
        VL_OUT64(io_pir_frac_o,61,0);
        QData/*62:0*/ __PVT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o;
        QData/*62:0*/ __PVT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o;
        QData/*62:0*/ __PVT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o;
        QData/*62:0*/ __PVT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o;
        QData/*59:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0;
        QData/*59:0*/ __VdfgTmp_h5f768604__0;
        QData/*59:0*/ __VdfgTmp_h6bc08e39__0;
        QData/*59:0*/ __VdfgTmp_hafaf8a53__0;
        QData/*59:0*/ __VdfgTmp_hf8d9977b__0;
        QData/*37:0*/ __VdfgTmp_hb71144ec__0;
        QData/*59:0*/ __VdfgTmp_hfa9a3362__0;
        QData/*59:0*/ __VdfgTmp_h5161ad5f__0;
        QData/*59:0*/ __VdfgTmp_h8fc417e7__0;
        QData/*59:0*/ __VdfgTmp_hd4213a94__0;
        QData/*45:0*/ __VdfgTmp_h6d3395dc__0;
        QData/*53:0*/ __VdfgTmp_he959b14b__0;
    };

    // INTERNAL VARIABLES
    VPvuTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPvuTop_Mul(VPvuTop__Syms* symsp, const char* v__name);
    ~VPvuTop_Mul();
    VL_UNCOPYABLE(VPvuTop_Mul);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
