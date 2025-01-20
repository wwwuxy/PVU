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

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__7(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__7\n"); );
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

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__8(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__8\n"); );
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

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__9(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__9\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0;
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0;
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_ha260c1b6__0 = 0;
    // Body
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
        = (((3U != (IData)(vlSelf->io_op)) | (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h04afc9dc__0))
            ? 0ULL : ((0x100U & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum))
                       ? 0ULL : (0xffffffffffffffULL 
                                 & (vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor.__PVT__io_carry_o 
                                    + vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor.__PVT__io_sum_o))));
    vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
        = ((IData)(vlSelf->PvuTop__DOT___GEN_5) ? 0ULL
            : ((0x100U & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__sum))
                ? 0ULL : (0xffffffffffffffULL & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                 + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor.__PVT__io_sum_o))));
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
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x38U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffffeULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x37U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffffdULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 1U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x36U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffffbULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 2U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x35U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffff7ULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 3U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x34U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffefULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 4U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x33U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffdfULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 5U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x32U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffbfULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 6U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x31U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffff7fULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 7U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x30U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffeffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 8U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x2fU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffdffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 9U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x2eU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffbffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0xaU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x2dU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffff7ffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0xbU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x2cU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffefffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0xcU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x2bU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffdfffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0xdU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x2aU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffbfffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0xeU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x29U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffff7fffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0xfU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x28U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffeffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x10U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x27U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffdffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x11U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x26U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffbffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x12U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x25U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffff7ffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x13U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x24U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffefffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x14U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x23U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffdfffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x15U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x22U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffbfffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x16U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x21U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffff7fffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x17U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x20U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffeffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x18U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x1fU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffdffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x19U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x1eU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffbffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x1aU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x1dU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffff7ffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x1bU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x1cU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffefffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x1cU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x1bU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffdfffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x1dU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x1aU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffbfffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x1eU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x19U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffff7fffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x1fU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x18U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffeffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x20U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x17U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffdffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x21U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x16U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffbffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x22U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x15U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffff7ffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x23U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x14U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffefffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x24U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x13U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffdfffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x25U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x12U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffbfffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x26U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x11U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffff7fffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x27U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x10U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffeffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x28U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0xfU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffdffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x29U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0xeU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffbffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x2aU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0xdU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fff7ffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x2bU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0xcU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffefffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x2cU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0xbU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffdfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x2dU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0xaU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffbfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x2eU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 9U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ff7fffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x2fU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 8U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1feffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x30U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 7U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fdffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x31U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 6U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fbffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x32U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 5U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1f7ffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x33U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 4U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1efffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x34U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 3U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dfffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x35U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 2U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bfffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x36U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 1U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17fffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x37U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x38U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__10(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__10\n"); );
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

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__21(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__21\n"); );
    // Init
    QData/*56:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2 = 0;
    QData/*56:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2 = 0;
    QData/*56:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2 = 0;
    QData/*56:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2 = 0;
    QData/*56:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_4_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_4_T_2 = 0;
    QData/*56:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_3_T_2 = 0;
    QData/*56:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_2_T_2 = 0;
    QData/*56:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_1_T_2 = 0;
    CData/*0:0*/ PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c349387__0;
    PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c349387__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    CData/*0:0*/ __VdfgTmp_h767b5817__0;
    __VdfgTmp_h767b5817__0 = 0;
    CData/*0:0*/ __VdfgTmp_h76ebd694__0;
    __VdfgTmp_h76ebd694__0 = 0;
    CData/*0:0*/ __VdfgTmp_h76e7a6e1__0;
    __VdfgTmp_h76e7a6e1__0 = 0;
    CData/*0:0*/ __VdfgTmp_h76ba78fd__0;
    __VdfgTmp_h76ba78fd__0 = 0;
    CData/*0:0*/ __VdfgTmp_h76b63760__0;
    __VdfgTmp_h76b63760__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_hf34d21c1__0;
    VlWide<3>/*95:0*/ __Vtemp_hd60c6902__0;
    VlWide<3>/*95:0*/ __Vtemp_h266f8086__0;
    VlWide<3>/*95:0*/ __Vtemp_h5391c0d0__0;
    VlWide<3>/*95:0*/ __Vtemp_hccaee320__0;
    // Body
    vlSelf->__VdfgTmp_h2a2fbaba__0 = (0xffU & (((5U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                  ? 
                                                 ((4U 
                                                   > 
                                                   (0x3fU 
                                                    & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                   ? 
                                                  ((0x1c0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((((IData)(4U) 
                                                                        - 
                                                                        vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                       - (IData)(1U)) 
                                                                      >> 5U)))) 
                                                       << 6U)) 
                                                   | (0x3fU 
                                                      & (((IData)(4U) 
                                                          - 
                                                          vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                         - (IData)(1U))))
                                                   : 
                                                  ((0x1c0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- 
                                                                       (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                        - (IData)(3U))) 
                                                                      >> 5U)))) 
                                                       << 6U)) 
                                                   | (0x3fU 
                                                      & (- 
                                                         (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                          - (IData)(3U))))))
                                                  : 0U)
                                                 : 0U) 
                                               + ((IData)(vlSelf->PvuTop__DOT___GEN_5)
                                                   ? 0U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__sum))
                                                    ? 0x7fU
                                                    : (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__sum)))));
    vlSelf->__VdfgTmp_h758fe8fa__0 = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                            & (IData)(vlSelf->__VdfgTmp_ha7cf127c__0)));
    __VdfgTmp_h767b5817__0 = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                    & ((IData)(vlSelf->__VdfgTmp_ha7cf127c__0) 
                                       >> 1U)));
    __VdfgTmp_h76b63760__0 = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                    & ((IData)(vlSelf->__VdfgTmp_ha7cf127c__0) 
                                       >> 2U)));
    __VdfgTmp_h76ba78fd__0 = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                    & ((IData)(vlSelf->__VdfgTmp_ha7cf127c__0) 
                                       >> 3U)));
    __VdfgTmp_h76e7a6e1__0 = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                    & ((IData)(vlSelf->__VdfgTmp_ha7cf127c__0) 
                                       >> 4U)));
    __VdfgTmp_h76ebd694__0 = (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                      & ((IData)(vlSelf->__VdfgTmp_ha7cf127c__0) 
                                         >> 5U)));
    PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c349387__0 
        = ((5U == (IData)(vlSelf->io_op)) & ((IData)(vlSelf->__VdfgTmp_h2a2fbaba__0) 
                                             >> 7U));
    if (__VdfgTmp_h76ebd694__0) {
        PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2 
            = (0x1ffffffffffffffULL & (vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                                       >> 0x20U));
        PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_4_T_2 
            = (0x1ffffffffffffffULL & (vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                                       << 0x20U));
    } else {
        PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2 
            = (0x1ffffffffffffffULL & vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i);
        PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_4_T_2 
            = (0x1ffffffffffffffULL & vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i);
    }
    vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c349387__0)
                      ? ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                         ? (~ ((IData)(vlSelf->__VdfgTmp_h2a2fbaba__0) 
                                               >> 2U))
                                         : 0x1fU)) : 
                     ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                      ? ((IData)(vlSelf->__VdfgTmp_h2a2fbaba__0) 
                                         >> 2U) : 0U))) 
                    - (IData)(2U)));
    if (__VdfgTmp_h76e7a6e1__0) {
        PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2 
            = (0x1ffffffffffffffULL & (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2 
                                       >> 0x10U));
        PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_3_T_2 
            = (0x1ffffffffffffffULL & (PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_4_T_2 
                                       << 0x10U));
    } else {
        PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2 
            = (0x1ffffffffffffffULL & PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2);
        PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_3_T_2 
            = (0x1ffffffffffffffULL & PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_4_T_2);
    }
    if (__VdfgTmp_h76ba78fd__0) {
        PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2 
            = (0x1ffffffffffffffULL & (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2 
                                       >> 8U));
        PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_2_T_2 
            = (0x1ffffffffffffffULL & (PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_3_T_2 
                                       << 8U));
    } else {
        PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2 
            = (0x1ffffffffffffffULL & PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2);
        PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_2_T_2 
            = (0x1ffffffffffffffULL & PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_3_T_2);
    }
    if (__VdfgTmp_h76b63760__0) {
        PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2 
            = (0x1ffffffffffffffULL & (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2 
                                       >> 4U));
        PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_1_T_2 
            = (0x1ffffffffffffffULL & (PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_2_T_2 
                                       << 4U));
    } else {
        PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2 
            = (0x1ffffffffffffffULL & PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2);
        PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_1_T_2 
            = (0x1ffffffffffffffULL & PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_2_T_2);
    }
    if (__VdfgTmp_h767b5817__0) {
        vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
            = (0x1ffffffffffffffULL & (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2 
                                       >> 2U));
        vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2 
            = (0x1ffffffffffffffULL & (PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_1_T_2 
                                       << 2U));
    } else {
        vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
            = (0x1ffffffffffffffULL & PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2);
        vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2 
            = (0x1ffffffffffffffULL & PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_1_T_2);
    }
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
        = (0x3fffffffffffffULL & (((IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                   & (4U > (0x3fU & 
                                            vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])))
                                   ? (0x1ffffffffffffffULL 
                                      & ((IData)(vlSelf->__VdfgTmp_h758fe8fa__0)
                                          ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
                                             >> 1U)
                                          : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2))
                                   : (0x1ffffffffffffffULL 
                                      & ((IData)(vlSelf->__VdfgTmp_h758fe8fa__0)
                                          ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2 
                                             << 1U)
                                          : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2))));
    vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSelf->io_op))
                                      ? (3U & (IData)(vlSelf->__VdfgTmp_h2a2fbaba__0))
                                      : 0U))) << 0x39U) 
                   | ((QData)((IData)(((5U == (IData)(vlSelf->io_op))
                                        ? ((0x7fffffeU 
                                            & ((IData)(
                                                       (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                        >> 0x1bU)) 
                                               << 1U)) 
                                           | (0U != 
                                              (0x3ffffffU 
                                               & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))
                                        : 0U))) << 0x1eU)));
    vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((5U 
                                                                           == (IData)(vlSelf->io_op))
                                                                           ? 
                                                                          (3U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h2a2fbaba__0))
                                                                           : 0U))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(
                                                                           ((5U 
                                                                             == (IData)(vlSelf->io_op))
                                                                             ? 
                                                                            ((0x7fffffeU 
                                                                              & ((IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                                                >> 0x1bU)) 
                                                                                << 1U)) 
                                                                             | (0U 
                                                                                != 
                                                                                (0x3ffffffU 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))
                                                                             : 0U))) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hf34d21c1__0, vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hf34d21c1__0[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hf34d21c1__0[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hf34d21c1__0[2U]);
    } else {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd60c6902__0, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hd60c6902__0[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hd60c6902__0[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hd60c6902__0[2U]);
    } else {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h266f8086__0, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h266f8086__0[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h266f8086__0[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h266f8086__0[2U]);
    } else {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h5391c0d0__0, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h5391c0d0__0[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h5391c0d0__0[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h5391c0d0__0[2U]);
    } else {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hccaee320__0, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_hccaee320__0[0U];
        vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_hccaee320__0[1U];
        vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hccaee320__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->io_posit_dot_o = ((5U == (IData)(vlSelf->io_op))
                               ? (0x7fffffffU & (((
                                                   vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[1U] 
                                                   << 2U) 
                                                  | (vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
                                                     >> 0x1eU)) 
                                                 + 
                                                 (1U 
                                                  & ((vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
                                                      >> 0x1dU) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0x5fffffffU 
                                                                 & vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U])))))))
                               : 0U);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__22(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__22\n"); );
    // Init
    QData/*63:0*/ PvuTop__DOT___GEN_7;
    PvuTop__DOT___GEN_7 = 0;
    // Body
    PvuTop__DOT___GEN_7 = (((QData)((IData)(((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
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
    vlSelf->__VdfgTmp_h80ce342d__0 = (0xffU & (((1U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_max_exp) 
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
                                                   ? (IData)(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_max_exp)
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_max_exp)))
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
                                                         (PvuTop__DOT___GEN_7 
                                                          >> 
                                                          (0x3fU 
                                                           & ((IData)(vlSelf->io_op) 
                                                              << 3U))))));
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c349387__0 
        = ((5U != (IData)(vlSelf->io_op)) & ((IData)(vlSelf->__VdfgTmp_h80ce342d__0) 
                                             >> 7U));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0x1fU & (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c349387__0)
                      ? ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                         ? 0x1fU : 
                                        (~ ((IData)(vlSelf->__VdfgTmp_h80ce342d__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                         ? 0U : ((IData)(vlSelf->__VdfgTmp_h80ce342d__0) 
                                                 >> 2U)))) 
                    - (IData)(2U)));
}

void VPvuTop___024root___ico_sequent__TOP__0(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__0(VPvuTop___024root* vlSelf);
void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__0(VPvuTop_Mul* vlSelf);
void VPvuTop___024root___ico_comb__TOP__1(VPvuTop___024root* vlSelf);
void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__1(VPvuTop_Mul* vlSelf);
void VPvuTop___024root___ico_comb__TOP__2(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__3(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__4(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__5(VPvuTop___024root* vlSelf);
void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__2(VPvuTop_Mul* vlSelf);
void VPvuTop___024root___ico_comb__TOP__6(VPvuTop___024root* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__0(VPvuTop_CsaTree_9* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__0(VPvuTop_CsaTree_9* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__0(VPvuTop_CsaTree_9* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__3(VPvuTop_Mul* vlSelf);
void VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__1(VPvuTop_CsaTree_9* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__4(VPvuTop_Mul* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__compressor__0(VPvuTop_Compressor4to2_6* vlSelf);
void VPvuTop___024root___ico_comb__TOP__11(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__12(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__13(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__14(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__15(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__16(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__17(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__18(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__19(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__20(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__23(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__24(VPvuTop___024root* vlSelf);

void VPvuTop___024root___eval_ico(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VPvuTop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U))) {
        VPvuTop___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(6U))) {
        VPvuTop___024root___ico_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__1((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__1((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
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
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
         | vlSelf->__VicoTriggered.at(6U))) {
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__2((&vlSymsp->TOP__PvuTop__DOT__mul));
        vlSelf->__Vm_traceActivity[6U] = 1U;
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__2((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop___024root___ico_comb__TOP__6(vlSelf);
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__csa_tree_B__DOT__compressor));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__csa_tree_B__DOT__compressor));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__3((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__3((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__1((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A));
        VPvuTop___024root___ico_comb__TOP__7(vlSelf);
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__1((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__1((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__4((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__4((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop___024root___ico_comb__TOP__8(vlSelf);
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop___024root___ico_comb__TOP__9(vlSelf);
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__compressor));
        VPvuTop___024root___ico_comb__TOP__10(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0xaU))) {
        VPvuTop___024root___ico_comb__TOP__11(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(9U))) {
        VPvuTop___024root___ico_comb__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0xcU))) {
        VPvuTop___024root___ico_comb__TOP__13(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0xbU))) {
        VPvuTop___024root___ico_comb__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0xeU))) {
        VPvuTop___024root___ico_comb__TOP__15(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0xdU))) {
        VPvuTop___024root___ico_comb__TOP__16(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(8U))) {
        VPvuTop___024root___ico_comb__TOP__17(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(7U))) {
        VPvuTop___024root___ico_comb__TOP__18(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0x10U))) {
        VPvuTop___024root___ico_comb__TOP__19(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0xfU))) {
        VPvuTop___024root___ico_comb__TOP__20(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if (((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
           | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(7U)) 
         | vlSelf->__VicoTriggered.at(8U))) {
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
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VPvuTop___024root___ico_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__1((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__1((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
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
    if ((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U))) {
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__2((&vlSymsp->TOP__PvuTop__DOT__mul));
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__2((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop___024root___ico_comb__TOP__6(vlSelf);
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__csa_tree_B__DOT__compressor));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__csa_tree_B__DOT__compressor));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__3((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__3((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__1((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A));
        VPvuTop___024root___ico_comb__TOP__7(vlSelf);
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__1((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A));
        VPvuTop_CsaTree_9___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__1((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__4((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__4((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
        VPvuTop___024root___ico_comb__TOP__8(vlSelf);
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__radix4BoothMultiplier__DOT__csaTree__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop___024root___ico_comb__TOP__9(vlSelf);
        VPvuTop_Compressor4to2_6___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__compressor));
        VPvuTop___024root___ico_comb__TOP__10(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(9U))) {
        VPvuTop___024root___ico_comb__TOP__11(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(8U))) {
        VPvuTop___024root___ico_comb__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(0xbU))) {
        VPvuTop___024root___ico_comb__TOP__13(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(0xaU))) {
        VPvuTop___024root___ico_comb__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(0xdU))) {
        VPvuTop___024root___ico_comb__TOP__15(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(0xcU))) {
        VPvuTop___024root___ico_comb__TOP__16(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(7U))) {
        VPvuTop___024root___ico_comb__TOP__17(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(6U))) {
        VPvuTop___024root___ico_comb__TOP__18(vlSelf);
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(0xfU))) {
        VPvuTop___024root___ico_comb__TOP__19(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(0xeU))) {
        VPvuTop___024root___ico_comb__TOP__20(vlSelf);
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
    }
    if ((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
          | vlSelf->__VactTriggered.at(6U)) | vlSelf->__VactTriggered.at(7U))) {
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
    VlWide<4>/*127:0*/ __Vtemp_h08d07c3e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd8741e99__0;
    VlWide<4>/*127:0*/ __Vtemp_h74301090__0;
    VlWide<4>/*127:0*/ __Vtemp_h1fbd69ea__0;
    VlWide<4>/*127:0*/ __Vtemp_hebcc7e04__0;
    VlWide<4>/*127:0*/ __Vtemp_h00031757__0;
    VlWide<4>/*127:0*/ __Vtemp_h6c981dd3__0;
    VlWide<4>/*127:0*/ __Vtemp_h92e4f7d7__0;
    VlWide<4>/*127:0*/ __Vtemp_hbde96bd0__0;
    VlWide<4>/*127:0*/ __Vtemp_hcb6fdd46__0;
    VlWide<4>/*127:0*/ __Vtemp_h51de944c__0;
    VlWide<4>/*127:0*/ __Vtemp_hafa27663__0;
    VlWide<4>/*127:0*/ __Vtemp_h78174d20__0;
    VlWide<4>/*127:0*/ __Vtemp_hb711c11a__0;
    VlWide<4>/*127:0*/ __Vtemp_hcc7b9a5c__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1f3a9d7__0;
    VlWide<4>/*127:0*/ __Vtemp_hddd6ae1a__0;
    VlWide<4>/*127:0*/ __Vtemp_h01bd96b6__0;
    VlWide<4>/*127:0*/ __Vtemp_h01da44c6__0;
    VlWide<4>/*127:0*/ __Vtemp_h56771d60__0;
    VlWide<4>/*127:0*/ __Vtemp_h63a4247b__0;
    VlWide<4>/*127:0*/ __Vtemp_h545749c6__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a4274a3__0;
    VlWide<4>/*127:0*/ __Vtemp_h3fc3d238__0;
    VlWide<4>/*127:0*/ __Vtemp_hf602c8ba__0;
    VlWide<4>/*127:0*/ __Vtemp_hac706793__0;
    VlWide<4>/*127:0*/ __Vtemp_h0eea8c52__0;
    VlWide<4>/*127:0*/ __Vtemp_h057e88fe__0;
    VlWide<4>/*127:0*/ __Vtemp_h857cf09c__0;
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"pir_frac_i = %b\n",
                   30,vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"pir_frac_i = %b\n",
                   30,vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"pir_frac_i = %b\n",
                   56,vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"pir_frac_i = %b\n",
                   56,vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Module Radix4BoothMultiplier\na: %b\nb: %b\n",
                   56,((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                       << 0x1cU),56,(0xffffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U])) 
                                              >> 0x1cU)))));
        __Vtemp_h08d07c3e__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0U];
        __Vtemp_h08d07c3e__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[1U];
        __Vtemp_h08d07c3e__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[2U];
        __Vtemp_h08d07c3e__0[3U] = (0xffffU & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[3U]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[0] = %b\n",
                   112,__Vtemp_h08d07c3e__0.data());
        __Vtemp_hd8741e99__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[4U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[3U] 
                                                  >> 0x10U));
        __Vtemp_hd8741e99__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[5U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[4U] 
                                                  >> 0x10U));
        __Vtemp_hd8741e99__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[6U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[5U] 
                                                  >> 0x10U));
        __Vtemp_hd8741e99__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[6U] 
                                    >> 0x10U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[1] = %b\n",
                   112,__Vtemp_hd8741e99__0.data());
        __Vtemp_h74301090__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[7U];
        __Vtemp_h74301090__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[8U];
        __Vtemp_h74301090__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[9U];
        __Vtemp_h74301090__0[3U] = (0xffffU & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0xaU]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[2] = %b\n",
                   112,__Vtemp_h74301090__0.data());
        __Vtemp_h1fbd69ea__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0xbU] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0xaU] 
                                                  >> 0x10U));
        __Vtemp_h1fbd69ea__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0xcU] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0xbU] 
                                                  >> 0x10U));
        __Vtemp_h1fbd69ea__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0xdU] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0xcU] 
                                                  >> 0x10U));
        __Vtemp_h1fbd69ea__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0xdU] 
                                    >> 0x10U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[3] = %b\n",
                   112,__Vtemp_h1fbd69ea__0.data());
        __Vtemp_hebcc7e04__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0xeU];
        __Vtemp_hebcc7e04__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0xfU];
        __Vtemp_hebcc7e04__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x10U];
        __Vtemp_hebcc7e04__0[3U] = (0xffffU & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x11U]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[4] = %b\n",
                   112,__Vtemp_hebcc7e04__0.data());
        __Vtemp_h00031757__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x12U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x11U] 
                                                  >> 0x10U));
        __Vtemp_h00031757__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x13U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x12U] 
                                                  >> 0x10U));
        __Vtemp_h00031757__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x14U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x13U] 
                                                  >> 0x10U));
        __Vtemp_h00031757__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x14U] 
                                    >> 0x10U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[5] = %b\n",
                   112,__Vtemp_h00031757__0.data());
        __Vtemp_h6c981dd3__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x15U];
        __Vtemp_h6c981dd3__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x16U];
        __Vtemp_h6c981dd3__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x17U];
        __Vtemp_h6c981dd3__0[3U] = (0xffffU & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x18U]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[6] = %b\n",
                   112,__Vtemp_h6c981dd3__0.data());
        __Vtemp_h92e4f7d7__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x19U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x18U] 
                                                  >> 0x10U));
        __Vtemp_h92e4f7d7__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1aU] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x19U] 
                                                  >> 0x10U));
        __Vtemp_h92e4f7d7__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1bU] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1aU] 
                                                  >> 0x10U));
        __Vtemp_h92e4f7d7__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1bU] 
                                    >> 0x10U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[7] = %b\n",
                   112,__Vtemp_h92e4f7d7__0.data());
        __Vtemp_hbde96bd0__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1cU];
        __Vtemp_hbde96bd0__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1dU];
        __Vtemp_hbde96bd0__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1eU];
        __Vtemp_hbde96bd0__0[3U] = (0xffffU & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1fU]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[ 8] = %b\n",
                   112,__Vtemp_hbde96bd0__0.data());
        __Vtemp_hcb6fdd46__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x20U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x1fU] 
                                                  >> 0x10U));
        __Vtemp_hcb6fdd46__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x21U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x20U] 
                                                  >> 0x10U));
        __Vtemp_hcb6fdd46__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x22U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x21U] 
                                                  >> 0x10U));
        __Vtemp_hcb6fdd46__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x22U] 
                                    >> 0x10U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[ 9] = %b\n",
                   112,__Vtemp_hcb6fdd46__0.data());
        __Vtemp_h51de944c__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x23U];
        __Vtemp_h51de944c__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x24U];
        __Vtemp_h51de944c__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x25U];
        __Vtemp_h51de944c__0[3U] = (0xffffU & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x26U]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[10] = %b\n",
                   112,__Vtemp_h51de944c__0.data());
        __Vtemp_hafa27663__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x27U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x26U] 
                                                  >> 0x10U));
        __Vtemp_hafa27663__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x28U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x27U] 
                                                  >> 0x10U));
        __Vtemp_hafa27663__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x29U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x28U] 
                                                  >> 0x10U));
        __Vtemp_hafa27663__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x29U] 
                                    >> 0x10U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[11] = %b\n",
                   112,__Vtemp_hafa27663__0.data());
        __Vtemp_h78174d20__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x2aU];
        __Vtemp_h78174d20__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x2bU];
        __Vtemp_h78174d20__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x2cU];
        __Vtemp_h78174d20__0[3U] = (0xffffU & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x2dU]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[12] = %b\n",
                   112,__Vtemp_h78174d20__0.data());
        __Vtemp_hb711c11a__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x2eU] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x2dU] 
                                                  >> 0x10U));
        __Vtemp_hb711c11a__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x2fU] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x2eU] 
                                                  >> 0x10U));
        __Vtemp_hb711c11a__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x30U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x2fU] 
                                                  >> 0x10U));
        __Vtemp_hb711c11a__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x30U] 
                                    >> 0x10U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[13] = %b\n",
                   112,__Vtemp_hb711c11a__0.data());
        __Vtemp_hcc7b9a5c__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x31U];
        __Vtemp_hcc7b9a5c__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x32U];
        __Vtemp_hcc7b9a5c__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x33U];
        __Vtemp_hcc7b9a5c__0[3U] = (0xffffU & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x34U]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[14] = %b\n",
                   112,__Vtemp_hcc7b9a5c__0.data());
        __Vtemp_hf1f3a9d7__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x35U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x34U] 
                                                  >> 0x10U));
        __Vtemp_hf1f3a9d7__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x36U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x35U] 
                                                  >> 0x10U));
        __Vtemp_hf1f3a9d7__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x37U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x36U] 
                                                  >> 0x10U));
        __Vtemp_hf1f3a9d7__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x37U] 
                                    >> 0x10U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[15] = %b\n",
                   112,__Vtemp_hf1f3a9d7__0.data());
        __Vtemp_hddd6ae1a__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x38U];
        __Vtemp_hddd6ae1a__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x39U];
        __Vtemp_hddd6ae1a__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3aU];
        __Vtemp_hddd6ae1a__0[3U] = (0xffffU & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3bU]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[16] = %b\n",
                   112,__Vtemp_hddd6ae1a__0.data());
        __Vtemp_h01bd96b6__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3cU] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3bU] 
                                                  >> 0x10U));
        __Vtemp_h01bd96b6__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3dU] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3cU] 
                                                  >> 0x10U));
        __Vtemp_h01bd96b6__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3eU] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3dU] 
                                                  >> 0x10U));
        __Vtemp_h01bd96b6__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3eU] 
                                    >> 0x10U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[17] = %b\n",
                   112,__Vtemp_h01bd96b6__0.data());
        __Vtemp_h01da44c6__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x3fU];
        __Vtemp_h01da44c6__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x40U];
        __Vtemp_h01da44c6__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x41U];
        __Vtemp_h01da44c6__0[3U] = (0xffffU & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x42U]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[18] = %b\n",
                   112,__Vtemp_h01da44c6__0.data());
        __Vtemp_h56771d60__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x43U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x42U] 
                                                  >> 0x10U));
        __Vtemp_h56771d60__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x44U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x43U] 
                                                  >> 0x10U));
        __Vtemp_h56771d60__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x45U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x44U] 
                                                  >> 0x10U));
        __Vtemp_h56771d60__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x45U] 
                                    >> 0x10U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[19] = %b\n",
                   112,__Vtemp_h56771d60__0.data());
        __Vtemp_h63a4247b__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x46U];
        __Vtemp_h63a4247b__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x47U];
        __Vtemp_h63a4247b__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x48U];
        __Vtemp_h63a4247b__0[3U] = (0xffffU & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x49U]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[20] = %b\n",
                   112,__Vtemp_h63a4247b__0.data());
        __Vtemp_h545749c6__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x4aU] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x49U] 
                                                  >> 0x10U));
        __Vtemp_h545749c6__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x4bU] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x4aU] 
                                                  >> 0x10U));
        __Vtemp_h545749c6__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x4cU] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x4bU] 
                                                  >> 0x10U));
        __Vtemp_h545749c6__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x4cU] 
                                    >> 0x10U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[21] = %b\n",
                   112,__Vtemp_h545749c6__0.data());
        __Vtemp_h8a4274a3__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x4dU];
        __Vtemp_h8a4274a3__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x4eU];
        __Vtemp_h8a4274a3__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x4fU];
        __Vtemp_h8a4274a3__0[3U] = (0xffffU & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x50U]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[22] = %b\n",
                   112,__Vtemp_h8a4274a3__0.data());
        __Vtemp_h3fc3d238__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x51U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x50U] 
                                                  >> 0x10U));
        __Vtemp_h3fc3d238__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x52U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x51U] 
                                                  >> 0x10U));
        __Vtemp_h3fc3d238__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x53U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x52U] 
                                                  >> 0x10U));
        __Vtemp_h3fc3d238__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x53U] 
                                    >> 0x10U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[23] = %b\n",
                   112,__Vtemp_h3fc3d238__0.data());
        __Vtemp_hf602c8ba__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x54U];
        __Vtemp_hf602c8ba__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x55U];
        __Vtemp_hf602c8ba__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x56U];
        __Vtemp_hf602c8ba__0[3U] = (0xffffU & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x57U]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[24] = %b\n",
                   112,__Vtemp_hf602c8ba__0.data());
        __Vtemp_hac706793__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x58U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x57U] 
                                                  >> 0x10U));
        __Vtemp_hac706793__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x59U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x58U] 
                                                  >> 0x10U));
        __Vtemp_hac706793__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x5aU] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x59U] 
                                                  >> 0x10U));
        __Vtemp_hac706793__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x5aU] 
                                    >> 0x10U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[25] = %b\n",
                   112,__Vtemp_hac706793__0.data());
        __Vtemp_h0eea8c52__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x5bU];
        __Vtemp_h0eea8c52__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x5cU];
        __Vtemp_h0eea8c52__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x5dU];
        __Vtemp_h0eea8c52__0[3U] = (0xffffU & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x5eU]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[26] = %b\n",
                   112,__Vtemp_h0eea8c52__0.data());
        __Vtemp_h057e88fe__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x5fU] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x5eU] 
                                                  >> 0x10U));
        __Vtemp_h057e88fe__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x60U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x5fU] 
                                                  >> 0x10U));
        __Vtemp_h057e88fe__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x61U] 
                                     << 0x10U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x60U] 
                                                  >> 0x10U));
        __Vtemp_h057e88fe__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x61U] 
                                    >> 0x10U);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[27] = %b\n",
                   112,__Vtemp_h057e88fe__0.data());
        __Vtemp_h857cf09c__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x62U];
        __Vtemp_h857cf09c__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x63U];
        __Vtemp_h857cf09c__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x64U];
        __Vtemp_h857cf09c__0[3U] = (0xffffU & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods[0x65U]);
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[28] = %b\nsum_o = %b\ncarry_o = %b\n",
                   112,__Vtemp_h857cf09c__0.data(),
                   112,vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__compressor.io_sum_o.data(),
                   112,vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__compressor.io_carry_o.data());
    }
}

void VPvuTop_Mul___nba_sequent__TOP__PvuTop__DOT__mul__0(VPvuTop_Mul* vlSelf);

void VPvuTop___024root___eval_nba(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0x10U)) {
        VPvuTop___024root___nba_sequent__TOP__0(vlSelf);
        VPvuTop_Mul___nba_sequent__TOP__PvuTop__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop_Mul___nba_sequent__TOP__PvuTop__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
    }
}
