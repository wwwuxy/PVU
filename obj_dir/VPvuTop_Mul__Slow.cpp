// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_Mul.h"
#include "VPvuTop__Syms.h"

void VPvuTop_Mul___ctor_var_reset(VPvuTop_Mul* vlSelf);

VPvuTop_Mul::VPvuTop_Mul(VPvuTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPvuTop_Mul___ctor_var_reset(this);
}

void VPvuTop_Mul::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPvuTop_Mul::~VPvuTop_Mul() {
}
