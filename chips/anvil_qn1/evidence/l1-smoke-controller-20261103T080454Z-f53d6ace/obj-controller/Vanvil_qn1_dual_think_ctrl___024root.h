// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vanvil_qn1_dual_think_ctrl.h for the primary calling header

#ifndef VERILATED_VANVIL_QN1_DUAL_THINK_CTRL___024ROOT_H_
#define VERILATED_VANVIL_QN1_DUAL_THINK_CTRL___024ROOT_H_  // guard

#include "verilated.h"


class Vanvil_qn1_dual_think_ctrl__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vanvil_qn1_dual_think_ctrl___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(flush,0,0);
        VL_IN8(cancel,0,0);
        VL_IN8(start_valid,0,0);
        VL_OUT8(start_ready,0,0);
        VL_OUT8(busy,0,0);
        VL_OUT8(done,0,0);
        VL_OUT8(error,0,0);
        VL_IN8(mode_valid,0,0);
        VL_IN8(mode_value,0,0);
        VL_IN8(observed_valid,0,0);
        VL_OUT8(think_active,0,0);
        VL_IN8(draft_valid,0,0);
        VL_OUT8(draft_ready,0,0);
        VL_IN8(draft_count,2,0);
        VL_OUT8(commit_valid,0,0);
        VL_IN8(commit_ready,0,0);
        VL_OUT8(commit_count,2,0);
        VL_IN8(publish_ready,0,0);
        VL_OUT8(verify_valid,0,0);
        VL_IN8(verify_ready,0,0);
        VL_OUT8(verify_parent,2,0);
        VL_IN8(verify_rsp_valid,0,0);
        VL_OUT8(verify_rsp_ready,0,0);
        VL_IN8(verify_error,0,0);
        VL_OUT8(event_draft_nodes,2,0);
        VL_OUT8(event_verified_nodes,2,0);
        VL_OUT8(event_accepted_nodes,2,0);
        VL_OUT8(event_rejected_nodes,2,0);
        CData/*3:0*/ anvil_qn1_dual_think_ctrl__DOT__state;
        CData/*0:0*/ anvil_qn1_dual_think_ctrl__DOT__thinking;
        CData/*0:0*/ anvil_qn1_dual_think_ctrl__DOT__tree_active;
        CData/*0:0*/ anvil_qn1_dual_think_ctrl__DOT__done_reg;
        CData/*0:0*/ anvil_qn1_dual_think_ctrl__DOT__error_reg;
        CData/*2:0*/ anvil_qn1_dual_think_ctrl__DOT__request_parent;
        CData/*2:0*/ anvil_qn1_dual_think_ctrl__DOT__current_parent;
        CData/*2:0*/ anvil_qn1_dual_think_ctrl__DOT__node_count;
        CData/*2:0*/ anvil_qn1_dual_think_ctrl__DOT__generated_count;
        CData/*2:0*/ anvil_qn1_dual_think_ctrl__DOT__accepted_count;
        CData/*2:0*/ anvil_qn1_dual_think_ctrl__DOT__draft_event;
        CData/*2:0*/ anvil_qn1_dual_think_ctrl__DOT__verified_event;
        CData/*2:0*/ anvil_qn1_dual_think_ctrl__DOT__accepted_event;
        CData/*2:0*/ anvil_qn1_dual_think_ctrl__DOT__rejected_event;
        CData/*0:0*/ anvil_qn1_dual_think_ctrl__DOT__malformed;
        CData/*0:0*/ anvil_qn1_dual_think_ctrl__DOT__child_found;
        CData/*2:0*/ anvil_qn1_dual_think_ctrl__DOT__matching_child;
        CData/*0:0*/ anvil_qn1_dual_think_ctrl__DOT__committed_open;
        CData/*0:0*/ anvil_qn1_dual_think_ctrl__DOT__committed_close;
        CData/*0:0*/ anvil_qn1_dual_think_ctrl__DOT__active;
        CData/*0:0*/ anvil_qn1_dual_think_ctrl__DOT__response_expected;
        CData/*0:0*/ anvil_qn1_dual_think_ctrl__DOT__protocol_fault;
        CData/*0:0*/ anvil_qn1_dual_think_ctrl__DOT__response_transfer;
        CData/*0:0*/ anvil_qn1_dual_think_ctrl__DOT__publication;
        CData/*0:0*/ anvil_qn1_dual_think_ctrl__DOT__target_marker;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VL_IN16(draft_parents,11,0);
    };
    struct {
        SData/*11:0*/ anvil_qn1_dual_think_ctrl__DOT__parents;
        VL_IN(start_pos,31,0);
        VL_IN(observed_token,31,0);
        VL_INW(draft_tokens,127,0,4);
        VL_OUTW(commit_tokens,159,0,5);
        VL_OUT(commit_pos,31,0);
        VL_OUT(verify_pos,31,0);
        VL_IN(verify_argmax,31,0);
        IData/*31:0*/ anvil_qn1_dual_think_ctrl__DOT__position;
        IData/*31:0*/ anvil_qn1_dual_think_ctrl__DOT__target;
        IData/*31:0*/ anvil_qn1_dual_think_ctrl__DOT__request_position;
        VlWide<4>/*127:0*/ anvil_qn1_dual_think_ctrl__DOT__nodes;
        VlWide<5>/*159:0*/ anvil_qn1_dual_think_ctrl__DOT__generated;
        IData/*31:0*/ anvil_qn1_dual_think_ctrl__DOT____Vlvbound_hc7327f26__0;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ anvil_qn1_dual_think_ctrl__DOT__generated_position;
        VlUnpacked<CData/*2:0*/, 4> anvil_qn1_dual_think_ctrl__DOT__depths;
        VlUnpacked<CData/*2:0*/, 4> __Vtrigprevexpr___TOP__anvil_qn1_dual_think_ctrl__DOT__depths__0;
        VlUnpacked<CData/*2:0*/, 4> __Vtrigprevexpr___TOP__anvil_qn1_dual_think_ctrl__DOT__depths__1;
        VlUnpacked<CData/*2:0*/, 4> __Vtrigprevexpr___TOP__anvil_qn1_dual_think_ctrl__DOT__depths__2;
    };
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vanvil_qn1_dual_think_ctrl__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vanvil_qn1_dual_think_ctrl___024root(Vanvil_qn1_dual_think_ctrl__Syms* symsp, const char* v__name);
    ~Vanvil_qn1_dual_think_ctrl___024root();
    VL_UNCOPYABLE(Vanvil_qn1_dual_think_ctrl___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
