// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_Mul.h"
#include "VPvuTop__Syms.h"

VL_INLINE_OPT void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__0(VPvuTop_Mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__0\n"); );
    // Body
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((2ULL == (3ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x2000ULL == (0x3000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x2000000ULL == (0x3000000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x2000000000ULL == (0x3000000000ULL 
                                       & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((8ULL == (0xcULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80ULL == (0xc0ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000ULL == (0xc000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000ULL == (0xc0000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000ULL == (0xc000000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000ULL == (0xc0000000ULL 
                                     & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000000ULL == (0xc000000000ULL 
                                       & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000000ULL == (0xc0000000000ULL 
                                        & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20ULL == (0x30ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000ULL == (0x30000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000ULL == (0x30000000ULL 
                                     & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000000ULL == (0x30000000000ULL 
                                        & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200ULL == (0x300ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000ULL == (0x300000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000000ULL == (0x300000000ULL 
                                      & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000000000ULL == (0x300000000000ULL 
                                         & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800ULL == (0xc00ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000ULL == (0xc00000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000000ULL == (0xc00000000ULL 
                                      & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000000000ULL == (0xc00000000000ULL 
                                         & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 1U)) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0xdU)) | (IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0x19U)) | (IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0x25U)) | (IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (8ULL == (0xaULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80ULL == (0xa0ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000ULL == (0xa000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000ULL == (0xa0000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000ULL == (0xa000000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000ULL == (0xa0000000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000000ULL == (0xa000000000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000000ULL == (0xa0000000000ULL 
                                   & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20ULL == (0x28ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000ULL == (0x28000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000ULL == (0x28000000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000000ULL == (0x28000000000ULL 
                                   & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200ULL == (0x280ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000ULL == (0x280000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000000ULL == (0x280000000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000000000ULL == (0x280000000000ULL 
                                    & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800ULL == (0xa00ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000ULL == (0xa00000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000000ULL == (0xa00000000ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000000000ULL == (0xa00000000000ULL 
                                    & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)));
}

VL_INLINE_OPT void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__1(VPvuTop_Mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__1\n"); );
    // Init
    IData/*23:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0;
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0;
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0;
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0;
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0;
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0;
    radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0;
    radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0;
    radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0;
    radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0;
    radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0;
    radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0;
    radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0;
    radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0;
    radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0;
    radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0;
    radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0;
    radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0;
    radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0;
    radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0 = 0;
    IData/*23:0*/ radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0;
    radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0 = 0;
    // Body
    vlSelf->__PVT__sum_3 = (0xffU & (((0x80U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp 
                                                >> 0x14U)) 
                                      | (0x7fU & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp 
                                                  >> 0x15U))) 
                                     + ((0x80U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp 
                                                  >> 0x14U)) 
                                        | (0x7fU & 
                                           (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp 
                                            >> 0x15U)))));
    vlSelf->__PVT__sum_2 = (0xffU & (((0x80U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp 
                                                >> 0xdU)) 
                                      | (0x7fU & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp 
                                                  >> 0xeU))) 
                                     + ((0x80U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp 
                                                  >> 0xdU)) 
                                        | (0x7fU & 
                                           (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp 
                                            >> 0xeU)))));
    vlSelf->__PVT__sum_1 = (0xffU & (((0x80U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp 
                                                >> 6U)) 
                                      | (0x7fU & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp 
                                                  >> 7U))) 
                                     + ((0x80U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp 
                                                  >> 6U)) 
                                        | (0x7fU & 
                                           (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp 
                                            >> 7U)))));
    vlSelf->__PVT__sum = (0xffU & (((0x80U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp 
                                              << 1U)) 
                                    | (0x7fU & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp)) 
                                   + ((0x80U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp 
                                                << 1U)) 
                                      | (0x7fU & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))
                          ? (0xfffU & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac))
                          : ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                              ? (0x1ffeU & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                            << 1U))
                              : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                        >> 0xcU))) ? 
                         (0xfffU & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                            >> 0xcU)))
                          : ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                              ? (0x1ffeU & ((IData)(
                                                    (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                     >> 0xcU)) 
                                            << 1U))
                              : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                        >> 0x18U)))
                          ? (0xfffU & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                               >> 0x18U)))
                          : ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                              ? (0x1ffeU & ((IData)(
                                                    (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                     >> 0x18U)) 
                                            << 1U))
                              : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                        >> 0x24U)))
                          ? (0xfffU & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                               >> 0x24U)))
                          : ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                              ? (0x1ffeU & ((IData)(
                                                    (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                     >> 0x24U)) 
                                            << 1U))
                              : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((4ULL == (6ULL 
                                                  & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                | (IData)((2ULL == 
                                           (6ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                          ? (0xfffU & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac))
                          : ((1U & ((IData)((6ULL == 
                                             (0xeULL 
                                              & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                    | ((~ (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 1U))) 
                                       & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? (0x1ffeU & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                            << 1U))
                              : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x4000ULL 
                                         == (0x6000ULL 
                                             & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                | (IData)((0x2000ULL 
                                           == (0x6000ULL 
                                               & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                          ? (0xfffU & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                               >> 0xcU)))
                          : ((1U & ((IData)((0x6000ULL 
                                             == (0xe000ULL 
                                                 & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                    | ((~ (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0xdU))) 
                                       & (IData)(vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? (0x1ffeU & ((IData)(
                                                    (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                     >> 0xcU)) 
                                            << 1U))
                              : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x4000000ULL 
                                         == (0x6000000ULL 
                                             & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                | (IData)((0x2000000ULL 
                                           == (0x6000000ULL 
                                               & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                          ? (0xfffU & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                               >> 0x18U)))
                          : ((1U & ((IData)((0x6000000ULL 
                                             == (0xe000000ULL 
                                                 & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                    | ((~ (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0x19U))) 
                                       & (IData)(vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? (0x1ffeU & ((IData)(
                                                    (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                     >> 0x18U)) 
                                            << 1U))
                              : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x4000000000ULL 
                                         == (0x6000000000ULL 
                                             & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                | (IData)((0x2000000000ULL 
                                           == (0x6000000000ULL 
                                               & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                          ? (0xfffU & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                               >> 0x24U)))
                          : ((1U & ((IData)((0x6000000000ULL 
                                             == (0xe000000000ULL 
                                                 & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                    | ((~ (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0x25U))) 
                                       & (IData)(vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? (0x1ffeU & ((IData)(
                                                    (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                     >> 0x24U)) 
                                            << 1U))
                              : 0U))));
    vlSelf->__VdfgTmp_h40533db2__0 = ((0x7ffc0U & (
                                                   ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                                    ^ 
                                                    ((1U 
                                                      & ((IData)(
                                                                 (0x40ULL 
                                                                  == 
                                                                  (0x60ULL 
                                                                   & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                                         | (IData)(
                                                                   (0x20ULL 
                                                                    == 
                                                                    (0x60ULL 
                                                                     & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(
                                                                  (0x60ULL 
                                                                   == 
                                                                   (0xe0ULL 
                                                                    & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                                          | ((~ (IData)(
                                                                        (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                         >> 5U))) 
                                                             & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                       ? 
                                                      (0x1ffeU 
                                                       & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                          << 1U))
                                                       : 0U))) 
                                                   << 6U)) 
                                      | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                         << 4U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x10ULL == 
                                         (0x18ULL & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                | (IData)((8ULL == 
                                           (0x18ULL 
                                            & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                          ? (0xfffU & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac))
                          : ((1U & ((IData)((0x18ULL 
                                             == (0x38ULL 
                                                 & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                    | ((~ (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 3U))) 
                                       & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? (0x1ffeU & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                            << 1U))
                              : 0U))));
    vlSelf->__VdfgTmp_hf018031e__0 = ((0x7ffc0U & (
                                                   ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                                    ^ 
                                                    ((1U 
                                                      & ((IData)(
                                                                 (0x40000ULL 
                                                                  == 
                                                                  (0x60000ULL 
                                                                   & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                                         | (IData)(
                                                                   (0x20000ULL 
                                                                    == 
                                                                    (0x60000ULL 
                                                                     & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                 >> 0xcU)))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(
                                                                  (0x60000ULL 
                                                                   == 
                                                                   (0xe0000ULL 
                                                                    & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                                          | ((~ (IData)(
                                                                        (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                         >> 0x11U))) 
                                                             & (IData)(vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                       ? 
                                                      (0x1ffeU 
                                                       & ((IData)(
                                                                  (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                   >> 0xcU)) 
                                                          << 1U))
                                                       : 0U))) 
                                                   << 6U)) 
                                      | ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                         << 4U));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x10000ULL 
                                         == (0x18000ULL 
                                             & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                | (IData)((0x8000ULL 
                                           == (0x18000ULL 
                                               & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                          ? (0xfffU & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                               >> 0xcU)))
                          : ((1U & ((IData)((0x18000ULL 
                                             == (0x38000ULL 
                                                 & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                    | ((~ (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0xfU))) 
                                       & (IData)(vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? (0x1ffeU & ((IData)(
                                                    (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                     >> 0xcU)) 
                                            << 1U))
                              : 0U))));
    vlSelf->__VdfgTmp_h34428356__0 = ((0x7ffc0U & (
                                                   ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                                    ^ 
                                                    ((1U 
                                                      & ((IData)(
                                                                 (0x40000000ULL 
                                                                  == 
                                                                  (0x60000000ULL 
                                                                   & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                                         | (IData)(
                                                                   (0x20000000ULL 
                                                                    == 
                                                                    (0x60000000ULL 
                                                                     & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                 >> 0x18U)))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(
                                                                  (0x60000000ULL 
                                                                   == 
                                                                   (0xe0000000ULL 
                                                                    & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                                          | ((~ (IData)(
                                                                        (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                         >> 0x1dU))) 
                                                             & (IData)(vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                       ? 
                                                      (0x1ffeU 
                                                       & ((IData)(
                                                                  (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                   >> 0x18U)) 
                                                          << 1U))
                                                       : 0U))) 
                                                   << 6U)) 
                                      | ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                         << 4U));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x10000000ULL 
                                         == (0x18000000ULL 
                                             & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                | (IData)((0x8000000ULL 
                                           == (0x18000000ULL 
                                               & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                          ? (0xfffU & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                               >> 0x18U)))
                          : ((1U & ((IData)((0x18000000ULL 
                                             == (0x38000000ULL 
                                                 & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                    | ((~ (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0x1bU))) 
                                       & (IData)(vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? (0x1ffeU & ((IData)(
                                                    (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                     >> 0x18U)) 
                                            << 1U))
                              : 0U))));
    vlSelf->__VdfgTmp_h78e838a3__0 = ((0x7ffc0U & (
                                                   ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                                    ^ 
                                                    ((1U 
                                                      & ((IData)(
                                                                 (0x40000000000ULL 
                                                                  == 
                                                                  (0x60000000000ULL 
                                                                   & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                                         | (IData)(
                                                                   (0x20000000000ULL 
                                                                    == 
                                                                    (0x60000000000ULL 
                                                                     & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                 >> 0x24U)))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(
                                                                  (0x60000000000ULL 
                                                                   == 
                                                                   (0xe0000000000ULL 
                                                                    & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                                          | ((~ (IData)(
                                                                        (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                         >> 0x29U))) 
                                                             & (IData)(vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                       ? 
                                                      (0x1ffeU 
                                                       & ((IData)(
                                                                  (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                   >> 0x24U)) 
                                                          << 1U))
                                                       : 0U))) 
                                                   << 6U)) 
                                      | ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                         << 4U));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x10000000000ULL 
                                         == (0x18000000000ULL 
                                             & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                | (IData)((0x8000000000ULL 
                                           == (0x18000000000ULL 
                                               & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                          ? (0xfffU & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                               >> 0x24U)))
                          : ((1U & ((IData)((0x18000000000ULL 
                                             == (0x38000000000ULL 
                                                 & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                    | ((~ (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0x27U))) 
                                       & (IData)(vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? (0x1ffeU & ((IData)(
                                                    (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                     >> 0x24U)) 
                                            << 1U))
                              : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x100ULL == 
                                         (0x180ULL 
                                          & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                | (IData)((0x80ULL 
                                           == (0x180ULL 
                                               & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                          ? (0xfffU & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac))
                          : ((1U & ((IData)((0x180ULL 
                                             == (0x380ULL 
                                                 & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                    | ((~ (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 7U))) 
                                       & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? (0x1ffeU & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                            << 1U))
                              : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x100000ULL 
                                         == (0x180000ULL 
                                             & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                | (IData)((0x80000ULL 
                                           == (0x180000ULL 
                                               & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                          ? (0xfffU & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                               >> 0xcU)))
                          : ((1U & ((IData)((0x180000ULL 
                                             == (0x380000ULL 
                                                 & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                    | ((~ (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0x13U))) 
                                       & (IData)(vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? (0x1ffeU & ((IData)(
                                                    (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                     >> 0xcU)) 
                                            << 1U))
                              : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x100000000ULL 
                                         == (0x180000000ULL 
                                             & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                | (IData)((0x80000000ULL 
                                           == (0x180000000ULL 
                                               & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                          ? (0xfffU & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                               >> 0x18U)))
                          : ((1U & ((IData)((0x180000000ULL 
                                             == (0x380000000ULL 
                                                 & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                    | ((~ (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0x1fU))) 
                                       & (IData)(vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? (0x1ffeU & ((IData)(
                                                    (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                     >> 0x18U)) 
                                            << 1U))
                              : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x100000000000ULL 
                                         == (0x180000000000ULL 
                                             & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                | (IData)((0x80000000000ULL 
                                           == (0x180000000000ULL 
                                               & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                          ? (0xfffU & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                               >> 0x24U)))
                          : ((1U & ((IData)((0x180000000000ULL 
                                             == (0x380000000000ULL 
                                                 & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                    | ((~ (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0x2bU))) 
                                       & (IData)(vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? (0x1ffeU & ((IData)(
                                                    (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                     >> 0x24U)) 
                                            << 1U))
                              : 0U))));
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0 
        = ((((1U & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0xbU))) ? (0xfffU & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac))
              : 0U) << 0xcU) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                << 0xaU));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x400ULL == 
                                         (0x600ULL 
                                          & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                | (IData)((0x200ULL 
                                           == (0x600ULL 
                                               & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                          ? (0xfffU & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac))
                          : ((1U & ((IData)((0x600ULL 
                                             == (0xe00ULL 
                                                 & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                    | ((~ (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 9U))) 
                                       & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? (0x1ffeU & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                            << 1U))
                              : 0U))));
    radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0 
        = ((((1U & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0x17U))) ? (0xfffU & (IData)(
                                                            (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                             >> 0xcU)))
              : 0U) << 0xcU) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                << 0xaU));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x400000ULL 
                                         == (0x600000ULL 
                                             & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                | (IData)((0x200000ULL 
                                           == (0x600000ULL 
                                               & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                          ? (0xfffU & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                               >> 0xcU)))
                          : ((1U & ((IData)((0x600000ULL 
                                             == (0xe00000ULL 
                                                 & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                    | ((~ (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0x15U))) 
                                       & (IData)(vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? (0x1ffeU & ((IData)(
                                                    (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                     >> 0xcU)) 
                                            << 1U))
                              : 0U))));
    radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0 
        = ((((1U & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0x23U))) ? (0xfffU & (IData)(
                                                            (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                             >> 0x18U)))
              : 0U) << 0xcU) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                << 0xaU));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x400000000ULL 
                                         == (0x600000000ULL 
                                             & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                | (IData)((0x200000000ULL 
                                           == (0x600000000ULL 
                                               & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                          ? (0xfffU & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                               >> 0x18U)))
                          : ((1U & ((IData)((0x600000000ULL 
                                             == (0xe00000000ULL 
                                                 & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                    | ((~ (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0x21U))) 
                                       & (IData)(vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? (0x1ffeU & ((IData)(
                                                    (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                     >> 0x18U)) 
                                            << 1U))
                              : 0U))));
    radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0 
        = ((((1U & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0x2fU))) ? (0xfffU & (IData)(
                                                            (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                             >> 0x24U)))
              : 0U) << 0xcU) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                << 0xaU));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1fffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x400000000000ULL 
                                         == (0x600000000000ULL 
                                             & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                | (IData)((0x200000000000ULL 
                                           == (0x600000000000ULL 
                                               & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
                          ? (0xfffU & (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                               >> 0x24U)))
                          : ((1U & ((IData)((0x600000000000ULL 
                                             == (0xe00000000000ULL 
                                                 & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                    | ((~ (IData)((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0x2dU))) 
                                       & (IData)(vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? (0x1ffeU & ((IData)(
                                                    (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                     >> 0x24U)) 
                                            << 1U))
                              : 0U))));
    vlSelf->io_pir_exp_o = ((((0x80U & (IData)(vlSelf->__PVT__sum_3))
                               ? 0x3fU : (0x7fU & (IData)(vlSelf->__PVT__sum_3))) 
                             << 0x15U) | ((((0x80U 
                                             & (IData)(vlSelf->__PVT__sum_2))
                                             ? 0x3fU
                                             : (0x7fU 
                                                & (IData)(vlSelf->__PVT__sum_2))) 
                                           << 0xeU) 
                                          | ((((0x80U 
                                                & (IData)(vlSelf->__PVT__sum_1))
                                                ? 0x3fU
                                                : (0x7fU 
                                                   & (IData)(vlSelf->__PVT__sum_1))) 
                                              << 7U) 
                                             | ((0x80U 
                                                 & (IData)(vlSelf->__PVT__sum))
                                                 ? 0x3fU
                                                 : 
                                                (0x7fU 
                                                 & (IData)(vlSelf->__PVT__sum))))));
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
        = (((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod) 
            << 2U) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
        = (((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_io_partial_prod) 
            << 2U) | (IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
        = (((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_io_partial_prod) 
            << 2U) | (IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
        = (((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_io_partial_prod) 
            << 2U) | (IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0 
        = (((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod) 
            << 4U) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                      << 2U));
    radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0 
        = (((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_1_io_partial_prod) 
            << 4U) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                      << 2U));
    radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0 
        = (((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_1_io_partial_prod) 
            << 4U) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                      << 2U));
    radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0 
        = (((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_1_io_partial_prod) 
            << 4U) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                      << 2U));
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
        = (((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod) 
            << 8U) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                      << 6U));
    radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
        = (((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_3_io_partial_prod) 
            << 8U) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                      << 6U));
    radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
        = (((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_3_io_partial_prod) 
            << 8U) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                      << 6U));
    radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
        = (((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_3_io_partial_prod) 
            << 8U) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                      << 6U));
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0 
        = (((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod) 
            << 0xaU) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                        << 8U));
    radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0 
        = (((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_4_io_partial_prod) 
            << 0xaU) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                        << 8U));
    radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0 
        = (((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_4_io_partial_prod) 
            << 0xaU) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                        << 8U));
    radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0 
        = (((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_4_io_partial_prod) 
            << 0xaU) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                        << 8U));
    vlSelf->__VdfgTmp_h3285f01d__0 = ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                      ^ (radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
                                         ^ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0));
    vlSelf->__VdfgTmp_h5ef0cf0b__0 = (((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0) 
                                      | ((radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
                                          | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0));
    vlSelf->__VdfgTmp_hdb1a7602__0 = ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                      ^ (radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
                                         ^ radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0));
    vlSelf->__VdfgTmp_h1b3d2058__0 = (((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0) 
                                      | ((radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
                                          | (IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0));
    vlSelf->__VdfgTmp_h00ecf4bb__0 = ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                      ^ (radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
                                         ^ radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0));
    vlSelf->__VdfgTmp_hab3e8193__0 = (((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0) 
                                      | ((radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
                                          | (IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0));
    vlSelf->__VdfgTmp_h4e76b457__0 = ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                      ^ (radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
                                         ^ radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0));
    vlSelf->__VdfgTmp_hcb6edc58__0 = (((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0) 
                                      | ((radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
                                          | (IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565f534__0));
    vlSelf->__VdfgTmp_h364ad519__0 = (vlSelf->__VdfgTmp_h40533db2__0 
                                      ^ (radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
                                         ^ (radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0 
                                            ^ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0)));
    vlSelf->__VdfgTmp_h2f385a83__0 = ((vlSelf->__VdfgTmp_h40533db2__0 
                                       & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0) 
                                      | ((radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
                                          & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0) 
                                         | ((radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0 
                                             & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0) 
                                            | ((vlSelf->__VdfgTmp_h40533db2__0 
                                                & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0) 
                                               | ((vlSelf->__VdfgTmp_h40533db2__0 
                                                   | radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0) 
                                                  & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0)))));
    vlSelf->__VdfgTmp_h72a853ce__0 = (vlSelf->__VdfgTmp_hf018031e__0 
                                      ^ (radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
                                         ^ (radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0 
                                            ^ radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0)));
    vlSelf->__VdfgTmp_h4bc7c664__0 = ((vlSelf->__VdfgTmp_hf018031e__0 
                                       & radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0) 
                                      | ((radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
                                          & radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0) 
                                         | ((radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0 
                                             & radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0) 
                                            | ((vlSelf->__VdfgTmp_hf018031e__0 
                                                & radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0) 
                                               | ((vlSelf->__VdfgTmp_hf018031e__0 
                                                   | radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0) 
                                                  & radix4BoothMultiplier_1__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0)))));
    vlSelf->__VdfgTmp_h485d44d2__0 = (vlSelf->__VdfgTmp_h34428356__0 
                                      ^ (radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
                                         ^ (radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0 
                                            ^ radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0)));
    vlSelf->__VdfgTmp_h0954ee0a__0 = ((vlSelf->__VdfgTmp_h34428356__0 
                                       & radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0) 
                                      | ((radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
                                          & radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0) 
                                         | ((radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0 
                                             & radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0) 
                                            | ((vlSelf->__VdfgTmp_h34428356__0 
                                                & radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0) 
                                               | ((vlSelf->__VdfgTmp_h34428356__0 
                                                   | radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0) 
                                                  & radix4BoothMultiplier_2__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0)))));
    vlSelf->__VdfgTmp_h4ca1f07e__0 = (vlSelf->__VdfgTmp_h78e838a3__0 
                                      ^ (radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
                                         ^ (radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0 
                                            ^ radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0)));
    vlSelf->__VdfgTmp_h34fd2e18__0 = ((vlSelf->__VdfgTmp_h78e838a3__0 
                                       & radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0) 
                                      | ((radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0 
                                          & radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0) 
                                         | ((radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0 
                                             & radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0) 
                                            | ((vlSelf->__VdfgTmp_h78e838a3__0 
                                                & radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565f534__0) 
                                               | ((vlSelf->__VdfgTmp_h78e838a3__0 
                                                   | radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14c3c271__0) 
                                                  & radix4BoothMultiplier_3__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h110b1bcc__0)))));
}

VL_INLINE_OPT void VPvuTop_Mul___ico_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__0(VPvuTop_Mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_Mul___ico_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__0\n"); );
    // Body
    vlSelf->io_pir_sign_o = ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Sign) 
                             ^ (IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Sign));
}
