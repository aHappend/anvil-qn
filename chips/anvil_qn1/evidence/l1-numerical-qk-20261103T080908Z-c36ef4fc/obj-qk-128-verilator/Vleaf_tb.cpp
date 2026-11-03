// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vleaf_tb__pch.h"

//============================================================
// Constructors

Vleaf_tb::Vleaf_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vleaf_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vleaf_tb::Vleaf_tb(const char* _vcname__)
    : Vleaf_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vleaf_tb::~Vleaf_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vleaf_tb___024root___eval_debug_assertions(Vleaf_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vleaf_tb___024root___eval_static(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___eval_initial(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___eval_settle(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___eval(Vleaf_tb___024root* vlSelf);

void Vleaf_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vleaf_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vleaf_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vleaf_tb___024root___eval_static(&(vlSymsp->TOP));
        Vleaf_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vleaf_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vleaf_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vleaf_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vleaf_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vleaf_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vleaf_tb___024root___eval_final(Vleaf_tb___024root* vlSelf);

VL_ATTR_COLD void Vleaf_tb::final() {
    Vleaf_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vleaf_tb::hierName() const { return vlSymsp->name(); }
const char* Vleaf_tb::modelName() const { return "Vleaf_tb"; }
unsigned Vleaf_tb::threads() const { return 1; }
void Vleaf_tb::prepareClone() const { contextp()->prepareClone(); }
void Vleaf_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vleaf_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vleaf_tb::trace()' called on model that was Verilated without --trace option");
}
