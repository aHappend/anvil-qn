// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_dual_think_ctrl.h for the primary calling header

#include "Vanvil_qn1_dual_think_ctrl__pch.h"
#include "Vanvil_qn1_dual_think_ctrl___024root.h"

VL_INLINE_OPT void Vanvil_qn1_dual_think_ctrl___024root___ico_sequent__TOP__0(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ anvil_qn1_dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0;
    anvil_qn1_dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0 = 0;
    // Body
    if (vlSelf->rst_n) {
        vlSelf->think_active = vlSelf->anvil_qn1_dual_think_ctrl__DOT__thinking;
        vlSelf->event_draft_nodes = vlSelf->anvil_qn1_dual_think_ctrl__DOT__draft_event;
        vlSelf->event_verified_nodes = vlSelf->anvil_qn1_dual_think_ctrl__DOT__verified_event;
        vlSelf->event_accepted_nodes = vlSelf->anvil_qn1_dual_think_ctrl__DOT__accepted_event;
        vlSelf->event_rejected_nodes = vlSelf->anvil_qn1_dual_think_ctrl__DOT__rejected_event;
    } else {
        vlSelf->think_active = 0U;
        vlSelf->event_draft_nodes = 0U;
        vlSelf->event_verified_nodes = 0U;
        vlSelf->event_accepted_nodes = 0U;
        vlSelf->event_rejected_nodes = 0U;
    }
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths[0U] 
        = (((0U < (IData)(vlSelf->draft_count)) & (4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->draft_parents))))
            ? 1U : 0U);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__protocol_fault 
        = ((~ (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__response_expected)) 
           & (IData)(vlSelf->verify_rsp_valid));
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__active 
        = ((~ ((IData)(vlSelf->cancel) | (IData)(vlSelf->flush))) 
           & (IData)(vlSelf->rst_n));
    vlSelf->busy = ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__active) 
                    & (0U != (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state)));
    vlSelf->done = ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__active) 
                    & (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__done_reg));
    vlSelf->draft_ready = ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__active) 
                           & (4U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state)));
    vlSelf->error = ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__active) 
                     & ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__error_reg) 
                        | (0xbU == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))));
    vlSelf->start_ready = ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__active) 
                           & ((~ ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__done_reg) 
                                  | (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__error_reg))) 
                              & (0U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))));
    vlSelf->verify_rsp_ready = ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__active) 
                                & (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__response_expected));
    anvil_qn1_dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0 
        = ((~ (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__protocol_fault)) 
           & (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__active));
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__response_transfer 
        = ((IData)(vlSelf->verify_rsp_valid) & (IData)(vlSelf->verify_rsp_ready));
    vlSelf->verify_valid = ((IData)(anvil_qn1_dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0) 
                            & ((1U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state)) 
                               | (6U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))));
    vlSelf->commit_valid = ((IData)(anvil_qn1_dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0) 
                            & (9U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state)));
    if (vlSelf->verify_valid) {
        vlSelf->verify_parent = vlSelf->anvil_qn1_dual_think_ctrl__DOT__request_parent;
        vlSelf->verify_pos = vlSelf->anvil_qn1_dual_think_ctrl__DOT__request_position;
    } else {
        vlSelf->verify_parent = 0U;
        vlSelf->verify_pos = 0U;
    }
    if (vlSelf->commit_valid) {
        vlSelf->commit_count = vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count;
        vlSelf->commit_tokens[0U] = vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[0U];
        vlSelf->commit_tokens[1U] = vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[1U];
        vlSelf->commit_tokens[2U] = vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[2U];
        vlSelf->commit_tokens[3U] = vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[3U];
        vlSelf->commit_tokens[4U] = vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[4U];
        vlSelf->commit_pos = ((IData)(1U) + vlSelf->anvil_qn1_dual_think_ctrl__DOT__position);
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__publication 
            = vlSelf->commit_ready;
    } else {
        vlSelf->commit_count = 0U;
        vlSelf->commit_tokens[0U] = 0U;
        vlSelf->commit_tokens[1U] = 0U;
        vlSelf->commit_tokens[2U] = 0U;
        vlSelf->commit_tokens[3U] = 0U;
        vlSelf->commit_tokens[4U] = 0U;
        vlSelf->commit_pos = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__publication = 0U;
    }
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_open = 0U;
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_close = 0U;
    if (vlSelf->anvil_qn1_dual_think_ctrl__DOT__publication) {
        if ((0U < (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[0U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[0U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((1U < (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[1U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[1U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((2U < (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[2U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[2U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((3U < (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[3U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[3U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((4U < (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[4U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[4U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vanvil_qn1_dual_think_ctrl___024root___ico_comb__TOP__0(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___ico_comb__TOP__0\n"); );
    // Body
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths[1U] 
        = ((1U >= (IData)(vlSelf->draft_count)) ? 0U
            : ((4U == (7U & ((IData)(vlSelf->draft_parents) 
                             >> 3U))) ? 1U : ((0U == 
                                               (7U 
                                                & ((IData)(vlSelf->draft_parents) 
                                                   >> 3U)))
                                               ? (7U 
                                                  & ((IData)(1U) 
                                                     + 
                                                     vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths
                                                     [0U]))
                                               : 0U)));
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths[2U] 
        = ((2U >= (IData)(vlSelf->draft_count)) ? 0U
            : ((4U == (7U & ((IData)(vlSelf->draft_parents) 
                             >> 6U))) ? 1U : (7U & 
                                              ((0U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->draft_parents) 
                                                    >> 6U)))
                                                ? ((IData)(1U) 
                                                   + 
                                                   vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths
                                                   [0U])
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->draft_parents) 
                                                        >> 6U)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths
                                                    [1U])
                                                    : 0U)))));
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths[3U] 
        = ((3U >= (IData)(vlSelf->draft_count)) ? 0U
            : ((4U == (7U & ((IData)(vlSelf->draft_parents) 
                             >> 9U))) ? 1U : (7U & 
                                              ((0U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->draft_parents) 
                                                    >> 9U)))
                                                ? ((IData)(1U) 
                                                   + 
                                                   vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths
                                                   [0U])
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->draft_parents) 
                                                        >> 9U)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths
                                                    [1U])
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->draft_parents) 
                                                         >> 9U)))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + 
                                                     vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths
                                                     [2U])
                                                     : 0U))))));
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed 
        = ((1U > (IData)(vlSelf->draft_count)) | (4U 
                                                  < (IData)(vlSelf->draft_count)));
    if ((0U < (IData)(vlSelf->draft_count))) {
        if ((0x25180U <= vlSelf->draft_tokens[0U])) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((4U != (7U & (IData)(vlSelf->draft_parents)))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((0x10ULL <= (0x1ffffffffULL & ((QData)((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__position)) 
                                           + (QData)((IData)(
                                                             vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths
                                                             [0U])))))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
    }
    if ((1U < (IData)(vlSelf->draft_count))) {
        if ((0x25180U <= vlSelf->draft_tokens[1U])) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if (((4U != (7U & ((IData)(vlSelf->draft_parents) 
                           >> 3U))) & (1U <= (7U & 
                                              ((IData)(vlSelf->draft_parents) 
                                               >> 3U))))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((0x10ULL <= (0x1ffffffffULL & ((QData)((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__position)) 
                                           + (QData)((IData)(
                                                             vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths
                                                             [1U])))))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((((7U & (IData)(vlSelf->draft_parents)) 
              == (7U & ((IData)(vlSelf->draft_parents) 
                        >> 3U))) & (vlSelf->draft_tokens[0U] 
                                    == vlSelf->draft_tokens[1U]))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
    }
    if ((2U < (IData)(vlSelf->draft_count))) {
        if ((0x25180U <= vlSelf->draft_tokens[2U])) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if (((4U != (7U & ((IData)(vlSelf->draft_parents) 
                           >> 6U))) & (2U <= (7U & 
                                              ((IData)(vlSelf->draft_parents) 
                                               >> 6U))))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((0x10ULL <= (0x1ffffffffULL & ((QData)((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__position)) 
                                           + (QData)((IData)(
                                                             vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths
                                                             [2U])))))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((((7U & (IData)(vlSelf->draft_parents)) 
              == (7U & ((IData)(vlSelf->draft_parents) 
                        >> 6U))) & (vlSelf->draft_tokens[0U] 
                                    == vlSelf->draft_tokens[2U]))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((((7U & ((IData)(vlSelf->draft_parents) 
                     >> 3U)) == (7U & ((IData)(vlSelf->draft_parents) 
                                       >> 6U))) & (
                                                   vlSelf->draft_tokens[1U] 
                                                   == 
                                                   vlSelf->draft_tokens[2U]))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
    }
    if ((3U < (IData)(vlSelf->draft_count))) {
        if ((0x25180U <= vlSelf->draft_tokens[3U])) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if (((4U != (7U & ((IData)(vlSelf->draft_parents) 
                           >> 9U))) & (3U <= (7U & 
                                              ((IData)(vlSelf->draft_parents) 
                                               >> 9U))))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((0x10ULL <= (0x1ffffffffULL & ((QData)((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__position)) 
                                           + (QData)((IData)(
                                                             vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths
                                                             [3U])))))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((((7U & (IData)(vlSelf->draft_parents)) 
              == (7U & ((IData)(vlSelf->draft_parents) 
                        >> 9U))) & (vlSelf->draft_tokens[0U] 
                                    == vlSelf->draft_tokens[3U]))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((((7U & ((IData)(vlSelf->draft_parents) 
                     >> 3U)) == (7U & ((IData)(vlSelf->draft_parents) 
                                       >> 9U))) & (
                                                   vlSelf->draft_tokens[1U] 
                                                   == 
                                                   vlSelf->draft_tokens[3U]))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((((7U & ((IData)(vlSelf->draft_parents) 
                     >> 6U)) == (7U & ((IData)(vlSelf->draft_parents) 
                                       >> 9U))) & (
                                                   vlSelf->draft_tokens[2U] 
                                                   == 
                                                   vlSelf->draft_tokens[3U]))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
    }
}

void Vanvil_qn1_dual_think_ctrl___024root___eval_ico(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vanvil_qn1_dual_think_ctrl___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vanvil_qn1_dual_think_ctrl___024root___ico_comb__TOP__0(vlSelf);
    }
}

void Vanvil_qn1_dual_think_ctrl___024root___eval_triggers__ico(Vanvil_qn1_dual_think_ctrl___024root* vlSelf);

bool Vanvil_qn1_dual_think_ctrl___024root___eval_phase__ico(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vanvil_qn1_dual_think_ctrl___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vanvil_qn1_dual_think_ctrl___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vanvil_qn1_dual_think_ctrl___024root___eval_act(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vanvil_qn1_dual_think_ctrl___024root___ico_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vanvil_qn1_dual_think_ctrl___024root___nba_sequent__TOP__0(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__anvil_qn1_dual_think_ctrl__DOT__thinking;
    __Vdly__anvil_qn1_dual_think_ctrl__DOT__thinking = 0;
    CData/*3:0*/ __Vdly__anvil_qn1_dual_think_ctrl__DOT__state;
    __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 0;
    CData/*2:0*/ __Vdly__anvil_qn1_dual_think_ctrl__DOT__node_count;
    __Vdly__anvil_qn1_dual_think_ctrl__DOT__node_count = 0;
    CData/*2:0*/ __Vdly__anvil_qn1_dual_think_ctrl__DOT__generated_count;
    __Vdly__anvil_qn1_dual_think_ctrl__DOT__generated_count = 0;
    CData/*2:0*/ __Vdly__anvil_qn1_dual_think_ctrl__DOT__accepted_count;
    __Vdly__anvil_qn1_dual_think_ctrl__DOT__accepted_count = 0;
    IData/*31:0*/ __Vdly__anvil_qn1_dual_think_ctrl__DOT__target;
    __Vdly__anvil_qn1_dual_think_ctrl__DOT__target = 0;
    // Body
    __Vdly__anvil_qn1_dual_think_ctrl__DOT__thinking 
        = vlSelf->anvil_qn1_dual_think_ctrl__DOT__thinking;
    __Vdly__anvil_qn1_dual_think_ctrl__DOT__accepted_count 
        = vlSelf->anvil_qn1_dual_think_ctrl__DOT__accepted_count;
    __Vdly__anvil_qn1_dual_think_ctrl__DOT__node_count 
        = vlSelf->anvil_qn1_dual_think_ctrl__DOT__node_count;
    __Vdly__anvil_qn1_dual_think_ctrl__DOT__generated_count 
        = vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count;
    __Vdly__anvil_qn1_dual_think_ctrl__DOT__target 
        = vlSelf->anvil_qn1_dual_think_ctrl__DOT__target;
    __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = vlSelf->anvil_qn1_dual_think_ctrl__DOT__state;
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->cancel) | (IData)(vlSelf->flush))) {
            __Vdly__anvil_qn1_dual_think_ctrl__DOT__thinking 
                = vlSelf->anvil_qn1_dual_think_ctrl__DOT__thinking;
            __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 0U;
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__tree_active = 0U;
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__done_reg = 0U;
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__error_reg = 0U;
            __Vdly__anvil_qn1_dual_think_ctrl__DOT__node_count = 0U;
            __Vdly__anvil_qn1_dual_think_ctrl__DOT__generated_count = 0U;
            __Vdly__anvil_qn1_dual_think_ctrl__DOT__accepted_count = 0U;
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[0U] = 0U;
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[1U] = 0U;
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[2U] = 0U;
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[3U] = 0U;
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[4U] = 0U;
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__draft_event = 0U;
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__verified_event = 0U;
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__accepted_event = 0U;
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__rejected_event = 0U;
        } else {
            if ((((IData)(vlSelf->observed_valid) & 
                  (0x25074U == vlSelf->observed_token)) 
                 | (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_close))) {
                __Vdly__anvil_qn1_dual_think_ctrl__DOT__thinking = 0U;
            } else if ((((IData)(vlSelf->observed_valid) 
                         & (0x25073U == vlSelf->observed_token)) 
                        | (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_open))) {
                __Vdly__anvil_qn1_dual_think_ctrl__DOT__thinking = 1U;
            } else if (((IData)(vlSelf->mode_valid) 
                        & (0U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state)))) {
                __Vdly__anvil_qn1_dual_think_ctrl__DOT__thinking 
                    = vlSelf->mode_value;
            }
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__done_reg = 0U;
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__error_reg = 0U;
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__draft_event = 0U;
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__verified_event = 0U;
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__accepted_event = 0U;
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__rejected_event = 0U;
            if (vlSelf->anvil_qn1_dual_think_ctrl__DOT__protocol_fault) {
                __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 0xbU;
            } else if (((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__response_transfer) 
                        & ((IData)(vlSelf->verify_error) 
                           | (0x25180U <= vlSelf->verify_argmax)))) {
                __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 0xbU;
            } else if (((((((((0U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state)) 
                              | (1U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))) 
                             | (2U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))) 
                            | (3U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))) 
                           | (4U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))) 
                          | (5U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))) 
                         | (6U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))) 
                        | (7U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state)))) {
                if ((0U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))) {
                    if (((IData)(vlSelf->start_valid) 
                         & (IData)(vlSelf->start_ready))) {
                        vlSelf->anvil_qn1_dual_think_ctrl__DOT__position 
                            = vlSelf->start_pos;
                        vlSelf->anvil_qn1_dual_think_ctrl__DOT__request_position 
                            = vlSelf->start_pos;
                        vlSelf->anvil_qn1_dual_think_ctrl__DOT__request_parent = 4U;
                        vlSelf->anvil_qn1_dual_think_ctrl__DOT__current_parent = 4U;
                        vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[0U] = 0U;
                        vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[1U] = 0U;
                        vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[2U] = 0U;
                        vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[3U] = 0U;
                        vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[4U] = 0U;
                        __Vdly__anvil_qn1_dual_think_ctrl__DOT__generated_count = 0U;
                        __Vdly__anvil_qn1_dual_think_ctrl__DOT__accepted_count = 0U;
                        __Vdly__anvil_qn1_dual_think_ctrl__DOT__node_count = 0U;
                        vlSelf->anvil_qn1_dual_think_ctrl__DOT__tree_active = 0U;
                        __Vdly__anvil_qn1_dual_think_ctrl__DOT__state 
                            = ((0xfU <= vlSelf->start_pos)
                                ? 0xbU : 1U);
                    }
                } else if ((1U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))) {
                    if (((IData)(vlSelf->verify_valid) 
                         & (IData)(vlSelf->verify_ready))) {
                        __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 2U;
                    }
                } else if ((2U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))) {
                    if (vlSelf->anvil_qn1_dual_think_ctrl__DOT__response_transfer) {
                        __Vdly__anvil_qn1_dual_think_ctrl__DOT__target 
                            = vlSelf->verify_argmax;
                        __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 3U;
                    }
                } else if ((3U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))) {
                    __Vdly__anvil_qn1_dual_think_ctrl__DOT__state 
                        = ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__thinking)
                            ? 4U : 5U);
                } else if ((4U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))) {
                    if (((IData)(vlSelf->draft_valid) 
                         & (IData)(vlSelf->draft_ready))) {
                        vlSelf->anvil_qn1_dual_think_ctrl__DOT__draft_event 
                            = vlSelf->draft_count;
                        if (vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed) {
                            __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 0xbU;
                        } else {
                            vlSelf->anvil_qn1_dual_think_ctrl__DOT__nodes[0U] 
                                = vlSelf->draft_tokens[0U];
                            vlSelf->anvil_qn1_dual_think_ctrl__DOT__nodes[1U] 
                                = vlSelf->draft_tokens[1U];
                            vlSelf->anvil_qn1_dual_think_ctrl__DOT__nodes[2U] 
                                = vlSelf->draft_tokens[2U];
                            vlSelf->anvil_qn1_dual_think_ctrl__DOT__nodes[3U] 
                                = vlSelf->draft_tokens[3U];
                            vlSelf->anvil_qn1_dual_think_ctrl__DOT__parents 
                                = vlSelf->draft_parents;
                            __Vdly__anvil_qn1_dual_think_ctrl__DOT__node_count 
                                = vlSelf->draft_count;
                            vlSelf->anvil_qn1_dual_think_ctrl__DOT__tree_active = 1U;
                            __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 5U;
                        }
                    }
                } else if ((5U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))) {
                    if (((5U <= (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count)) 
                         | (0x10ULL <= vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_position))) {
                        __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 0xbU;
                    } else {
                        vlSelf->anvil_qn1_dual_think_ctrl__DOT____Vlvbound_hc7327f26__0 
                            = vlSelf->anvil_qn1_dual_think_ctrl__DOT__target;
                        if (vlSelf->anvil_qn1_dual_think_ctrl__DOT__child_found) {
                            __Vdly__anvil_qn1_dual_think_ctrl__DOT__accepted_count 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__accepted_count)));
                        }
                        if ((0x9fU >= (0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count), 5U)))) {
                            VL_ASSIGNSEL_WI(160,32,
                                            (0xffU 
                                             & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count), 5U)), vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated, vlSelf->anvil_qn1_dual_think_ctrl__DOT____Vlvbound_hc7327f26__0);
                        }
                        if ((1U & (((~ (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__child_found)) 
                                    | (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__target_marker)) 
                                   | (0xfULL == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_position)))) {
                            __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 8U;
                        } else {
                            vlSelf->anvil_qn1_dual_think_ctrl__DOT__current_parent 
                                = vlSelf->anvil_qn1_dual_think_ctrl__DOT__matching_child;
                            vlSelf->anvil_qn1_dual_think_ctrl__DOT__request_parent 
                                = vlSelf->anvil_qn1_dual_think_ctrl__DOT__matching_child;
                            vlSelf->anvil_qn1_dual_think_ctrl__DOT__request_position 
                                = (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_position);
                            __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 6U;
                        }
                        __Vdly__anvil_qn1_dual_think_ctrl__DOT__generated_count 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count)));
                    }
                } else if ((6U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))) {
                    if (((IData)(vlSelf->verify_valid) 
                         & (IData)(vlSelf->verify_ready))) {
                        __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 7U;
                    }
                } else if (vlSelf->anvil_qn1_dual_think_ctrl__DOT__response_transfer) {
                    __Vdly__anvil_qn1_dual_think_ctrl__DOT__target 
                        = vlSelf->verify_argmax;
                    vlSelf->anvil_qn1_dual_think_ctrl__DOT__verified_event = 1U;
                    __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 5U;
                }
            } else if ((8U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))) {
                if (vlSelf->publish_ready) {
                    __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 9U;
                }
            } else if ((9U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))) {
                if (vlSelf->anvil_qn1_dual_think_ctrl__DOT__publication) {
                    vlSelf->anvil_qn1_dual_think_ctrl__DOT__accepted_event 
                        = vlSelf->anvil_qn1_dual_think_ctrl__DOT__accepted_count;
                    __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 0xaU;
                    vlSelf->anvil_qn1_dual_think_ctrl__DOT__rejected_event 
                        = (7U & ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__node_count) 
                                 - (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__accepted_count)));
                }
            } else if ((0xaU == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__done_reg = 1U;
                __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 0U;
            } else if ((0xbU == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__error_reg = 1U;
                __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 0U;
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[0U] = 0U;
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[1U] = 0U;
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[2U] = 0U;
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[3U] = 0U;
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[4U] = 0U;
                __Vdly__anvil_qn1_dual_think_ctrl__DOT__generated_count = 0U;
                __Vdly__anvil_qn1_dual_think_ctrl__DOT__node_count = 0U;
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__tree_active = 0U;
            } else {
                __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 0xbU;
            }
        }
        vlSelf->event_draft_nodes = vlSelf->anvil_qn1_dual_think_ctrl__DOT__draft_event;
        vlSelf->event_verified_nodes = vlSelf->anvil_qn1_dual_think_ctrl__DOT__verified_event;
        vlSelf->event_accepted_nodes = vlSelf->anvil_qn1_dual_think_ctrl__DOT__accepted_event;
        vlSelf->event_rejected_nodes = vlSelf->anvil_qn1_dual_think_ctrl__DOT__rejected_event;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__accepted_count 
            = __Vdly__anvil_qn1_dual_think_ctrl__DOT__accepted_count;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__thinking 
            = __Vdly__anvil_qn1_dual_think_ctrl__DOT__thinking;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__node_count 
            = __Vdly__anvil_qn1_dual_think_ctrl__DOT__node_count;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count 
            = __Vdly__anvil_qn1_dual_think_ctrl__DOT__generated_count;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__target 
            = __Vdly__anvil_qn1_dual_think_ctrl__DOT__target;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__state 
            = __Vdly__anvil_qn1_dual_think_ctrl__DOT__state;
        vlSelf->think_active = vlSelf->anvil_qn1_dual_think_ctrl__DOT__thinking;
    } else {
        __Vdly__anvil_qn1_dual_think_ctrl__DOT__thinking = 0U;
        __Vdly__anvil_qn1_dual_think_ctrl__DOT__state = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__tree_active = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__done_reg = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__error_reg = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__position = 0U;
        __Vdly__anvil_qn1_dual_think_ctrl__DOT__target = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__request_position = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__request_parent = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__current_parent = 4U;
        __Vdly__anvil_qn1_dual_think_ctrl__DOT__node_count = 0U;
        __Vdly__anvil_qn1_dual_think_ctrl__DOT__generated_count = 0U;
        __Vdly__anvil_qn1_dual_think_ctrl__DOT__accepted_count = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__nodes[0U] = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__nodes[1U] = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__nodes[2U] = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__nodes[3U] = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__parents = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[0U] = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[1U] = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[2U] = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[3U] = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[4U] = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__draft_event = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__verified_event = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__accepted_event = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__rejected_event = 0U;
        vlSelf->event_draft_nodes = 0U;
        vlSelf->event_verified_nodes = 0U;
        vlSelf->event_accepted_nodes = 0U;
        vlSelf->event_rejected_nodes = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__accepted_count 
            = __Vdly__anvil_qn1_dual_think_ctrl__DOT__accepted_count;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__thinking 
            = __Vdly__anvil_qn1_dual_think_ctrl__DOT__thinking;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__node_count 
            = __Vdly__anvil_qn1_dual_think_ctrl__DOT__node_count;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count 
            = __Vdly__anvil_qn1_dual_think_ctrl__DOT__generated_count;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__target 
            = __Vdly__anvil_qn1_dual_think_ctrl__DOT__target;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__state 
            = __Vdly__anvil_qn1_dual_think_ctrl__DOT__state;
        vlSelf->think_active = 0U;
    }
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed 
        = ((1U > (IData)(vlSelf->draft_count)) | (4U 
                                                  < (IData)(vlSelf->draft_count)));
    if ((0U < (IData)(vlSelf->draft_count))) {
        if ((0x25180U <= vlSelf->draft_tokens[0U])) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((4U != (7U & (IData)(vlSelf->draft_parents)))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((0x10ULL <= (0x1ffffffffULL & ((QData)((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__position)) 
                                           + (QData)((IData)(
                                                             vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths
                                                             [0U])))))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
    }
    if ((1U < (IData)(vlSelf->draft_count))) {
        if ((0x25180U <= vlSelf->draft_tokens[1U])) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if (((4U != (7U & ((IData)(vlSelf->draft_parents) 
                           >> 3U))) & (1U <= (7U & 
                                              ((IData)(vlSelf->draft_parents) 
                                               >> 3U))))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((0x10ULL <= (0x1ffffffffULL & ((QData)((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__position)) 
                                           + (QData)((IData)(
                                                             vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths
                                                             [1U])))))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((((7U & (IData)(vlSelf->draft_parents)) 
              == (7U & ((IData)(vlSelf->draft_parents) 
                        >> 3U))) & (vlSelf->draft_tokens[0U] 
                                    == vlSelf->draft_tokens[1U]))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
    }
    if ((2U < (IData)(vlSelf->draft_count))) {
        if ((0x25180U <= vlSelf->draft_tokens[2U])) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if (((4U != (7U & ((IData)(vlSelf->draft_parents) 
                           >> 6U))) & (2U <= (7U & 
                                              ((IData)(vlSelf->draft_parents) 
                                               >> 6U))))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((0x10ULL <= (0x1ffffffffULL & ((QData)((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__position)) 
                                           + (QData)((IData)(
                                                             vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths
                                                             [2U])))))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((((7U & (IData)(vlSelf->draft_parents)) 
              == (7U & ((IData)(vlSelf->draft_parents) 
                        >> 6U))) & (vlSelf->draft_tokens[0U] 
                                    == vlSelf->draft_tokens[2U]))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((((7U & ((IData)(vlSelf->draft_parents) 
                     >> 3U)) == (7U & ((IData)(vlSelf->draft_parents) 
                                       >> 6U))) & (
                                                   vlSelf->draft_tokens[1U] 
                                                   == 
                                                   vlSelf->draft_tokens[2U]))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
    }
    if ((3U < (IData)(vlSelf->draft_count))) {
        if ((0x25180U <= vlSelf->draft_tokens[3U])) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if (((4U != (7U & ((IData)(vlSelf->draft_parents) 
                           >> 9U))) & (3U <= (7U & 
                                              ((IData)(vlSelf->draft_parents) 
                                               >> 9U))))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((0x10ULL <= (0x1ffffffffULL & ((QData)((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__position)) 
                                           + (QData)((IData)(
                                                             vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths
                                                             [3U])))))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((((7U & (IData)(vlSelf->draft_parents)) 
              == (7U & ((IData)(vlSelf->draft_parents) 
                        >> 9U))) & (vlSelf->draft_tokens[0U] 
                                    == vlSelf->draft_tokens[3U]))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((((7U & ((IData)(vlSelf->draft_parents) 
                     >> 3U)) == (7U & ((IData)(vlSelf->draft_parents) 
                                       >> 9U))) & (
                                                   vlSelf->draft_tokens[1U] 
                                                   == 
                                                   vlSelf->draft_tokens[3U]))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
        if ((((7U & ((IData)(vlSelf->draft_parents) 
                     >> 6U)) == (7U & ((IData)(vlSelf->draft_parents) 
                                       >> 9U))) & (
                                                   vlSelf->draft_tokens[2U] 
                                                   == 
                                                   vlSelf->draft_tokens[3U]))) {
            vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = 1U;
        }
    }
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_position 
        = (0x1ffffffffULL & (1ULL + ((QData)((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__position)) 
                                     + (QData)((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count)))));
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__target_marker 
        = ((0x25073U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__target) 
           | (0x25074U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__target));
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__matching_child = 0U;
    if (((((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__tree_active) 
           & (0U < (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__node_count))) 
          & ((7U & (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__parents)) 
             == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->anvil_qn1_dual_think_ctrl__DOT__nodes[0U] 
            == vlSelf->anvil_qn1_dual_think_ctrl__DOT__target))) {
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__matching_child = 0U;
    }
    if (((((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__tree_active) 
           & (1U < (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__node_count))) 
          & ((7U & ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__parents) 
                    >> 3U)) == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->anvil_qn1_dual_think_ctrl__DOT__nodes[1U] 
            == vlSelf->anvil_qn1_dual_think_ctrl__DOT__target))) {
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__matching_child = 1U;
    }
    if (((((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__tree_active) 
           & (2U < (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__node_count))) 
          & ((7U & ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__parents) 
                    >> 6U)) == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->anvil_qn1_dual_think_ctrl__DOT__nodes[2U] 
            == vlSelf->anvil_qn1_dual_think_ctrl__DOT__target))) {
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__matching_child = 2U;
    }
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__child_found = 0U;
    if (((((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__tree_active) 
           & (0U < (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__node_count))) 
          & ((7U & (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__parents)) 
             == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->anvil_qn1_dual_think_ctrl__DOT__nodes[0U] 
            == vlSelf->anvil_qn1_dual_think_ctrl__DOT__target))) {
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__child_found = 1U;
    }
    if (((((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__tree_active) 
           & (1U < (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__node_count))) 
          & ((7U & ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__parents) 
                    >> 3U)) == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->anvil_qn1_dual_think_ctrl__DOT__nodes[1U] 
            == vlSelf->anvil_qn1_dual_think_ctrl__DOT__target))) {
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__child_found = 1U;
    }
    if (((((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__tree_active) 
           & (2U < (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__node_count))) 
          & ((7U & ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__parents) 
                    >> 6U)) == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->anvil_qn1_dual_think_ctrl__DOT__nodes[2U] 
            == vlSelf->anvil_qn1_dual_think_ctrl__DOT__target))) {
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__child_found = 1U;
    }
    if (((((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__tree_active) 
           & (3U < (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__node_count))) 
          & ((7U & ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__parents) 
                    >> 9U)) == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->anvil_qn1_dual_think_ctrl__DOT__nodes[3U] 
            == vlSelf->anvil_qn1_dual_think_ctrl__DOT__target))) {
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__matching_child = 3U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__child_found = 1U;
    }
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__response_expected 
        = ((2U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state)) 
           | (7U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state)));
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__protocol_fault 
        = ((~ (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__response_expected)) 
           & (IData)(vlSelf->verify_rsp_valid));
}

VL_INLINE_OPT void Vanvil_qn1_dual_think_ctrl___024root___nba_sequent__TOP__1(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ anvil_qn1_dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0;
    anvil_qn1_dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0 = 0;
    // Body
    vlSelf->busy = ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__active) 
                    & (0U != (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state)));
    vlSelf->done = ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__active) 
                    & (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__done_reg));
    vlSelf->draft_ready = ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__active) 
                           & (4U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state)));
    vlSelf->error = ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__active) 
                     & ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__error_reg) 
                        | (0xbU == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))));
    vlSelf->start_ready = ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__active) 
                           & ((~ ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__done_reg) 
                                  | (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__error_reg))) 
                              & (0U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))));
    vlSelf->verify_rsp_ready = ((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__active) 
                                & (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__response_expected));
    anvil_qn1_dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0 
        = ((~ (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__protocol_fault)) 
           & (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__active));
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__response_transfer 
        = ((IData)(vlSelf->verify_rsp_valid) & (IData)(vlSelf->verify_rsp_ready));
    vlSelf->verify_valid = ((IData)(anvil_qn1_dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0) 
                            & ((1U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state)) 
                               | (6U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state))));
    vlSelf->commit_valid = ((IData)(anvil_qn1_dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0) 
                            & (9U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state)));
    if (vlSelf->verify_valid) {
        vlSelf->verify_parent = vlSelf->anvil_qn1_dual_think_ctrl__DOT__request_parent;
        vlSelf->verify_pos = vlSelf->anvil_qn1_dual_think_ctrl__DOT__request_position;
    } else {
        vlSelf->verify_parent = 0U;
        vlSelf->verify_pos = 0U;
    }
    if (vlSelf->commit_valid) {
        vlSelf->commit_count = vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count;
        vlSelf->commit_tokens[0U] = vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[0U];
        vlSelf->commit_tokens[1U] = vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[1U];
        vlSelf->commit_tokens[2U] = vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[2U];
        vlSelf->commit_tokens[3U] = vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[3U];
        vlSelf->commit_tokens[4U] = vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[4U];
        vlSelf->commit_pos = ((IData)(1U) + vlSelf->anvil_qn1_dual_think_ctrl__DOT__position);
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__publication 
            = vlSelf->commit_ready;
    } else {
        vlSelf->commit_count = 0U;
        vlSelf->commit_tokens[0U] = 0U;
        vlSelf->commit_tokens[1U] = 0U;
        vlSelf->commit_tokens[2U] = 0U;
        vlSelf->commit_tokens[3U] = 0U;
        vlSelf->commit_tokens[4U] = 0U;
        vlSelf->commit_pos = 0U;
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__publication = 0U;
    }
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_open = 0U;
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_close = 0U;
    if (vlSelf->anvil_qn1_dual_think_ctrl__DOT__publication) {
        if ((0U < (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[0U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[0U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((1U < (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[1U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[1U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((2U < (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[2U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[2U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((3U < (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[3U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[3U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((4U < (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[4U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated[4U])) {
                vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
    }
}

void Vanvil_qn1_dual_think_ctrl___024root___eval_nba(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_dual_think_ctrl___024root___nba_sequent__TOP__0(vlSelf);
        Vanvil_qn1_dual_think_ctrl___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vanvil_qn1_dual_think_ctrl___024root___eval_triggers__act(Vanvil_qn1_dual_think_ctrl___024root* vlSelf);

bool Vanvil_qn1_dual_think_ctrl___024root___eval_phase__act(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vanvil_qn1_dual_think_ctrl___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vanvil_qn1_dual_think_ctrl___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vanvil_qn1_dual_think_ctrl___024root___eval_phase__nba(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vanvil_qn1_dual_think_ctrl___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__ico(Vanvil_qn1_dual_think_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__nba(Vanvil_qn1_dual_think_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__act(Vanvil_qn1_dual_think_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

void Vanvil_qn1_dual_think_ctrl___024root___eval(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/anvil_qn1_dual_think_ctrl.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vanvil_qn1_dual_think_ctrl___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/anvil_qn1_dual_think_ctrl.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/anvil_qn1_dual_think_ctrl.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vanvil_qn1_dual_think_ctrl___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vanvil_qn1_dual_think_ctrl___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vanvil_qn1_dual_think_ctrl___024root___eval_debug_assertions(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->flush & 0xfeU))) {
        Verilated::overWidthError("flush");}
    if (VL_UNLIKELY((vlSelf->cancel & 0xfeU))) {
        Verilated::overWidthError("cancel");}
    if (VL_UNLIKELY((vlSelf->start_valid & 0xfeU))) {
        Verilated::overWidthError("start_valid");}
    if (VL_UNLIKELY((vlSelf->mode_valid & 0xfeU))) {
        Verilated::overWidthError("mode_valid");}
    if (VL_UNLIKELY((vlSelf->mode_value & 0xfeU))) {
        Verilated::overWidthError("mode_value");}
    if (VL_UNLIKELY((vlSelf->observed_valid & 0xfeU))) {
        Verilated::overWidthError("observed_valid");}
    if (VL_UNLIKELY((vlSelf->draft_valid & 0xfeU))) {
        Verilated::overWidthError("draft_valid");}
    if (VL_UNLIKELY((vlSelf->draft_count & 0xf8U))) {
        Verilated::overWidthError("draft_count");}
    if (VL_UNLIKELY((vlSelf->draft_parents & 0xf000U))) {
        Verilated::overWidthError("draft_parents");}
    if (VL_UNLIKELY((vlSelf->commit_ready & 0xfeU))) {
        Verilated::overWidthError("commit_ready");}
    if (VL_UNLIKELY((vlSelf->publish_ready & 0xfeU))) {
        Verilated::overWidthError("publish_ready");}
    if (VL_UNLIKELY((vlSelf->verify_ready & 0xfeU))) {
        Verilated::overWidthError("verify_ready");}
    if (VL_UNLIKELY((vlSelf->verify_rsp_valid & 0xfeU))) {
        Verilated::overWidthError("verify_rsp_valid");}
    if (VL_UNLIKELY((vlSelf->verify_error & 0xfeU))) {
        Verilated::overWidthError("verify_error");}
}
#endif  // VL_DEBUG
