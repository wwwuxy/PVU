// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPvuTop.h"
#include "VPvuTop__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPvuTop::VPvuTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPvuTop__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_op{vlSymsp->TOP.io_op}
    , io_posit_i1_0{vlSymsp->TOP.io_posit_i1_0}
    , io_posit_i2_0{vlSymsp->TOP.io_posit_i2_0}
    , io_posit_o_0{vlSymsp->TOP.io_posit_o_0}
    , io_posit_dot_o{vlSymsp->TOP.io_posit_dot_o}
    , __PVT__PvuTop__DOT__mul{vlSymsp->TOP.__PVT__PvuTop__DOT__mul}
    , __PVT__PvuTop__DOT__dotproduct__DOT__mul{vlSymsp->TOP.__PVT__PvuTop__DOT__dotproduct__DOT__mul}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VPvuTop::VPvuTop(const char* _vcname__)
    : VPvuTop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPvuTop::~VPvuTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VPvuTop___024root___eval_debug_assertions(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG
void VPvuTop___024root___eval_static(VPvuTop___024root* vlSelf);
void VPvuTop___024root___eval_initial(VPvuTop___024root* vlSelf);
void VPvuTop___024root___eval_settle(VPvuTop___024root* vlSelf);
void VPvuTop___024root___eval(VPvuTop___024root* vlSelf);

void VPvuTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPvuTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPvuTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VPvuTop___024root___eval_static(&(vlSymsp->TOP));
        VPvuTop___024root___eval_initial(&(vlSymsp->TOP));
        VPvuTop___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VPvuTop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VPvuTop::eventsPending() { return false; }

uint64_t VPvuTop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VPvuTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VPvuTop___024root___eval_final(VPvuTop___024root* vlSelf);

VL_ATTR_COLD void VPvuTop::final() {
    VPvuTop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPvuTop::hierName() const { return vlSymsp->name(); }
const char* VPvuTop::modelName() const { return "VPvuTop"; }
unsigned VPvuTop::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VPvuTop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VPvuTop___024root__trace_init_top(VPvuTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPvuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPvuTop___024root*>(voidSelf);
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VPvuTop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VPvuTop___024root__trace_register(VPvuTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPvuTop::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VPvuTop::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPvuTop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
