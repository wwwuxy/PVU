// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VPvuTop__Syms.h"
#include "VPvuTop.h"
#include "VPvuTop___024root.h"
#include "VPvuTop_Mul.h"

// FUNCTIONS
VPvuTop__Syms::~VPvuTop__Syms()
{
}

VPvuTop__Syms::VPvuTop__Syms(VerilatedContext* contextp, const char* namep, VPvuTop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__PvuTop__DOT__dotproduct__DOT__mul{this, Verilated::catName(namep, "PvuTop.dotproduct.mul")}
    , TOP__PvuTop__DOT__mul{this, Verilated::catName(namep, "PvuTop.mul")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__PvuTop__DOT__dotproduct__DOT__mul = &TOP__PvuTop__DOT__dotproduct__DOT__mul;
    TOP.__PVT__PvuTop__DOT__mul = &TOP__PvuTop__DOT__mul;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__PvuTop__DOT__dotproduct__DOT__mul.__Vconfigure(true);
    TOP__PvuTop__DOT__mul.__Vconfigure(false);
}
