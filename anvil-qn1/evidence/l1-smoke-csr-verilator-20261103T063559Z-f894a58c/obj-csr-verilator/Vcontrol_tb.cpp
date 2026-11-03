// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcontrol_tb__pch.h"

//============================================================
// Constructors

Vcontrol_tb::Vcontrol_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcontrol_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcontrol_tb::Vcontrol_tb(const char* _vcname__)
    : Vcontrol_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcontrol_tb::~Vcontrol_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcontrol_tb___024root___eval_debug_assertions(Vcontrol_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vcontrol_tb___024root___eval_static(Vcontrol_tb___024root* vlSelf);
void Vcontrol_tb___024root___eval_initial(Vcontrol_tb___024root* vlSelf);
void Vcontrol_tb___024root___eval_settle(Vcontrol_tb___024root* vlSelf);
void Vcontrol_tb___024root___eval(Vcontrol_tb___024root* vlSelf);

void Vcontrol_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcontrol_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcontrol_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcontrol_tb___024root___eval_static(&(vlSymsp->TOP));
        Vcontrol_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vcontrol_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcontrol_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcontrol_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vcontrol_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vcontrol_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcontrol_tb___024root___eval_final(Vcontrol_tb___024root* vlSelf);

VL_ATTR_COLD void Vcontrol_tb::final() {
    Vcontrol_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcontrol_tb::hierName() const { return vlSymsp->name(); }
const char* Vcontrol_tb::modelName() const { return "Vcontrol_tb"; }
unsigned Vcontrol_tb::threads() const { return 1; }
void Vcontrol_tb::prepareClone() const { contextp()->prepareClone(); }
void Vcontrol_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vcontrol_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcontrol_tb::trace()' called on model that was Verilated without --trace option");
}
