// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop__Syms.h"
#include "VPvuTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__ico(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG

void VPvuTop___024root___eval_triggers__ico(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
    vlSelf->__VicoTriggered.at(1U) = (((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)) 
                                      | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VicoTriggered.at(2U) = ((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VicoTriggered.at(3U) = (((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)) 
                                      | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VicoTriggered.at(4U) = ((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VicoTriggered.at(5U) = (((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)) 
                                      | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VicoTriggered.at(6U) = ((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VicoTriggered.at(7U) = (((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)) 
                                      | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VicoTriggered.at(8U) = ((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VicoTriggered.at(9U) = (((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)) 
                                      | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VicoTriggered.at(0xaU) = ((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VicoTriggered.at(0xbU) = (((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)) 
                                        | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes 
                                           != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VicoTriggered.at(0xcU) = ((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VicoTriggered.at(0xdU) = (((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)) 
                                        | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes 
                                           != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VicoTriggered.at(0xeU) = ((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VicoTriggered.at(0xfU) = (((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)) 
                                        | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes 
                                           != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VicoTriggered.at(0x10U) = ((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VicoTriggered.at(0x11U) = ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x12U) = (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x13U) = (((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)) 
                                         | (vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                            != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VicoTriggered.at(0x14U) = ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VicoTriggered.at(0x15U) = (((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)) 
                                         | (vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes 
                                            != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VicoTriggered.at(0x16U) = ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VicoTriggered.at(0x17U) = (((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)) 
                                         | (vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes 
                                            != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VicoTriggered.at(0x18U) = ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VicoTriggered.at(0x19U) = (((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)) 
                                         | (vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes 
                                            != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VicoTriggered.at(0x1aU) = ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VicoTriggered.at(0x1bU) = ((vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x1cU) = (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x1dU) = ((vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x1eU) = (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x1fU) = ((vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x20U) = (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x21U) = ((vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x22U) = (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U];
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.at(1U) = 1U;
        vlSelf->__VicoTriggered.at(2U) = 1U;
        vlSelf->__VicoTriggered.at(3U) = 1U;
        vlSelf->__VicoTriggered.at(4U) = 1U;
        vlSelf->__VicoTriggered.at(5U) = 1U;
        vlSelf->__VicoTriggered.at(6U) = 1U;
        vlSelf->__VicoTriggered.at(7U) = 1U;
        vlSelf->__VicoTriggered.at(8U) = 1U;
        vlSelf->__VicoTriggered.at(9U) = 1U;
        vlSelf->__VicoTriggered.at(0xaU) = 1U;
        vlSelf->__VicoTriggered.at(0xbU) = 1U;
        vlSelf->__VicoTriggered.at(0xcU) = 1U;
        vlSelf->__VicoTriggered.at(0xdU) = 1U;
        vlSelf->__VicoTriggered.at(0xeU) = 1U;
        vlSelf->__VicoTriggered.at(0xfU) = 1U;
        vlSelf->__VicoTriggered.at(0x10U) = 1U;
        vlSelf->__VicoTriggered.at(0x11U) = 1U;
        vlSelf->__VicoTriggered.at(0x12U) = 1U;
        vlSelf->__VicoTriggered.at(0x13U) = 1U;
        vlSelf->__VicoTriggered.at(0x14U) = 1U;
        vlSelf->__VicoTriggered.at(0x15U) = 1U;
        vlSelf->__VicoTriggered.at(0x16U) = 1U;
        vlSelf->__VicoTriggered.at(0x17U) = 1U;
        vlSelf->__VicoTriggered.at(0x18U) = 1U;
        vlSelf->__VicoTriggered.at(0x19U) = 1U;
        vlSelf->__VicoTriggered.at(0x1aU) = 1U;
        vlSelf->__VicoTriggered.at(0x1bU) = 1U;
        vlSelf->__VicoTriggered.at(0x1cU) = 1U;
        vlSelf->__VicoTriggered.at(0x1dU) = 1U;
        vlSelf->__VicoTriggered.at(0x1eU) = 1U;
        vlSelf->__VicoTriggered.at(0x1fU) = 1U;
        vlSelf->__VicoTriggered.at(0x20U) = 1U;
        vlSelf->__VicoTriggered.at(0x21U) = 1U;
        vlSelf->__VicoTriggered.at(0x22U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPvuTop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VPvuTop___024root___ico_sequent__TOP__1(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0;
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 = 0;
    // Body
    vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0 
        = (0x3ffffffU & ((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_0)
                          ? ((IData)(1U) + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_0))
                          : vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_0));
    vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1 
        = (0x3ffffffU & ((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_1)
                          ? ((IData)(1U) + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_1))
                          : vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_1));
    vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2 
        = (0x3ffffffU & ((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_2)
                          ? ((IData)(1U) + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_2))
                          : vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_2));
    vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_3 
        = (0x3ffffffU & ((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_3)
                          ? ((IData)(1U) + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_3))
                          : vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_3));
    vlSelf->PvuTop__DOT___dotproduct_io_pir_frac_o 
        = (0x3ffffffU & (((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0 
                           & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1) 
                          | ((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1 
                              & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2) 
                             | ((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2 
                                 & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_3) 
                                | ((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0 
                                    & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2) 
                                   | ((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0 
                                       | vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1) 
                                      & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_3))))) 
                         + (vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0 
                            ^ (vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1 
                               ^ (vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2 
                                  ^ vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_3)))));
    if (vlSelf->__VdfgTmp_h4be4f099__0) {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm__io_pir_frac_i = 0U;
        vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i = 0U;
    } else {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm__io_pir_frac_i 
            = vlSelf->PvuTop__DOT___dotproduct_io_pir_frac_o;
        vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
            = (0x1ffffffU & vlSelf->PvuTop__DOT___dotproduct_io_pir_frac_o);
    }
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffeU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffdU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 1U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffbU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 2U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffff7U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 3U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffefU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 4U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffdfU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 5U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffbfU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 6U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffff7fU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 7U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffeffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 8U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffdffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 9U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffbffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xaU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fff7ffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xbU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffefffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xcU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffdfffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xdU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffbfffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xeU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ff7fffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xfU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1feffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x10U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fdffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x11U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fbffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x12U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1f7ffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x13U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1efffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x14U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dfffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x15U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bfffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x16U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17fffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x17U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i);
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x18U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__18(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__18\n"); );
    // Init
    CData/*6:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount1_T;
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T = 0;
    CData/*6:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount2_T;
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0;
    PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0;
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 = 0;
    IData/*25:0*/ __VdfgTmp_h3ba16687__0;
    __VdfgTmp_h3ba16687__0 = 0;
    // Body
    vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_0 
        = (VL_GTS_III(7, (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0), (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0))
            ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0)
            : (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0));
    __VdfgTmp_h3ba16687__0 = (0x3ffffffU & ((3U == (IData)(vlSelf->io_op))
                                             ? ((0x80U 
                                                 & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum))
                                                 ? 0U
                                                 : 
                                                ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                                  ^ 
                                                  (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0 
                                                    ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0))) 
                                                 + 
                                                 ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0 
                                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0 
                                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0) 
                                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                                            & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0) 
                                                           | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                                               | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0) 
                                                              & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0)))))))
                                             : ((4U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                (0xffffffU 
                                                 & (IData)(
                                                           (0xffffffULL 
                                                            & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                 ^ 
                                                                 (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                  ^ 
                                                                  (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                   ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                                + 
                                                                ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                 | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                     & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                    | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                       | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                           & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                          | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                              | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                               >> 0xcU))))
                                                 : 0U)));
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T 
        = (0x7fU & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_0) 
                    - (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0)));
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T 
        = (0x7fU & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_0) 
                    - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0)));
    if (vlSelf->PvuTop__DOT___GEN_3) {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_0 = 0U;
        vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i = 0U;
    } else {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_0 
            = __VdfgTmp_h3ba16687__0;
        vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
            = (0x1ffffffU & __VdfgTmp_h3ba16687__0);
    }
    vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_0 
        = ((0xdU >= ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T))
                      ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T)))
            ? (0x3fffU & (((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                           << 2U) >> ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T))
                                       ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T))))
            : 0U);
    vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_0 
        = ((0xdU >= ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T))
                      ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T)))
            ? (0x3fffU & (((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                           << 2U) >> ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T))
                                       ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T))))
            : 0U);
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffeU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffdU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 1U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffbU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 2U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffff7U & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 3U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffefU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 4U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffdfU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 5U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffbfU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 6U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffff7fU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 7U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffeffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 8U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffdffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 9U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffbffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xaU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fff7ffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xbU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffefffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xcU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffdfffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xdU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffbfffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xeU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ff7fffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xfU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1feffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x10U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fdffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x11U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fbffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x12U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1f7ffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x13U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1efffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x14U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dfffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x15U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bfffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x16U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17fffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x17U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i);
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x18U));
    vlSelf->PvuTop__DOT__add__DOT__mant1_greater = 
        ((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_0)) 
         > (0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_0)));
    vlSelf->PvuTop__DOT__add__DOT__sum = (0x1fffU & 
                                          ((0xfffU 
                                            & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_0)) 
                                           + (0xfffU 
                                              & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_0))));
    vlSelf->__VdfgTmp_h5b3a16c4__0 = (0xfffU & ((IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_0) 
                                                 - (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_0))
                                                 : 
                                                ((IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_0) 
                                                 - (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_0))));
    vlSelf->__VdfgTmp_h2299343e__0 = (0xfffU & ((0x1000U 
                                                 & (IData)(vlSelf->PvuTop__DOT__add__DOT__sum))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum) 
                                                 >> 1U)
                                                 : (IData)(vlSelf->PvuTop__DOT__add__DOT__sum)));
    vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_0 
        = ((1U == (IData)(vlSelf->io_op)) ? ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                              ? (IData)(vlSelf->__VdfgTmp_h2299343e__0)
                                              : (IData)(vlSelf->__VdfgTmp_h5b3a16c4__0))
            : ((2U == (IData)(vlSelf->io_op)) ? ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                                  ? (IData)(vlSelf->__VdfgTmp_h5b3a16c4__0)
                                                  : (IData)(vlSelf->__VdfgTmp_h2299343e__0))
                : 0U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_0) 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_0) 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0) 
              << 1U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_0) 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0) 
              << 2U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_0) 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0) 
              << 3U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_0) 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0) 
              << 4U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_0) 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0) 
              << 5U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_0) 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0) 
              << 6U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_0) 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0) 
              << 7U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_0) 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0) 
              << 8U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_0) 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0) 
              << 9U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_0));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT____Vlvbound_h918bd6c0__0) 
              << 0xaU));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__19(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__19\n"); );
    // Init
    CData/*6:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_3;
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_3 = 0;
    CData/*6:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_3;
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_3 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0;
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0;
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 = 0;
    IData/*25:0*/ __VdfgTmp_hfb32e78a__0;
    __VdfgTmp_hfb32e78a__0 = 0;
    // Body
    vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_1 
        = (VL_GTS_III(7, (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1), (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1))
            ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1)
            : (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1));
    __VdfgTmp_hfb32e78a__0 = (0x3ffffffU & ((3U == (IData)(vlSelf->io_op))
                                             ? ((0x80U 
                                                 & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_1))
                                                 ? 0U
                                                 : 
                                                ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                                  ^ 
                                                  (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0 
                                                    ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0))) 
                                                 + 
                                                 ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0 
                                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0 
                                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0) 
                                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                                            & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0) 
                                                           | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                                               | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0) 
                                                              & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0)))))))
                                             : ((4U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                (0xffffffU 
                                                 & (IData)(
                                                           (0xffffffULL 
                                                            & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                 ^ 
                                                                 (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                  ^ 
                                                                  (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                   ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                                + 
                                                                ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                 | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                     & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                    | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                       | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                           & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                          | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                              | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                               >> 0xcU))))
                                                 : 0U)));
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_3 
        = (0x7fU & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_1) 
                    - (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1)));
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_3 
        = (0x7fU & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_1) 
                    - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1)));
    if (vlSelf->PvuTop__DOT___GEN_3) {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_1 = 0U;
        vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i = 0U;
    } else {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_1 
            = __VdfgTmp_hfb32e78a__0;
        vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
            = (0x1ffffffU & __VdfgTmp_hfb32e78a__0);
    }
    vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_1 
        = ((0xdU >= ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_3))
                      ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_3)))
            ? (0x3fffU & (((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                           << 2U) >> ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_3))
                                       ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_3))))
            : 0U);
    vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_1 
        = ((0xdU >= ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_3))
                      ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_3)))
            ? (0x3fffU & (((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                           << 2U) >> ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_3))
                                       ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_3))))
            : 0U);
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffeU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffdU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 1U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffbU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 2U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffff7U & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 3U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffefU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 4U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffdfU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 5U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffbfU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 6U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffff7fU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 7U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffeffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 8U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffdffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 9U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffbffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0xaU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fff7ffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0xbU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffefffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0xcU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffdfffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0xdU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffbfffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0xeU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ff7fffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0xfU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1feffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0x10U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fdffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0x11U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fbffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0x12U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1f7ffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0x13U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1efffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0x14U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dfffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0x15U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bfffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0x16U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17fffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0x17U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i);
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0x18U));
    vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1 
        = ((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_1)) 
           > (0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_1)));
    vlSelf->PvuTop__DOT__add__DOT__sum_1 = (0x1fffU 
                                            & ((0xfffU 
                                                & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_1)) 
                                               + (0xfffU 
                                                  & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_1))));
    vlSelf->__VdfgTmp_h64874eba__0 = (0xfffU & ((IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1)
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_1) 
                                                 - (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_1))
                                                 : 
                                                ((IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_1) 
                                                 - (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_1))));
    vlSelf->__VdfgTmp_h87d0ba2c__0 = (0xfffU & ((0x1000U 
                                                 & (IData)(vlSelf->PvuTop__DOT__add__DOT__sum_1))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_1) 
                                                 >> 1U)
                                                 : (IData)(vlSelf->PvuTop__DOT__add__DOT__sum_1)));
    vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1 
        = ((1U == (IData)(vlSelf->io_op)) ? ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                              ? (IData)(vlSelf->__VdfgTmp_h87d0ba2c__0)
                                              : (IData)(vlSelf->__VdfgTmp_h64874eba__0))
            : ((2U == (IData)(vlSelf->io_op)) ? ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                                  ? (IData)(vlSelf->__VdfgTmp_h64874eba__0)
                                                  : (IData)(vlSelf->__VdfgTmp_h87d0ba2c__0))
                : 0U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 1U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 2U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 3U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 4U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 5U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 6U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 7U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 8U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 9U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 0xaU));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__20(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__20\n"); );
    // Init
    CData/*6:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_6;
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_6 = 0;
    CData/*6:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_6;
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_6 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0;
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0;
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 = 0;
    IData/*25:0*/ __VdfgTmp_h5555a5ad__0;
    __VdfgTmp_h5555a5ad__0 = 0;
    // Body
    vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_2 
        = (VL_GTS_III(7, (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2), (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2))
            ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2)
            : (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2));
    __VdfgTmp_h5555a5ad__0 = (0x3ffffffU & ((3U == (IData)(vlSelf->io_op))
                                             ? ((0x80U 
                                                 & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_2))
                                                 ? 0U
                                                 : 
                                                ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                                  ^ 
                                                  (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0 
                                                    ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0))) 
                                                 + 
                                                 ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0 
                                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0 
                                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0) 
                                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                                            & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0) 
                                                           | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                                               | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0) 
                                                              & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0)))))))
                                             : ((4U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                (0xffffffU 
                                                 & (IData)(
                                                           (0xffffffULL 
                                                            & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                 ^ 
                                                                 (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                  ^ 
                                                                  (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                   ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                                + 
                                                                ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                 | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                     & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                    | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                       | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                           & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                          | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                              | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                               >> 0xcU))))
                                                 : 0U)));
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_6 
        = (0x7fU & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_2) 
                    - (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2)));
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_6 
        = (0x7fU & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_2) 
                    - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2)));
    if (vlSelf->PvuTop__DOT___GEN_3) {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_2 = 0U;
        vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i = 0U;
    } else {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_2 
            = __VdfgTmp_h5555a5ad__0;
        vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
            = (0x1ffffffU & __VdfgTmp_h5555a5ad__0);
    }
    vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_2 
        = ((0xdU >= ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_6))
                      ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_6)))
            ? (0x3fffU & (((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                           << 2U) >> ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_6))
                                       ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_6))))
            : 0U);
    vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_2 
        = ((0xdU >= ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_6))
                      ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_6)))
            ? (0x3fffU & (((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                           << 2U) >> ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_6))
                                       ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_6))))
            : 0U);
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffeU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffdU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 1U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffbU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 2U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffff7U & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 3U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffefU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 4U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffdfU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 5U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffbfU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 6U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffff7fU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 7U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffeffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 8U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffdffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 9U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffbffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0xaU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fff7ffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0xbU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffefffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0xcU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffdfffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0xdU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffbfffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0xeU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ff7fffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0xfU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1feffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0x10U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fdffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0x11U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fbffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0x12U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1f7ffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0x13U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1efffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0x14U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dfffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0x15U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bfffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0x16U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17fffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0x17U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i);
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0x18U));
    vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2 
        = ((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_2)) 
           > (0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_2)));
    vlSelf->PvuTop__DOT__add__DOT__sum_2 = (0x1fffU 
                                            & ((0xfffU 
                                                & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_2)) 
                                               + (0xfffU 
                                                  & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_2))));
    vlSelf->__VdfgTmp_h085a2b98__0 = (0xfffU & ((IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2)
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_2) 
                                                 - (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_2))
                                                 : 
                                                ((IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_2) 
                                                 - (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_2))));
    vlSelf->__VdfgTmp_h79bf5980__0 = (0xfffU & ((0x1000U 
                                                 & (IData)(vlSelf->PvuTop__DOT__add__DOT__sum_2))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_2) 
                                                 >> 1U)
                                                 : (IData)(vlSelf->PvuTop__DOT__add__DOT__sum_2)));
    vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2 
        = ((1U == (IData)(vlSelf->io_op)) ? ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                              ? (IData)(vlSelf->__VdfgTmp_h79bf5980__0)
                                              : (IData)(vlSelf->__VdfgTmp_h085a2b98__0))
            : ((2U == (IData)(vlSelf->io_op)) ? ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                                  ? (IData)(vlSelf->__VdfgTmp_h085a2b98__0)
                                                  : (IData)(vlSelf->__VdfgTmp_h79bf5980__0))
                : 0U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 1U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 2U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 3U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 4U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 5U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 6U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 7U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 8U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 9U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 0xaU));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__21(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__21\n"); );
    // Init
    CData/*6:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_9;
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_9 = 0;
    CData/*6:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_9;
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_9 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0;
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0;
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 = 0;
    IData/*25:0*/ __VdfgTmp_h2485fd1e__0;
    __VdfgTmp_h2485fd1e__0 = 0;
    // Body
    vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_3 
        = (VL_GTS_III(7, (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3), (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3))
            ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3)
            : (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3));
    __VdfgTmp_h2485fd1e__0 = (0x3ffffffU & ((3U == (IData)(vlSelf->io_op))
                                             ? ((0x80U 
                                                 & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_3))
                                                 ? 0U
                                                 : 
                                                ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                                  ^ 
                                                  (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0 
                                                    ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0))) 
                                                 + 
                                                 ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0 
                                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0 
                                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0) 
                                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                                            & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0) 
                                                           | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                                               | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0) 
                                                              & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0)))))))
                                             : ((4U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                (0xffffffU 
                                                 & (IData)(
                                                           (0xffffffULL 
                                                            & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                 ^ 
                                                                 (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                  ^ 
                                                                  (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                   ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                                + 
                                                                ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                 | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                     & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                    | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                       | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                           & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                          | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                              | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                               >> 0xcU))))
                                                 : 0U)));
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_9 
        = (0x7fU & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_3) 
                    - (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3)));
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_9 
        = (0x7fU & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_3) 
                    - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3)));
    if (vlSelf->PvuTop__DOT___GEN_3) {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_3 = 0U;
        vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i = 0U;
    } else {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_3 
            = __VdfgTmp_h2485fd1e__0;
        vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
            = (0x1ffffffU & __VdfgTmp_h2485fd1e__0);
    }
    vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_3 
        = ((0xdU >= ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_9))
                      ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_9)))
            ? (0x3fffU & (((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                           << 2U) >> ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_9))
                                       ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_9))))
            : 0U);
    vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_3 
        = ((0xdU >= ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_9))
                      ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_9)))
            ? (0x3fffU & (((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                           << 2U) >> ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_9))
                                       ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_9))))
            : 0U);
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffeU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffdU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 1U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffbU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 2U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffff7U & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 3U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffefU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 4U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffdfU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 5U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffbfU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 6U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffff7fU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 7U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffeffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 8U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffdffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 9U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffbffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0xaU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fff7ffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0xbU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffefffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0xcU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffdfffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0xdU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffbfffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0xeU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ff7fffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0xfU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1feffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0x10U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fdffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0x11U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fbffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0x12U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1f7ffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0x13U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1efffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0x14U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dfffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0x15U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bfffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0x16U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17fffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0x17U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i);
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0x18U));
    vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3 
        = ((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_3)) 
           > (0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_3)));
    vlSelf->PvuTop__DOT__add__DOT__sum_3 = (0x1fffU 
                                            & ((0xfffU 
                                                & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_3)) 
                                               + (0xfffU 
                                                  & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_3))));
    vlSelf->__VdfgTmp_hcba88845__0 = (0xfffU & ((IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3)
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_3) 
                                                 - (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_3))
                                                 : 
                                                ((IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_3) 
                                                 - (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_3))));
    vlSelf->__VdfgTmp_h980bc3a7__0 = (0xfffU & ((0x1000U 
                                                 & (IData)(vlSelf->PvuTop__DOT__add__DOT__sum_3))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_3) 
                                                 >> 1U)
                                                 : (IData)(vlSelf->PvuTop__DOT__add__DOT__sum_3)));
    vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3 
        = ((1U == (IData)(vlSelf->io_op)) ? ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                              ? (IData)(vlSelf->__VdfgTmp_h980bc3a7__0)
                                              : (IData)(vlSelf->__VdfgTmp_hcba88845__0))
            : ((2U == (IData)(vlSelf->io_op)) ? ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                                  ? (IData)(vlSelf->__VdfgTmp_hcba88845__0)
                                                  : (IData)(vlSelf->__VdfgTmp_h980bc3a7__0))
                : 0U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 1U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 2U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 3U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 4U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 5U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 6U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 7U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 8U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 9U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 0xaU));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__57(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__57\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__encode__DOT____VdfgTmp_hbadd810b__0;
    PvuTop__DOT__encode__DOT____VdfgTmp_hbadd810b__0 = 0;
    QData/*43:0*/ PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    QData/*43:0*/ PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    QData/*43:0*/ PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    // Body
    vlSelf->__VdfgTmp_h1ec67085__0 = (0x7fU & (((1U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0) 
                                                 + 
                                                 ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                                  & ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum) 
                                                     >> 0xcU)))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? 
                                                 ((1U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum) 
                                                        >> 0xcU)) 
                                                      | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)))
                                                   ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0)
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0)))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum))
                                                    ? 0x3fU
                                                    : (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0) 
                                                    - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0))
                                                    : 0U)))) 
                                               + ((0x37U 
                                                   >= 
                                                   (0x3fU 
                                                    & ((IData)(7U) 
                                                       * (IData)(vlSelf->io_op))))
                                                   ? (IData)(
                                                             ((((QData)((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hb997c512__0)) 
                                                                << 0x1cU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hb997c512__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->PvuTop__DOT___frac_norm_1_io_exp_adjust_0) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelf->PvuTop__DOT___frac_norm_1_io_exp_adjust_0) 
                                                                                << 7U)))))) 
                                                              >> 
                                                              (0x3fU 
                                                               & ((IData)(7U) 
                                                                  * (IData)(vlSelf->io_op)))))
                                                   : 0U)));
    PvuTop__DOT__encode__DOT____VdfgTmp_hbadd810b__0 
        = ((5U != (IData)(vlSelf->io_op)) & ((IData)(vlSelf->__VdfgTmp_h1ec67085__0) 
                                             >> 6U));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0xfU & (((IData)(PvuTop__DOT__encode__DOT____VdfgTmp_hbadd810b__0)
                     ? ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                        ? 0xfU : (~ 
                                                  ((IData)(vlSelf->__VdfgTmp_h1ec67085__0) 
                                                   >> 2U))))
                     : ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                        ? 0U : ((IData)(vlSelf->__VdfgTmp_h1ec67085__0) 
                                                >> 2U)))) 
                   - (IData)(1U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i 
        = (((QData)((IData)(((IData)(PvuTop__DOT__encode__DOT____VdfgTmp_hbadd810b__0)
                              ? 1U : 0x7ffeU))) << 0x1dU) 
           | (QData)((IData)(((((5U == (IData)(vlSelf->io_op))
                                 ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_h1ec67085__0))) 
                               << 0x1bU) | (0x7ff8000U 
                                            & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_0) 
                                               << 0xfU))))));
    PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0xfffffffffffULL & ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                                ? (vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i 
                                   << 8U) : vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i));
    PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0xfffffffffffULL & ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                                ? (PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2 
                                   << 4U) : PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0xfffffffffffULL & ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                                ? (PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2 
                                   << 2U) : PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o 
        = (0xfffffffffffULL & ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                                ? (PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2 
                                   << 1U) : PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2));
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T 
        = (0x7fffU & ((IData)((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o 
                               >> 0xfU)) + (1U & ((IData)(
                                                          (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o 
                                                           >> 0xeU)) 
                                                  & (IData)(
                                                            (0ULL 
                                                             != 
                                                             (0xbfffULL 
                                                              & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o)))))));
    vlSelf->io_posit_o_0 = ((5U == (IData)(vlSelf->io_op))
                             ? 0U : ((0x1000U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_0))
                                      ? ((1U & ((1U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                                  | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                                  ? 
                                                 ((IData)(vlSelf->io_posit_i1_0) 
                                                  >> 0xfU)
                                                  : 
                                                 ((IData)(vlSelf->io_posit_i2_0) 
                                                  >> 0xfU))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? 
                                                 (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                                   & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                                  ^ 
                                                  ((IData)(vlSelf->io_posit_i1_0) 
                                                   >> 0xfU))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? 
                                                  (((IData)(vlSelf->io_posit_i1_0) 
                                                    ^ (IData)(vlSelf->io_posit_i2_0)) 
                                                   >> 0xfU)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op)) 
                                                   & (((IData)(vlSelf->io_posit_i1_0) 
                                                       ^ (IData)(vlSelf->io_posit_i2_0)) 
                                                      >> 0xfU))))))
                                          ? (0x8000U 
                                             | (0x7fffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T)))))
                                          : (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T))
                                      : 0U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__58(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__58\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__encode__DOT____VdfgTmp_hb76bfce9__0;
    PvuTop__DOT__encode__DOT____VdfgTmp_hb76bfce9__0 = 0;
    QData/*43:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 = 0;
    QData/*43:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 = 0;
    QData/*43:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 = 0;
    // Body
    vlSelf->__VdfgTmp_h6fb595b3__0 = (0x7fU & (((1U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1) 
                                                 + 
                                                 ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0) 
                                                  & ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_1) 
                                                     >> 0xcU)))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? 
                                                 ((1U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_1) 
                                                        >> 0xcU)) 
                                                      | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)))
                                                   ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1)
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1)))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_1))
                                                    ? 0x3fU
                                                    : (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_1))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1) 
                                                    - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1))
                                                    : 0U)))) 
                                               + ((0x37U 
                                                   >= 
                                                   (0x3fU 
                                                    & ((IData)(7U) 
                                                       * (IData)(vlSelf->io_op))))
                                                   ? (IData)(
                                                             ((((QData)((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h4b480731__0)) 
                                                                << 0x1cU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h4b480731__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->PvuTop__DOT___frac_norm_1_io_exp_adjust_1) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelf->PvuTop__DOT___frac_norm_1_io_exp_adjust_1) 
                                                                                << 7U)))))) 
                                                              >> 
                                                              (0x3fU 
                                                               & ((IData)(7U) 
                                                                  * (IData)(vlSelf->io_op)))))
                                                   : 0U)));
    PvuTop__DOT__encode__DOT____VdfgTmp_hb76bfce9__0 
        = ((5U != (IData)(vlSelf->io_op)) & ((IData)(vlSelf->__VdfgTmp_h6fb595b3__0) 
                                             >> 6U));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount 
        = (0xfU & (((IData)(PvuTop__DOT__encode__DOT____VdfgTmp_hb76bfce9__0)
                     ? ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                        ? 0xfU : (~ 
                                                  ((IData)(vlSelf->__VdfgTmp_h6fb595b3__0) 
                                                   >> 2U))))
                     : ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                        ? 0U : ((IData)(vlSelf->__VdfgTmp_h6fb595b3__0) 
                                                >> 2U)))) 
                   - (IData)(1U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i 
        = (((QData)((IData)(((IData)(PvuTop__DOT__encode__DOT____VdfgTmp_hb76bfce9__0)
                              ? 1U : 0x7ffeU))) << 0x1dU) 
           | (QData)((IData)(((((5U == (IData)(vlSelf->io_op))
                                 ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_h6fb595b3__0))) 
                               << 0x1bU) | (0x7ff8000U 
                                            & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_1) 
                                               << 0xfU))))));
    PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 
        = (0xfffffffffffULL & ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))
                                ? (vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i 
                                   << 8U) : vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i));
    PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 
        = (0xfffffffffffULL & ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))
                                ? (PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 
                                   << 4U) : PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2));
    PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 
        = (0xfffffffffffULL & ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))
                                ? (PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 
                                   << 2U) : PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o 
        = (0xfffffffffffULL & ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))
                                ? (PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 
                                   << 1U) : PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2));
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T 
        = (0x7fffU & ((IData)((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o 
                               >> 0xfU)) + (1U & ((IData)(
                                                          (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o 
                                                           >> 0xeU)) 
                                                  & (IData)(
                                                            (0ULL 
                                                             != 
                                                             (0xbfffULL 
                                                              & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o)))))));
    vlSelf->io_posit_o_1 = ((5U == (IData)(vlSelf->io_op))
                             ? 0U : ((0x1000U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_1))
                                      ? ((1U & ((1U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0) 
                                                  | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1))
                                                  ? 
                                                 ((IData)(vlSelf->io_posit_i1_1) 
                                                  >> 0xfU)
                                                  : 
                                                 ((IData)(vlSelf->io_posit_i2_1) 
                                                  >> 0xfU))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? 
                                                 (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1)) 
                                                   & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)) 
                                                  ^ 
                                                  ((IData)(vlSelf->io_posit_i1_1) 
                                                   >> 0xfU))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? 
                                                  (((IData)(vlSelf->io_posit_i1_1) 
                                                    ^ (IData)(vlSelf->io_posit_i2_1)) 
                                                   >> 0xfU)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op)) 
                                                   & (((IData)(vlSelf->io_posit_i1_1) 
                                                       ^ (IData)(vlSelf->io_posit_i2_1)) 
                                                      >> 0xfU))))))
                                          ? (0x8000U 
                                             | (0x7fffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T)))))
                                          : (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T))
                                      : 0U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__59(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__59\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__encode__DOT____VdfgTmp_hb8dce6d3__0;
    PvuTop__DOT__encode__DOT____VdfgTmp_hb8dce6d3__0 = 0;
    QData/*43:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 = 0;
    QData/*43:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 = 0;
    QData/*43:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 = 0;
    // Body
    vlSelf->__VdfgTmp_h3716be99__0 = (0x7fU & (((1U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2) 
                                                 + 
                                                 ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1) 
                                                  & ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_2) 
                                                     >> 0xcU)))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? 
                                                 ((1U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_2) 
                                                        >> 0xcU)) 
                                                      | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)))
                                                   ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2)
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2)))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_2))
                                                    ? 0x3fU
                                                    : (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_2))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2) 
                                                    - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2))
                                                    : 0U)))) 
                                               + ((0x37U 
                                                   >= 
                                                   (0x3fU 
                                                    & ((IData)(7U) 
                                                       * (IData)(vlSelf->io_op))))
                                                   ? (IData)(
                                                             ((((QData)((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hf4884ee9__0)) 
                                                                << 0x1cU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hf4884ee9__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->PvuTop__DOT___frac_norm_1_io_exp_adjust_2) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelf->PvuTop__DOT___frac_norm_1_io_exp_adjust_2) 
                                                                                << 7U)))))) 
                                                              >> 
                                                              (0x3fU 
                                                               & ((IData)(7U) 
                                                                  * (IData)(vlSelf->io_op)))))
                                                   : 0U)));
    PvuTop__DOT__encode__DOT____VdfgTmp_hb8dce6d3__0 
        = ((5U != (IData)(vlSelf->io_op)) & ((IData)(vlSelf->__VdfgTmp_h3716be99__0) 
                                             >> 6U));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount 
        = (0xfU & (((IData)(PvuTop__DOT__encode__DOT____VdfgTmp_hb8dce6d3__0)
                     ? ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                        ? 0xfU : (~ 
                                                  ((IData)(vlSelf->__VdfgTmp_h3716be99__0) 
                                                   >> 2U))))
                     : ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                        ? 0U : ((IData)(vlSelf->__VdfgTmp_h3716be99__0) 
                                                >> 2U)))) 
                   - (IData)(1U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i 
        = (((QData)((IData)(((IData)(PvuTop__DOT__encode__DOT____VdfgTmp_hb8dce6d3__0)
                              ? 1U : 0x7ffeU))) << 0x1dU) 
           | (QData)((IData)(((((5U == (IData)(vlSelf->io_op))
                                 ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_h3716be99__0))) 
                               << 0x1bU) | (0x7ff8000U 
                                            & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_2) 
                                               << 0xfU))))));
    PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 
        = (0xfffffffffffULL & ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))
                                ? (vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i 
                                   << 8U) : vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i));
    PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 
        = (0xfffffffffffULL & ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))
                                ? (PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 
                                   << 4U) : PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2));
    PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 
        = (0xfffffffffffULL & ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))
                                ? (PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 
                                   << 2U) : PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o 
        = (0xfffffffffffULL & ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))
                                ? (PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 
                                   << 1U) : PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2));
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T 
        = (0x7fffU & ((IData)((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o 
                               >> 0xfU)) + (1U & ((IData)(
                                                          (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o 
                                                           >> 0xeU)) 
                                                  & (IData)(
                                                            (0ULL 
                                                             != 
                                                             (0xbfffULL 
                                                              & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o)))))));
    vlSelf->io_posit_o_2 = ((5U == (IData)(vlSelf->io_op))
                             ? 0U : ((0x1000U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_2))
                                      ? ((1U & ((1U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1) 
                                                  | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2))
                                                  ? 
                                                 ((IData)(vlSelf->io_posit_i1_2) 
                                                  >> 0xfU)
                                                  : 
                                                 ((IData)(vlSelf->io_posit_i2_2) 
                                                  >> 0xfU))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? 
                                                 (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2)) 
                                                   & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)) 
                                                  ^ 
                                                  ((IData)(vlSelf->io_posit_i1_2) 
                                                   >> 0xfU))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? 
                                                  (((IData)(vlSelf->io_posit_i1_2) 
                                                    ^ (IData)(vlSelf->io_posit_i2_2)) 
                                                   >> 0xfU)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op)) 
                                                   & (((IData)(vlSelf->io_posit_i1_2) 
                                                       ^ (IData)(vlSelf->io_posit_i2_2)) 
                                                      >> 0xfU))))))
                                          ? (0x8000U 
                                             | (0x7fffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T)))))
                                          : (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T))
                                      : 0U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__60(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__60\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__encode__DOT____VdfgTmp_h670874d8__0;
    PvuTop__DOT__encode__DOT____VdfgTmp_h670874d8__0 = 0;
    QData/*43:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 = 0;
    QData/*43:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 = 0;
    QData/*43:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 = 0;
    // Body
    vlSelf->__VdfgTmp_hc6283759__0 = (0x7fU & (((1U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3) 
                                                 + 
                                                 ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2) 
                                                  & ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_3) 
                                                     >> 0xcU)))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? 
                                                 ((1U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_3) 
                                                        >> 0xcU)) 
                                                      | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)))
                                                   ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3)
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3)))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_3))
                                                    ? 0x3fU
                                                    : (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_3))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3) 
                                                    - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3))
                                                    : 0U)))) 
                                               + ((0x37U 
                                                   >= 
                                                   (0x3fU 
                                                    & ((IData)(7U) 
                                                       * (IData)(vlSelf->io_op))))
                                                   ? (IData)(
                                                             ((((QData)((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hd6f5e9bb__0)) 
                                                                << 0x1cU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hd6f5e9bb__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->PvuTop__DOT___frac_norm_1_io_exp_adjust_3) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelf->PvuTop__DOT___frac_norm_1_io_exp_adjust_3) 
                                                                                << 7U)))))) 
                                                              >> 
                                                              (0x3fU 
                                                               & ((IData)(7U) 
                                                                  * (IData)(vlSelf->io_op)))))
                                                   : 0U)));
    PvuTop__DOT__encode__DOT____VdfgTmp_h670874d8__0 
        = ((5U != (IData)(vlSelf->io_op)) & ((IData)(vlSelf->__VdfgTmp_hc6283759__0) 
                                             >> 6U));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount 
        = (0xfU & (((IData)(PvuTop__DOT__encode__DOT____VdfgTmp_h670874d8__0)
                     ? ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                        ? 0xfU : (~ 
                                                  ((IData)(vlSelf->__VdfgTmp_hc6283759__0) 
                                                   >> 2U))))
                     : ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                        ? 0U : ((IData)(vlSelf->__VdfgTmp_hc6283759__0) 
                                                >> 2U)))) 
                   - (IData)(1U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i 
        = (((QData)((IData)(((IData)(PvuTop__DOT__encode__DOT____VdfgTmp_h670874d8__0)
                              ? 1U : 0x7ffeU))) << 0x1dU) 
           | (QData)((IData)(((((5U == (IData)(vlSelf->io_op))
                                 ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_hc6283759__0))) 
                               << 0x1bU) | (0x7ff8000U 
                                            & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_3) 
                                               << 0xfU))))));
    PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 
        = (0xfffffffffffULL & ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))
                                ? (vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i 
                                   << 8U) : vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i));
    PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 
        = (0xfffffffffffULL & ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))
                                ? (PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 
                                   << 4U) : PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2));
    PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 
        = (0xfffffffffffULL & ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))
                                ? (PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 
                                   << 2U) : PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o 
        = (0xfffffffffffULL & ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))
                                ? (PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 
                                   << 1U) : PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2));
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T 
        = (0x7fffU & ((IData)((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o 
                               >> 0xfU)) + (1U & ((IData)(
                                                          (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o 
                                                           >> 0xeU)) 
                                                  & (IData)(
                                                            (0ULL 
                                                             != 
                                                             (0xbfffULL 
                                                              & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o)))))));
    vlSelf->io_posit_o_3 = ((5U == (IData)(vlSelf->io_op))
                             ? 0U : ((0x1000U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_3))
                                      ? ((1U & ((1U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2) 
                                                  | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3))
                                                  ? 
                                                 ((IData)(vlSelf->io_posit_i1_3) 
                                                  >> 0xfU)
                                                  : 
                                                 ((IData)(vlSelf->io_posit_i2_3) 
                                                  >> 0xfU))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? 
                                                 (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3)) 
                                                   & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)) 
                                                  ^ 
                                                  ((IData)(vlSelf->io_posit_i1_3) 
                                                   >> 0xfU))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? 
                                                  (((IData)(vlSelf->io_posit_i1_3) 
                                                    ^ (IData)(vlSelf->io_posit_i2_3)) 
                                                   >> 0xfU)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op)) 
                                                   & (((IData)(vlSelf->io_posit_i1_3) 
                                                       ^ (IData)(vlSelf->io_posit_i2_3)) 
                                                      >> 0xfU))))))
                                          ? (0x8000U 
                                             | (0x7fffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T)))))
                                          : (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T))
                                      : 0U));
}

void VPvuTop___024root___ico_sequent__TOP__0(VPvuTop___024root* vlSelf);
void VPvuTop_Mul___ico_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__0(VPvuTop_Mul* vlSelf);
void VPvuTop_Mul___ico_sequent__TOP__PvuTop__DOT__mul__0(VPvuTop_Mul* vlSelf);
void VPvuTop_IntDivider___ico_sequent__TOP__PvuTop__DOT__div__DOT__intdivider__0(VPvuTop_IntDivider* vlSelf);
void VPvuTop_IntDivider___ico_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_1__0(VPvuTop_IntDivider* vlSelf);
void VPvuTop_IntDivider___ico_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_2__0(VPvuTop_IntDivider* vlSelf);
void VPvuTop_IntDivider___ico_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_3__0(VPvuTop_IntDivider* vlSelf);
void VPvuTop___024root___ico_comb__TOP__0(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__1(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__2(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__3(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__4(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__5(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__6(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__7(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__8(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__9(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__10(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__11(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__12(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__13(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__14(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__15(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__16(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__17(VPvuTop___024root* vlSelf);
void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__0(VPvuTop_Mul* vlSelf);
void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__1(VPvuTop_Mul* vlSelf);
void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__2(VPvuTop_Mul* vlSelf);
void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__3(VPvuTop_Mul* vlSelf);
void VPvuTop___024root___ico_comb__TOP__22(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__23(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__24(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__25(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__26(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__27(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__28(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__29(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__30(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__31(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__32(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__33(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__34(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__35(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__36(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__37(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__38(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__39(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__40(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__41(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__42(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__43(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__44(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__45(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__46(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__47(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__48(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__49(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__50(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__51(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__52(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__53(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__54(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__55(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__56(VPvuTop___024root* vlSelf);

void VPvuTop___024root___eval_ico(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VPvuTop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VPvuTop_Mul___ico_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_Mul___ico_sequent__TOP__PvuTop__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop_IntDivider___ico_sequent__TOP__PvuTop__DOT__div__DOT__intdivider__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider));
        VPvuTop_IntDivider___ico_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_1__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1));
        VPvuTop_IntDivider___ico_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_2__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2));
        VPvuTop_IntDivider___ico_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_3__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3));
        VPvuTop___024root___ico_sequent__TOP__1(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U))) {
        VPvuTop___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(2U))) {
        VPvuTop___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U))) {
        VPvuTop___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(4U))) {
        VPvuTop___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U))) {
        VPvuTop___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(6U))) {
        VPvuTop___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U))) {
        VPvuTop___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(8U))) {
        VPvuTop___024root___ico_comb__TOP__7(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(9U))) {
        VPvuTop___024root___ico_comb__TOP__8(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0xaU))) {
        VPvuTop___024root___ico_comb__TOP__9(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0xbU))) {
        VPvuTop___024root___ico_comb__TOP__10(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0xcU))) {
        VPvuTop___024root___ico_comb__TOP__11(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0xdU))) {
        VPvuTop___024root___ico_comb__TOP__12(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0xeU))) {
        VPvuTop___024root___ico_comb__TOP__13(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0xfU))) {
        VPvuTop___024root___ico_comb__TOP__14(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x10U))) {
        VPvuTop___024root___ico_comb__TOP__15(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x12U))) {
        VPvuTop___024root___ico_comb__TOP__16(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x11U))) {
        VPvuTop___024root___ico_comb__TOP__17(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U)) 
         | vlSelf->__VicoTriggered.at(9U))) {
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__mul));
        vlSelf->__Vm_traceActivity[3U] = 1U;
        VPvuTop___024root___ico_comb__TOP__18(vlSelf);
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
         | vlSelf->__VicoTriggered.at(0xbU))) {
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__1((&vlSymsp->TOP__PvuTop__DOT__mul));
        vlSelf->__Vm_traceActivity[4U] = 1U;
        VPvuTop___024root___ico_comb__TOP__19(vlSelf);
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U)) 
         | vlSelf->__VicoTriggered.at(0xdU))) {
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__2((&vlSymsp->TOP__PvuTop__DOT__mul));
        vlSelf->__Vm_traceActivity[5U] = 1U;
        VPvuTop___024root___ico_comb__TOP__20(vlSelf);
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U)) 
         | vlSelf->__VicoTriggered.at(0xfU))) {
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__3((&vlSymsp->TOP__PvuTop__DOT__mul));
        vlSelf->__Vm_traceActivity[6U] = 1U;
        VPvuTop___024root___ico_comb__TOP__21(vlSelf);
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x11U)) 
         | vlSelf->__VicoTriggered.at(0x12U))) {
        VPvuTop___024root___ico_comb__TOP__22(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U)) 
          | vlSelf->__VicoTriggered.at(9U)) | vlSelf->__VicoTriggered.at(0x1bU))) {
        VPvuTop___024root___ico_comb__TOP__23(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U)) 
          | vlSelf->__VicoTriggered.at(9U)) | vlSelf->__VicoTriggered.at(0x1cU))) {
        VPvuTop___024root___ico_comb__TOP__24(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U)) 
          | vlSelf->__VicoTriggered.at(9U)) | vlSelf->__VicoTriggered.at(0x13U))) {
        VPvuTop___024root___ico_comb__TOP__25(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U)) 
          | vlSelf->__VicoTriggered.at(9U)) | vlSelf->__VicoTriggered.at(0x14U))) {
        VPvuTop___024root___ico_comb__TOP__26(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(0xbU)) | vlSelf->__VicoTriggered.at(0x1dU))) {
        VPvuTop___024root___ico_comb__TOP__27(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(0xbU)) | vlSelf->__VicoTriggered.at(0x1eU))) {
        VPvuTop___024root___ico_comb__TOP__28(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(0xbU)) | vlSelf->__VicoTriggered.at(0x15U))) {
        VPvuTop___024root___ico_comb__TOP__29(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(0xbU)) | vlSelf->__VicoTriggered.at(0x16U))) {
        VPvuTop___024root___ico_comb__TOP__30(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U)) 
          | vlSelf->__VicoTriggered.at(0xdU)) | vlSelf->__VicoTriggered.at(0x1fU))) {
        VPvuTop___024root___ico_comb__TOP__31(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U)) 
          | vlSelf->__VicoTriggered.at(0xdU)) | vlSelf->__VicoTriggered.at(0x20U))) {
        VPvuTop___024root___ico_comb__TOP__32(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U)) 
          | vlSelf->__VicoTriggered.at(0xdU)) | vlSelf->__VicoTriggered.at(0x17U))) {
        VPvuTop___024root___ico_comb__TOP__33(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U)) 
          | vlSelf->__VicoTriggered.at(0xdU)) | vlSelf->__VicoTriggered.at(0x18U))) {
        VPvuTop___024root___ico_comb__TOP__34(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U)) 
          | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x22U))) {
        VPvuTop___024root___ico_comb__TOP__35(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U)) 
          | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x21U))) {
        VPvuTop___024root___ico_comb__TOP__36(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U)) 
          | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x1aU))) {
        VPvuTop___024root___ico_comb__TOP__37(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U)) 
          | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x19U))) {
        VPvuTop___024root___ico_comb__TOP__38(vlSelf);
    }
    if ((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U)) 
            | vlSelf->__VicoTriggered.at(7U)) | vlSelf->__VicoTriggered.at(9U)) 
          | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x21U))) {
        VPvuTop___024root___ico_comb__TOP__39(vlSelf);
    }
    if ((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
            | vlSelf->__VicoTriggered.at(7U)) | vlSelf->__VicoTriggered.at(0xbU)) 
          | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x21U))) {
        VPvuTop___024root___ico_comb__TOP__40(vlSelf);
    }
    if ((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U)) 
            | vlSelf->__VicoTriggered.at(7U)) | vlSelf->__VicoTriggered.at(0xdU)) 
          | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x21U))) {
        VPvuTop___024root___ico_comb__TOP__41(vlSelf);
    }
    if (((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U)) 
             | vlSelf->__VicoTriggered.at(7U)) | vlSelf->__VicoTriggered.at(9U)) 
           | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x1cU)) 
         | vlSelf->__VicoTriggered.at(0x21U))) {
        VPvuTop___024root___ico_comb__TOP__42(vlSelf);
    }
    if (((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
             | vlSelf->__VicoTriggered.at(7U)) | vlSelf->__VicoTriggered.at(0xbU)) 
           | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x1eU)) 
         | vlSelf->__VicoTriggered.at(0x21U))) {
        VPvuTop___024root___ico_comb__TOP__43(vlSelf);
    }
    if (((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U)) 
             | vlSelf->__VicoTriggered.at(7U)) | vlSelf->__VicoTriggered.at(0xdU)) 
           | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x20U)) 
         | vlSelf->__VicoTriggered.at(0x21U))) {
        VPvuTop___024root___ico_comb__TOP__44(vlSelf);
    }
    if (((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U)) 
           | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x21U)) 
         | vlSelf->__VicoTriggered.at(0x22U))) {
        VPvuTop___024root___ico_comb__TOP__45(vlSelf);
    }
    if ((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U)) 
            | vlSelf->__VicoTriggered.at(7U)) | vlSelf->__VicoTriggered.at(9U)) 
          | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x19U))) {
        VPvuTop___024root___ico_comb__TOP__46(vlSelf);
    }
    if ((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
            | vlSelf->__VicoTriggered.at(7U)) | vlSelf->__VicoTriggered.at(0xbU)) 
          | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x19U))) {
        VPvuTop___024root___ico_comb__TOP__47(vlSelf);
    }
    if ((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U)) 
            | vlSelf->__VicoTriggered.at(7U)) | vlSelf->__VicoTriggered.at(0xdU)) 
          | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x19U))) {
        VPvuTop___024root___ico_comb__TOP__48(vlSelf);
    }
    if (((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U)) 
             | vlSelf->__VicoTriggered.at(7U)) | vlSelf->__VicoTriggered.at(9U)) 
           | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x14U)) 
         | vlSelf->__VicoTriggered.at(0x19U))) {
        VPvuTop___024root___ico_comb__TOP__49(vlSelf);
    }
    if (((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
             | vlSelf->__VicoTriggered.at(7U)) | vlSelf->__VicoTriggered.at(0xbU)) 
           | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x16U)) 
         | vlSelf->__VicoTriggered.at(0x19U))) {
        VPvuTop___024root___ico_comb__TOP__50(vlSelf);
    }
    if (((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U)) 
             | vlSelf->__VicoTriggered.at(7U)) | vlSelf->__VicoTriggered.at(0xdU)) 
           | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x18U)) 
         | vlSelf->__VicoTriggered.at(0x19U))) {
        VPvuTop___024root___ico_comb__TOP__51(vlSelf);
    }
    if (((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U)) 
           | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x19U)) 
         | vlSelf->__VicoTriggered.at(0x1aU))) {
        VPvuTop___024root___ico_comb__TOP__52(vlSelf);
    }
    if (((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U)) 
           | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x19U)) 
         | vlSelf->__VicoTriggered.at(0x21U))) {
        VPvuTop___024root___ico_comb__TOP__53(vlSelf);
    }
    if (((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U)) 
             | vlSelf->__VicoTriggered.at(7U)) | vlSelf->__VicoTriggered.at(9U)) 
           | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x19U)) 
         | vlSelf->__VicoTriggered.at(0x21U))) {
        VPvuTop___024root___ico_comb__TOP__54(vlSelf);
    }
    if (((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
             | vlSelf->__VicoTriggered.at(7U)) | vlSelf->__VicoTriggered.at(0xbU)) 
           | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x19U)) 
         | vlSelf->__VicoTriggered.at(0x21U))) {
        VPvuTop___024root___ico_comb__TOP__55(vlSelf);
    }
    if (((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U)) 
             | vlSelf->__VicoTriggered.at(7U)) | vlSelf->__VicoTriggered.at(0xdU)) 
           | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x19U)) 
         | vlSelf->__VicoTriggered.at(0x21U))) {
        VPvuTop___024root___ico_comb__TOP__56(vlSelf);
    }
    if (((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U)) 
               | vlSelf->__VicoTriggered.at(7U)) | vlSelf->__VicoTriggered.at(9U)) 
             | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x14U)) 
           | vlSelf->__VicoTriggered.at(0x19U)) | vlSelf->__VicoTriggered.at(0x1cU)) 
         | vlSelf->__VicoTriggered.at(0x21U))) {
        VPvuTop___024root___ico_comb__TOP__57(vlSelf);
    }
    if (((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
               | vlSelf->__VicoTriggered.at(7U)) | vlSelf->__VicoTriggered.at(0xbU)) 
             | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x16U)) 
           | vlSelf->__VicoTriggered.at(0x19U)) | vlSelf->__VicoTriggered.at(0x1eU)) 
         | vlSelf->__VicoTriggered.at(0x21U))) {
        VPvuTop___024root___ico_comb__TOP__58(vlSelf);
    }
    if (((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U)) 
               | vlSelf->__VicoTriggered.at(7U)) | vlSelf->__VicoTriggered.at(0xdU)) 
             | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x18U)) 
           | vlSelf->__VicoTriggered.at(0x19U)) | vlSelf->__VicoTriggered.at(0x20U)) 
         | vlSelf->__VicoTriggered.at(0x21U))) {
        VPvuTop___024root___ico_comb__TOP__59(vlSelf);
    }
    if (((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U)) 
             | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x19U)) 
           | vlSelf->__VicoTriggered.at(0x1aU)) | vlSelf->__VicoTriggered.at(0x21U)) 
         | vlSelf->__VicoTriggered.at(0x22U))) {
        VPvuTop___024root___ico_comb__TOP__60(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__act(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG

void VPvuTop___024root___eval_triggers__act(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)) 
                                      | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VactTriggered.at(2U) = (((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)) 
                                      | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VactTriggered.at(4U) = (((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)) 
                                      | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VactTriggered.at(5U) = ((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VactTriggered.at(6U) = (((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)) 
                                      | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VactTriggered.at(7U) = ((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VactTriggered.at(8U) = (((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)) 
                                      | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VactTriggered.at(9U) = ((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VactTriggered.at(0xaU) = (((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)) 
                                        | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes 
                                           != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VactTriggered.at(0xbU) = ((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VactTriggered.at(0xcU) = (((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)) 
                                        | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes 
                                           != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VactTriggered.at(0xdU) = ((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VactTriggered.at(0xeU) = (((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)) 
                                        | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes 
                                           != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VactTriggered.at(0xfU) = ((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VactTriggered.at(0x10U) = ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x11U) = (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x12U) = (((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)) 
                                         | (vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                            != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VactTriggered.at(0x13U) = ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VactTriggered.at(0x14U) = (((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)) 
                                         | (vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes 
                                            != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VactTriggered.at(0x15U) = ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VactTriggered.at(0x16U) = (((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)) 
                                         | (vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes 
                                            != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VactTriggered.at(0x17U) = ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VactTriggered.at(0x18U) = (((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)) 
                                         | (vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes 
                                            != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VactTriggered.at(0x19U) = ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VactTriggered.at(0x1aU) = ((vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x1bU) = (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x1cU) = ((vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x1dU) = (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x1eU) = ((vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x1fU) = (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x20U) = ((vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x21U) = (vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x22U) = ((IData)(vlSelf->clock) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
        vlSelf->__VactTriggered.at(3U) = 1U;
        vlSelf->__VactTriggered.at(4U) = 1U;
        vlSelf->__VactTriggered.at(5U) = 1U;
        vlSelf->__VactTriggered.at(6U) = 1U;
        vlSelf->__VactTriggered.at(7U) = 1U;
        vlSelf->__VactTriggered.at(8U) = 1U;
        vlSelf->__VactTriggered.at(9U) = 1U;
        vlSelf->__VactTriggered.at(0xaU) = 1U;
        vlSelf->__VactTriggered.at(0xbU) = 1U;
        vlSelf->__VactTriggered.at(0xcU) = 1U;
        vlSelf->__VactTriggered.at(0xdU) = 1U;
        vlSelf->__VactTriggered.at(0xeU) = 1U;
        vlSelf->__VactTriggered.at(0xfU) = 1U;
        vlSelf->__VactTriggered.at(0x10U) = 1U;
        vlSelf->__VactTriggered.at(0x11U) = 1U;
        vlSelf->__VactTriggered.at(0x12U) = 1U;
        vlSelf->__VactTriggered.at(0x13U) = 1U;
        vlSelf->__VactTriggered.at(0x14U) = 1U;
        vlSelf->__VactTriggered.at(0x15U) = 1U;
        vlSelf->__VactTriggered.at(0x16U) = 1U;
        vlSelf->__VactTriggered.at(0x17U) = 1U;
        vlSelf->__VactTriggered.at(0x18U) = 1U;
        vlSelf->__VactTriggered.at(0x19U) = 1U;
        vlSelf->__VactTriggered.at(0x1aU) = 1U;
        vlSelf->__VactTriggered.at(0x1bU) = 1U;
        vlSelf->__VactTriggered.at(0x1cU) = 1U;
        vlSelf->__VactTriggered.at(0x1dU) = 1U;
        vlSelf->__VactTriggered.at(0x1eU) = 1U;
        vlSelf->__VactTriggered.at(0x1fU) = 1U;
        vlSelf->__VactTriggered.at(0x20U) = 1U;
        vlSelf->__VactTriggered.at(0x21U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPvuTop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VPvuTop___024root___act_comb__TOP__1(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___act_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0;
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 = 0;
    IData/*25:0*/ __VdfgTmp_h3ba16687__0;
    __VdfgTmp_h3ba16687__0 = 0;
    // Body
    __VdfgTmp_h3ba16687__0 = (0x3ffffffU & ((3U == (IData)(vlSelf->io_op))
                                             ? ((0x80U 
                                                 & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum))
                                                 ? 0U
                                                 : 
                                                ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                                  ^ 
                                                  (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0 
                                                    ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0))) 
                                                 + 
                                                 ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0 
                                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0 
                                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0) 
                                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                                            & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0) 
                                                           | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                                               | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0) 
                                                              & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0)))))))
                                             : ((4U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                (0xffffffU 
                                                 & (IData)(
                                                           (0xffffffULL 
                                                            & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                 ^ 
                                                                 (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                  ^ 
                                                                  (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                   ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                                + 
                                                                ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                 | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                     & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                    | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                       | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                           & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                          | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                              | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                               >> 0xcU))))
                                                 : 0U)));
    if (vlSelf->PvuTop__DOT___GEN_3) {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_0 = 0U;
        vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i = 0U;
    } else {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_0 
            = __VdfgTmp_h3ba16687__0;
        vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
            = (0x1ffffffU & __VdfgTmp_h3ba16687__0);
    }
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffeU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffdU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 1U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffbU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 2U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffff7U & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 3U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffefU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 4U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffdfU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 5U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffbfU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 6U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffff7fU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 7U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffeffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 8U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffdffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 9U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffbffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xaU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fff7ffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xbU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffefffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xcU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffdfffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xdU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffbfffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xeU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ff7fffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xfU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1feffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x10U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fdffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x11U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fbffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x12U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1f7ffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x13U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1efffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x14U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dfffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x15U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bfffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x16U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17fffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x17U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i);
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x18U));
}

