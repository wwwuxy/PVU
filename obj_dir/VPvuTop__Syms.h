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
#include "VPvuTop_Mul.h"

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
    VPvuTop_Mul                    TOP__PvuTop__DOT__dotproduct__DOT__mul;
    VPvuTop_Mul                    TOP__PvuTop__DOT__mul;

    // CONSTRUCTORS
    VPvuTop__Syms(VerilatedContext* contextp, const char* namep, VPvuTop* modelp);
    ~VPvuTop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
