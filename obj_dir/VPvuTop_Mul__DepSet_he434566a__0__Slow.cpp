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
    vlSelf->io_pir_exp1_i = VL_RAND_RESET_I(28);
    vlSelf->io_pir_exp2_i = VL_RAND_RESET_I(28);
    vlSelf->io_pir_frac1_i = VL_RAND_RESET_Q(48);
    vlSelf->io_pir_frac2_i = VL_RAND_RESET_Q(48);
    vlSelf->io_pir_sign_o = VL_RAND_RESET_I(4);
    vlSelf->io_pir_exp_o = VL_RAND_RESET_I(28);
    VL_RAND_RESET_W(104, vlSelf->io_pir_frac_o);
    vlSelf->__PVT__sum = VL_RAND_RESET_I(8);
    vlSelf->__PVT__sum_1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__sum_2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__sum_3 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_4_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_3_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_1_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_4_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_3_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_1_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_4_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_3_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_1_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod = VL_RAND_RESET_I(13);
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two = VL_RAND_RESET_I(1);
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__VdfgTmp_h2f385a83__0 = 0;
    vlSelf->__VdfgTmp_h364ad519__0 = 0;
    vlSelf->__VdfgTmp_h5ef0cf0b__0 = 0;
    vlSelf->__VdfgTmp_h3285f01d__0 = 0;
    vlSelf->__VdfgTmp_h40533db2__0 = 0;
    vlSelf->__VdfgTmp_h4bc7c664__0 = 0;
    vlSelf->__VdfgTmp_h72a853ce__0 = 0;
    vlSelf->__VdfgTmp_h1b3d2058__0 = 0;
    vlSelf->__VdfgTmp_hdb1a7602__0 = 0;
    vlSelf->__VdfgTmp_hf018031e__0 = 0;
    vlSelf->__VdfgTmp_h0954ee0a__0 = 0;
    vlSelf->__VdfgTmp_h485d44d2__0 = 0;
    vlSelf->__VdfgTmp_hab3e8193__0 = 0;
    vlSelf->__VdfgTmp_h00ecf4bb__0 = 0;
    vlSelf->__VdfgTmp_h34428356__0 = 0;
    vlSelf->__VdfgTmp_h34fd2e18__0 = 0;
    vlSelf->__VdfgTmp_h4ca1f07e__0 = 0;
    vlSelf->__VdfgTmp_hcb6edc58__0 = 0;
    vlSelf->__VdfgTmp_h4e76b457__0 = 0;
    vlSelf->__VdfgTmp_h78e838a3__0 = 0;
}
