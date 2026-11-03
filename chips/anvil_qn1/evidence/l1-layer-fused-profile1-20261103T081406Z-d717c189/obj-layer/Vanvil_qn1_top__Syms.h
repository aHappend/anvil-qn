// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VANVIL_QN1_TOP__SYMS_H_
#define VERILATED_VANVIL_QN1_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vanvil_qn1_top.h"

// INCLUDE MODULE CLASSES
#include "Vanvil_qn1_top___024root.h"
#include "Vanvil_qn1_top_anvil_qn1_scalar.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vanvil_qn1_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vanvil_qn1_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vanvil_qn1_top___024root       TOP;
    Vanvil_qn1_top_anvil_qn1_scalar TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic;
    Vanvil_qn1_top_anvil_qn1_scalar TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic;
    Vanvil_qn1_top_anvil_qn1_scalar TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply;
    Vanvil_qn1_top_anvil_qn1_scalar TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic;
    Vanvil_qn1_top_anvil_qn1_scalar TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic;
    Vanvil_qn1_top_anvil_qn1_scalar TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic;
    Vanvil_qn1_top_anvil_qn1_scalar TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add;
    Vanvil_qn1_top_anvil_qn1_scalar TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition;

    // CONSTRUCTORS
    Vanvil_qn1_top__Syms(VerilatedContext* contextp, const char* namep, Vanvil_qn1_top* modelp);
    ~Vanvil_qn1_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
