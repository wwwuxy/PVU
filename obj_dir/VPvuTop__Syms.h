// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPVUTOP__SYMS_H_
#define VERILATED_VPVUTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VPvuTop.h"

// INCLUDE MODULE CLASSES
#include "VPvuTop___024root.h"
#include "VPvuTop_IntDivider.h"
#include "VPvuTop_Radix4BoothMultiplier.h"
#include "VPvuTop_CsaTree_30.h"
#include "VPvuTop_Compressor4to2.h"
#include "VPvuTop_Compressor4to2_24.h"

// SYMS CLASS (contains all model state)
class VPvuTop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VPvuTop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VPvuTop___024root              TOP;
    VPvuTop_IntDivider             TOP__PvuTop__DOT__div__DOT__intdivider;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_CsaTree_30             TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__csa_tree_B__DOT__compressor;
    VPvuTop_CsaTree_30             TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_CsaTree_30             TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_IntDivider             TOP__PvuTop__DOT__div__DOT__intdivider_1;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_CsaTree_30             TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__csa_tree_B__DOT__compressor;
    VPvuTop_CsaTree_30             TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_CsaTree_30             TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_IntDivider             TOP__PvuTop__DOT__div__DOT__intdivider_2;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_CsaTree_30             TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__csa_tree_B__DOT__compressor;
    VPvuTop_CsaTree_30             TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_CsaTree_30             TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_IntDivider             TOP__PvuTop__DOT__div__DOT__intdivider_3;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_CsaTree_30             TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__csa_tree_B__DOT__compressor;
    VPvuTop_CsaTree_30             TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_CsaTree_30             TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2_24      TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Radix4BoothMultiplier  TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Radix4BoothMultiplier  TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Radix4BoothMultiplier  TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Radix4BoothMultiplier  TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Radix4BoothMultiplier  TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Radix4BoothMultiplier  TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Radix4BoothMultiplier  TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Radix4BoothMultiplier  TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2         TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;

    // CONSTRUCTORS
    VPvuTop__Syms(VerilatedContext* contextp, const char* namep, VPvuTop* modelp);
    ~VPvuTop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
