// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPvuTop.h for the primary calling header

#ifndef VERILATED_VPVUTOP_RADIX4BOOTHMULTIPLIER_H_
#define VERILATED_VPVUTOP_RADIX4BOOTHMULTIPLIER_H_  // guard

#include "verilated.h"

class VPvuTop__Syms;

class VPvuTop_Radix4BoothMultiplier final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg;
    CData/*0:0*/ __PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two;
    CData/*0:0*/ __PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg;
    CData/*0:0*/ genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg;
    CData/*0:0*/ genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg;
    CData/*0:0*/ genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg;
    CData/*0:0*/ genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg;
    CData/*0:0*/ genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg;
    CData/*0:0*/ genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg;
    CData/*0:0*/ genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg;
    CData/*0:0*/ genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg;
    CData/*0:0*/ genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg;
    CData/*0:0*/ genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg;
    CData/*0:0*/ genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg;
    CData/*0:0*/ genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    CData/*0:0*/ __PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg;
    CData/*0:0*/ genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
    VL_IN(io_operand_a,27,0);
    VL_IN(io_operand_b,27,0);
    IData/*28:0*/ __PVT__genProds__DOT___genProd_12_io_partial_prod;
    IData/*28:0*/ __PVT__genProds__DOT___genProd_11_io_partial_prod;
    IData/*28:0*/ __PVT__genProds__DOT___genProd_10_io_partial_prod;
    IData/*28:0*/ __PVT__genProds__DOT___genProd_9_io_partial_prod;
    IData/*28:0*/ __PVT__genProds__DOT___genProd_8_io_partial_prod;
    IData/*28:0*/ __PVT__genProds__DOT___genProd_7_io_partial_prod;
    IData/*28:0*/ __PVT__genProds__DOT___genProd_5_io_partial_prod;
    IData/*28:0*/ __PVT__genProds__DOT___genProd_4_io_partial_prod;
    IData/*28:0*/ __PVT__genProds__DOT___genProd_3_io_partial_prod;
    IData/*28:0*/ __PVT__genProds__DOT___genProd_2_io_partial_prod;
    IData/*28:0*/ __PVT__genProds__DOT___genProd_1_io_partial_prod;
    IData/*28:0*/ __PVT__genProds__DOT___genProd_io_partial_prod;
    IData/*28:0*/ __PVT__genProds__DOT___genProd0_io_partial_prod;
    VL_OUT64(io_sum_o,55,0);
    VL_OUT64(io_carry_o,55,0);
    QData/*58:0*/ __PVT__csaTree__DOT___csa_tree_B_io_sum_o;
    QData/*58:0*/ __PVT__csaTree__DOT___csa_tree_B_io_carry_o;
    QData/*58:0*/ __PVT__csaTree__DOT___csa_tree_A_io_sum_o;
    QData/*58:0*/ __PVT__csaTree__DOT___csa_tree_A_io_carry_o;
    QData/*55:0*/ __VdfgTmp_hc515ff61__0;
    QData/*55:0*/ __VdfgTmp_hed199804__0;
    QData/*55:0*/ __VdfgTmp_h69e4af33__0;
    QData/*55:0*/ __VdfgTmp_h62cd212c__0;
    QData/*34:0*/ __VdfgTmp_hd7a1965f__0;
    QData/*55:0*/ __VdfgTmp_h14e57f54__0;
    QData/*55:0*/ __VdfgTmp_h9ceee2f4__0;
    QData/*55:0*/ __VdfgTmp_he734e97d__0;
    QData/*55:0*/ __VdfgTmp_h32c20af4__0;
    QData/*42:0*/ __VdfgTmp_h7b320ed4__0;
    QData/*50:0*/ __VdfgTmp_h81291c99__0;

    // INTERNAL VARIABLES
    VPvuTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPvuTop_Radix4BoothMultiplier(VPvuTop__Syms* symsp, const char* v__name);
    ~VPvuTop_Radix4BoothMultiplier();
    VL_UNCOPYABLE(VPvuTop_Radix4BoothMultiplier);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
