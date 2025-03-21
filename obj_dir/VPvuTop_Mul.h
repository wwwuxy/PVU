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
        VL_IN(io_pir_exp1_i,23,0);
        VL_IN(io_pir_exp2_i,23,0);
        VL_IN16(io_pir_frac1_i,15,0);
        VL_IN16(io_pir_frac2_i,15,0);
        VL_OUT8(io_pir_sign_o,3,0);
        VL_OUT(io_pir_exp_o,23,0);
        VL_OUT(io_pir_frac_o,31,0);
        CData/*6:0*/ __PVT__sum;
        CData/*6:0*/ __PVT__sum_1;
        CData/*6:0*/ __PVT__sum_2;
        CData/*6:0*/ __PVT__sum_3;
        CData/*4:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod;
        CData/*4:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one;
        CData/*0:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z;
        CData/*0:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z;
        CData/*0:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T;
        CData/*0:0*/ __PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T;
        CData/*4:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_io_partial_prod;
        CData/*4:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProdFirst_io_partial_prod;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one;
        CData/*0:0*/ radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z;
        CData/*0:0*/ radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z;
        CData/*0:0*/ radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T;
        CData/*4:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_io_partial_prod;
        CData/*4:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProdFirst_io_partial_prod;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one;
        CData/*0:0*/ radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z;
        CData/*0:0*/ radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z;
        CData/*0:0*/ radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T;
        CData/*4:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_io_partial_prod;
        CData/*4:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProdFirst_io_partial_prod;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
    };
    struct {
        CData/*0:0*/ radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one;
        CData/*0:0*/ radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z;
        CData/*0:0*/ radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z;
        CData/*0:0*/ radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T;
        CData/*0:0*/ __PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T;
        CData/*0:0*/ __VdfgTmp_he79a7065__0;
        CData/*0:0*/ __VdfgTmp_hfa1d381d__0;
        CData/*0:0*/ __VdfgTmp_h9f372218__0;
        CData/*0:0*/ __VdfgTmp_h56183a7d__0;
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
