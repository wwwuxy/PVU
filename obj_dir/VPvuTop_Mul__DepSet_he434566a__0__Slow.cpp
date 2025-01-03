// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_Mul.h"

VL_ATTR_COLD void VPvuTop_Mul___ctor_var_reset(VPvuTop_Mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_Mul___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_pir_sign1_i = VL_RAND_RESET_I(1);
    vlSelf->io_pir_sign2_i = VL_RAND_RESET_I(1);
    vlSelf->io_pir_exp1_i = VL_RAND_RESET_I(8);
    vlSelf->io_pir_exp2_i = VL_RAND_RESET_I(8);
    vlSelf->io_pir_frac1_i = VL_RAND_RESET_I(30);
    vlSelf->io_pir_frac2_i = VL_RAND_RESET_I(30);
    vlSelf->io_pir_sign_o = VL_RAND_RESET_I(1);
    vlSelf->io_pir_exp_o = VL_RAND_RESET_I(8);
    vlSelf->io_pir_frac_o = VL_RAND_RESET_Q(62);
    vlSelf->__PVT__sum = VL_RAND_RESET_I(9);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdLast_io_partial_prod = VL_RAND_RESET_I(31);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod = VL_RAND_RESET_I(31);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod = VL_RAND_RESET_I(31);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod = VL_RAND_RESET_I(31);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod = VL_RAND_RESET_I(31);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod = VL_RAND_RESET_I(31);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_7_io_partial_prod = VL_RAND_RESET_I(31);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod = VL_RAND_RESET_I(31);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod = VL_RAND_RESET_I(31);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod = VL_RAND_RESET_I(31);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod = VL_RAND_RESET_I(31);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod = VL_RAND_RESET_I(31);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod = VL_RAND_RESET_I(31);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o = VL_RAND_RESET_Q(63);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o = VL_RAND_RESET_Q(63);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o = VL_RAND_RESET_Q(63);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o = VL_RAND_RESET_Q(63);
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0 = 0;
    vlSelf->__VdfgTmp_he79a7065__0 = 0;
    vlSelf->__VdfgTmp_h5f768604__0 = 0;
    vlSelf->__VdfgTmp_h6bc08e39__0 = 0;
    vlSelf->__VdfgTmp_hafaf8a53__0 = 0;
    vlSelf->__VdfgTmp_hf8d9977b__0 = 0;
    vlSelf->__VdfgTmp_hb71144ec__0 = 0;
    vlSelf->__VdfgTmp_hfa9a3362__0 = 0;
    vlSelf->__VdfgTmp_h5161ad5f__0 = 0;
    vlSelf->__VdfgTmp_h8fc417e7__0 = 0;
    vlSelf->__VdfgTmp_hd4213a94__0 = 0;
    vlSelf->__VdfgTmp_h6d3395dc__0 = 0;
    vlSelf->__VdfgTmp_he959b14b__0 = 0;
}
