// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPvuTop__Syms.h"


extern const VlWide<11>/*351:0*/ VPvuTop__ConstPool__CONST_hc4a98b6e_0;
extern const VlWide<12>/*383:0*/ VPvuTop__ConstPool__CONST_h55404713_0;

VL_ATTR_COLD void VPvuTop___024root__trace_full_sub_22(VPvuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_full_sub_22\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<8>/*255:0*/ __Vtemp_h0041dbc8__0;
    VlWide<7>/*223:0*/ __Vtemp_h0992936b__0;
    VlWide<4>/*127:0*/ __Vtemp_h24f352fb__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a85a4ef__0;
    VlWide<4>/*127:0*/ __Vtemp_h95b92b9c__0;
    VlWide<4>/*127:0*/ __Vtemp_h8053b372__0;
    VlWide<4>/*127:0*/ __Vtemp_h2fd25578__0;
    VlWide<4>/*127:0*/ __Vtemp_h658b2448__0;
    VlWide<4>/*127:0*/ __Vtemp_he5e6854e__0;
    VlWide<4>/*127:0*/ __Vtemp_hdf4c90c7__0;
    VlWide<3>/*95:0*/ __Vtemp_hee7dfb4e__0;
    VlWide<4>/*127:0*/ __Vtemp_h52e32d61__0;
    VlWide<3>/*95:0*/ __Vtemp_h4c9dee20__0;
    VlWide<4>/*127:0*/ __Vtemp_hf67a7711__0;
    VlWide<4>/*127:0*/ __Vtemp_hd280c543__0;
    VlWide<5>/*159:0*/ __Vtemp_hc5d9e20e__0;
    VlWide<5>/*159:0*/ __Vtemp_h597cbf99__0;
    // Body
    bufp->fullBit(oldp+68901,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+68902,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 8U))));
    bufp->fullBit(oldp+68903,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+68904,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_39_io_cout))));
    bufp->fullBit(oldp+68905,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_39_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x18U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_40__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x18U))))));
    bufp->fullBit(oldp+68906,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_40_io_cout));
    bufp->fullBit(oldp+68907,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 9U))));
    bufp->fullBit(oldp+68908,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+68909,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 9U))));
    bufp->fullBit(oldp+68910,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+68911,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_40_io_cout))));
    bufp->fullBit(oldp+68912,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_40_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x19U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_41__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x19U))))));
    bufp->fullBit(oldp+68913,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_41_io_cout));
    bufp->fullBit(oldp+68914,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+68915,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+68916,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+68917,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+68918,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_41_io_cout))));
    bufp->fullBit(oldp+68919,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_41_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x1aU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_42__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x1aU))))));
    bufp->fullBit(oldp+68920,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_42_io_cout));
    bufp->fullBit(oldp+68921,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+68922,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+68923,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+68924,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+68925,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_42_io_cout))));
    bufp->fullBit(oldp+68926,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_42_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x1bU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_43__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x1bU))))));
    bufp->fullBit(oldp+68927,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_43_io_cout));
    bufp->fullBit(oldp+68928,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+68929,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+68930,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+68931,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+68932,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_43_io_cout))));
    bufp->fullBit(oldp+68933,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_43_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x1cU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_44__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x1cU))))));
    bufp->fullBit(oldp+68934,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_44_io_cout));
    bufp->fullBit(oldp+68935,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+68936,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+68937,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+68938,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+68939,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_44_io_cout))));
    bufp->fullBit(oldp+68940,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_44_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x1dU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_45__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x1dU))))));
    bufp->fullBit(oldp+68941,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_45_io_cout));
    bufp->fullBit(oldp+68942,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+68943,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+68944,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+68945,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+68946,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_45_io_cout))));
    bufp->fullBit(oldp+68947,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_45_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x1eU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_46__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x1eU))))));
    bufp->fullBit(oldp+68948,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_46_io_cout));
    bufp->fullBit(oldp+68949,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+68950,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+68951,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+68952,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+68953,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_46_io_cout))));
    bufp->fullBit(oldp+68954,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_46_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x1fU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_47__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x1fU))))));
    bufp->fullBit(oldp+68955,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_47_io_cout));
    bufp->fullBit(oldp+68956,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+68957,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U])));
    bufp->fullBit(oldp+68958,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+68959,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU])));
    bufp->fullBit(oldp+68960,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_47_io_cout))));
    bufp->fullBit(oldp+68961,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_47_io_cout)) 
                                     | (((~ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU]) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_48__DOT____VdfgTmp_h31758f64__0)) 
                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU])))));
    bufp->fullBit(oldp+68962,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_48_io_cout));
    bufp->fullBit(oldp+68963,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+68964,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 1U))));
    bufp->fullBit(oldp+68965,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+68966,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 1U))));
    bufp->fullBit(oldp+68967,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_48_io_cout))));
    bufp->fullBit(oldp+68968,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_48_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 1U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_49__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 1U))))));
    bufp->fullBit(oldp+68969,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_49_io_cout));
    bufp->fullBit(oldp+68970,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 5U))));
    bufp->fullBit(oldp+68971,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+68972,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 5U))));
    bufp->fullBit(oldp+68973,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+68974,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_4_io_cout))));
    bufp->fullBit(oldp+68975,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_4_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x15U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_5__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x15U))))));
    bufp->fullBit(oldp+68976,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_5_io_cout));
    bufp->fullBit(oldp+68977,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+68978,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 2U))));
    bufp->fullBit(oldp+68979,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+68980,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 2U))));
    bufp->fullBit(oldp+68981,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_49_io_cout))));
    bufp->fullBit(oldp+68982,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_49_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 2U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_50__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 2U))))));
    bufp->fullBit(oldp+68983,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_50_io_cout));
    bufp->fullBit(oldp+68984,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+68985,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 3U))));
    bufp->fullBit(oldp+68986,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+68987,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 3U))));
    bufp->fullBit(oldp+68988,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_50_io_cout))));
    bufp->fullBit(oldp+68989,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_50_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 3U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_51__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 3U))))));
    bufp->fullBit(oldp+68990,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_51_io_cout));
    bufp->fullBit(oldp+68991,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+68992,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 4U))));
    bufp->fullBit(oldp+68993,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+68994,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 4U))));
    bufp->fullBit(oldp+68995,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_51_io_cout))));
    bufp->fullBit(oldp+68996,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_51_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 4U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_52__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 4U))))));
    bufp->fullBit(oldp+68997,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_52_io_cout));
    bufp->fullBit(oldp+68998,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+68999,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69000,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69001,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 5U))));
    bufp->fullBit(oldp+69002,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_52_io_cout))));
    bufp->fullBit(oldp+69003,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_52_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 5U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_53__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 5U))))));
    bufp->fullBit(oldp+69004,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_53_io_cout));
    bufp->fullBit(oldp+69005,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69006,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69007,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69008,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 6U))));
    bufp->fullBit(oldp+69009,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_53_io_cout))));
    bufp->fullBit(oldp+69010,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_53_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 6U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_54__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 6U))))));
    bufp->fullBit(oldp+69011,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_54_io_cout));
    bufp->fullBit(oldp+69012,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69013,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69014,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69015,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 7U))));
    bufp->fullBit(oldp+69016,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_54_io_cout))));
    bufp->fullBit(oldp+69017,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_54_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 7U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_55__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 7U))))));
    bufp->fullBit(oldp+69018,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_55_io_cout));
    bufp->fullBit(oldp+69019,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69020,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69021,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69022,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 8U))));
    bufp->fullBit(oldp+69023,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_56__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_55_io_cout))));
    bufp->fullBit(oldp+69024,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_56__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_55_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 8U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_56__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 8U))))));
    bufp->fullBit(oldp+69025,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_56_io_cout));
    bufp->fullBit(oldp+69026,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69027,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69028,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69029,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 9U))));
    bufp->fullBit(oldp+69030,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_57__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_56_io_cout))));
    bufp->fullBit(oldp+69031,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_57__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_56_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 9U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_57__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 9U))))));
    bufp->fullBit(oldp+69032,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_57_io_cout));
    bufp->fullBit(oldp+69033,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69034,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69035,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69036,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69037,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_58__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_57_io_cout))));
    bufp->fullBit(oldp+69038,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_58__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_57_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xaU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_58__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+69039,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_58_io_cout));
    bufp->fullBit(oldp+69040,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69041,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69042,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69043,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69044,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_59__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_58_io_cout))));
    bufp->fullBit(oldp+69045,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_59__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_58_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xbU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_59__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+69046,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_59_io_cout));
    bufp->fullBit(oldp+69047,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69048,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69049,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69050,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69051,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_5_io_cout))));
    bufp->fullBit(oldp+69052,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_5_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x16U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_6__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x16U))))));
    bufp->fullBit(oldp+69053,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_6_io_cout));
    bufp->fullBit(oldp+69054,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69055,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69056,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69057,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69058,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_60__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_59_io_cout))));
    bufp->fullBit(oldp+69059,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_60__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_59_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xcU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_60__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xcU))))));
    bufp->fullBit(oldp+69060,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_60_io_cout));
    bufp->fullBit(oldp+69061,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69062,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69063,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69064,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69065,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_61__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_60_io_cout))));
    bufp->fullBit(oldp+69066,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_61__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_60_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xdU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_61__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xdU))))));
    bufp->fullBit(oldp+69067,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_61_io_cout));
    bufp->fullBit(oldp+69068,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69069,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69070,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69071,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69072,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_62__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_61_io_cout))));
    bufp->fullBit(oldp+69073,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_62__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_61_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xeU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_62__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xeU))))));
    bufp->fullBit(oldp+69074,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_62_io_cout));
    bufp->fullBit(oldp+69075,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69076,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69077,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69078,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69079,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_63__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_62_io_cout))));
    bufp->fullBit(oldp+69080,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_63__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_62_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xfU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_63__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xfU))))));
    bufp->fullBit(oldp+69081,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_63_io_cout));
    bufp->fullBit(oldp+69082,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U])));
    bufp->fullBit(oldp+69083,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69084,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U])));
    bufp->fullBit(oldp+69085,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69086,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_64__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_63_io_cout))));
    bufp->fullBit(oldp+69087,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_64__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_63_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x10U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_64__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x10U))))));
    bufp->fullBit(oldp+69088,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_64_io_cout));
    bufp->fullBit(oldp+69089,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 1U))));
    bufp->fullBit(oldp+69090,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69091,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 1U))));
    bufp->fullBit(oldp+69092,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69093,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_65__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_64_io_cout))));
    bufp->fullBit(oldp+69094,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_65__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_64_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x11U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_65__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x11U))))));
    bufp->fullBit(oldp+69095,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_65_io_cout));
    bufp->fullBit(oldp+69096,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 2U))));
    bufp->fullBit(oldp+69097,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69098,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 2U))));
    bufp->fullBit(oldp+69099,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69100,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_66__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_65_io_cout))));
    bufp->fullBit(oldp+69101,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_66__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_65_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x12U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_66__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x12U))))));
    bufp->fullBit(oldp+69102,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_66_io_cout));
    bufp->fullBit(oldp+69103,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 3U))));
    bufp->fullBit(oldp+69104,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69105,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 3U))));
    bufp->fullBit(oldp+69106,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69107,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_67__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_66_io_cout))));
    bufp->fullBit(oldp+69108,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_67__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_66_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x13U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_67__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x13U))))));
    bufp->fullBit(oldp+69109,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_67_io_cout));
    bufp->fullBit(oldp+69110,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 4U))));
    bufp->fullBit(oldp+69111,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69112,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 4U))));
    bufp->fullBit(oldp+69113,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69114,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_68__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_67_io_cout))));
    bufp->fullBit(oldp+69115,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_68__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_67_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x14U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_68__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x14U))))));
    bufp->fullBit(oldp+69116,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_68_io_cout));
    bufp->fullBit(oldp+69117,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69118,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69119,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69120,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69121,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_69__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_68_io_cout))));
    bufp->fullBit(oldp+69122,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_69__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_68_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x15U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_69__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x15U))))));
    bufp->fullBit(oldp+69123,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_69_io_cout));
    bufp->fullBit(oldp+69124,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69125,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69126,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69127,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69128,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_6_io_cout))));
    bufp->fullBit(oldp+69129,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_6_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x17U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_7__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x17U))))));
    bufp->fullBit(oldp+69130,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_7_io_cout));
    bufp->fullBit(oldp+69131,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69132,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69133,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69134,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69135,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_70__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_69_io_cout))));
    bufp->fullBit(oldp+69136,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_70__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_69_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x16U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_70__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x16U))))));
    bufp->fullBit(oldp+69137,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_70_io_cout));
    bufp->fullBit(oldp+69138,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69139,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69140,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69141,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69142,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_71__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_70_io_cout))));
    bufp->fullBit(oldp+69143,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_71__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_70_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x17U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_71__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x17U))))));
    bufp->fullBit(oldp+69144,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_71_io_cout));
    bufp->fullBit(oldp+69145,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69146,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69147,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69148,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69149,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_72__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_71_io_cout))));
    bufp->fullBit(oldp+69150,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_72__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_71_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x18U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_72__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x18U))))));
    bufp->fullBit(oldp+69151,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_72_io_cout));
    bufp->fullBit(oldp+69152,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69153,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69154,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69155,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69156,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_73__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_72_io_cout))));
    bufp->fullBit(oldp+69157,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_73__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_72_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x19U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_73__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x19U))))));
    bufp->fullBit(oldp+69158,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_73_io_cout));
    bufp->fullBit(oldp+69159,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69160,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69161,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69162,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69163,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_74__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_73_io_cout))));
    bufp->fullBit(oldp+69164,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_74__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_73_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1aU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_74__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1aU))))));
    bufp->fullBit(oldp+69165,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_74_io_cout));
    bufp->fullBit(oldp+69166,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69167,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69168,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69169,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69170,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_75__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_74_io_cout))));
    bufp->fullBit(oldp+69171,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_75__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_74_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1bU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_75__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1bU))))));
    bufp->fullBit(oldp+69172,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_75_io_cout));
    bufp->fullBit(oldp+69173,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69174,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69175,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69176,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69177,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_76__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_75_io_cout))));
    bufp->fullBit(oldp+69178,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_76__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_75_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1cU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_76__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1cU))))));
    bufp->fullBit(oldp+69179,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_76_io_cout));
    bufp->fullBit(oldp+69180,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69181,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69182,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69183,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69184,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_77__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_76_io_cout))));
    bufp->fullBit(oldp+69185,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_77__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_76_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1dU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_77__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1dU))))));
    bufp->fullBit(oldp+69186,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_77_io_cout));
    bufp->fullBit(oldp+69187,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69188,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69189,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69190,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69191,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_78__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_77_io_cout))));
    bufp->fullBit(oldp+69192,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_78__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_77_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1eU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_78__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1eU))))));
    bufp->fullBit(oldp+69193,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_78_io_cout));
    bufp->fullBit(oldp+69194,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69195,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69196,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69197,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69198,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_79__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_78_io_cout))));
    bufp->fullBit(oldp+69199,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_79__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_78_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1fU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_79__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1fU))))));
    bufp->fullBit(oldp+69200,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_79_io_cout));
    bufp->fullBit(oldp+69201,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69202,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69203,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69204,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69205,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_7_io_cout))));
    bufp->fullBit(oldp+69206,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_7_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x18U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_8__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x18U))))));
    bufp->fullBit(oldp+69207,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_8_io_cout));
    bufp->fullBit(oldp+69208,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69209,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U])));
    bufp->fullBit(oldp+69210,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69211,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU])));
    bufp->fullBit(oldp+69212,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_80__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_79_io_cout))));
    bufp->fullBit(oldp+69213,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_80__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_79_io_cout)) 
                                     | (((~ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU]) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_80__DOT____VdfgTmp_h31758f64__0)) 
                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU])))));
    bufp->fullBit(oldp+69214,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_80_io_cout));
    bufp->fullBit(oldp+69215,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69216,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 1U))));
    bufp->fullBit(oldp+69217,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69218,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 1U))));
    bufp->fullBit(oldp+69219,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_81__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_80_io_cout))));
    bufp->fullBit(oldp+69220,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_81__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_80_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 1U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_81__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 1U))))));
    bufp->fullBit(oldp+69221,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_81_io_cout));
    bufp->fullBit(oldp+69222,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69223,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 2U))));
    bufp->fullBit(oldp+69224,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69225,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 2U))));
    bufp->fullBit(oldp+69226,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_82__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_81_io_cout))));
    bufp->fullBit(oldp+69227,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_82__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_81_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 2U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_82__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 2U))))));
    bufp->fullBit(oldp+69228,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_82_io_cout));
    bufp->fullBit(oldp+69229,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69230,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 3U))));
    bufp->fullBit(oldp+69231,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69232,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 3U))));
    bufp->fullBit(oldp+69233,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_83__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_82_io_cout))));
    bufp->fullBit(oldp+69234,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_83__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_82_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 3U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_83__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 3U))))));
    bufp->fullBit(oldp+69235,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_83_io_cout));
    bufp->fullBit(oldp+69236,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69237,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 4U))));
    bufp->fullBit(oldp+69238,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69239,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 4U))));
    bufp->fullBit(oldp+69240,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_84__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_83_io_cout))));
    bufp->fullBit(oldp+69241,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_84__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_83_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 4U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_84__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 4U))))));
    bufp->fullBit(oldp+69242,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_84_io_cout));
    bufp->fullBit(oldp+69243,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69244,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69245,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69246,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 5U))));
    bufp->fullBit(oldp+69247,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_85__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_84_io_cout))));
    bufp->fullBit(oldp+69248,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_85__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_84_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 5U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_85__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 5U))))));
    bufp->fullBit(oldp+69249,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_85_io_cout));
    bufp->fullBit(oldp+69250,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69251,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69252,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69253,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 6U))));
    bufp->fullBit(oldp+69254,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_86__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_85_io_cout))));
    bufp->fullBit(oldp+69255,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_86__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_85_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 6U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_86__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 6U))))));
    bufp->fullBit(oldp+69256,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_86_io_cout));
    bufp->fullBit(oldp+69257,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69258,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69259,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69260,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 7U))));
    bufp->fullBit(oldp+69261,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_87__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_86_io_cout))));
    bufp->fullBit(oldp+69262,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_87__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_86_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 7U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_87__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 7U))))));
    bufp->fullBit(oldp+69263,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_87_io_cout));
    bufp->fullBit(oldp+69264,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69265,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69266,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69267,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 8U))));
    bufp->fullBit(oldp+69268,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_88__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_87_io_cout))));
    bufp->fullBit(oldp+69269,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_88__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_87_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 8U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_88__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 8U))))));
    bufp->fullBit(oldp+69270,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_88_io_cout));
    bufp->fullBit(oldp+69271,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69272,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69273,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69274,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 9U))));
    bufp->fullBit(oldp+69275,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_89__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_88_io_cout))));
    bufp->fullBit(oldp+69276,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_89__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_88_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 9U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_89__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 9U))))));
    bufp->fullBit(oldp+69277,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_89_io_cout));
    bufp->fullBit(oldp+69278,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69279,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69280,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69281,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69282,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_8_io_cout))));
    bufp->fullBit(oldp+69283,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_8_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x19U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_9__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x19U))))));
    bufp->fullBit(oldp+69284,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69285,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69286,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69287,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69288,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_90__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_89_io_cout))));
    bufp->fullBit(oldp+69289,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_90__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_89_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xaU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_90__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+69290,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_90_io_cout));
    bufp->fullBit(oldp+69291,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69292,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69293,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69294,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69295,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_91__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_90_io_cout))));
    bufp->fullBit(oldp+69296,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_91__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_90_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xbU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_91__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+69297,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_91_io_cout));
    bufp->fullBit(oldp+69298,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69299,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69300,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69301,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69302,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_92__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_91_io_cout))));
    bufp->fullBit(oldp+69303,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_92__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_91_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xcU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_92__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xcU))))));
    bufp->fullBit(oldp+69304,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_92_io_cout));
    bufp->fullBit(oldp+69305,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69306,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69307,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69308,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69309,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_93__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_92_io_cout))));
    bufp->fullBit(oldp+69310,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_93__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_92_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xdU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_93__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xdU))))));
    bufp->fullBit(oldp+69311,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_93_io_cout));
    bufp->fullBit(oldp+69312,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69313,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69314,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69315,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69316,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_94__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_93_io_cout))));
    bufp->fullBit(oldp+69317,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_94__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_93_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xeU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_94__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xeU))))));
    bufp->fullBit(oldp+69318,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_94_io_cout));
    bufp->fullBit(oldp+69319,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69320,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69321,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69322,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69323,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_95__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_94_io_cout))));
    bufp->fullBit(oldp+69324,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_95__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_94_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xfU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_95__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xfU))))));
    bufp->fullBit(oldp+69325,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_95_io_cout));
    bufp->fullBit(oldp+69326,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U])));
    bufp->fullBit(oldp+69327,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69328,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU])));
    bufp->fullBit(oldp+69329,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69330,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_96__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_95_io_cout))));
    bufp->fullBit(oldp+69331,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_96__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_95_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x10U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_96__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x10U))))));
    bufp->fullBit(oldp+69332,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_96_io_cout));
    bufp->fullBit(oldp+69333,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 1U))));
    bufp->fullBit(oldp+69334,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69335,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 1U))));
    bufp->fullBit(oldp+69336,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69337,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_97__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_96_io_cout))));
    bufp->fullBit(oldp+69338,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_97__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_96_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x11U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_97__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x11U))))));
    bufp->fullBit(oldp+69339,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_97_io_cout));
    bufp->fullBit(oldp+69340,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 2U))));
    bufp->fullBit(oldp+69341,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69342,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 2U))));
    bufp->fullBit(oldp+69343,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69344,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_98__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_97_io_cout))));
    bufp->fullBit(oldp+69345,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_98__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_97_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x12U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_98__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x12U))))));
    bufp->fullBit(oldp+69346,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_98_io_cout));
    bufp->fullBit(oldp+69347,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 3U))));
    bufp->fullBit(oldp+69348,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69349,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 3U))));
    bufp->fullBit(oldp+69350,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69351,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_99__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_98_io_cout))));
    bufp->fullBit(oldp+69352,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_99__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_98_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x13U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_99__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x13U))))));
    bufp->fullCData(oldp+69353,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69354,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69359,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o),30);
    bufp->fullCData(oldp+69360,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69361,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69366,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o),30);
    bufp->fullCData(oldp+69367,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69368,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69380,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o),56);
    bufp->fullCData(oldp+69382,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69383,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69395,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o),56);
    bufp->fullCData(oldp+69397,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69398,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69403,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o),30);
    bufp->fullCData(oldp+69404,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69405,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69410,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o),30);
    bufp->fullCData(oldp+69411,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69412,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69424,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o),56);
    bufp->fullCData(oldp+69426,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69427,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69439,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o),56);
    bufp->fullCData(oldp+69441,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69442,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69447,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o),30);
    bufp->fullCData(oldp+69448,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69449,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69454,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o),30);
    bufp->fullCData(oldp+69455,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69456,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69468,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o),56);
    bufp->fullCData(oldp+69470,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69471,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69483,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o),56);
    bufp->fullCData(oldp+69485,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___comptree_io_result_o),8);
    bufp->fullQData(oldp+69486,((0x3ffffffffffffffULL 
                                 & (vlSelf->PvuTop__DOT__dotproduct__DOT___csaTree_io_carry_o 
                                    + vlSelf->PvuTop__DOT__dotproduct__DOT___csaTree_io_sum_o))),59);
    __Vtemp_h0041dbc8__0[0U] = (IData)(vlSelf->__VdfgTmp_hc645c0b1__0);
    __Vtemp_h0041dbc8__0[1U] = (((IData)(vlSelf->__VdfgTmp_h808a20bd__0) 
                                 << 0x1aU) | (IData)(
                                                     (vlSelf->__VdfgTmp_hc645c0b1__0 
                                                      >> 0x20U)));
    __Vtemp_h0041dbc8__0[2U] = (((IData)(vlSelf->__VdfgTmp_h808a20bd__0) 
                                 >> 6U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_h808a20bd__0 
                                                    >> 0x20U)) 
                                           << 0x1aU));
    __Vtemp_h0041dbc8__0[3U] = (((IData)(vlSelf->__VdfgTmp_h83d1a556__0) 
                                 << 0x14U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h808a20bd__0 
                                                       >> 0x20U)) 
                                              >> 6U));
    __Vtemp_h0041dbc8__0[4U] = (((IData)(vlSelf->__VdfgTmp_h83d1a556__0) 
                                 >> 0xcU) | ((IData)(
                                                     (vlSelf->__VdfgTmp_h83d1a556__0 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h0041dbc8__0[5U] = (((IData)(vlSelf->__VdfgTmp_h5857fca6__0) 
                                 << 0xeU) | ((IData)(
                                                     (vlSelf->__VdfgTmp_h83d1a556__0 
                                                      >> 0x20U)) 
                                             >> 0xcU));
    __Vtemp_h0041dbc8__0[6U] = (((IData)(vlSelf->__VdfgTmp_h5857fca6__0) 
                                 >> 0x12U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h5857fca6__0 
                                                       >> 0x20U)) 
                                              << 0xeU));
    __Vtemp_h0041dbc8__0[7U] = ((IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                         >> 0x20U)) 
                                >> 0x12U);
    bufp->fullWData(oldp+69488,(__Vtemp_h0041dbc8__0),232);
    bufp->fullQData(oldp+69496,(vlSelf->PvuTop__DOT__dotproduct__DOT___csaTree_io_sum_o),58);
    bufp->fullQData(oldp+69498,(vlSelf->PvuTop__DOT__dotproduct__DOT___csaTree_io_carry_o),58);
    bufp->fullBit(oldp+69500,((1U & (IData)(vlSelf->__VdfgTmp_hc645c0b1__0))));
    bufp->fullBit(oldp+69501,((1U & (IData)(vlSelf->__VdfgTmp_h808a20bd__0))));
    bufp->fullBit(oldp+69502,((1U & (IData)(vlSelf->__VdfgTmp_h83d1a556__0))));
    bufp->fullBit(oldp+69503,((1U & (IData)(vlSelf->__VdfgTmp_h5857fca6__0))));
    bufp->fullBit(oldp+69504,((1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT____VdfgTmp_h31758f64__0) 
                                     ^ (IData)(vlSelf->__VdfgTmp_h5857fca6__0)))));
    bufp->fullBit(oldp+69505,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h5857fca6__0)) 
                                      ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT____VdfgTmp_h31758f64__0)) 
                                     & (IData)(vlSelf->__VdfgTmp_h5857fca6__0)))));
    bufp->fullBit(oldp+69506,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout));
    bufp->fullBit(oldp+69507,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69508,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69509,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69510,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69511,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout))));
    bufp->fullBit(oldp+69512,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 1U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+69513,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout));
    bufp->fullBit(oldp+69514,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69515,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69516,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69517,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69518,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout));
    bufp->fullBit(oldp+69519,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout))));
    bufp->fullBit(oldp+69520,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0xaU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0xaU)))))));
    bufp->fullBit(oldp+69521,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout));
    bufp->fullBit(oldp+69522,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69523,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69524,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69525,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69526,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout))));
    bufp->fullBit(oldp+69527,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0xbU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0xbU)))))));
    bufp->fullBit(oldp+69528,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout));
    bufp->fullBit(oldp+69529,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69530,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69531,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69532,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69533,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout))));
    bufp->fullBit(oldp+69534,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0xcU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0xcU)))))));
    bufp->fullBit(oldp+69535,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout));
    bufp->fullBit(oldp+69536,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69537,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69538,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69539,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69540,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout))));
    bufp->fullBit(oldp+69541,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0xdU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0xdU)))))));
    bufp->fullBit(oldp+69542,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout));
    bufp->fullBit(oldp+69543,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69544,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69545,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69546,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69547,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout))));
    bufp->fullBit(oldp+69548,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0xeU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0xeU)))))));
    bufp->fullBit(oldp+69549,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout));
    bufp->fullBit(oldp+69550,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69551,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69552,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69553,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69554,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout))));
    bufp->fullBit(oldp+69555,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0xfU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0xfU)))))));
    bufp->fullBit(oldp+69556,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout));
    bufp->fullBit(oldp+69557,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69558,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69559,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69560,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69561,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout))));
    bufp->fullBit(oldp+69562,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x10U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x10U)))))));
    bufp->fullBit(oldp+69563,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout));
    bufp->fullBit(oldp+69564,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69565,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69566,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69567,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69568,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout))));
    bufp->fullBit(oldp+69569,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x11U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x11U)))))));
    bufp->fullBit(oldp+69570,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout));
    bufp->fullBit(oldp+69571,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69572,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69573,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69574,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69575,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout))));
    bufp->fullBit(oldp+69576,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x12U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x12U)))))));
    bufp->fullBit(oldp+69577,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout));
    bufp->fullBit(oldp+69578,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69579,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69580,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69581,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69582,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout))));
    bufp->fullBit(oldp+69583,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x13U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x13U)))))));
    bufp->fullBit(oldp+69584,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout));
    bufp->fullBit(oldp+69585,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69586,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69587,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69588,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69589,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout))));
    bufp->fullBit(oldp+69590,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 2U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 2U)))))));
    bufp->fullBit(oldp+69591,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout));
    bufp->fullBit(oldp+69592,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69593,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69594,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69595,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69596,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout))));
    bufp->fullBit(oldp+69597,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x14U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x14U)))))));
    bufp->fullBit(oldp+69598,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout));
    bufp->fullBit(oldp+69599,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69600,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69601,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69602,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69603,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout))));
    bufp->fullBit(oldp+69604,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x15U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x15U)))))));
    bufp->fullBit(oldp+69605,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout));
    bufp->fullBit(oldp+69606,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69607,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69608,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69609,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69610,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout))));
    bufp->fullBit(oldp+69611,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x16U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x16U)))))));
    bufp->fullBit(oldp+69612,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout));
    bufp->fullBit(oldp+69613,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69614,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69615,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69616,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69617,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout))));
    bufp->fullBit(oldp+69618,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x17U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x17U)))))));
    bufp->fullBit(oldp+69619,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout));
    bufp->fullBit(oldp+69620,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69621,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69622,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69623,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69624,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout))));
    bufp->fullBit(oldp+69625,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x18U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x18U)))))));
    bufp->fullBit(oldp+69626,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout));
    bufp->fullBit(oldp+69627,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69628,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69629,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69630,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69631,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout))));
    bufp->fullBit(oldp+69632,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x19U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x19U)))))));
    bufp->fullBit(oldp+69633,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout));
    bufp->fullBit(oldp+69634,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69635,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69636,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69637,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69638,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout))));
    bufp->fullBit(oldp+69639,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x1aU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x1aU)))))));
    bufp->fullBit(oldp+69640,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout));
    bufp->fullBit(oldp+69641,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69642,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69643,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69644,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69645,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout))));
    bufp->fullBit(oldp+69646,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x1bU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x1bU)))))));
    bufp->fullBit(oldp+69647,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout));
    bufp->fullBit(oldp+69648,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69649,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69650,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69651,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69652,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout))));
    bufp->fullBit(oldp+69653,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x1cU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x1cU)))))));
    bufp->fullBit(oldp+69654,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout));
    bufp->fullBit(oldp+69655,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69656,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69657,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69658,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69659,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout))));
    bufp->fullBit(oldp+69660,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x1dU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x1dU)))))));
    bufp->fullBit(oldp+69661,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout));
    bufp->fullBit(oldp+69662,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69663,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69664,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69665,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69666,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout))));
    bufp->fullBit(oldp+69667,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 3U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 3U)))))));
    bufp->fullBit(oldp+69668,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout));
    bufp->fullBit(oldp+69669,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69670,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69671,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69672,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69673,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout))));
    bufp->fullBit(oldp+69674,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x1eU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x1eU)))))));
    bufp->fullBit(oldp+69675,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout));
    bufp->fullBit(oldp+69676,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69677,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69678,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69679,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69680,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout))));
    bufp->fullBit(oldp+69681,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x1fU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x1fU)))))));
    bufp->fullBit(oldp+69682,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout));
    bufp->fullBit(oldp+69683,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69684,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69685,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69686,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69687,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout))));
    bufp->fullBit(oldp+69688,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x20U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x20U)))))));
    bufp->fullBit(oldp+69689,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout));
    bufp->fullBit(oldp+69690,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69691,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69692,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69693,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69694,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout))));
    bufp->fullBit(oldp+69695,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x21U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x21U)))))));
    bufp->fullBit(oldp+69696,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout));
    bufp->fullBit(oldp+69697,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69698,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69699,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69700,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69701,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout))));
    bufp->fullBit(oldp+69702,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x22U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x22U)))))));
    bufp->fullBit(oldp+69703,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout));
    bufp->fullBit(oldp+69704,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69705,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69706,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69707,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69708,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout))));
    bufp->fullBit(oldp+69709,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x23U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x23U)))))));
    bufp->fullBit(oldp+69710,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout));
    bufp->fullBit(oldp+69711,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69712,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69713,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69714,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69715,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout))));
    bufp->fullBit(oldp+69716,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x24U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x24U)))))));
    bufp->fullBit(oldp+69717,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout));
    bufp->fullBit(oldp+69718,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69719,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69720,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69721,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69722,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout))));
    bufp->fullBit(oldp+69723,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x25U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x25U)))))));
    bufp->fullBit(oldp+69724,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout));
    bufp->fullBit(oldp+69725,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69726,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69727,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69728,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69729,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout))));
    bufp->fullBit(oldp+69730,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x26U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x26U)))))));
    bufp->fullBit(oldp+69731,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout));
    bufp->fullBit(oldp+69732,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69733,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69734,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69735,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69736,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout))));
    bufp->fullBit(oldp+69737,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x27U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x27U)))))));
    bufp->fullBit(oldp+69738,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout));
    bufp->fullBit(oldp+69739,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69740,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69741,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69742,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69743,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout))));
    bufp->fullBit(oldp+69744,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 4U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+69745,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout));
    bufp->fullBit(oldp+69746,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69747,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69748,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69749,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69750,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout))));
    bufp->fullBit(oldp+69751,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x28U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x28U)))))));
    bufp->fullBit(oldp+69752,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout));
    bufp->fullBit(oldp+69753,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69754,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69755,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69756,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69757,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout))));
    bufp->fullBit(oldp+69758,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x29U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x29U)))))));
    bufp->fullBit(oldp+69759,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout));
    bufp->fullBit(oldp+69760,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69761,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69762,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69763,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69764,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout))));
    bufp->fullBit(oldp+69765,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x2aU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x2aU)))))));
    bufp->fullBit(oldp+69766,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout));
    bufp->fullBit(oldp+69767,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69768,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69769,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69770,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69771,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout))));
    bufp->fullBit(oldp+69772,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x2bU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x2bU)))))));
    bufp->fullBit(oldp+69773,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout));
    bufp->fullBit(oldp+69774,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69775,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69776,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69777,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69778,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout))));
    bufp->fullBit(oldp+69779,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x2cU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x2cU)))))));
    bufp->fullBit(oldp+69780,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout));
    bufp->fullBit(oldp+69781,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69782,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69783,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69784,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69785,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout))));
    bufp->fullBit(oldp+69786,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x2dU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x2dU)))))));
    bufp->fullBit(oldp+69787,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout));
    bufp->fullBit(oldp+69788,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69789,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69790,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69791,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69792,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout))));
    bufp->fullBit(oldp+69793,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x2eU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x2eU)))))));
    bufp->fullBit(oldp+69794,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout));
    bufp->fullBit(oldp+69795,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69796,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69797,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69798,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69799,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout))));
    bufp->fullBit(oldp+69800,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x2fU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x2fU)))))));
    bufp->fullBit(oldp+69801,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout));
    bufp->fullBit(oldp+69802,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69803,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69804,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69805,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69806,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout))));
    bufp->fullBit(oldp+69807,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x30U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x30U)))))));
    bufp->fullBit(oldp+69808,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout));
    bufp->fullBit(oldp+69809,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69810,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69811,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69812,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69813,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout))));
    bufp->fullBit(oldp+69814,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x31U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x31U)))))));
    bufp->fullBit(oldp+69815,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout));
    bufp->fullBit(oldp+69816,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69817,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69818,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69819,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69820,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout))));
    bufp->fullBit(oldp+69821,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 5U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+69822,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout));
    bufp->fullBit(oldp+69823,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69824,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69825,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69826,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69827,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout))));
    bufp->fullBit(oldp+69828,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x32U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x32U)))))));
    bufp->fullBit(oldp+69829,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout));
    bufp->fullBit(oldp+69830,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69831,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69832,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69833,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69834,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout))));
    bufp->fullBit(oldp+69835,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x33U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x33U)))))));
    bufp->fullBit(oldp+69836,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout));
    bufp->fullBit(oldp+69837,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69838,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69839,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69840,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69841,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout))));
    bufp->fullBit(oldp+69842,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x34U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x34U)))))));
    bufp->fullBit(oldp+69843,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout));
    bufp->fullBit(oldp+69844,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69845,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69846,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69847,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69848,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout))));
    bufp->fullBit(oldp+69849,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x35U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x35U)))))));
    bufp->fullBit(oldp+69850,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout));
    bufp->fullBit(oldp+69851,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69852,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69853,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69854,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69855,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout))));
    bufp->fullBit(oldp+69856,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x36U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x36U)))))));
    bufp->fullBit(oldp+69857,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout));
    bufp->fullBit(oldp+69858,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69859,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69860,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69861,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69862,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout))));
    bufp->fullBit(oldp+69863,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 0x37U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 0x37U)))))));
    bufp->fullBit(oldp+69864,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT___carryWire_T_4) 
                                      & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                                 >> 0x37U))) 
                                     | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT___carryWire_T_4)) 
                                        & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                                   >> 0x37U)))))));
    bufp->fullBit(oldp+69865,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69866,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69867,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69868,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69869,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout))));
    bufp->fullBit(oldp+69870,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 6U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+69871,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout));
    bufp->fullBit(oldp+69872,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69873,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69874,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69875,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69876,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout))));
    bufp->fullBit(oldp+69877,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 7U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+69878,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout));
    bufp->fullBit(oldp+69879,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69880,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69881,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69882,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69883,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout))));
    bufp->fullBit(oldp+69884,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 8U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 8U)))))));
    bufp->fullBit(oldp+69885,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout));
    bufp->fullBit(oldp+69886,((1U & (IData)((vlSelf->__VdfgTmp_hc645c0b1__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69887,((1U & (IData)((vlSelf->__VdfgTmp_h808a20bd__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69888,((1U & (IData)((vlSelf->__VdfgTmp_h83d1a556__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69889,((1U & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69890,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout))));
    bufp->fullBit(oldp+69891,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h5857fca6__0 
                                                     >> 9U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h5857fca6__0 
                                                   >> 9U)))))));
    __Vtemp_h0992936b__0[0U] = (IData)(vlSelf->__VdfgTmp_hc645c0b1__0);
    __Vtemp_h0992936b__0[1U] = (((IData)(vlSelf->__VdfgTmp_h808a20bd__0) 
                                 << 0x18U) | (IData)(
                                                     (vlSelf->__VdfgTmp_hc645c0b1__0 
                                                      >> 0x20U)));
    __Vtemp_h0992936b__0[2U] = (((IData)(vlSelf->__VdfgTmp_h808a20bd__0) 
                                 >> 8U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_h808a20bd__0 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h0992936b__0[3U] = (((IData)(vlSelf->__VdfgTmp_h83d1a556__0) 
                                 << 0x10U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h808a20bd__0 
                                                       >> 0x20U)) 
                                              >> 8U));
    __Vtemp_h0992936b__0[4U] = (((IData)(vlSelf->__VdfgTmp_h83d1a556__0) 
                                 >> 0x10U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h83d1a556__0 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h0992936b__0[5U] = (((IData)(vlSelf->__VdfgTmp_h5857fca6__0) 
                                 << 8U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_h83d1a556__0 
                                                    >> 0x20U)) 
                                           >> 0x10U));
    __Vtemp_h0992936b__0[6U] = (((IData)(vlSelf->__VdfgTmp_h5857fca6__0) 
                                 >> 0x18U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h5857fca6__0 
                                                       >> 0x20U)) 
                                              << 8U));
    bufp->fullWData(oldp+69892,(__Vtemp_h0992936b__0),224);
    bufp->fullCData(oldp+69899,(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign),4);
    bufp->fullQData(oldp+69900,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i),59);
    bufp->fullQData(oldp+69902,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),59);
    bufp->fullCData(oldp+69904,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69905,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69910,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o),30);
    bufp->fullCData(oldp+69911,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69912,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69917,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o),30);
    bufp->fullCData(oldp+69918,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69919,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69931,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o),56);
    bufp->fullCData(oldp+69933,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69934,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69946,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o),56);
    bufp->fullCData(oldp+69948,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69949,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullWData(oldp+69961,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i),90);
    bufp->fullWData(oldp+69964,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o),90);
    bufp->fullWData(oldp+69967,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i),90);
    bufp->fullWData(oldp+69970,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o),90);
    bufp->fullWData(oldp+69973,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i),90);
    bufp->fullWData(oldp+69976,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o),90);
    bufp->fullIData(oldp+69979,((0x7fffffffU & (((vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[1U] 
                                                  << 2U) 
                                                 | (vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
                                                    >> 0x1eU)) 
                                                + (1U 
                                                   & ((vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
                                                       >> 0x1dU) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x5fffffffU 
                                                                  & vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U])))))))),32);
    bufp->fullWData(oldp+69980,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i),90);
    bufp->fullCData(oldp+69983,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount),5);
    bufp->fullWData(oldp+69984,(vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o),90);
    bufp->fullIData(oldp+69987,(((0xffffffeU & ((IData)(
                                                        (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                         >> 0x1cU)) 
                                                << 1U)) 
                                 | (0U != (0x7ffffffU 
                                           & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))),28);
    bufp->fullQData(oldp+69988,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted),55);
    bufp->fullQData(oldp+69990,((0x7ffffffffffffffULL 
                                 & ((IData)(vlSelf->__VdfgTmp_hd4b45e7a__0)
                                     ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
                                        >> 1U) : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2))),59);
    bufp->fullQData(oldp+69992,((0x7ffffffffffffffULL 
                                 & ((IData)(vlSelf->__VdfgTmp_hd4b45e7a__0)
                                     ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2 
                                        << 1U) : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2))),59);
    bufp->fullWData(oldp+69994,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i),90);
    bufp->fullWData(oldp+69997,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o),90);
    bufp->fullBit(oldp+70000,(vlSelf->clock));
    bufp->fullBit(oldp+70001,(vlSelf->reset));
    bufp->fullIData(oldp+70002,(vlSelf->io_posit_i1_0),32);
    bufp->fullIData(oldp+70003,(vlSelf->io_posit_i1_1),32);
    bufp->fullIData(oldp+70004,(vlSelf->io_posit_i1_2),32);
    bufp->fullIData(oldp+70005,(vlSelf->io_posit_i1_3),32);
    bufp->fullIData(oldp+70006,(vlSelf->io_posit_i2_0),32);
    bufp->fullIData(oldp+70007,(vlSelf->io_posit_i2_1),32);
    bufp->fullIData(oldp+70008,(vlSelf->io_posit_i2_2),32);
    bufp->fullIData(oldp+70009,(vlSelf->io_posit_i2_3),32);
    bufp->fullCData(oldp+70010,(vlSelf->io_op),3);
    bufp->fullIData(oldp+70011,(vlSelf->io_posit_o_0),32);
    bufp->fullIData(oldp+70012,(vlSelf->io_posit_o_1),32);
    bufp->fullIData(oldp+70013,(vlSelf->io_posit_o_2),32);
    bufp->fullIData(oldp+70014,(vlSelf->io_posit_o_3),32);
    bufp->fullIData(oldp+70015,(vlSelf->io_posit_dot_o),32);
    bufp->fullCData(oldp+70016,(((8U & (vlSelf->io_posit_i1_3 
                                        >> 0x1cU)) 
                                 | ((4U & (vlSelf->io_posit_i1_2 
                                           >> 0x1dU)) 
                                    | ((2U & (vlSelf->io_posit_i1_1 
                                              >> 0x1eU)) 
                                       | (vlSelf->io_posit_i1_0 
                                          >> 0x1fU))))),4);
    bufp->fullCData(oldp+70017,(((8U & (vlSelf->io_posit_i2_3 
                                        >> 0x1cU)) 
                                 | ((4U & (vlSelf->io_posit_i2_2 
                                           >> 0x1dU)) 
                                    | ((2U & (vlSelf->io_posit_i2_1 
                                              >> 0x1eU)) 
                                       | (vlSelf->io_posit_i2_0 
                                          >> 0x1fU))))),4);
    bufp->fullCData(oldp+70018,(((8U & ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2) 
                                          | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3))
                                          ? (vlSelf->io_posit_i1_3 
                                             >> 0x1fU)
                                          : (vlSelf->io_posit_i2_3 
                                             >> 0x1fU)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1) 
                                                         | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2))
                                                         ? 
                                                        (vlSelf->io_posit_i1_2 
                                                         >> 0x1fU)
                                                         : 
                                                        (vlSelf->io_posit_i2_2 
                                                         >> 0x1fU)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0) 
                                                            | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1))
                                                            ? 
                                                           (vlSelf->io_posit_i1_1 
                                                            >> 0x1fU)
                                                            : 
                                                           (vlSelf->io_posit_i2_1 
                                                            >> 0x1fU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                                             | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                                             ? 
                                                            (vlSelf->io_posit_i1_0 
                                                             >> 0x1fU)
                                                             : 
                                                            (vlSelf->io_posit_i2_0 
                                                             >> 0x1fU))))))),4);
    __Vtemp_h24f352fb__0[0U] = vlSelf->io_posit_i1_0;
    __Vtemp_h24f352fb__0[1U] = vlSelf->io_posit_i1_1;
    __Vtemp_h24f352fb__0[2U] = (IData)((((QData)((IData)(vlSelf->io_posit_i1_3)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->io_posit_i1_2))));
    __Vtemp_h24f352fb__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_posit_i1_3)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->io_posit_i1_2))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+70019,(__Vtemp_h24f352fb__0),128);
    bufp->fullIData(oldp+70023,((((IData)(vlSelf->__VdfgTmp_h2bfbff40__0) 
                                  << 0x1aU) | ((0x3000000U 
                                                & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                                   >> 5U)) 
                                               | (((IData)(vlSelf->__VdfgTmp_h92dbb766__0) 
                                                   << 0x12U) 
                                                  | ((0x30000U 
                                                      & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                                         >> 0xdU)) 
                                                     | (((IData)(vlSelf->__VdfgTmp_he1608796__0) 
                                                         << 0xaU) 
                                                        | ((0x300U 
                                                            & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o 
                                                               >> 0x15U)) 
                                                           | (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb74fe78f__0)))))))),32);
    __Vtemp_h8a85a4ef__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != vlSelf->PvuTop__DOT__decode1__DOT___operand_1_T_6))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o 
                                                                >> 2U)))) 
                                            << 0x1cU) 
                                           | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)))));
    __Vtemp_h8a85a4ef__0[1U] = ((0xff000000U & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                                << 0x16U)) 
                                | (IData)(((((QData)((IData)(
                                                             (0U 
                                                              != vlSelf->PvuTop__DOT__decode1__DOT___operand_1_T_6))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x7ffffffU 
                                                                 & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o 
                                                                    >> 2U)))) 
                                                << 0x1cU) 
                                               | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)))) 
                                           >> 0x20U)));
    __Vtemp_h8a85a4ef__0[2U] = ((0xfff00000U & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                                << 0x12U)) 
                                | (((IData)((0U != vlSelf->PvuTop__DOT__decode1__DOT___operand_2_T_6)) 
                                    << 0x13U) | (0x7ffffU 
                                                 & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                                    >> 0xaU))));
    __Vtemp_h8a85a4ef__0[3U] = (((IData)((0U != vlSelf->PvuTop__DOT__decode1__DOT___operand_3_T_6)) 
                                 << 0xfU) | (0x7fffU 
                                             & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                                >> 0xeU)));
    bufp->fullWData(oldp+70024,(__Vtemp_h8a85a4ef__0),112);
    bufp->fullIData(oldp+70028,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o),31);
    bufp->fullIData(oldp+70029,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o),31);
    bufp->fullIData(oldp+70030,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o),31);
    bufp->fullIData(oldp+70031,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o),31);
    bufp->fullBit(oldp+70032,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70033,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70034,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70035,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70036,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70037,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70038,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70039,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    __Vtemp_h95b92b9c__0[0U] = vlSelf->io_posit_i2_0;
    __Vtemp_h95b92b9c__0[1U] = vlSelf->io_posit_i2_1;
    __Vtemp_h95b92b9c__0[2U] = (IData)((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->io_posit_i2_2))));
    __Vtemp_h95b92b9c__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->io_posit_i2_2))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+70040,(__Vtemp_h95b92b9c__0),128);
    bufp->fullIData(oldp+70044,((((IData)(vlSelf->__VdfgTmp_hf9a58d2e__0) 
                                  << 0x1aU) | ((0x3000000U 
                                                & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
                                                   >> 5U)) 
                                               | (((IData)(vlSelf->__VdfgTmp_h1c4c2383__0) 
                                                   << 0x12U) 
                                                  | ((0x30000U 
                                                      & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
                                                         >> 0xdU)) 
                                                     | (((IData)(vlSelf->__VdfgTmp_h591e574e__0) 
                                                         << 0xaU) 
                                                        | ((0x300U 
                                                            & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o 
                                                               >> 0x15U)) 
                                                           | (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_h40c78a7d__0)))))))),32);
    __Vtemp_h8053b372__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != vlSelf->PvuTop__DOT__decode2__DOT___operand_1_T_6))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o 
                                                                >> 2U)))) 
                                            << 0x1cU) 
                                           | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))));
    __Vtemp_h8053b372__0[1U] = ((0xff000000U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
                                                << 0x16U)) 
                                | (IData)(((((QData)((IData)(
                                                             (0U 
                                                              != vlSelf->PvuTop__DOT__decode2__DOT___operand_1_T_6))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x7ffffffU 
                                                                 & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o 
                                                                    >> 2U)))) 
                                                << 0x1cU) 
                                               | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))) 
                                           >> 0x20U)));
    __Vtemp_h8053b372__0[2U] = ((0xfff00000U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
                                                << 0x12U)) 
                                | (((IData)((0U != vlSelf->PvuTop__DOT__decode2__DOT___operand_2_T_6)) 
                                    << 0x13U) | (0x7ffffU 
                                                 & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
                                                    >> 0xaU))));
    __Vtemp_h8053b372__0[3U] = (((IData)((0U != vlSelf->PvuTop__DOT__decode2__DOT___operand_3_T_6)) 
                                 << 0xfU) | (0x7fffU 
                                             & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
                                                >> 0xeU)));
    bufp->fullWData(oldp+70045,(__Vtemp_h8053b372__0),112);
    bufp->fullBit(oldp+70049,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70050,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70051,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70052,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70053,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70054,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70055,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70056,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullIData(oldp+70057,(((((IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7e325dc__0) 
                                   - (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_h417b81ae__0)) 
                                  << 0x18U) | ((0xff0000U 
                                                & (((IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7093f58__0) 
                                                    - (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_h4081c32a__0)) 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & (((IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7ef4006__0) 
                                                       - (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_h4160ece8__0)) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & ((IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb74fe78f__0) 
                                                        - (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_h40c78a7d__0))))))),32);
    bufp->fullSData(oldp+70058,((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_b) 
                                  << 8U) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_a))),16);
    bufp->fullCData(oldp+70059,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT___compTreeA_io_result_o),8);
    bufp->fullSData(oldp+70060,((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_b) 
                                  << 8U) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_a))),16);
    bufp->fullCData(oldp+70061,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT___compTreeB_io_result_o),8);
    bufp->fullIData(oldp+70062,(((5U == (IData)(vlSelf->io_op))
                                  ? 0U : (((IData)(vlSelf->__VdfgTmp_h0ac19d08__0) 
                                           << 0x18U) 
                                          | (((IData)(vlSelf->__VdfgTmp_hbcad01fc__0) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->__VdfgTmp_he7d05b0f__0) 
                                                 << 8U) 
                                                | (IData)(vlSelf->__VdfgTmp_h9eadb722__0)))))),32);
    __Vtemp_h2fd25578__0[0U] = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_hc2cb336a__0)) 
                                         << 0x1cU) 
                                        | (QData)((IData)(vlSelf->__VdfgTmp_h2c24db01__0))));
    __Vtemp_h2fd25578__0[1U] = ((vlSelf->__VdfgTmp_ha2ef73d4__0 
                                 << 0x18U) | (IData)(
                                                     ((((QData)((IData)(vlSelf->__VdfgTmp_hc2cb336a__0)) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(vlSelf->__VdfgTmp_h2c24db01__0))) 
                                                      >> 0x20U)));
    __Vtemp_h2fd25578__0[2U] = ((vlSelf->__VdfgTmp_h75aad088__0 
                                 << 0x14U) | (vlSelf->__VdfgTmp_ha2ef73d4__0 
                                              >> 8U));
    __Vtemp_h2fd25578__0[3U] = (vlSelf->__VdfgTmp_h75aad088__0 
                                >> 0xcU);
    bufp->fullWData(oldp+70063,(__Vtemp_h2fd25578__0),112);
    __Vtemp_h658b2448__0[0U] = ((0x8000000U & vlSelf->__VdfgTmp_h2c24db01__0)
                                 ? ((1U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                     ? (0x80000000U 
                                        | (0x7fffffffU 
                                           & ((IData)(1U) 
                                              + (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T))))
                                     : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T)
                                 : 0U);
    __Vtemp_h658b2448__0[1U] = ((0x8000000U & vlSelf->__VdfgTmp_hc2cb336a__0)
                                 ? ((2U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                     ? (0x80000000U 
                                        | (0x7fffffffU 
                                           & ((IData)(1U) 
                                              + (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T))))
                                     : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T)
                                 : 0U);
    __Vtemp_h658b2448__0[2U] = (IData)((((QData)((IData)(
                                                         ((0x8000000U 
                                                           & vlSelf->__VdfgTmp_h75aad088__0)
                                                           ? 
                                                          ((8U 
                                                            & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                                            ? 
                                                           (0x80000000U 
                                                            | (0x7fffffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T))))
                                                            : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T)
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x8000000U 
                                                            & vlSelf->__VdfgTmp_ha2ef73d4__0)
                                                            ? 
                                                           ((4U 
                                                             & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                                             ? 
                                                            (0x80000000U 
                                                             | (0x7fffffffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T))))
                                                             : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T)
                                                            : 0U)))));
    __Vtemp_h658b2448__0[3U] = (IData)(((((QData)((IData)(
                                                          ((0x8000000U 
                                                            & vlSelf->__VdfgTmp_h75aad088__0)
                                                            ? 
                                                           ((8U 
                                                             & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                                             ? 
                                                            (0x80000000U 
                                                             | (0x7fffffffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T))))
                                                             : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T)
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((0x8000000U 
                                                             & vlSelf->__VdfgTmp_ha2ef73d4__0)
                                                             ? 
                                                            ((4U 
                                                              & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                                              ? 
                                                             (0x80000000U 
                                                              | (0x7fffffffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T))))
                                                              : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T)
                                                             : 0U)))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+70067,(__Vtemp_h658b2448__0),128);
    bufp->fullCData(oldp+70071,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount),5);
    bufp->fullCData(oldp+70072,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount),5);
    bufp->fullCData(oldp+70073,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount),5);
    bufp->fullCData(oldp+70074,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount),5);
    bufp->fullCData(oldp+70075,(((5U == (IData)(vlSelf->io_op))
                                  ? (IData)(vlSelf->__VdfgTmp_h61956d88__0)
                                  : 0U)),8);
    bufp->fullIData(oldp+70076,(((5U == (IData)(vlSelf->io_op))
                                  ? ((0xffffffeU & 
                                      ((IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                >> 0x1cU)) 
                                       << 1U)) | (0U 
                                                  != 
                                                  (0x7ffffffU 
                                                   & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))
                                  : 0U)),28);
    if ((1U == (IData)(vlSelf->io_op))) {
        __Vtemp_he5e6854e__0[0U] = (IData)((((QData)((IData)(
                                                             ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                                               ? vlSelf->__VdfgTmp_h5e829f01__0
                                                               : vlSelf->__VdfgTmp_h94a4fa6e__0))) 
                                             << 0x1eU) 
                                            | (QData)((IData)(
                                                              ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                                                ? vlSelf->__VdfgTmp_h4e1badcc__0
                                                                : vlSelf->__VdfgTmp_h4ac99e53__0)))));
        __Vtemp_he5e6854e__0[1U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                       ? vlSelf->__VdfgTmp_h36293f89__0
                                       : vlSelf->__VdfgTmp_h227b7e35__0) 
                                     << 0x1cU) | (IData)(
                                                         ((((QData)((IData)(
                                                                            ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                                                              ? vlSelf->__VdfgTmp_h5e829f01__0
                                                                              : vlSelf->__VdfgTmp_h94a4fa6e__0))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                                                               ? vlSelf->__VdfgTmp_h4e1badcc__0
                                                                               : vlSelf->__VdfgTmp_h4ac99e53__0)))) 
                                                          >> 0x20U)));
        __Vtemp_he5e6854e__0[2U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                       ? vlSelf->__VdfgTmp_h334557ae__0
                                       : vlSelf->__VdfgTmp_h96374ca0__0) 
                                     << 0x1aU) | (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                                    ? vlSelf->__VdfgTmp_h36293f89__0
                                                    : vlSelf->__VdfgTmp_h227b7e35__0) 
                                                  >> 4U));
        __Vtemp_he5e6854e__0[3U] = (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                      ? vlSelf->__VdfgTmp_h334557ae__0
                                      : vlSelf->__VdfgTmp_h96374ca0__0) 
                                    >> 6U);
    } else {
        __Vtemp_he5e6854e__0[0U] = 0U;
        __Vtemp_he5e6854e__0[1U] = 0U;
        __Vtemp_he5e6854e__0[2U] = 0U;
        __Vtemp_he5e6854e__0[3U] = 0U;
    }
    bufp->fullWData(oldp+70077,(__Vtemp_he5e6854e__0),120);
    bufp->fullIData(oldp+70081,(((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                    ? ((0U == (0x1fU 
                                               & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                                        ? ((0xe0U & 
                                            ((- (IData)(
                                                        (1U 
                                                         & ((((IData)(1U) 
                                                              - 
                                                              vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                             - (IData)(1U)) 
                                                            >> 4U)))) 
                                             << 5U)) 
                                           | (0x1fU 
                                              & (((IData)(1U) 
                                                  - 
                                                  vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                 - (IData)(1U))))
                                        : ((0xe0U & 
                                            ((- (IData)(
                                                        (1U 
                                                         & ((- 
                                                             vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                            >> 4U)))) 
                                             << 5U)) 
                                           | (0x1fU 
                                              & (- 
                                                 vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                    : 0U) << 0x18U) 
                                 | ((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                       ? ((0U == (0x1fU 
                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                                           ? ((0xe0U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((((IData)(1U) 
                                                                   - 
                                                                   vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                  - (IData)(1U)) 
                                                                 >> 4U)))) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (((IData)(1U) 
                                                     - 
                                                     vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                    - (IData)(1U))))
                                           : ((0xe0U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((- 
                                                                  vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                 >> 4U)))) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (- 
                                                    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                       : 0U) << 0x10U) 
                                    | ((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                          ? ((0U == 
                                              (0x1fU 
                                               & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                                              ? ((0xe0U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((((IData)(1U) 
                                                                      - 
                                                                      vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                     - (IData)(1U)) 
                                                                    >> 4U)))) 
                                                     << 5U)) 
                                                 | (0x1fU 
                                                    & (((IData)(1U) 
                                                        - 
                                                        vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                       - (IData)(1U))))
                                              : ((0xe0U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((- 
                                                                     vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                    >> 4U)))) 
                                                     << 5U)) 
                                                 | (0x1fU 
                                                    & (- 
                                                       vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                          : 0U) << 8U) 
                                       | ((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                           ? ((0U == 
                                               (0x1fU 
                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                               ? ((0xe0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((((IData)(1U) 
                                                                       - 
                                                                       vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                      - (IData)(1U)) 
                                                                     >> 4U)))) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & (((IData)(1U) 
                                                         - 
                                                         vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                        - (IData)(1U))))
                                               : ((0xe0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((- 
                                                                      vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                     >> 4U)))) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & (- 
                                                        vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                           : 0U))))),32);
    __Vtemp_hdf4c90c7__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o)))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o 
                                                                >> 3U)))) 
                                            << 0x1dU) 
                                           | (QData)((IData)(
                                                             (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o))) 
                                                               << 0x1cU) 
                                                              | ((0xffffffeU 
                                                                  & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o 
                                                                     >> 2U)) 
                                                                 | (0U 
                                                                    != 
                                                                    (3U 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o)))))))));
    __Vtemp_hdf4c90c7__0[1U] = ((0xfe000000U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o 
                                                << 0x16U)) 
                                | (IData)(((((QData)((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o)))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0x7ffffffU 
                                                                 & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o 
                                                                    >> 3U)))) 
                                                << 0x1dU) 
                                               | (QData)((IData)(
                                                                 (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (3U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o))) 
                                                                   << 0x1cU) 
                                                                  | ((0xffffffeU 
                                                                      & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o 
                                                                         >> 2U)) 
                                                                     | (0U 
                                                                        != 
                                                                        (3U 
                                                                         & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o)))))))) 
                                           >> 0x20U)));
    __Vtemp_hdf4c90c7__0[2U] = ((0xffe00000U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o 
                                                << 0x12U)) 
                                | (((IData)((0U != 
                                             (3U & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o))) 
                                    << 0x14U) | (0xfffffU 
                                                 & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o 
                                                    >> 0xaU))));
    __Vtemp_hdf4c90c7__0[3U] = (0xffffU & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o 
                                           >> 0xeU));
    bufp->fullWData(oldp+70082,(__Vtemp_hdf4c90c7__0),112);
    bufp->fullBit(oldp+70086,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70087,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70088,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70089,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70090,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70091,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70092,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70093,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullQData(oldp+70094,((((QData)((IData)((
                                                   (1U 
                                                    & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x3fU 
                                                      & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                     ? 
                                                    ((0x1c0U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((((IData)(1U) 
                                                                          - 
                                                                          vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                         - (IData)(1U)) 
                                                                        >> 5U)))) 
                                                         << 6U)) 
                                                     | (0x3fU 
                                                        & (((IData)(1U) 
                                                            - 
                                                            vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                           - (IData)(1U))))
                                                     : 
                                                    ((0x1c0U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((- 
                                                                         vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                        >> 5U)))) 
                                                         << 6U)) 
                                                     | (0x3fU 
                                                        & (- 
                                                           vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                                    : 0U))) 
                                  << 0x1bU) | (QData)((IData)(
                                                              ((((1U 
                                                                  & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))
                                                                  ? 
                                                                 ((0U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                                   ? 
                                                                  ((0x1c0U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((((IData)(1U) 
                                                                                - 
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                - (IData)(1U)) 
                                                                                >> 5U)))) 
                                                                       << 6U)) 
                                                                   | (0x3fU 
                                                                      & (((IData)(1U) 
                                                                          - 
                                                                          vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                         - (IData)(1U))))
                                                                   : 
                                                                  ((0x1c0U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((- 
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                >> 5U)))) 
                                                                       << 6U)) 
                                                                   | (0x3fU 
                                                                      & (- 
                                                                         vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                                                  : 0U) 
                                                                << 0x12U) 
                                                               | ((((1U 
                                                                     & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))
                                                                     ? 
                                                                    ((0U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                                      ? 
                                                                     ((0x1c0U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & ((((IData)(1U) 
                                                                                - 
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                - (IData)(1U)) 
                                                                                >> 5U)))) 
                                                                          << 6U)) 
                                                                      | (0x3fU 
                                                                         & (((IData)(1U) 
                                                                             - 
                                                                             vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                            - (IData)(1U))))
                                                                      : 
                                                                     ((0x1c0U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & ((- 
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                >> 5U)))) 
                                                                          << 6U)) 
                                                                      | (0x3fU 
                                                                         & (- 
                                                                            vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                                                     : 0U) 
                                                                   << 9U) 
                                                                  | ((1U 
                                                                      & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                      ? 
                                                                     ((0U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                                       ? 
                                                                      ((0x1c0U 
                                                                        & ((- (IData)(
                                                                                (1U 
                                                                                & ((((IData)(1U) 
                                                                                - 
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                - (IData)(1U)) 
                                                                                >> 5U)))) 
                                                                           << 6U)) 
                                                                       | (0x3fU 
                                                                          & (((IData)(1U) 
                                                                              - 
                                                                              vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                             - (IData)(1U))))
                                                                       : 
                                                                      ((0x1c0U 
                                                                        & ((- (IData)(
                                                                                (1U 
                                                                                & ((- 
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                >> 5U)))) 
                                                                           << 6U)) 
                                                                       | (0x3fU 
                                                                          & (- 
                                                                             vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                                                      : 0U))))))),36);
    __Vtemp_hee7dfb4e__0[1U] = (((IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o 
                                          >> 0x1dU)) 
                                 << 0x19U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xfffffffU 
                                                                          & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o))))) 
                                                        << 0x38U) 
                                                       | (((QData)((IData)(
                                                                           (0x7ffffffU 
                                                                            & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o 
                                                                                >> 0x1dU))))) 
                                                           << 0x1dU) 
                                                          | (QData)((IData)(
                                                                            (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffffU 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o)))) 
                                                                              << 0x1cU) 
                                                                             | ((0xffffffeU 
                                                                                & ((IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o 
                                                                                >> 0x1dU)) 
                                                                                << 1U)) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xfffffffU 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o))))))))) 
                                                      >> 0x20U)));
    __Vtemp_h52e32d61__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (0xfffffffU 
                                                           & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (IData)(
                                                                       (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o 
                                                                        >> 0x1dU))))) 
                                            << 0x1dU) 
                                           | (QData)((IData)(
                                                             (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xfffffffU 
                                                                         & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o)))) 
                                                               << 0x1cU) 
                                                              | ((0xffffffeU 
                                                                  & ((IData)(
                                                                             (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o 
                                                                              >> 0x1dU)) 
                                                                     << 1U)) 
                                                                 | (0U 
                                                                    != 
                                                                    (0xfffffffU 
                                                                     & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o))))))))));
    __Vtemp_h52e32d61__0[1U] = __Vtemp_hee7dfb4e__0[1U];
    __Vtemp_h52e32d61__0[2U] = (((IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o 
                                          >> 0x1dU)) 
                                 << 0x15U) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xfffffffU 
                                                         & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o)))) 
                                               << 0x14U) 
                                              | (0xfffffU 
                                                 & ((IData)(
                                                            (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o 
                                                             >> 0x1dU)) 
                                                    >> 7U))));
    __Vtemp_h52e32d61__0[3U] = (0xffffU & ((IData)(
                                                   (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o 
                                                    >> 0x1dU)) 
                                           >> 0xbU));
    bufp->fullWData(oldp+70096,(__Vtemp_h52e32d61__0),112);
    bufp->fullBit(oldp+70100,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70101,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70103,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70104,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70106,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70107,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70109,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70110,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullSData(oldp+70112,(((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                  ? ((5U > (0x3fU & 
                                            vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                      ? ((0x1c0U & 
                                          ((- (IData)(
                                                      (1U 
                                                       & ((((IData)(5U) 
                                                            - 
                                                            vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                           - (IData)(1U)) 
                                                          >> 5U)))) 
                                           << 6U)) 
                                         | (0x3fU & 
                                            (((IData)(5U) 
                                              - vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                             - (IData)(1U))))
                                      : ((0x1c0U & 
                                          ((- (IData)(
                                                      (1U 
                                                       & ((- 
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                            - (IData)(4U))) 
                                                          >> 5U)))) 
                                           << 6U)) 
                                         | (0x3fU & 
                                            (- (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                - (IData)(4U))))))
                                  : 0U)),9);
    bufp->fullCData(oldp+70113,(((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                  ? (IData)(vlSelf->__VdfgTmp_h858857fc__0)
                                  : 0U)),6);
    bufp->fullBit(oldp+70114,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70115,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+70117,((((QData)((IData)((
                                                   (1U 
                                                    & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))
                                                    ? 
                                                   ((2U 
                                                     > 
                                                     (0x3fU 
                                                      & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                     ? 
                                                    ((0x1c0U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((((IData)(2U) 
                                                                          - 
                                                                          vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                         - (IData)(1U)) 
                                                                        >> 5U)))) 
                                                         << 6U)) 
                                                     | (0x3fU 
                                                        & (((IData)(2U) 
                                                            - 
                                                            vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                           - (IData)(1U))))
                                                     : 
                                                    ((0x1c0U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((- 
                                                                         (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                          - (IData)(1U))) 
                                                                        >> 5U)))) 
                                                         << 6U)) 
                                                     | (0x3fU 
                                                        & (- 
                                                           (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                            - (IData)(1U))))))
                                                    : 0U))) 
                                  << 0x1bU) | (QData)((IData)(
                                                              ((((1U 
                                                                  & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))
                                                                  ? 
                                                                 ((2U 
                                                                   > 
                                                                   (0x3fU 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                                   ? 
                                                                  ((0x1c0U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((((IData)(2U) 
                                                                                - 
                                                                                vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                - (IData)(1U)) 
                                                                                >> 5U)))) 
                                                                       << 6U)) 
                                                                   | (0x3fU 
                                                                      & (((IData)(2U) 
                                                                          - 
                                                                          vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                         - (IData)(1U))))
                                                                   : 
                                                                  ((0x1c0U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((- 
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U))) 
                                                                                >> 5U)))) 
                                                                       << 6U)) 
                                                                   | (0x3fU 
                                                                      & (- 
                                                                         (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                          - (IData)(1U))))))
                                                                  : 0U) 
                                                                << 0x12U) 
                                                               | ((((1U 
                                                                     & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))
                                                                     ? 
                                                                    ((2U 
                                                                      > 
                                                                      (0x3fU 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                                      ? 
                                                                     ((0x1c0U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & ((((IData)(2U) 
                                                                                - 
                                                                                vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                - (IData)(1U)) 
                                                                                >> 5U)))) 
                                                                          << 6U)) 
                                                                      | (0x3fU 
                                                                         & (((IData)(2U) 
                                                                             - 
                                                                             vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                            - (IData)(1U))))
                                                                      : 
                                                                     ((0x1c0U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & ((- 
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U))) 
                                                                                >> 5U)))) 
                                                                          << 6U)) 
                                                                      | (0x3fU 
                                                                         & (- 
                                                                            (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                             - (IData)(1U))))))
                                                                     : 0U) 
                                                                   << 9U) 
                                                                  | ((1U 
                                                                      & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                      ? 
                                                                     ((2U 
                                                                       > 
                                                                       (0x3fU 
                                                                        & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                                       ? 
                                                                      ((0x1c0U 
                                                                        & ((- (IData)(
                                                                                (1U 
                                                                                & ((((IData)(2U) 
                                                                                - 
                                                                                vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                - (IData)(1U)) 
                                                                                >> 5U)))) 
                                                                           << 6U)) 
                                                                       | (0x3fU 
                                                                          & (((IData)(2U) 
                                                                              - 
                                                                              vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                             - (IData)(1U))))
                                                                       : 
                                                                      ((0x1c0U 
                                                                        & ((- (IData)(
                                                                                (1U 
                                                                                & ((- 
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U))) 
                                                                                >> 5U)))) 
                                                                           << 6U)) 
                                                                       | (0x3fU 
                                                                          & (- 
                                                                             (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                              - (IData)(1U))))))
                                                                      : 0U))))))),36);
    __Vtemp_h4c9dee20__0[1U] = (((IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o 
                                          >> 0x1dU)) 
                                 << 0x19U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xfffffffU 
                                                                          & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o))))) 
                                                        << 0x38U) 
                                                       | (((QData)((IData)(
                                                                           (0x7ffffffU 
                                                                            & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o 
                                                                                >> 0x1dU))))) 
                                                           << 0x1dU) 
                                                          | (QData)((IData)(
                                                                            (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffffU 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o)))) 
                                                                              << 0x1cU) 
                                                                             | ((0xffffffeU 
                                                                                & ((IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o 
                                                                                >> 0x1dU)) 
                                                                                << 1U)) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xfffffffU 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o))))))))) 
                                                      >> 0x20U)));
    __Vtemp_hf67a7711__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (0xfffffffU 
                                                           & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (IData)(
                                                                       (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o 
                                                                        >> 0x1dU))))) 
                                            << 0x1dU) 
                                           | (QData)((IData)(
                                                             (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xfffffffU 
                                                                         & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o)))) 
                                                               << 0x1cU) 
                                                              | ((0xffffffeU 
                                                                  & ((IData)(
                                                                             (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o 
                                                                              >> 0x1dU)) 
                                                                     << 1U)) 
                                                                 | (0U 
                                                                    != 
                                                                    (0xfffffffU 
                                                                     & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o))))))))));
    __Vtemp_hf67a7711__0[1U] = __Vtemp_h4c9dee20__0[1U];
    __Vtemp_hf67a7711__0[2U] = (((IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o 
                                          >> 0x1dU)) 
                                 << 0x15U) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xfffffffU 
                                                         & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o)))) 
                                               << 0x14U) 
                                              | (0xfffffU 
                                                 & ((IData)(
                                                            (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o 
                                                             >> 0x1dU)) 
                                                    >> 7U))));
    __Vtemp_hf67a7711__0[3U] = (0xffffU & ((IData)(
                                                   (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o 
                                                    >> 0x1dU)) 
                                           >> 0xbU));
    bufp->fullWData(oldp+70119,(__Vtemp_hf67a7711__0),112);
    bufp->fullBit(oldp+70123,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70124,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70126,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70127,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70129,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70130,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70132,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70133,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullIData(oldp+70135,(((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                    ? ((0U == (0x1fU 
                                               & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                                        ? ((0xe0U & 
                                            ((- (IData)(
                                                        (1U 
                                                         & ((((IData)(1U) 
                                                              - 
                                                              vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                             - (IData)(1U)) 
                                                            >> 4U)))) 
                                             << 5U)) 
                                           | (0x1fU 
                                              & (((IData)(1U) 
                                                  - 
                                                  vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                 - (IData)(1U))))
                                        : ((0xe0U & 
                                            ((- (IData)(
                                                        (1U 
                                                         & ((- 
                                                             vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                            >> 4U)))) 
                                             << 5U)) 
                                           | (0x1fU 
                                              & (- 
                                                 vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                    : 0U) << 0x18U) 
                                 | ((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                       ? ((0U == (0x1fU 
                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                                           ? ((0xe0U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((((IData)(1U) 
                                                                   - 
                                                                   vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                  - (IData)(1U)) 
                                                                 >> 4U)))) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (((IData)(1U) 
                                                     - 
                                                     vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                    - (IData)(1U))))
                                           : ((0xe0U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((- 
                                                                  vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                 >> 4U)))) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (- 
                                                    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                       : 0U) << 0x10U) 
                                    | ((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                          ? ((0U == 
                                              (0x1fU 
                                               & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                                              ? ((0xe0U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((((IData)(1U) 
                                                                      - 
                                                                      vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                     - (IData)(1U)) 
                                                                    >> 4U)))) 
                                                     << 5U)) 
                                                 | (0x1fU 
                                                    & (((IData)(1U) 
                                                        - 
                                                        vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                       - (IData)(1U))))
                                              : ((0xe0U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((- 
                                                                     vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                    >> 4U)))) 
                                                     << 5U)) 
                                                 | (0x1fU 
                                                    & (- 
                                                       vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                          : 0U) << 8U) 
                                       | ((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                           ? ((0U == 
                                               (0x1fU 
                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                               ? ((0xe0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((((IData)(1U) 
                                                                       - 
                                                                       vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                      - (IData)(1U)) 
                                                                     >> 4U)))) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & (((IData)(1U) 
                                                         - 
                                                         vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                        - (IData)(1U))))
                                               : ((0xe0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((- 
                                                                      vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                     >> 4U)))) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & (- 
                                                        vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                           : 0U))))),32);
    __Vtemp_hd280c543__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o)))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o 
                                                                >> 3U)))) 
                                            << 0x1dU) 
                                           | (QData)((IData)(
                                                             (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o))) 
                                                               << 0x1cU) 
                                                              | ((0xffffffeU 
                                                                  & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o 
                                                                     >> 2U)) 
                                                                 | (0U 
                                                                    != 
                                                                    (3U 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o)))))))));
    __Vtemp_hd280c543__0[1U] = ((0xfe000000U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o 
                                                << 0x16U)) 
                                | (IData)(((((QData)((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o)))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0x7ffffffU 
                                                                 & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o 
                                                                    >> 3U)))) 
                                                << 0x1dU) 
                                               | (QData)((IData)(
                                                                 (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (3U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o))) 
                                                                   << 0x1cU) 
                                                                  | ((0xffffffeU 
                                                                      & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o 
                                                                         >> 2U)) 
                                                                     | (0U 
                                                                        != 
                                                                        (3U 
                                                                         & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o)))))))) 
                                           >> 0x20U)));
    __Vtemp_hd280c543__0[2U] = ((0xffe00000U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o 
                                                << 0x12U)) 
                                | (((IData)((0U != 
                                             (3U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o))) 
                                    << 0x14U) | (0xfffffU 
                                                 & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o 
                                                    >> 0xaU))));
    __Vtemp_hd280c543__0[3U] = (0xffffU & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o 
                                           >> 0xeU));
    bufp->fullWData(oldp+70136,(__Vtemp_hd280c543__0),112);
    bufp->fullBit(oldp+70140,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70141,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70142,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70143,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70144,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70145,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70146,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70147,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullCData(oldp+70148,(((8U & ((((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3)) 
                                          & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)) 
                                         << 3U) ^ (8U 
                                                   & (vlSelf->io_posit_i1_3 
                                                      >> 0x1cU)))) 
                                 | ((4U & ((((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2)) 
                                             & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)) 
                                            << 2U) 
                                           ^ (4U & 
                                              (vlSelf->io_posit_i1_2 
                                               >> 0x1dU)))) 
                                    | ((2U & ((((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1)) 
                                                & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)) 
                                               << 1U) 
                                              ^ (2U 
                                                 & (vlSelf->io_posit_i1_1 
                                                    >> 0x1eU)))) 
                                       | (1U & (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                                 & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                                ^ (vlSelf->io_posit_i1_0 
                                                   >> 0x1fU))))))),4);
    bufp->fullIData(oldp+70149,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a),28);
    bufp->fullQData(oldp+70150,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70152,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a),28);
    bufp->fullQData(oldp+70153,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70155,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a),28);
    bufp->fullQData(oldp+70156,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70158,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a),28);
    bufp->fullQData(oldp+70159,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70161,(0x1fU),32);
    bufp->fullBit(oldp+70162,(1U));
    bufp->fullIData(oldp+70163,(5U),32);
    __Vtemp_hc5d9e20e__0[0U] = 0x8a418820U;
    __Vtemp_hc5d9e20e__0[1U] = 0xc5a92839U;
    __Vtemp_hc5d9e20e__0[2U] = 0xca307b9aU;
    __Vtemp_hc5d9e20e__0[3U] = 0x38bdab49U;
    __Vtemp_hc5d9e20e__0[4U] = 0x7bbcdebU;
    bufp->fullWData(oldp+70164,(__Vtemp_hc5d9e20e__0),155);
    bufp->fullBit(oldp+70169,(0U));
    bufp->fullIData(oldp+70170,(0x1eU),32);
    __Vtemp_h597cbf99__0[0U] = 0x8a418820U;
    __Vtemp_h597cbf99__0[1U] = 0xc5a92839U;
    __Vtemp_h597cbf99__0[2U] = 0xca307b9aU;
    __Vtemp_h597cbf99__0[3U] = 0x38bdab49U;
    __Vtemp_h597cbf99__0[4U] = 0x3bcdebU;
    bufp->fullWData(oldp+70171,(__Vtemp_h597cbf99__0),150);
    bufp->fullIData(oldp+70176,(0x38U),32);
    bufp->fullIData(oldp+70177,(6U),32);
    bufp->fullWData(oldp+70178,(VPvuTop__ConstPool__CONST_hc4a98b6e_0),336);
    bufp->fullIData(oldp+70189,(0x3bU),32);
    bufp->fullWData(oldp+70190,(VPvuTop__ConstPool__CONST_h55404713_0),354);
    bufp->fullBit(oldp+70202,(1U));
}
