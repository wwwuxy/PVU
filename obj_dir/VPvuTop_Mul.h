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
        VL_IN8(io_pir_sign1_i_0,0,0);
        VL_IN8(io_pir_sign1_i_1,0,0);
        VL_IN8(io_pir_sign1_i_2,0,0);
        VL_IN8(io_pir_sign1_i_3,0,0);
        VL_IN8(io_pir_sign2_i_0,0,0);
        VL_IN8(io_pir_sign2_i_1,0,0);
        VL_IN8(io_pir_sign2_i_2,0,0);
        VL_IN8(io_pir_sign2_i_3,0,0);
        VL_IN8(io_pir_exp1_i_0,6,0);
        VL_IN8(io_pir_exp1_i_1,6,0);
        VL_IN8(io_pir_exp1_i_2,6,0);
        VL_IN8(io_pir_exp1_i_3,6,0);
        VL_IN8(io_pir_exp2_i_0,6,0);
        VL_IN8(io_pir_exp2_i_1,6,0);
        VL_IN8(io_pir_exp2_i_2,6,0);
        VL_IN8(io_pir_exp2_i_3,6,0);
        VL_OUT8(io_pir_sign_o_0,0,0);
        VL_OUT8(io_pir_sign_o_1,0,0);
        VL_OUT8(io_pir_sign_o_2,0,0);
        VL_OUT8(io_pir_sign_o_3,0,0);
        VL_OUT8(io_pir_exp_o_0,6,0);
        VL_OUT8(io_pir_exp_o_1,6,0);
        VL_OUT8(io_pir_exp_o_2,6,0);
        VL_OUT8(io_pir_exp_o_3,6,0);
        CData/*7:0*/ __PVT__sum;
        CData/*7:0*/ __PVT__sum_1;
        CData/*7:0*/ __PVT__sum_2;
        CData/*7:0*/ __PVT__sum_3;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    };
    struct {
        CData/*0:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg;
        CData/*0:0*/ radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        VL_IN16(io_pir_frac1_i_0,11,0);
        VL_IN16(io_pir_frac1_i_1,11,0);
        VL_IN16(io_pir_frac1_i_2,11,0);
        VL_IN16(io_pir_frac1_i_3,11,0);
        VL_IN16(io_pir_frac2_i_0,11,0);
        VL_IN16(io_pir_frac2_i_1,11,0);
        VL_IN16(io_pir_frac2_i_2,11,0);
        VL_IN16(io_pir_frac2_i_3,11,0);
        SData/*12:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod;
        VL_OUT(io_pir_frac_o_0,25,0);
        VL_OUT(io_pir_frac_o_1,25,0);
        VL_OUT(io_pir_frac_o_2,25,0);
        VL_OUT(io_pir_frac_o_3,25,0);
        IData/*23:0*/ __PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1;
        IData/*23:0*/ __PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2;
        IData/*23:0*/ __PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3;
        IData/*23:0*/ __PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4;
        IData/*23:0*/ __PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5;
        IData/*23:0*/ __PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6;
        IData/*23:0*/ __PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1;
        IData/*23:0*/ __PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2;
        IData/*23:0*/ __PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3;
        IData/*23:0*/ __PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4;
        IData/*23:0*/ __PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5;
        IData/*23:0*/ __PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6;
        IData/*23:0*/ __PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1;
        IData/*23:0*/ __PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2;
        IData/*23:0*/ __PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3;
        IData/*23:0*/ __PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4;
        IData/*23:0*/ __PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5;
        IData/*23:0*/ __PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6;
        IData/*23:0*/ __PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1;
        IData/*23:0*/ __PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2;
        IData/*23:0*/ __PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3;
        IData/*23:0*/ __PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4;
        IData/*23:0*/ __PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5;
        IData/*23:0*/ __PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6;
        IData/*23:0*/ __VdfgTmp_h4c64d241__0;
        IData/*23:0*/ __VdfgTmp_h8444d1ae__0;
        IData/*23:0*/ __VdfgTmp_h505784c4__0;
        IData/*23:0*/ __VdfgTmp_hd4782908__0;
        IData/*23:0*/ __VdfgTmp_hd548faa5__0;
        IData/*23:0*/ __VdfgTmp_h95c4cb47__0;
        IData/*23:0*/ __VdfgTmp_h7acef19d__0;
        IData/*23:0*/ __VdfgTmp_h97c227e4__0;
        IData/*23:0*/ __VdfgTmp_h17ee467a__0;
        IData/*23:0*/ __VdfgTmp_h82e80ff0__0;
        IData/*23:0*/ __VdfgTmp_h43f2123a__0;
        IData/*23:0*/ __VdfgTmp_hb60bfffe__0;
    };
    struct {
        IData/*23:0*/ __VdfgTmp_h677abb95__0;
        IData/*23:0*/ __VdfgTmp_hd573abef__0;
        IData/*23:0*/ __VdfgTmp_h456b2780__0;
        IData/*23:0*/ __VdfgTmp_hc69fe621__0;
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