VL_INLINE_OPT void VPvuTop___024root___act_comb__TOP__3(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___act_comb__TOP__3\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0;
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 = 0;
    IData/*25:0*/ __VdfgTmp_hfb32e78a__0;
    __VdfgTmp_hfb32e78a__0 = 0;
    // Body
    __VdfgTmp_hfb32e78a__0 = (0x3ffffffU & ((3U == (IData)(vlSelf->io_op))
                                             ? ((0x80U 
                                                 & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_1))
                                                 ? 0U
                                                 : 
                                                ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                                  ^ 
                                                  (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0 
                                                    ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0))) 
                                                 + 
                                                 ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0 
                                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0 
                                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0) 
                                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                                            & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0) 
                                                           | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                                               | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0) 
                                                              & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0)))))))
                                             : ((4U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                (0xffffffU 
                                                 & (IData)(
                                                           (0xffffffULL 
                                                            & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                 ^ 
                                                                 (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                  ^ 
                                                                  (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                   ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                                + 
                                                                ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                 | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                     & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                    | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                       | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                           & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                          | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                              | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                               >> 0xcU))))
                                                 : 0U)));
    if (vlSelf->PvuTop__DOT___GEN_3) {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_1 = 0U;
        vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i = 0U;
    } else {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_1 
            = __VdfgTmp_hfb32e78a__0;
        vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
            = (0x1ffffffU & __VdfgTmp_hfb32e78a__0);
    }
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffeU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffdU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 1U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffbU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 2U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffff7U & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 3U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffefU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 4U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffdfU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 5U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffbfU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 6U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffff7fU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 7U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffeffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 8U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffdffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 9U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffbffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0xaU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fff7ffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0xbU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffefffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0xcU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffdfffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0xdU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffbfffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0xeU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ff7fffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0xfU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1feffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0x10U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fdffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0x11U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fbffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0x12U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1f7ffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0x13U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1efffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0x14U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dfffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0x15U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bfffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0x16U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17fffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0x17U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0 
        = (1U & vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i);
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT____Vlvbound_h54926e2b__0) 
              << 0x18U));
}

