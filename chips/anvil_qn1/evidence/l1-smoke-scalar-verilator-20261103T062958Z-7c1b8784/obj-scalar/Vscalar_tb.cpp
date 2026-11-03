// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vscalar_tb__pch.h"

//============================================================
// Constructors

Vscalar_tb::Vscalar_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vscalar_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vscalar_tb::Vscalar_tb(const char* _vcname__)
    : Vscalar_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vscalar_tb::~Vscalar_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vscalar_tb___024root___eval_debug_assertions(Vscalar_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vscalar_tb___024root___eval_static(Vscalar_tb___024root* vlSelf);
void Vscalar_tb___024root___eval_initial(Vscalar_tb___024root* vlSelf);
void Vscalar_tb___024root___eval_settle(Vscalar_tb___024root* vlSelf);
void Vscalar_tb___024root___eval(Vscalar_tb___024root* vlSelf);

void Vscalar_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vscalar_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vscalar_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vscalar_tb___024root___eval_static(&(vlSymsp->TOP));
        Vscalar_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vscalar_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vscalar_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vscalar_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vscalar_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vscalar_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vscalar_tb___024root___eval_final(Vscalar_tb___024root* vlSelf);

VL_ATTR_COLD void Vscalar_tb::final() {
    Vscalar_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vscalar_tb::hierName() const { return vlSymsp->name(); }
const char* Vscalar_tb::modelName() const { return "Vscalar_tb"; }
unsigned Vscalar_tb::threads() const { return 1; }
void Vscalar_tb::prepareClone() const { contextp()->prepareClone(); }
void Vscalar_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vscalar_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vscalar_tb::trace()' called on model that was Verilated without --trace option");
}
