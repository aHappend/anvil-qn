// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vanvil_qn1_tensor_array__pch.h"

//============================================================
// Constructors

Vanvil_qn1_tensor_array::Vanvil_qn1_tensor_array(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vanvil_qn1_tensor_array__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , flush{vlSymsp->TOP.flush}
    , in_valid{vlSymsp->TOP.in_valid}
    , in_w4{vlSymsp->TOP.in_w4}
    , in_ready{vlSymsp->TOP.in_ready}
    , out_valid{vlSymsp->TOP.out_valid}
    , out_error{vlSymsp->TOP.out_error}
    , out_ready{vlSymsp->TOP.out_ready}
    , q{vlSymsp->TOP.q}
    , z{vlSymsp->TOP.z}
    , scale_bf16{vlSymsp->TOP.scale_bf16}
    , activation_bf16{vlSymsp->TOP.activation_bf16}
    , weight_bf16{vlSymsp->TOP.weight_bf16}
    , lane_mask{vlSymsp->TOP.lane_mask}
    , in_tag{vlSymsp->TOP.in_tag}
    , out_sum{vlSymsp->TOP.out_sum}
    , out_tag{vlSymsp->TOP.out_tag}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vanvil_qn1_tensor_array::Vanvil_qn1_tensor_array(const char* _vcname__)
    : Vanvil_qn1_tensor_array(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vanvil_qn1_tensor_array::~Vanvil_qn1_tensor_array() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vanvil_qn1_tensor_array___024root___eval_debug_assertions(Vanvil_qn1_tensor_array___024root* vlSelf);
#endif  // VL_DEBUG
void Vanvil_qn1_tensor_array___024root___eval_static(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___eval_initial(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___eval_settle(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___eval(Vanvil_qn1_tensor_array___024root* vlSelf);

void Vanvil_qn1_tensor_array::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vanvil_qn1_tensor_array::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vanvil_qn1_tensor_array___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vanvil_qn1_tensor_array___024root___eval_static(&(vlSymsp->TOP));
        Vanvil_qn1_tensor_array___024root___eval_initial(&(vlSymsp->TOP));
        Vanvil_qn1_tensor_array___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vanvil_qn1_tensor_array___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vanvil_qn1_tensor_array::eventsPending() { return false; }

uint64_t Vanvil_qn1_tensor_array::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vanvil_qn1_tensor_array::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vanvil_qn1_tensor_array___024root___eval_final(Vanvil_qn1_tensor_array___024root* vlSelf);

VL_ATTR_COLD void Vanvil_qn1_tensor_array::final() {
    Vanvil_qn1_tensor_array___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vanvil_qn1_tensor_array::hierName() const { return vlSymsp->name(); }
const char* Vanvil_qn1_tensor_array::modelName() const { return "Vanvil_qn1_tensor_array"; }
unsigned Vanvil_qn1_tensor_array::threads() const { return 1; }
void Vanvil_qn1_tensor_array::prepareClone() const { contextp()->prepareClone(); }
void Vanvil_qn1_tensor_array::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vanvil_qn1_tensor_array::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vanvil_qn1_tensor_array::trace()' called on model that was Verilated without --trace option");
}
