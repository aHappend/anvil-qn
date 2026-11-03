// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vanvil_qn1_dual_think_ctrl__pch.h"

//============================================================
// Constructors

Vanvil_qn1_dual_think_ctrl::Vanvil_qn1_dual_think_ctrl(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vanvil_qn1_dual_think_ctrl__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , flush{vlSymsp->TOP.flush}
    , cancel{vlSymsp->TOP.cancel}
    , start_valid{vlSymsp->TOP.start_valid}
    , start_ready{vlSymsp->TOP.start_ready}
    , busy{vlSymsp->TOP.busy}
    , done{vlSymsp->TOP.done}
    , error{vlSymsp->TOP.error}
    , mode_valid{vlSymsp->TOP.mode_valid}
    , mode_value{vlSymsp->TOP.mode_value}
    , observed_valid{vlSymsp->TOP.observed_valid}
    , think_active{vlSymsp->TOP.think_active}
    , draft_valid{vlSymsp->TOP.draft_valid}
    , draft_ready{vlSymsp->TOP.draft_ready}
    , draft_count{vlSymsp->TOP.draft_count}
    , commit_valid{vlSymsp->TOP.commit_valid}
    , commit_ready{vlSymsp->TOP.commit_ready}
    , commit_count{vlSymsp->TOP.commit_count}
    , publish_ready{vlSymsp->TOP.publish_ready}
    , verify_valid{vlSymsp->TOP.verify_valid}
    , verify_ready{vlSymsp->TOP.verify_ready}
    , verify_parent{vlSymsp->TOP.verify_parent}
    , verify_rsp_valid{vlSymsp->TOP.verify_rsp_valid}
    , verify_rsp_ready{vlSymsp->TOP.verify_rsp_ready}
    , verify_error{vlSymsp->TOP.verify_error}
    , event_draft_nodes{vlSymsp->TOP.event_draft_nodes}
    , event_verified_nodes{vlSymsp->TOP.event_verified_nodes}
    , event_accepted_nodes{vlSymsp->TOP.event_accepted_nodes}
    , event_rejected_nodes{vlSymsp->TOP.event_rejected_nodes}
    , draft_parents{vlSymsp->TOP.draft_parents}
    , start_pos{vlSymsp->TOP.start_pos}
    , observed_token{vlSymsp->TOP.observed_token}
    , draft_tokens{vlSymsp->TOP.draft_tokens}
    , commit_tokens{vlSymsp->TOP.commit_tokens}
    , commit_pos{vlSymsp->TOP.commit_pos}
    , verify_pos{vlSymsp->TOP.verify_pos}
    , verify_argmax{vlSymsp->TOP.verify_argmax}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vanvil_qn1_dual_think_ctrl::Vanvil_qn1_dual_think_ctrl(const char* _vcname__)
    : Vanvil_qn1_dual_think_ctrl(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vanvil_qn1_dual_think_ctrl::~Vanvil_qn1_dual_think_ctrl() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vanvil_qn1_dual_think_ctrl___024root___eval_debug_assertions(Vanvil_qn1_dual_think_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
void Vanvil_qn1_dual_think_ctrl___024root___eval_static(Vanvil_qn1_dual_think_ctrl___024root* vlSelf);
void Vanvil_qn1_dual_think_ctrl___024root___eval_initial(Vanvil_qn1_dual_think_ctrl___024root* vlSelf);
void Vanvil_qn1_dual_think_ctrl___024root___eval_settle(Vanvil_qn1_dual_think_ctrl___024root* vlSelf);
void Vanvil_qn1_dual_think_ctrl___024root___eval(Vanvil_qn1_dual_think_ctrl___024root* vlSelf);

void Vanvil_qn1_dual_think_ctrl::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vanvil_qn1_dual_think_ctrl::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vanvil_qn1_dual_think_ctrl___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vanvil_qn1_dual_think_ctrl___024root___eval_static(&(vlSymsp->TOP));
        Vanvil_qn1_dual_think_ctrl___024root___eval_initial(&(vlSymsp->TOP));
        Vanvil_qn1_dual_think_ctrl___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vanvil_qn1_dual_think_ctrl___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vanvil_qn1_dual_think_ctrl::eventsPending() { return false; }

uint64_t Vanvil_qn1_dual_think_ctrl::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vanvil_qn1_dual_think_ctrl::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vanvil_qn1_dual_think_ctrl___024root___eval_final(Vanvil_qn1_dual_think_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl::final() {
    Vanvil_qn1_dual_think_ctrl___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vanvil_qn1_dual_think_ctrl::hierName() const { return vlSymsp->name(); }
const char* Vanvil_qn1_dual_think_ctrl::modelName() const { return "Vanvil_qn1_dual_think_ctrl"; }
unsigned Vanvil_qn1_dual_think_ctrl::threads() const { return 1; }
void Vanvil_qn1_dual_think_ctrl::prepareClone() const { contextp()->prepareClone(); }
void Vanvil_qn1_dual_think_ctrl::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vanvil_qn1_dual_think_ctrl::trace()' called on model that was Verilated without --trace option");
}
