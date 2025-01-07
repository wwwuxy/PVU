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
    vlSelf->__VicoTriggered.at(1U) = ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(2U) = (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(3U) = (0U != (((((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                 ^ 
                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                               | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                  ^ 
                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                              | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 ^ 
                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                             | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                ^ vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VicoTriggered.at(4U) = ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(5U) = (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(6U) = (0U != (((((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                 ^ 
                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                               | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                  ^ 
                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                              | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 ^ 
                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                             | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                ^ vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VicoTriggered.at(7U) = ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   ((((((((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                          | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                         | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                            ^ 
                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                        | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U])) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U])) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU])) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU]))));
    vlSelf->__VicoTriggered.at(8U) = (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(9U) = ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0xaU) = (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                        != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0xbU) = ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                        | (0U != ((
                                                   (((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0xcU) = (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                        != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0xdU) = ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                        | (0U != ((
                                                   ((((((((((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                            | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                               ^ 
                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                           | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                              ^ 
                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                          | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                         | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                            ^ 
                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U])) 
                                                        | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U])) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U])) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU]))));
    vlSelf->__VicoTriggered.at(0xeU) = (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                        != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0xfU) = ((vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                        | (0U != ((
                                                   ((((((((((vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                            | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                               ^ 
                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                           | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                              ^ 
                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                          | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                         | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                            ^ 
                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U])) 
                                                        | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U])) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U])) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU]))));
    vlSelf->__VicoTriggered.at(0x10U) = (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU];
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
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPvuTop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VPvuTop___024root___ico_sequent__TOP__0(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0;
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0;
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0;
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 = 0;
    // Body
    vlSelf->PvuTop__DOT__add__DOT___GEN = ((vlSelf->io_posit_i1_0 
                                            >> 0x1fU) 
                                           == (vlSelf->io_posit_i2_0 
                                               >> 0x1fU));
    vlSelf->PvuTop__DOT____VdfgTmp_h04afc9dc__0 = (
                                                   (1U 
                                                    == (IData)(vlSelf->io_op)) 
                                                   | (2U 
                                                      == (IData)(vlSelf->io_op)));
    vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6 
        = (0x7fffffffU & ((vlSelf->io_posit_i1_0 >> 0x1fU)
                           ? ((IData)(1U) + (~ vlSelf->io_posit_i1_0))
                           : vlSelf->io_posit_i1_0));
    vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6 
        = (0x7fffffffU & ((vlSelf->io_posit_i2_0 >> 0x1fU)
                           ? ((IData)(1U) + (~ vlSelf->io_posit_i2_0))
                           : vlSelf->io_posit_i2_0));
    vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i 
        = (0x3fffffffffffffffULL & ((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o)
                                     ? (1ULL + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp))
                                     : vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp));
    vlSelf->PvuTop__DOT____VdfgTmp_h248979d2__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h04afc9dc__0) 
                                                   | (3U 
                                                      == (IData)(vlSelf->io_op)));
    vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
        = (0x7fffffffU & ((- (IData)((1U & (vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6 
                                            >> 0x1eU)))) 
                          ^ vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6));
    vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
        = (0x7fffffffU & ((- (IData)((1U & (vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6 
                                            >> 0x1eU)))) 
                          ^ vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6));
    vlSelf->__VdfgTmp_h62078fbd__0 = ((5U != (IData)(vlSelf->io_op)) 
                                      | ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h248979d2__0) 
                                         | (4U == (IData)(vlSelf->io_op))));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1eU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1dU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1cU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1bU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1aU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x19U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i);
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1eU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1dU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1cU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1bU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1aU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x19U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i);
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    if (vlSelf->__VdfgTmp_h62078fbd__0) {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i = 0ULL;
        vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i = 0ULL;
    } else {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
            = (0xffffffffffffffULL & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i);
        vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
            = (0x7fffffffffffffULL & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i);
    }
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x36U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffffeULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x35U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffffdULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 1U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x34U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffffbULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 2U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x33U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffff7ULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 3U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x32U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffffefULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 4U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x31U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffffdfULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 5U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x30U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffffbfULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 6U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2fU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffff7fULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 7U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2eU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffeffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 8U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2dU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffdffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 9U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2cU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffbffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0xaU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2bU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffff7ffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0xbU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2aU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffefffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0xcU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x29U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffdfffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0xdU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x28U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffbfffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0xeU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x27U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffff7fffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0xfU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x26U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffeffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x10U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x25U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffdffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x11U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x24U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffbffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x12U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x23U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffff7ffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x13U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x22U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffefffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x14U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x21U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffdfffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x15U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x20U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffbfffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x16U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1fU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffff7fffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x17U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1eU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x18U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1dU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x19U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1cU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x1aU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1bU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7ffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x1bU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1aU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x1cU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x19U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x1dU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x18U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x1eU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x17U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x1fU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x16U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x20U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x15U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x21U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x14U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x22U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x13U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x23U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x12U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x24U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x11U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x25U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x10U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x26U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xfU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x27U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xeU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x28U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xdU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x29U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xcU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x2aU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xbU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x2bU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xaU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x2cU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 9U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x2dU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 8U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x2eU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 7U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x2fU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 6U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x30U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 5U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x31U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 4U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x32U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 3U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x33U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 2U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x34U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 1U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x35U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x36U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__9(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__9\n"); );
    // Body
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor.io_sum_o[0U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor.io_sum_o[1U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor.io_sum_o[2U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor.io_carry_o[0U] 
            << 0x10U) | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor.io_sum_o[3U]);
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor.io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor.io_carry_o[1U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor.io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor.io_carry_o[2U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor.io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor.io_carry_o[3U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
        = (((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_sum_o[0U]) 
            | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor.io_carry_o[3U] 
               >> 0x10U)) | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_sum_o[0U]));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
        = ((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_sum_o[1U]) 
           | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_sum_o[1U]));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
        = ((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_sum_o[2U]) 
           | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_sum_o[2U]));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_carry_o[0U] 
            << 0x10U) | (0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_sum_o[3U]));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_carry_o[1U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_carry_o[2U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_carry_o[3U] 
                         << 0x10U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__10(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__10\n"); );
    // Body
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.io_sum_o[0U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.io_sum_o[1U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.io_sum_o[2U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.io_carry_o[0U] 
            << 0x10U) | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.io_sum_o[3U]);
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.io_carry_o[1U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.io_carry_o[2U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.io_carry_o[3U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
        = (((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_sum_o[0U]) 
            | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.io_carry_o[3U] 
               >> 0x10U)) | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_sum_o[0U]));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
        = ((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_sum_o[1U]) 
           | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_sum_o[1U]));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
        = ((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_sum_o[2U]) 
           | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_sum_o[2U]));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_carry_o[0U] 
            << 0x10U) | (0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_sum_o[3U]));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_carry_o[1U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_carry_o[2U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.io_carry_o[3U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.io_sum_o[0U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.io_sum_o[1U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.io_sum_o[2U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.io_carry_o[0U] 
            << 0x10U) | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.io_sum_o[3U]);
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[4U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.io_carry_o[1U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.io_carry_o[2U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.io_carry_o[3U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[7U] 
        = (((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.io_sum_o[0U]) 
            | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.io_carry_o[3U] 
               >> 0x10U)) | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.io_sum_o[0U]));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[8U] 
        = ((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.io_sum_o[1U]) 
           | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.io_sum_o[1U]));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[9U] 
        = ((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.io_sum_o[2U]) 
           | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.io_sum_o[2U]));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.io_carry_o[0U] 
            << 0x10U) | (0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.io_sum_o[3U]));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.io_carry_o[1U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.io_carry_o[2U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.io_carry_o[3U] 
                         << 0x10U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__11(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__11\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0;
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 = 0;
    // Body
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
        = (((3U != (IData)(vlSelf->io_op)) | (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h04afc9dc__0))
            ? 0ULL : ((0x100U & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum))
                       ? 0ULL : (0xfffffffffffffeULL 
                                 & ((vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor.__PVT__io_sum_o 
                                     + vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor.__PVT__io_carry_o) 
                                    << 1U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor.io_sum_o[0U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor.io_sum_o[1U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor.io_sum_o[2U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor.io_carry_o[0U] 
            << 0x10U) | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor.io_sum_o[3U]);
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[4U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor.io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor.io_carry_o[1U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor.io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor.io_carry_o[2U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor.io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor.io_carry_o[3U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[7U] 
        = (((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor.io_sum_o[0U]) 
            | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor.io_carry_o[3U] 
               >> 0x10U)) | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor.io_sum_o[0U]));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[8U] 
        = ((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor.io_sum_o[1U]) 
           | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor.io_sum_o[1U]));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[9U] 
        = ((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor.io_sum_o[2U]) 
           | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor.io_sum_o[2U]));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor.io_carry_o[0U] 
            << 0x10U) | (0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor.io_sum_o[3U]));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor.io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor.io_carry_o[1U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor.io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor.io_carry_o[2U] 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor.io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor.io_carry_o[3U] 
                         << 0x10U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x37U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffffffeULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x36U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffffffdULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 1U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x35U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffffffbULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 2U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x34U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffffff7ULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 3U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x33U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffffffefULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 4U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x32U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffffffdfULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 5U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x31U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffffffbfULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 6U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x30U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffffff7fULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 7U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2fU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffffeffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 8U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2eU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffffdffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 9U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2dU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffffbffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0xaU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2cU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffff7ffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0xbU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2bU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffffefffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0xcU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2aU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffffdfffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0xdU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x29U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffffbfffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0xeU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x28U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffff7fffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0xfU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x27U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffeffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x10U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x26U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffdffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x11U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x25U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffbffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x12U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x24U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffff7ffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x13U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x23U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffefffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x14U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x22U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffdfffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x15U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x21U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffbfffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x16U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x20U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffff7fffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x17U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1fU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffeffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x18U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1eU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffdffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x19U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1dU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffbffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x1aU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1cU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffff7ffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x1bU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1bU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffefffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x1cU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1aU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffdfffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x1dU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x19U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffbfffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x1eU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x18U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffff7fffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x1fU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x17U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffeffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x20U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x16U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffdffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x21U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x15U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffbffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x22U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x14U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffff7ffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x23U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x13U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffefffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x24U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x12U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffdfffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x25U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x11U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffbfffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x26U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x10U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffff7fffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x27U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xfU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffeffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x28U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xeU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffdffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x29U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xdU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffbffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x2aU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xcU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfff7ffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x2bU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xbU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffefffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x2cU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xaU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffdfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x2dU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 9U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffbfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x2eU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 8U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xff7fffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x2fU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 7U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfeffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x30U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 6U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfdffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x31U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 5U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfbffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x32U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 4U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xf7ffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x33U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 3U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xefffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x34U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 2U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xdfffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x35U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 1U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xbfffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x36U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x37U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__12(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__12\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0;
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 = 0;
    // Body
    vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
        = (((4U != (IData)(vlSelf->io_op)) | (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h248979d2__0))
            ? 0ULL : ((QData)((IData)((0x1fffffffU 
                                       & (IData)((0x1fffffffULL 
                                                  & (((((QData)((IData)(
                                                                        vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__compressor.io_sum_o[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__compressor.io_sum_o[0U]))) 
                                                      + 
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__compressor.io_carry_o[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__compressor.io_carry_o[0U])))) 
                                                     >> 0x1cU)))))) 
                      << 0x1bU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x37U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffffffeULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x36U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffffffdULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 1U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x35U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffffffbULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 2U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x34U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffffff7ULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 3U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x33U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffffffefULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 4U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x32U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffffffdfULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 5U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x31U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffffffbfULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 6U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x30U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffffff7fULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 7U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2fU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffffeffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 8U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2eU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffffdffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 9U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2dU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffffbffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0xaU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2cU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffff7ffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0xbU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2bU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffffefffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0xcU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2aU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffffdfffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0xdU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x29U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffffbfffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0xeU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x28U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffff7fffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0xfU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x27U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffeffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x10U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x26U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffdffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x11U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x25U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffbffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x12U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x24U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffff7ffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x13U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x23U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffefffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x14U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x22U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffdfffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x15U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x21U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffbfffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x16U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x20U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffff7fffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x17U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1fU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffeffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x18U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1eU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffdffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x19U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1dU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffbffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x1aU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1cU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffff7ffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x1bU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1bU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffefffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x1cU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1aU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffdfffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x1dU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x19U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffbfffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x1eU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x18U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffff7fffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x1fU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x17U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffeffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x20U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x16U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffdffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x21U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x15U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffbffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x22U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x14U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffff7ffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x23U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x13U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffefffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x24U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x12U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffdfffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x25U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x11U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffbfffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x26U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x10U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffff7fffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x27U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xfU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffeffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x28U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xeU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffdffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x29U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xdU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffbffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x2aU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xcU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfff7ffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x2bU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xbU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffefffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x2cU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xaU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffdfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x2dU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 9U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffbfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x2eU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 8U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xff7fffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x2fU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 7U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfeffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x30U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 6U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfdffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x31U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 5U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfbffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x32U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 4U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xf7ffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x33U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 3U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xefffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x34U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 2U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xdfffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x35U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 1U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xbfffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x36U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0)) 
              << 0x37U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__22(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__22\n"); );
    // Init
    QData/*63:0*/ PvuTop__DOT___GEN_6;
    PvuTop__DOT___GEN_6 = 0;
    // Body
    PvuTop__DOT___GEN_6 = (((QData)((IData)(((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                              ? (0xffU 
                                                 & ((0U 
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
                                                           vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])))))
                                              : 0U))) 
                            << 0x20U) | (QData)((IData)(
                                                        ((((1U 
                                                            & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                            ? 
                                                           (0xffU 
                                                            & ((2U 
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
                                                                                - (IData)(2U)) 
                                                                                >> 5U)))) 
                                                                    << 6U)) 
                                                                | (0x3fU 
                                                                   & (((IData)(2U) 
                                                                       - 
                                                                       vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                      - (IData)(2U))))
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
                                                                       - (IData)(1U)))))))
                                                            : 0U) 
                                                          << 0x18U) 
                                                         | ((((1U 
                                                               & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                               ? 
                                                              ((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                                ? 
                                                               ((0xe0U 
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
                                                                : 
                                                               ((0xe0U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((- 
                                                                                vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                >> 4U)))) 
                                                                    << 5U)) 
                                                                | (0x1fU 
                                                                   & (- 
                                                                      vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                                               : 0U) 
                                                             << 0x10U) 
                                                            | (((1U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                                  ? 
                                                                 ((0xe0U 
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
                                                                  : 
                                                                 ((0xe0U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((- 
                                                                                vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                >> 4U)))) 
                                                                      << 5U)) 
                                                                  | (0x1fU 
                                                                     & (- 
                                                                        vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                                                 : 0U) 
                                                               << 8U))))));
    vlSelf->__VdfgTmp_ha5f49bd9__0 = (0xffU & (((1U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp) 
                                                 + (IData)(vlSelf->PvuTop__DOT__add__DOT__io_overflow))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? 
                                                 ((1U 
                                                   & ((~ 
                                                       (vlSelf->PvuTop__DOT__add__DOT__sum 
                                                        >> 0x1eU)) 
                                                      | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)))
                                                   ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp)
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp)))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum))
                                                    ? 0x7fU
                                                    : (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp) 
                                                    - (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp))
                                                    : 0U)))) 
                                               + (IData)(
                                                         (PvuTop__DOT___GEN_6 
                                                          >> 
                                                          (0x3fU 
                                                           & ((IData)(vlSelf->io_op) 
                                                              << 3U))))));
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c349387__0 
        = ((5U != (IData)(vlSelf->io_op)) & ((IData)(vlSelf->__VdfgTmp_ha5f49bd9__0) 
                                             >> 7U));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0x1fU & (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c349387__0)
                      ? ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                         ? 0x1fU : 
                                        (~ ((IData)(vlSelf->__VdfgTmp_ha5f49bd9__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                         ? 0U : ((IData)(vlSelf->__VdfgTmp_ha5f49bd9__0) 
                                                 >> 2U)))) 
                    - (IData)(2U)));
}

