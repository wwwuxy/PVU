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
        VL_IN8(io_pir_sign1_i,3,0);
        VL_IN8(io_pir_sign2_i,3,0);
        VL_IN(io_pir_exp1_i,27,0);
        VL_IN(io_pir_exp2_i,27,0);
        VL_OUT8(io_pir_sign_o,3,0);
        VL_OUT(io_pir_exp_o,27,0);
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
        VL_IN64(io_pir_frac1_i,47,0);
        VL_IN64(io_pir_frac2_i,47,0);
        SData/*12:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod;
    };
    struct {
        SData/*12:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_4_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_3_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_1_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_4_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_3_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_1_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_4_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_3_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_1_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_io_partial_prod;
        SData/*12:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod;
        VL_OUTW(io_pir_frac_o,103,0,4);
        IData/*23:0*/ __VdfgTmp_h2f385a83__0;
        IData/*23:0*/ __VdfgTmp_h364ad519__0;
        IData/*23:0*/ __VdfgTmp_h5ef0cf0b__0;
        IData/*23:0*/ __VdfgTmp_h3285f01d__0;
        IData/*18:0*/ __VdfgTmp_h40533db2__0;
        IData/*23:0*/ __VdfgTmp_h4bc7c664__0;
        IData/*23:0*/ __VdfgTmp_h72a853ce__0;
        IData/*23:0*/ __VdfgTmp_h1b3d2058__0;
        IData/*23:0*/ __VdfgTmp_hdb1a7602__0;
        IData/*18:0*/ __VdfgTmp_hf018031e__0;
        IData/*23:0*/ __VdfgTmp_h0954ee0a__0;
        IData/*23:0*/ __VdfgTmp_h485d44d2__0;
        IData/*23:0*/ __VdfgTmp_hab3e8193__0;
        IData/*23:0*/ __VdfgTmp_h00ecf4bb__0;
        IData/*18:0*/ __VdfgTmp_h34428356__0;
        IData/*23:0*/ __VdfgTmp_h34fd2e18__0;
        IData/*23:0*/ __VdfgTmp_h4ca1f07e__0;
        IData/*23:0*/ __VdfgTmp_hcb6edc58__0;
        IData/*23:0*/ __VdfgTmp_h4e76b457__0;
        IData/*18:0*/ __VdfgTmp_h78e838a3__0;
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