VL_INLINE_OPT void VPvuTop___024root___act_comb__TOP__5(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___act_comb__TOP__5\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0;
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 = 0;
    IData/*25:0*/ __VdfgTmp_h5555a5ad__0;
    __VdfgTmp_h5555a5ad__0 = 0;
    // Body
    __VdfgTmp_h5555a5ad__0 = (0x3ffffffU & ((3U == (IData)(vlSelf->io_op))
                                             ? ((0x80U 
                                                 & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_2))
                                                 ? 0U
                                                 : 
                                                ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                                  ^ 
                                                  (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0 
                                                    ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0))) 
                                                 + 
                                                 ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0 
                                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0 
                                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0) 
                                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                                            & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0) 
                                                           | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                                               | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0) 
                                                              & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0)))))))
                                             : ((4U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                (0xffffffU 
                                                 & (IData)(
                                                           (0xffffffULL 
                                                            & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                 ^ 
                                                                 (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                  ^ 
                                                                  (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                   ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                                + 
                                                                ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                 | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                     & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                    | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                       | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                           & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                          | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                              | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                               >> 0xcU))))
                                                 : 0U)));
    if (vlSelf->PvuTop__DOT___GEN_3) {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_2 = 0U;
        vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i = 0U;
    } else {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_2 
            = __VdfgTmp_h5555a5ad__0;
        vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
            = (0x1ffffffU & __VdfgTmp_h5555a5ad__0);
    }
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffeU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffdU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 1U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffbU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 2U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffff7U & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 3U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffefU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 4U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffdfU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 5U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffbfU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 6U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffff7fU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 7U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffeffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 8U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffdffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 9U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffbffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0xaU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fff7ffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0xbU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffefffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0xcU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffdfffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0xdU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffbfffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0xeU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ff7fffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0xfU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1feffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0x10U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fdffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0x11U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fbffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0x12U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1f7ffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0x13U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1efffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0x14U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dfffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0x15U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bfffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0x16U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17fffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0x17U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0 
        = (1U & vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i);
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT____Vlvbound_h54926e2b__0) 
              << 0x18U));
}

