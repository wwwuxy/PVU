// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPvuTop.h for the primary calling header

#ifndef VERILATED_VPVUTOP___024ROOT_H_
#define VERILATED_VPVUTOP___024ROOT_H_  // guard

#include "verilated.h"

class VPvuTop__Syms;

class VPvuTop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_op,2,0);
        CData/*6:0*/ PvuTop__DOT____Vcellout__decode1__io_Exp;
        CData/*6:0*/ PvuTop__DOT____Vcellout__decode2__io_Exp;
        CData/*0:0*/ PvuTop__DOT____VdfgTmp_h04afc9dc__0;
        QData/*63:0*/ PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes;
        QData/*63:0*/ PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes;
        CData/*0:0*/ PvuTop__DOT__add__DOT__io_overflow;
        CData/*0:0*/ PvuTop__DOT__add__DOT___GEN;
        CData/*0:0*/ PvuTop__DOT__add__DOT__mant1_greater;
        CData/*6:0*/ PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o;
        CData/*7:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__sum;
        CData/*2:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_4__io_code;
        CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two;
        CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg;
        CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0;
        VlWide<5>/*159:0*/ PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes;
        QData/*63:0*/ PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes;
        QData/*63:0*/ PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes;
        VlWide<5>/*159:0*/ PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount;
        CData/*3:0*/ PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount;
        CData/*0:0*/ PvuTop__DOT__encode__DOT____VdfgTmp_h1c39e73a__0;
        CData/*0:0*/ __VdfgTmp_h4be4f099__0;
        CData/*7:0*/ __VdfgTmp_hebc8eb6b__0;
    };
    struct {
        CData/*6:0*/ __VdfgTmp_h8f00dd97__0;
        CData/*4:0*/ __VdfgTmp_h35df4b14__0;
        CData/*4:0*/ __VdfgTmp_h5d8e5814__0;
        QData/*63:0*/ __Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes;
        QData/*63:0*/ __Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes;
        VlWide<5>/*159:0*/ __Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes;
        QData/*63:0*/ __Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes;
        QData/*63:0*/ __Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes;
        VlWide<5>/*159:0*/ __Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VL_IN16(io_posit_i1_0,15,0);
        VL_IN16(io_posit_i2_0,15,0);
        VL_OUT16(io_posit_o_0,15,0);
        VL_OUT16(io_posit_dot_o,15,0);
        SData/*11:0*/ PvuTop__DOT____Vcellout__decode1__io_Frac;
        SData/*11:0*/ PvuTop__DOT____Vcellout__decode2__io_Frac;
        SData/*13:0*/ PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align;
        SData/*13:0*/ PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align;
        SData/*12:0*/ PvuTop__DOT____Vcellinp__encode__io_pir_frac;
        SData/*14:0*/ PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o;
        SData/*14:0*/ PvuTop__DOT__decode1__DOT___operand_0_T_6;
        SData/*14:0*/ PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i;
        SData/*15:0*/ PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
        SData/*14:0*/ PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp;
        SData/*14:0*/ PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o;
        SData/*14:0*/ PvuTop__DOT__decode2__DOT___operand_0_T_6;
        SData/*14:0*/ PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i;
        SData/*15:0*/ PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
        SData/*14:0*/ PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp;
        SData/*14:0*/ PvuTop__DOT__add__DOT__sum;
        SData/*14:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod;
        SData/*14:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod;
        SData/*14:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod;
        SData/*14:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod;
        SData/*14:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod;
        SData/*14:0*/ PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod;
        SData/*13:0*/ PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o;
        SData/*13:0*/ PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i;
        SData/*15:0*/ PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
        SData/*13:0*/ PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp;
        SData/*13:0*/ PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o;
        SData/*13:0*/ PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i;
        SData/*15:0*/ PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
        SData/*13:0*/ PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp;
        SData/*14:0*/ PvuTop__DOT__encode__DOT___value_after_round_0_T;
        SData/*13:0*/ __VdfgTmp_hf89a3cfa__0;
        SData/*13:0*/ __VdfgTmp_h132b72d8__0;
        SData/*15:0*/ __Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
        SData/*15:0*/ __Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
        SData/*15:0*/ __Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
        SData/*15:0*/ __Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
        IData/*29:0*/ PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i;
        IData/*28:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod;
        IData/*28:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod;
        IData/*28:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod;
        IData/*28:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod;
        IData/*28:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod;
        IData/*28:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod;
        IData/*28:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod;
        IData/*28:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod;
    };
    struct {
        IData/*28:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod;
        IData/*28:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod;
        IData/*28:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod;
        IData/*28:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod;
        IData/*28:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod;
        IData/*29:0*/ PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp;
        IData/*29:0*/ PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_0_T_1;
        IData/*29:0*/ PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i;
        IData/*29:0*/ PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o;
        IData/*28:0*/ PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i;
        IData/*31:0*/ PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
        IData/*28:0*/ PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp;
        IData/*29:0*/ PvuTop__DOT__frac_norm__DOT___shifter_io_result_o;
        IData/*29:0*/ PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i;
        IData/*31:0*/ PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
        IData/*29:0*/ PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp;
        IData/*22:0*/ __VdfgTmp_h2b13085d__0;
        IData/*27:0*/ __VdfgTmp_h6b6721ad__0;
        IData/*27:0*/ __VdfgTmp_h1ba49810__0;
        IData/*27:0*/ __VdfgTmp_h76900ab1__0;
        IData/*27:0*/ __VdfgTmp_h3bbcfaf3__0;
        IData/*31:0*/ __Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
        IData/*31:0*/ __Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*41:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full;
        QData/*41:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full;
        QData/*41:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full;
        QData/*58:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o;
        QData/*58:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o;
        QData/*58:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o;
        QData/*58:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o;
        QData/*43:0*/ PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o;
        QData/*43:0*/ PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i;
        QData/*43:0*/ PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o;
        QData/*43:0*/ PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i;
        QData/*55:0*/ __VdfgTmp_h509c563d__0;
        QData/*55:0*/ __VdfgTmp_h692db4f3__0;
        QData/*55:0*/ __VdfgTmp_h2d675acb__0;
        QData/*55:0*/ __VdfgTmp_h4535eaf9__0;
        QData/*34:0*/ __VdfgTmp_h7861aef0__0;
        QData/*55:0*/ __VdfgTmp_h27cac1ce__0;
        QData/*55:0*/ __VdfgTmp_h764cf51b__0;
        QData/*55:0*/ __VdfgTmp_hd62918e5__0;
        QData/*55:0*/ __VdfgTmp_h1cd9f180__0;
        QData/*42:0*/ __VdfgTmp_h2ac9f9df__0;
        QData/*50:0*/ __VdfgTmp_h9e108f72__0;
        VlUnpacked<CData/*0:0*/, 13> __Vm_traceActivity;
    };
    VlTriggerVec<15> __VstlTriggered;
    VlTriggerVec<15> __VicoTriggered;
    VlTriggerVec<15> __VactTriggered;
    VlTriggerVec<15> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPvuTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPvuTop___024root(VPvuTop__Syms* symsp, const char* v__name);
    ~VPvuTop___024root();
    VL_UNCOPYABLE(VPvuTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
