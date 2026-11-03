// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vstartup_tb__pch.h"

//============================================================
// Constructors

Vstartup_tb::Vstartup_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vstartup_tb__Syms(contextp(), _vcname__, this)}
    , __PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic{vlSymsp->TOP.__PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic}
    , __PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition{vlSymsp->TOP.__PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition}
    , __PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply{vlSymsp->TOP.__PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply}
    , __PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic{vlSymsp->TOP.__PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic}
    , __PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic{vlSymsp->TOP.__PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic}
    , __PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic{vlSymsp->TOP.__PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic}
    , __PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic{vlSymsp->TOP.__PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic}
    , __PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add{vlSymsp->TOP.__PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vstartup_tb::Vstartup_tb(const char* _vcname__)
    : Vstartup_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vstartup_tb::~Vstartup_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vstartup_tb___024root___eval_debug_assertions(Vstartup_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vstartup_tb___024root___eval_static(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___eval_initial(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___eval_settle(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___eval(Vstartup_tb___024root* vlSelf);

void Vstartup_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vstartup_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vstartup_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vstartup_tb___024root___eval_static(&(vlSymsp->TOP));
        Vstartup_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vstartup_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vstartup_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vstartup_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vstartup_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vstartup_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vstartup_tb___024root___eval_final(Vstartup_tb___024root* vlSelf);

VL_ATTR_COLD void Vstartup_tb::final() {
    Vstartup_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vstartup_tb::hierName() const { return vlSymsp->name(); }
const char* Vstartup_tb::modelName() const { return "Vstartup_tb"; }
unsigned Vstartup_tb::threads() const { return 1; }
void Vstartup_tb::prepareClone() const { contextp()->prepareClone(); }
void Vstartup_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vstartup_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vstartup_tb::trace()' called on model that was Verilated without --trace option");
}