VL_INLINE_OPT void VPvuTop___024root___act_comb__TOP__7(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___act_comb__TOP__7\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0;
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 = 0;
    IData/*25:0*/ __VdfgTmp_h2485fd1e__0;
    __VdfgTmp_h2485fd1e__0 = 0;
    // Body
    __VdfgTmp_h2485fd1e__0 = (0x3ffffffU & ((3U == (IData)(vlSelf->io_op))
                                             ? ((0x80U 
                                                 & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_3))
                                                 ? 0U
                                                 : 
                                                ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                                  ^ 
                                                  (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0 
                                                    ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0))) 
                                                 + 
                                                 ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0 
                                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0 
                                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0) 
                                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                                            & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0) 
                                                           | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                                               | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0) 
                                                              & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0)))))))
                                             : ((4U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                (0xffffffU 
                                                 & (IData)(
                                                           (0xffffffULL 
                                                            & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                 ^ 
                                                                 (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                  ^ 
                                                                  (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                   ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                                + 
                                                                ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                 | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                     & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                    | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                       | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                           & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                          | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                              | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                               >> 0xcU))))
                                                 : 0U)));
    if (vlSelf->PvuTop__DOT___GEN_3) {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_3 = 0U;
        vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i = 0U;
    } else {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_3 
            = __VdfgTmp_h2485fd1e__0;
        vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
            = (0x1ffffffU & __VdfgTmp_h2485fd1e__0);
    }
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffeU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffdU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 1U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffbU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 2U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffff7U & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 3U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffefU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 4U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffdfU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 5U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffbfU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 6U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffff7fU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 7U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffeffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 8U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffdffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 9U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffbffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0xaU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fff7ffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0xbU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffefffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0xcU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffdfffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0xdU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffbfffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0xeU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ff7fffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0xfU));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1feffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0x10U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fdffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0x11U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fbffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0x12U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1f7ffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0x13U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1efffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0x14U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dfffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0x15U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bfffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0x16U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17fffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0x17U));
    PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0 
        = (1U & vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i);
    vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT____Vlvbound_h54926e2b__0) 
              << 0x18U));
}

