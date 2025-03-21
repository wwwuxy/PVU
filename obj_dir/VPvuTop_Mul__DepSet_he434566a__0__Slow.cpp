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
    vlSelf->io_pir_sign1_i = VL_RAND_RESET_I(4);
    vlSelf->io_pir_sign2_i = VL_RAND_RESET_I(4);
    vlSelf->io_pir_exp1_i = VL_RAND_RESET_I(24);
    vlSelf->io_pir_exp2_i = VL_RAND_RESET_I(24);
    vlSelf->io_pir_frac1_i = VL_RAND_RESET_I(16);
    vlSelf->io_pir_frac2_i = VL_RAND_RESET_I(16);
    vlSelf->io_pir_sign_o = VL_RAND_RESET_I(4);
    vlSelf->io_pir_exp_o = VL_RAND_RESET_I(24);
    vlSelf->io_pir_frac_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sum = VL_RAND_RESET_I(7);
    vlSelf->__PVT__sum_1 = VL_RAND_RESET_I(7);
    vlSelf->__PVT__sum_2 = VL_RAND_RESET_I(7);
    vlSelf->__PVT__sum_3 = VL_RAND_RESET_I(7);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod = VL_RAND_RESET_I(5);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod = VL_RAND_RESET_I(5);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_io_partial_prod = VL_RAND_RESET_I(5);
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProdFirst_io_partial_prod = VL_RAND_RESET_I(5);
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_io_partial_prod = VL_RAND_RESET_I(5);
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProdFirst_io_partial_prod = VL_RAND_RESET_I(5);
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_io_partial_prod = VL_RAND_RESET_I(5);
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProdFirst_io_partial_prod = VL_RAND_RESET_I(5);
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_he79a7065__0 = 0;
    vlSelf->__VdfgTmp_hfa1d381d__0 = 0;
    vlSelf->__VdfgTmp_h9f372218__0 = 0;
    vlSelf->__VdfgTmp_h56183a7d__0 = 0;
}
