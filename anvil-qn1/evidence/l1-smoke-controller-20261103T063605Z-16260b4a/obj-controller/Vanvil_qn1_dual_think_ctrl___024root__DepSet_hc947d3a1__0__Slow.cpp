// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_dual_think_ctrl.h for the primary calling header

#include "Vanvil_qn1_dual_think_ctrl__pch.h"
#include "Vanvil_qn1_dual_think_ctrl___024root.h"

VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___eval_static(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___eval_initial(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__anvil_qn1_dual_think_ctrl__DOT__depths__0 
        = vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths;
    vlSelf->__Vtrigprevexpr___TOP__anvil_qn1_dual_think_ctrl__DOT__depths__1 
        = vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths;
    vlSelf->__Vtrigprevexpr___TOP__anvil_qn1_dual_think_ctrl__DOT__depths__2 
        = vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___eval_final(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__stl(Vanvil_qn1_dual_think_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vanvil_qn1_dual_think_ctrl___024root___eval_phase__stl(Vanvil_qn1_dual_think_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___eval_settle(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/anvil_qn1_dual_think_ctrl.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vanvil_qn1_dual_think_ctrl___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__stl(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] anvil_qn1_dual_think_ctrl.depths)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___stl_sequent__TOP__0(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ anvil_qn1_dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0;
    anvil_qn1_dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0 = 0;
    // Body
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__target_marker 
        = ((0x25073U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__target) 
           | (0x25074U == vlSelf->anvil_qn1_dual_think_ctrl__DOT__target));
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
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_position 
        = (0x1ffffffffULL & (1ULL + ((QData)((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__position)) 
                                     + (QData)((IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count)))));
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
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths[0U] 
        = (((0U < (IData)(vlSelf->draft_count)) & (4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->draft_parents))))
            ? 1U : 0U);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__response_expected 
        = ((2U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state)) 
           | (7U == (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__state)));
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__active 
        = ((~ ((IData)(vlSelf->cancel) | (IData)(vlSelf->flush))) 
           & (IData)(vlSelf->rst_n));
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__protocol_fault 
        = ((~ (IData)(vlSelf->anvil_qn1_dual_think_ctrl__DOT__response_expected)) 
           & (IData)(vlSelf->verify_rsp_valid));
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

void Vanvil_qn1_dual_think_ctrl___024root___ico_comb__TOP__0(Vanvil_qn1_dual_think_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___eval_stl(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vanvil_qn1_dual_think_ctrl___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vanvil_qn1_dual_think_ctrl___024root___ico_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___eval_triggers__stl(Vanvil_qn1_dual_think_ctrl___024root* vlSelf);

VL_ATTR_COLD bool Vanvil_qn1_dual_think_ctrl___024root___eval_phase__stl(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vanvil_qn1_dual_think_ctrl___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vanvil_qn1_dual_think_ctrl___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__ico(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] anvil_qn1_dual_think_ctrl.depths)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__act(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] anvil_qn1_dual_think_ctrl.depths)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__nba(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] anvil_qn1_dual_think_ctrl.depths)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___ctor_var_reset(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->flush = VL_RAND_RESET_I(1);
    vlSelf->cancel = VL_RAND_RESET_I(1);
    vlSelf->start_valid = VL_RAND_RESET_I(1);
    vlSelf->start_ready = VL_RAND_RESET_I(1);
    vlSelf->start_pos = VL_RAND_RESET_I(32);
    vlSelf->busy = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->error = VL_RAND_RESET_I(1);
    vlSelf->mode_valid = VL_RAND_RESET_I(1);
    vlSelf->mode_value = VL_RAND_RESET_I(1);
    vlSelf->observed_valid = VL_RAND_RESET_I(1);
    vlSelf->observed_token = VL_RAND_RESET_I(32);
    vlSelf->think_active = VL_RAND_RESET_I(1);
    vlSelf->draft_valid = VL_RAND_RESET_I(1);
    vlSelf->draft_ready = VL_RAND_RESET_I(1);
    vlSelf->draft_count = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->draft_tokens);
    vlSelf->draft_parents = VL_RAND_RESET_I(12);
    vlSelf->commit_valid = VL_RAND_RESET_I(1);
    vlSelf->commit_ready = VL_RAND_RESET_I(1);
    vlSelf->commit_count = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(160, vlSelf->commit_tokens);
    vlSelf->commit_pos = VL_RAND_RESET_I(32);
    vlSelf->publish_ready = VL_RAND_RESET_I(1);
    vlSelf->verify_valid = VL_RAND_RESET_I(1);
    vlSelf->verify_ready = VL_RAND_RESET_I(1);
    vlSelf->verify_parent = VL_RAND_RESET_I(3);
    vlSelf->verify_pos = VL_RAND_RESET_I(32);
    vlSelf->verify_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->verify_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->verify_argmax = VL_RAND_RESET_I(32);
    vlSelf->verify_error = VL_RAND_RESET_I(1);
    vlSelf->event_draft_nodes = VL_RAND_RESET_I(3);
    vlSelf->event_verified_nodes = VL_RAND_RESET_I(3);
    vlSelf->event_accepted_nodes = VL_RAND_RESET_I(3);
    vlSelf->event_rejected_nodes = VL_RAND_RESET_I(3);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__thinking = VL_RAND_RESET_I(1);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__tree_active = VL_RAND_RESET_I(1);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__done_reg = VL_RAND_RESET_I(1);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__error_reg = VL_RAND_RESET_I(1);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__position = VL_RAND_RESET_I(32);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__target = VL_RAND_RESET_I(32);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__request_position = VL_RAND_RESET_I(32);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__request_parent = VL_RAND_RESET_I(3);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__current_parent = VL_RAND_RESET_I(3);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__node_count = VL_RAND_RESET_I(3);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_count = VL_RAND_RESET_I(3);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__accepted_count = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->anvil_qn1_dual_think_ctrl__DOT__nodes);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__parents = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(160, vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__draft_event = VL_RAND_RESET_I(3);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__verified_event = VL_RAND_RESET_I(3);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__accepted_event = VL_RAND_RESET_I(3);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__rejected_event = VL_RAND_RESET_I(3);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__malformed = VL_RAND_RESET_I(1);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__child_found = VL_RAND_RESET_I(1);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__matching_child = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_open = VL_RAND_RESET_I(1);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__committed_close = VL_RAND_RESET_I(1);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__active = VL_RAND_RESET_I(1);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__response_expected = VL_RAND_RESET_I(1);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__protocol_fault = VL_RAND_RESET_I(1);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__response_transfer = VL_RAND_RESET_I(1);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__publication = VL_RAND_RESET_I(1);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__target_marker = VL_RAND_RESET_I(1);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT__generated_position = VL_RAND_RESET_Q(33);
    vlSelf->anvil_qn1_dual_think_ctrl__DOT____Vlvbound_hc7327f26__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__anvil_qn1_dual_think_ctrl__DOT__depths__0[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__anvil_qn1_dual_think_ctrl__DOT__depths__1[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__anvil_qn1_dual_think_ctrl__DOT__depths__2[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