void VPvuTop___024root___act_sequent__TOP__0(VPvuTop___024root* vlSelf);
void VPvuTop___024root___act_sequent__TOP__1(VPvuTop___024root* vlSelf);
void VPvuTop___024root___act_sequent__TOP__2(VPvuTop___024root* vlSelf);
void VPvuTop___024root___act_sequent__TOP__3(VPvuTop___024root* vlSelf);
void VPvuTop___024root___act_sequent__TOP__4(VPvuTop___024root* vlSelf);
void VPvuTop_Mul___act_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__0(VPvuTop_Mul* vlSelf);
void VPvuTop_Mul___act_sequent__TOP__PvuTop__DOT__mul__0(VPvuTop_Mul* vlSelf);
void VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider__0(VPvuTop_IntDivider* vlSelf);
void VPvuTop___024root___act_sequent__TOP__5(VPvuTop___024root* vlSelf);
void VPvuTop_Mul___act_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__1(VPvuTop_Mul* vlSelf);
void VPvuTop_Mul___act_sequent__TOP__PvuTop__DOT__mul__1(VPvuTop_Mul* vlSelf);
void VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_1__0(VPvuTop_IntDivider* vlSelf);
void VPvuTop___024root___act_sequent__TOP__6(VPvuTop___024root* vlSelf);
void VPvuTop_Mul___act_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__2(VPvuTop_Mul* vlSelf);
void VPvuTop_Mul___act_sequent__TOP__PvuTop__DOT__mul__2(VPvuTop_Mul* vlSelf);
void VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_2__0(VPvuTop_IntDivider* vlSelf);
void VPvuTop___024root___act_sequent__TOP__7(VPvuTop___024root* vlSelf);
void VPvuTop_Mul___act_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__3(VPvuTop_Mul* vlSelf);
void VPvuTop_Mul___act_sequent__TOP__PvuTop__DOT__mul__3(VPvuTop_Mul* vlSelf);
void VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_3__0(VPvuTop_IntDivider* vlSelf);
void VPvuTop_Mul___act_comb__TOP__PvuTop__DOT__mul__0(VPvuTop_Mul* vlSelf);
void VPvuTop___024root___act_comb__TOP__0(VPvuTop___024root* vlSelf);
void VPvuTop_Mul___act_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__0(VPvuTop_Mul* vlSelf);
void VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider__0(VPvuTop_IntDivider* vlSelf);
void VPvuTop_Mul___act_comb__TOP__PvuTop__DOT__mul__1(VPvuTop_Mul* vlSelf);
void VPvuTop___024root___act_comb__TOP__2(VPvuTop___024root* vlSelf);
void VPvuTop_Mul___act_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__1(VPvuTop_Mul* vlSelf);
void VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__0(VPvuTop_IntDivider* vlSelf);
void VPvuTop_Mul___act_comb__TOP__PvuTop__DOT__mul__2(VPvuTop_Mul* vlSelf);
void VPvuTop___024root___act_comb__TOP__4(VPvuTop___024root* vlSelf);
void VPvuTop_Mul___act_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__2(VPvuTop_Mul* vlSelf);
void VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider_2__0(VPvuTop_IntDivider* vlSelf);
void VPvuTop_Mul___act_comb__TOP__PvuTop__DOT__mul__3(VPvuTop_Mul* vlSelf);
void VPvuTop___024root___act_comb__TOP__6(VPvuTop___024root* vlSelf);
void VPvuTop_Mul___act_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__3(VPvuTop_Mul* vlSelf);
void VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider_3__0(VPvuTop_IntDivider* vlSelf);