void VPvuTop_Mul___ico_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__0(VPvuTop_Mul* vlSelf);
void VPvuTop___024root___ico_comb__TOP__0(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__1(VPvuTop___024root* vlSelf);
void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__0(VPvuTop_Mul* vlSelf);
void VPvuTop___024root___ico_comb__TOP__2(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__3(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__4(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__5(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__6(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__7(VPvuTop___024root* vlSelf);
void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__1(VPvuTop_Mul* vlSelf);
void VPvuTop___024root___ico_comb__TOP__8(VPvuTop___024root* vlSelf);
void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__1(VPvuTop_Mul* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__0(VPvuTop_CsaTree_9* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__0(VPvuTop_CsaTree_9* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__0(VPvuTop_CsaTree_9* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__2(VPvuTop_Mul* vlSelf);
void VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__1(VPvuTop_CsaTree_9* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__3(VPvuTop_Mul* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop___024root___ico_comb__TOP__13(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__14(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__15(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__16(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__17(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__18(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__19(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__20(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__21(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__23(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__24(VPvuTop___024root* vlSelf);

void VPvuTop___024root___eval_ico(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VPvuTop_Mul___ico_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VPvuTop___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U))) {
        VPvuTop___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(6U))) {
        VPvuTop___024root___ico_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__mul));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U))) {
        VPvuTop___024root___ico_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(2U))) {
        VPvuTop___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(4U))) {
        VPvuTop___024root___ico_comb__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U))) {
        VPvuTop___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(8U))) {
        VPvuTop___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U))) {
        VPvuTop___024root___ico_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
         | vlSelf->__VicoTriggered.at(6U))) {
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__1((&vlSymsp->TOP__PvuTop__DOT__mul));
        vlSelf->__Vm_traceActivity[7U] = 1U;
        VPvuTop___024root___ico_comb__TOP__8(vlSelf);
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__1((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__csa_tree_B__DOT__compressor));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__2((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__1((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A));
        VPvuTop___024root___ico_comb__TOP__9(vlSelf);
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__1((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__1((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__2((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__3((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop___024root___ico_comb__TOP__10(vlSelf);
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__3((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor));
        VPvuTop___024root___ico_comb__TOP__11(vlSelf);
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__compressor));
        VPvuTop___024root___ico_comb__TOP__12(vlSelf);
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U)) 
         | vlSelf->__VicoTriggered.at(8U))) {
        VPvuTop___024root___ico_comb__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0xaU))) {
        VPvuTop___024root___ico_comb__TOP__14(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(9U))) {
        VPvuTop___024root___ico_comb__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0xcU))) {
        VPvuTop___024root___ico_comb__TOP__16(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0xbU))) {
        VPvuTop___024root___ico_comb__TOP__17(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0xeU))) {
        VPvuTop___024root___ico_comb__TOP__18(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0xdU))) {
        VPvuTop___024root___ico_comb__TOP__19(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0x10U))) {
        VPvuTop___024root___ico_comb__TOP__20(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0xfU))) {
        VPvuTop___024root___ico_comb__TOP__21(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if (((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
                 | vlSelf->__VicoTriggered.at(6U)) 
                | vlSelf->__VicoTriggered.at(9U)) | vlSelf->__VicoTriggered.at(0xaU)) 
              | vlSelf->__VicoTriggered.at(0xbU)) | vlSelf->__VicoTriggered.at(0xcU)) 
            | vlSelf->__VicoTriggered.at(0xdU)) | vlSelf->__VicoTriggered.at(0xeU)) 
          | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x10U))) {
        VPvuTop___024root___ico_comb__TOP__22(vlSelf);
    }
    if (((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
             | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(9U)) 
           | vlSelf->__VicoTriggered.at(0xbU)) | vlSelf->__VicoTriggered.at(0xdU)) 
         | vlSelf->__VicoTriggered.at(0xfU))) {
        VPvuTop___024root___ico_comb__TOP__23(vlSelf);
    }
    if (((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
                 | vlSelf->__VicoTriggered.at(6U)) 
                | vlSelf->__VicoTriggered.at(9U)) | vlSelf->__VicoTriggered.at(0xaU)) 
              | vlSelf->__VicoTriggered.at(0xbU)) | vlSelf->__VicoTriggered.at(0xcU)) 
            | vlSelf->__VicoTriggered.at(0xdU)) | vlSelf->__VicoTriggered.at(0xeU)) 
          | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x10U))) {
        VPvuTop___024root___ico_comb__TOP__24(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
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
    vlSelf->__VactTriggered.at(0U) = ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(1U) = (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(2U) = (0U != (((((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                 ^ 
                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                               | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                  ^ 
                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                              | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 ^ 
                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                             | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                ^ vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VactTriggered.at(3U) = ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(4U) = (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(5U) = (0U != (((((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                 ^ 
                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                               | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                  ^ 
                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                              | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 ^ 
                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                             | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                ^ vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VactTriggered.at(6U) = ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   ((((((((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                          | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                         | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                            ^ 
                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                        | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U])) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U])) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU])) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU]))));
    vlSelf->__VactTriggered.at(7U) = (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(8U) = ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(9U) = (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0xaU) = ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                        | (0U != ((
                                                   (((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0xbU) = (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                        != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0xcU) = ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                        | (0U != ((
                                                   ((((((((((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                            | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                               ^ 
                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                           | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                              ^ 
                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                          | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                         | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                            ^ 
                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U])) 
                                                        | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U])) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U])) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU]))));
    vlSelf->__VactTriggered.at(0xdU) = (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                        != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0xeU) = ((vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                        | (0U != ((
                                                   ((((((((((vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                            | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                               ^ 
                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                           | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                              ^ 
                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                          | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                         | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                            ^ 
                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U])) 
                                                        | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U])) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U])) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU]))));
    vlSelf->__VactTriggered.at(0xfU) = (vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                        != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x10U) = ((IData)(vlSelf->clock) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
        = vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
        = vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU];
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
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPvuTop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VPvuTop___024root___eval_act(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(2U)) {
        VPvuTop___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VPvuTop___024root___ico_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__mul));
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VPvuTop___024root___ico_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VPvuTop___024root___ico_comb__TOP__3(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VPvuTop___024root___ico_comb__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VPvuTop___024root___ico_comb__TOP__5(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VPvuTop___024root___ico_comb__TOP__6(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VPvuTop___024root___ico_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    if ((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U))) {
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__1((&vlSymsp->TOP__PvuTop__DOT__mul));
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        VPvuTop___024root___ico_comb__TOP__8(vlSelf);
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__1((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__csa_tree_B__DOT__compressor));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__2((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__1((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A));
        VPvuTop___024root___ico_comb__TOP__9(vlSelf);
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__1((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__1((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__2((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__3((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop___024root___ico_comb__TOP__10(vlSelf);
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__3((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor));
        VPvuTop___024root___ico_comb__TOP__11(vlSelf);
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__compressor));
        VPvuTop___024root___ico_comb__TOP__12(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(6U) | vlSelf->__VactTriggered.at(7U))) {
        VPvuTop___024root___ico_comb__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(9U))) {
        VPvuTop___024root___ico_comb__TOP__14(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(8U))) {
        VPvuTop___024root___ico_comb__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(0xbU))) {
        VPvuTop___024root___ico_comb__TOP__16(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(0xaU))) {
        VPvuTop___024root___ico_comb__TOP__17(vlSelf);
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(0xdU))) {
        VPvuTop___024root___ico_comb__TOP__18(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(0xcU))) {
        VPvuTop___024root___ico_comb__TOP__19(vlSelf);
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(0xfU))) {
        VPvuTop___024root___ico_comb__TOP__20(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(0xeU))) {
        VPvuTop___024root___ico_comb__TOP__21(vlSelf);
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
    }
    if ((((((((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
                | vlSelf->__VactTriggered.at(8U)) | vlSelf->__VactTriggered.at(9U)) 
              | vlSelf->__VactTriggered.at(0xaU)) | vlSelf->__VactTriggered.at(0xbU)) 
            | vlSelf->__VactTriggered.at(0xcU)) | vlSelf->__VactTriggered.at(0xdU)) 
          | vlSelf->__VactTriggered.at(0xeU)) | vlSelf->__VactTriggered.at(0xfU))) {
        VPvuTop___024root___ico_comb__TOP__22(vlSelf);
    }
    if ((((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
            | vlSelf->__VactTriggered.at(8U)) | vlSelf->__VactTriggered.at(0xaU)) 
          | vlSelf->__VactTriggered.at(0xcU)) | vlSelf->__VactTriggered.at(0xeU))) {
        VPvuTop___024root___ico_comb__TOP__23(vlSelf);
    }
    if ((((((((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
                | vlSelf->__VactTriggered.at(8U)) | vlSelf->__VactTriggered.at(9U)) 
              | vlSelf->__VactTriggered.at(0xaU)) | vlSelf->__VactTriggered.at(0xbU)) 
            | vlSelf->__VactTriggered.at(0xcU)) | vlSelf->__VactTriggered.at(0xdU)) 
          | vlSelf->__VactTriggered.at(0xeU)) | vlSelf->__VactTriggered.at(0xfU))) {
        VPvuTop___024root___ico_comb__TOP__24(vlSelf);
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
    }
}

VL_INLINE_OPT void VPvuTop___024root___nba_sequent__TOP__0(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0;
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp = 0ULL;
    } else if (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o) {
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp 
            = vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_0_T_1;
    }
    vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_0_T_1 
        = (0x3fffffffffffffffULL & (1ULL + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp)));
    vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i 
        = (0x3fffffffffffffffULL & ((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o)
                                     ? (1ULL + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp))
                                     : vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp));
    if (vlSelf->__VdfgTmp_h62078fbd__0) {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i = 0ULL;
        vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i = 0ULL;
    } else {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
            = (0xffffffffffffffULL & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i);
        vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
            = (0x7fffffffffffffULL & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i);
    }
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x36U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffffeULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x35U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffffdULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 1U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x34U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffffbULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 2U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x33U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffff7ULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 3U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x32U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffffefULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 4U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x31U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffffdfULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 5U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x30U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffffbfULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 6U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2fU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffff7fULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 7U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2eU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffeffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 8U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2dU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffdffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 9U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2cU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffbffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0xaU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2bU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffff7ffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0xbU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2aU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffefffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0xcU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x29U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffdfffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0xdU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x28U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffbfffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0xeU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x27U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffff7fffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0xfU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x26U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffeffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x10U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x25U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffdffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x11U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x24U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffbffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x12U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x23U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffff7ffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x13U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x22U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffefffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x14U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x21U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffdfffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x15U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x20U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffbfffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x16U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1fU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffff7fffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x17U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1eU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x18U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1dU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x19U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1cU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x1aU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1bU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7ffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x1bU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1aU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x1cU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x19U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x1dU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x18U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x1eU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x17U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x1fU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x16U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x20U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x15U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x21U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x14U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x22U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x13U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x23U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x12U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x24U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x11U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x25U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x10U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x26U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xfU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x27U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xeU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x28U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xdU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x29U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xcU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x2aU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xbU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x2bU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xaU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x2cU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 9U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x2dU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 8U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x2eU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 7U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x2fU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 6U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x30U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 5U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x31U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 4U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x32U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 3U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x33U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 2U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x34U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 1U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x35U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h8e422c87__0)) 
              << 0x36U));
}
