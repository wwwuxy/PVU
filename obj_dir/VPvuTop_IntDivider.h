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
    CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg;
    CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two;
    CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg;
    CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg;
    CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg;
    CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg;
    CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg;
    CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg;
    CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg;
    CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg;
    CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg;
    CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg;
    CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg;
    CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    VL_IN16(io_dividend,11,0);
    VL_IN16(io_divisor,11,0);
    VL_OUT(io_quotient,23,0);
    IData/*24:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod;
    QData/*35:0*/ __PVT__reciprocalMod__DOT__x1_x_new_full;
    QData/*35:0*/ __PVT__reciprocalMod__DOT__x2_x_new_full;
    QData/*35:0*/ __PVT__reciprocalMod__DOT__x3_x_new_full;
    QData/*47:0*/ __PVT__boothMult__DOT___genProds_io_partial_prods_1;
    QData/*47:0*/ __PVT__boothMult__DOT___genProds_io_partial_prods_2;
    QData/*47:0*/ __PVT__boothMult__DOT___genProds_io_partial_prods_3;
    QData/*47:0*/ __PVT__boothMult__DOT___genProds_io_partial_prods_4;
    QData/*47:0*/ __PVT__boothMult__DOT___genProds_io_partial_prods_5;
    QData/*47:0*/ __PVT__boothMult__DOT___genProds_io_partial_prods_6;
    QData/*47:0*/ __PVT__boothMult__DOT___genProds_io_partial_prods_7;
    QData/*47:0*/ __PVT__boothMult__DOT___genProds_io_partial_prods_8;
    QData/*47:0*/ __PVT__boothMult__DOT___genProds_io_partial_prods_9;
    QData/*47:0*/ __PVT__boothMult__DOT___genProds_io_partial_prods_10;
    QData/*47:0*/ __PVT__boothMult__DOT___genProds_io_partial_prods_11;
    QData/*47:0*/ __PVT__boothMult__DOT___genProds_io_partial_prods_12;
    QData/*50:0*/ __PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o;
    QData/*50:0*/ __PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o;
    QData/*50:0*/ __PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o;
    QData/*50:0*/ __PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o;
    QData/*47:0*/ __VdfgTmp_h037a5002__0;
    QData/*47:0*/ __VdfgTmp_h32ec1818__0;
    QData/*47:0*/ __VdfgTmp_h5febfed3__0;
    QData/*47:0*/ __VdfgTmp_he8298333__0;
    QData/*47:0*/ __VdfgTmp_h160609f1__0;
    QData/*47:0*/ __VdfgTmp_h9e4e06c7__0;
    QData/*47:0*/ __VdfgTmp_h041e3646__0;
    QData/*47:0*/ __VdfgTmp_h47de5b44__0;

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