void VPvuTop___024root___eval_act(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        VPvuTop___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VPvuTop___024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VPvuTop___024root___act_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VPvuTop___024root___act_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VPvuTop___024root___act_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        VPvuTop_Mul___act_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_Mul___act_sequent__TOP__PvuTop__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider));
    }
    if (vlSelf->__VactTriggered.at(0xaU)) {
        VPvuTop___024root___act_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        VPvuTop_Mul___act_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__1((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_Mul___act_sequent__TOP__PvuTop__DOT__mul__1((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_1__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1));
    }
    if (vlSelf->__VactTriggered.at(0xcU)) {
        VPvuTop___024root___act_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        VPvuTop_Mul___act_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__2((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_Mul___act_sequent__TOP__PvuTop__DOT__mul__2((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_2__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2));
    }
    if (vlSelf->__VactTriggered.at(0xeU)) {
        VPvuTop___024root___act_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        VPvuTop_Mul___act_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__3((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_Mul___act_sequent__TOP__PvuTop__DOT__mul__3((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_3__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3));
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VPvuTop___024root___ico_comb__TOP__1(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VPvuTop___024root___ico_comb__TOP__3(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VPvuTop___024root___ico_comb__TOP__5(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VPvuTop___024root___ico_comb__TOP__7(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(9U)) {
        VPvuTop___024root___ico_comb__TOP__9(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(0xbU)) {
        VPvuTop___024root___ico_comb__TOP__11(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(0xdU)) {
        VPvuTop___024root___ico_comb__TOP__13(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(0xfU)) {
        VPvuTop___024root___ico_comb__TOP__15(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(0x11U)) {
        VPvuTop___024root___ico_comb__TOP__16(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(0x10U)) {
        VPvuTop___024root___ico_comb__TOP__17(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
    if ((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(8U))) {
        VPvuTop_Mul___act_comb__TOP__PvuTop__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__mul));
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        VPvuTop___024root___act_comb__TOP__0(vlSelf);
        VPvuTop_Mul___act_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider));
        VPvuTop___024root___act_comb__TOP__1(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(0xaU))) {
        VPvuTop_Mul___act_comb__TOP__PvuTop__DOT__mul__1((&vlSymsp->TOP__PvuTop__DOT__mul));
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        VPvuTop___024root___act_comb__TOP__2(vlSelf);
        VPvuTop_Mul___act_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__1((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1));
        VPvuTop___024root___act_comb__TOP__3(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(4U) | vlSelf->__VactTriggered.at(0xcU))) {
        VPvuTop_Mul___act_comb__TOP__PvuTop__DOT__mul__2((&vlSymsp->TOP__PvuTop__DOT__mul));
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        VPvuTop___024root___act_comb__TOP__4(vlSelf);
        VPvuTop_Mul___act_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__2((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider_2__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2));
        VPvuTop___024root___act_comb__TOP__5(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(6U) | vlSelf->__VactTriggered.at(0xeU))) {
        VPvuTop_Mul___act_comb__TOP__PvuTop__DOT__mul__3((&vlSymsp->TOP__PvuTop__DOT__mul));
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        VPvuTop___024root___act_comb__TOP__6(vlSelf);
        VPvuTop_Mul___act_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__3((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider_3__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3));
        VPvuTop___024root___act_comb__TOP__7(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x10U) | vlSelf->__VactTriggered.at(0x11U))) {
        VPvuTop___024root___ico_comb__TOP__22(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(8U)) 
         | vlSelf->__VactTriggered.at(0x12U))) {
        VPvuTop___024root___ico_comb__TOP__25(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(8U)) 
         | vlSelf->__VactTriggered.at(0x13U))) {
        VPvuTop___024root___ico_comb__TOP__26(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(8U)) 
         | vlSelf->__VactTriggered.at(0x1aU))) {
        VPvuTop___024root___ico_comb__TOP__23(vlSelf);
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
    }
    if (((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(8U)) 
         | vlSelf->__VactTriggered.at(0x1bU))) {
        VPvuTop___024root___ico_comb__TOP__24(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(0xaU)) 
         | vlSelf->__VactTriggered.at(0x14U))) {
        VPvuTop___024root___ico_comb__TOP__29(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(0xaU)) 
         | vlSelf->__VactTriggered.at(0x15U))) {
        VPvuTop___024root___ico_comb__TOP__30(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(0xaU)) 
         | vlSelf->__VactTriggered.at(0x1cU))) {
        VPvuTop___024root___ico_comb__TOP__27(vlSelf);
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(0xaU)) 
         | vlSelf->__VactTriggered.at(0x1dU))) {
        VPvuTop___024root___ico_comb__TOP__28(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(4U) | vlSelf->__VactTriggered.at(0xcU)) 
         | vlSelf->__VactTriggered.at(0x16U))) {
        VPvuTop___024root___ico_comb__TOP__33(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(4U) | vlSelf->__VactTriggered.at(0xcU)) 
         | vlSelf->__VactTriggered.at(0x17U))) {
        VPvuTop___024root___ico_comb__TOP__34(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(4U) | vlSelf->__VactTriggered.at(0xcU)) 
         | vlSelf->__VactTriggered.at(0x1eU))) {
        VPvuTop___024root___ico_comb__TOP__31(vlSelf);
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
    }
    if (((vlSelf->__VactTriggered.at(4U) | vlSelf->__VactTriggered.at(0xcU)) 
         | vlSelf->__VactTriggered.at(0x1fU))) {
        VPvuTop___024root___ico_comb__TOP__32(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(6U) | vlSelf->__VactTriggered.at(0xeU)) 
         | vlSelf->__VactTriggered.at(0x19U))) {
        VPvuTop___024root___ico_comb__TOP__37(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(6U) | vlSelf->__VactTriggered.at(0xeU)) 
         | vlSelf->__VactTriggered.at(0x18U))) {
        VPvuTop___024root___ico_comb__TOP__38(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(6U) | vlSelf->__VactTriggered.at(0xeU)) 
         | vlSelf->__VactTriggered.at(0x21U))) {
        VPvuTop___024root___ico_comb__TOP__35(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(6U) | vlSelf->__VactTriggered.at(0xeU)) 
         | vlSelf->__VactTriggered.at(0x20U))) {
        VPvuTop___024root___ico_comb__TOP__36(vlSelf);
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
    }
    if (((((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(6U)) 
           | vlSelf->__VactTriggered.at(8U)) | vlSelf->__VactTriggered.at(0xeU)) 
         | vlSelf->__VactTriggered.at(0x18U))) {
        VPvuTop___024root___ico_comb__TOP__46(vlSelf);
    }
    if (((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(6U)) 
           | vlSelf->__VactTriggered.at(0xaU)) | vlSelf->__VactTriggered.at(0xeU)) 
         | vlSelf->__VactTriggered.at(0x18U))) {
        VPvuTop___024root___ico_comb__TOP__47(vlSelf);
    }
    if (((((vlSelf->__VactTriggered.at(4U) | vlSelf->__VactTriggered.at(6U)) 
           | vlSelf->__VactTriggered.at(0xcU)) | vlSelf->__VactTriggered.at(0xeU)) 
         | vlSelf->__VactTriggered.at(0x18U))) {
        VPvuTop___024root___ico_comb__TOP__48(vlSelf);
    }
    if ((((((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(6U)) 
            | vlSelf->__VactTriggered.at(8U)) | vlSelf->__VactTriggered.at(0xeU)) 
          | vlSelf->__VactTriggered.at(0x13U)) | vlSelf->__VactTriggered.at(0x18U))) {
        VPvuTop___024root___ico_comb__TOP__49(vlSelf);
    }
    if ((((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(6U)) 
            | vlSelf->__VactTriggered.at(0xaU)) | vlSelf->__VactTriggered.at(0xeU)) 
          | vlSelf->__VactTriggered.at(0x15U)) | vlSelf->__VactTriggered.at(0x18U))) {
        VPvuTop___024root___ico_comb__TOP__50(vlSelf);
    }
    if ((((((vlSelf->__VactTriggered.at(4U) | vlSelf->__VactTriggered.at(6U)) 
            | vlSelf->__VactTriggered.at(0xcU)) | vlSelf->__VactTriggered.at(0xeU)) 
          | vlSelf->__VactTriggered.at(0x17U)) | vlSelf->__VactTriggered.at(0x18U))) {
        VPvuTop___024root___ico_comb__TOP__51(vlSelf);
    }
    if ((((vlSelf->__VactTriggered.at(6U) | vlSelf->__VactTriggered.at(0xeU)) 
          | vlSelf->__VactTriggered.at(0x18U)) | vlSelf->__VactTriggered.at(0x19U))) {
        VPvuTop___024root___ico_comb__TOP__52(vlSelf);
    }
    if (((((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(6U)) 
           | vlSelf->__VactTriggered.at(8U)) | vlSelf->__VactTriggered.at(0xeU)) 
         | vlSelf->__VactTriggered.at(0x20U))) {
        VPvuTop___024root___ico_comb__TOP__39(vlSelf);
    }
    if (((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(6U)) 
           | vlSelf->__VactTriggered.at(0xaU)) | vlSelf->__VactTriggered.at(0xeU)) 
         | vlSelf->__VactTriggered.at(0x20U))) {
        VPvuTop___024root___ico_comb__TOP__40(vlSelf);
    }
    if (((((vlSelf->__VactTriggered.at(4U) | vlSelf->__VactTriggered.at(6U)) 
           | vlSelf->__VactTriggered.at(0xcU)) | vlSelf->__VactTriggered.at(0xeU)) 
         | vlSelf->__VactTriggered.at(0x20U))) {
        VPvuTop___024root___ico_comb__TOP__41(vlSelf);
    }
    if ((((((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(6U)) 
            | vlSelf->__VactTriggered.at(8U)) | vlSelf->__VactTriggered.at(0xeU)) 
          | vlSelf->__VactTriggered.at(0x1bU)) | vlSelf->__VactTriggered.at(0x20U))) {
        VPvuTop___024root___ico_comb__TOP__42(vlSelf);
    }
    if ((((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(6U)) 
            | vlSelf->__VactTriggered.at(0xaU)) | vlSelf->__VactTriggered.at(0xeU)) 
          | vlSelf->__VactTriggered.at(0x1dU)) | vlSelf->__VactTriggered.at(0x20U))) {
        VPvuTop___024root___ico_comb__TOP__43(vlSelf);
    }
    if ((((((vlSelf->__VactTriggered.at(4U) | vlSelf->__VactTriggered.at(6U)) 
            | vlSelf->__VactTriggered.at(0xcU)) | vlSelf->__VactTriggered.at(0xeU)) 
          | vlSelf->__VactTriggered.at(0x1fU)) | vlSelf->__VactTriggered.at(0x20U))) {
        VPvuTop___024root___ico_comb__TOP__44(vlSelf);
    }
    if ((((vlSelf->__VactTriggered.at(6U) | vlSelf->__VactTriggered.at(0xeU)) 
          | vlSelf->__VactTriggered.at(0x20U)) | vlSelf->__VactTriggered.at(0x21U))) {
        VPvuTop___024root___ico_comb__TOP__45(vlSelf);
    }
    if ((((vlSelf->__VactTriggered.at(6U) | vlSelf->__VactTriggered.at(0xeU)) 
          | vlSelf->__VactTriggered.at(0x18U)) | vlSelf->__VactTriggered.at(0x20U))) {
        VPvuTop___024root___ico_comb__TOP__53(vlSelf);
    }
    if ((((((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(6U)) 
            | vlSelf->__VactTriggered.at(8U)) | vlSelf->__VactTriggered.at(0xeU)) 
          | vlSelf->__VactTriggered.at(0x18U)) | vlSelf->__VactTriggered.at(0x20U))) {
        VPvuTop___024root___ico_comb__TOP__54(vlSelf);
    }
    if ((((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(6U)) 
            | vlSelf->__VactTriggered.at(0xaU)) | vlSelf->__VactTriggered.at(0xeU)) 
          | vlSelf->__VactTriggered.at(0x18U)) | vlSelf->__VactTriggered.at(0x20U))) {
        VPvuTop___024root___ico_comb__TOP__55(vlSelf);
    }
    if ((((((vlSelf->__VactTriggered.at(4U) | vlSelf->__VactTriggered.at(6U)) 
            | vlSelf->__VactTriggered.at(0xcU)) | vlSelf->__VactTriggered.at(0xeU)) 
          | vlSelf->__VactTriggered.at(0x18U)) | vlSelf->__VactTriggered.at(0x20U))) {
        VPvuTop___024root___ico_comb__TOP__56(vlSelf);
    }
    if ((((((((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(6U)) 
              | vlSelf->__VactTriggered.at(8U)) | vlSelf->__VactTriggered.at(0xeU)) 
            | vlSelf->__VactTriggered.at(0x13U)) | vlSelf->__VactTriggered.at(0x18U)) 
          | vlSelf->__VactTriggered.at(0x1bU)) | vlSelf->__VactTriggered.at(0x20U))) {
        VPvuTop___024root___ico_comb__TOP__57(vlSelf);
    }
    if ((((((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(6U)) 
              | vlSelf->__VactTriggered.at(0xaU)) | vlSelf->__VactTriggered.at(0xeU)) 
            | vlSelf->__VactTriggered.at(0x15U)) | vlSelf->__VactTriggered.at(0x18U)) 
          | vlSelf->__VactTriggered.at(0x1dU)) | vlSelf->__VactTriggered.at(0x20U))) {
        VPvuTop___024root___ico_comb__TOP__58(vlSelf);
    }
    if ((((((((vlSelf->__VactTriggered.at(4U) | vlSelf->__VactTriggered.at(6U)) 
              | vlSelf->__VactTriggered.at(0xcU)) | vlSelf->__VactTriggered.at(0xeU)) 
            | vlSelf->__VactTriggered.at(0x17U)) | vlSelf->__VactTriggered.at(0x18U)) 
          | vlSelf->__VactTriggered.at(0x1fU)) | vlSelf->__VactTriggered.at(0x20U))) {
        VPvuTop___024root___ico_comb__TOP__59(vlSelf);
    }
    if ((((((vlSelf->__VactTriggered.at(6U) | vlSelf->__VactTriggered.at(0xeU)) 
            | vlSelf->__VactTriggered.at(0x18U)) | vlSelf->__VactTriggered.at(0x19U)) 
          | vlSelf->__VactTriggered.at(0x20U)) | vlSelf->__VactTriggered.at(0x21U))) {
        VPvuTop___024root___ico_comb__TOP__60(vlSelf);
    }
}

