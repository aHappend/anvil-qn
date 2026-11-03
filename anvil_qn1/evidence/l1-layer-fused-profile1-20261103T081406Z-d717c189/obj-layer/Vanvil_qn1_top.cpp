// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vanvil_qn1_top__pch.h"

//============================================================
// Constructors

Vanvil_qn1_top::Vanvil_qn1_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vanvil_qn1_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , cancel{vlSymsp->TOP.cancel}
    , token_valid{vlSymsp->TOP.token_valid}
    , new_sequence{vlSymsp->TOP.new_sequence}
    , token_phase{vlSymsp->TOP.token_phase}
    , logit_ready{vlSymsp->TOP.logit_ready}
    , token_ready{vlSymsp->TOP.token_ready}
    , logit_valid{vlSymsp->TOP.logit_valid}
    , done{vlSymsp->TOP.done}
    , error{vlSymsp->TOP.error}
    , cancel_done{vlSymsp->TOP.cancel_done}
    , mem_req_valid{vlSymsp->TOP.mem_req_valid}
    , mem_req_write{vlSymsp->TOP.mem_req_write}
    , mem_req_ready{vlSymsp->TOP.mem_req_ready}
    , mem_rsp_valid{vlSymsp->TOP.mem_rsp_valid}
    , mem_rsp_error{vlSymsp->TOP.mem_rsp_error}
    , mem_rsp_ready{vlSymsp->TOP.mem_rsp_ready}
    , draft_valid{vlSymsp->TOP.draft_valid}
    , draft_ready{vlSymsp->TOP.draft_ready}
    , draft_count{vlSymsp->TOP.draft_count}
    , commit_valid{vlSymsp->TOP.commit_valid}
    , commit_ready{vlSymsp->TOP.commit_ready}
    , commit_count{vlSymsp->TOP.commit_count}
    , think_active{vlSymsp->TOP.think_active}
    , csr_valid{vlSymsp->TOP.csr_valid}
    , csr_write{vlSymsp->TOP.csr_write}
    , csr_ready{vlSymsp->TOP.csr_ready}
    , csr_wstrb{vlSymsp->TOP.csr_wstrb}
    , csr_rsp_valid{vlSymsp->TOP.csr_rsp_valid}
    , csr_rsp_ready{vlSymsp->TOP.csr_rsp_ready}
    , csr_error{vlSymsp->TOP.csr_error}
    , draft_parents{vlSymsp->TOP.draft_parents}
    , csr_addr{vlSymsp->TOP.csr_addr}
    , token_id{vlSymsp->TOP.token_id}
    , token_pos{vlSymsp->TOP.token_pos}
    , logit_index{vlSymsp->TOP.logit_index}
    , logit_data{vlSymsp->TOP.logit_data}
    , mem_req_kind{vlSymsp->TOP.mem_req_kind}
    , mem_req_layer{vlSymsp->TOP.mem_req_layer}
    , mem_req_row{vlSymsp->TOP.mem_req_row}
    , mem_req_col{vlSymsp->TOP.mem_req_col}
    , mem_req_wdata{vlSymsp->TOP.mem_req_wdata}
    , mem_req_proj{vlSymsp->TOP.mem_req_proj}
    , mem_req_tag{vlSymsp->TOP.mem_req_tag}
    , mem_rsp_rdata{vlSymsp->TOP.mem_rsp_rdata}
    , mem_rsp_tag{vlSymsp->TOP.mem_rsp_tag}
    , draft_tokens{vlSymsp->TOP.draft_tokens}
    , commit_tokens{vlSymsp->TOP.commit_tokens}
    , commit_pos{vlSymsp->TOP.commit_pos}
    , csr_wdata{vlSymsp->TOP.csr_wdata}
    , csr_rdata{vlSymsp->TOP.csr_rdata}
    , __PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic{vlSymsp->TOP.__PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic}
    , __PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition{vlSymsp->TOP.__PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition}
    , __PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply{vlSymsp->TOP.__PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply}
    , __PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic{vlSymsp->TOP.__PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic}
    , __PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic{vlSymsp->TOP.__PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic}
    , __PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic{vlSymsp->TOP.__PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic}
    , __PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic{vlSymsp->TOP.__PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic}
    , __PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add{vlSymsp->TOP.__PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vanvil_qn1_top::Vanvil_qn1_top(const char* _vcname__)
    : Vanvil_qn1_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vanvil_qn1_top::~Vanvil_qn1_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vanvil_qn1_top___024root___eval_debug_assertions(Vanvil_qn1_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vanvil_qn1_top___024root___eval_static(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___eval_initial(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___eval_settle(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___eval(Vanvil_qn1_top___024root* vlSelf);

void Vanvil_qn1_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vanvil_qn1_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vanvil_qn1_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vanvil_qn1_top___024root___eval_static(&(vlSymsp->TOP));
        Vanvil_qn1_top___024root___eval_initial(&(vlSymsp->TOP));
        Vanvil_qn1_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vanvil_qn1_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vanvil_qn1_top::eventsPending() { return false; }

uint64_t Vanvil_qn1_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vanvil_qn1_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vanvil_qn1_top___024root___eval_final(Vanvil_qn1_top___024root* vlSelf);

VL_ATTR_COLD void Vanvil_qn1_top::final() {
    Vanvil_qn1_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vanvil_qn1_top::hierName() const { return vlSymsp->name(); }
const char* Vanvil_qn1_top::modelName() const { return "Vanvil_qn1_top"; }
unsigned Vanvil_qn1_top::threads() const { return 1; }
void Vanvil_qn1_top::prepareClone() const { contextp()->prepareClone(); }
void Vanvil_qn1_top::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vanvil_qn1_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vanvil_qn1_top::trace()' called on model that was Verilated without --trace option");
}
