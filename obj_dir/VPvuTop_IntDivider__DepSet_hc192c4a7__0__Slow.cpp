// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_IntDivider.h"

VL_ATTR_COLD void VPvuTop_IntDivider___ctor_var_reset(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ctor_var_reset\n"); );
    // Body
    vlSelf->io_dividend = VL_RAND_RESET_I(12);
    vlSelf->io_divisor = VL_RAND_RESET_I(12);
    vlSelf->io_quotient = VL_RAND_RESET_I(24);
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full = VL_RAND_RESET_Q(36);
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full = VL_RAND_RESET_Q(36);
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full = VL_RAND_RESET_Q(36);
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod = VL_RAND_RESET_I(25);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two = VL_RAND_RESET_I(1);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 = 0;
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o = VL_RAND_RESET_Q(51);
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o = VL_RAND_RESET_Q(51);
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o = VL_RAND_RESET_Q(51);
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o = VL_RAND_RESET_Q(51);
    vlSelf->__VdfgTmp_h037a5002__0 = 0;
    vlSelf->__VdfgTmp_h32ec1818__0 = 0;
    vlSelf->__VdfgTmp_h5febfed3__0 = 0;
    vlSelf->__VdfgTmp_he8298333__0 = 0;
    vlSelf->__VdfgTmp_h160609f1__0 = 0;
    vlSelf->__VdfgTmp_h9e4e06c7__0 = 0;
    vlSelf->__VdfgTmp_h041e3646__0 = 0;
    vlSelf->__VdfgTmp_h47de5b44__0 = 0;
}