VL_INLINE_OPT void VPvuTop___024root___nba_sequent__TOP__0(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0;
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_3 = 0U;
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_2 = 0U;
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_1 = 0U;
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_0 = 0U;
    } else {
        if (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_3) {
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_3 
                = vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_3_T_1;
        }
        if (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_2) {
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_2 
                = vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_2_T_1;
        }
        if (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_1) {
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_1 
                = vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_1_T_1;
        }
        if (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_0) {
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_0 
                = vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_0_T_1;
        }
    }
    vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_3_T_1 
        = (0x3ffffffU & ((IData)(1U) + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_3)));
    vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_3 
        = (0x3ffffffU & ((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_3)
                          ? ((IData)(1U) + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_3))
                          : vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_3));
    vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_2_T_1 
        = (0x3ffffffU & ((IData)(1U) + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_2)));
    vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2 
        = (0x3ffffffU & ((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_2)
                          ? ((IData)(1U) + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_2))
                          : vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_2));
    vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_1_T_1 
        = (0x3ffffffU & ((IData)(1U) + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_1)));
    vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1 
        = (0x3ffffffU & ((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_1)
                          ? ((IData)(1U) + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_1))
                          : vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_1));
    vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_0_T_1 
        = (0x3ffffffU & ((IData)(1U) + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_0)));
    vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0 
        = (0x3ffffffU & ((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_0)
                          ? ((IData)(1U) + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_0))
                          : vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_0));
    vlSelf->PvuTop__DOT___dotproduct_io_pir_frac_o 
        = (0x3ffffffU & (((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0 
                           & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1) 
                          | ((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1 
                              & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2) 
                             | ((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2 
                                 & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_3) 
                                | ((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0 
                                    & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2) 
                                   | ((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0 
                                       | vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1) 
                                      & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_3))))) 
                         + (vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0 
                            ^ (vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1 
                               ^ (vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2 
                                  ^ vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_3)))));
    if (vlSelf->__VdfgTmp_h4be4f099__0) {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm__io_pir_frac_i = 0U;
        vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i = 0U;
    } else {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm__io_pir_frac_i 
            = vlSelf->PvuTop__DOT___dotproduct_io_pir_frac_o;
        vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
            = (0x1ffffffU & vlSelf->PvuTop__DOT___dotproduct_io_pir_frac_o);
    }
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffeU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffdU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 1U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffbU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 2U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffff7U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 3U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffefU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 4U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffdfU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 5U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffbfU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 6U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffff7fU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 7U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffeffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 8U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffdffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 9U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffbffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xaU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fff7ffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xbU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffefffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xcU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffdfffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xdU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffbfffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xeU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ff7fffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0xfU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1feffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x10U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fdffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x11U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fbffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x12U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1f7ffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x13U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1efffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x14U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dfffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x15U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bfffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x16U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17fffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x17U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0 
        = (1U & vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i);
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h54926e2b__0) 
              << 0x18U));
}
