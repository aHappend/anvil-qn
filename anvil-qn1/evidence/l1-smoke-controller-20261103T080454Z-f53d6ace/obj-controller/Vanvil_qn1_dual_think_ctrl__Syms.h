// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VANVIL_QN1_DUAL_THINK_CTRL__SYMS_H_
#define VERILATED_VANVIL_QN1_DUAL_THINK_CTRL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vanvil_qn1_dual_think_ctrl.h"

// INCLUDE MODULE CLASSES
#include "Vanvil_qn1_dual_think_ctrl___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vanvil_qn1_dual_think_ctrl__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vanvil_qn1_dual_think_ctrl* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vanvil_qn1_dual_think_ctrl___024root TOP;

    // CONSTRUCTORS
    Vanvil_qn1_dual_think_ctrl__Syms(VerilatedContext* contextp, const char* namep, Vanvil_qn1_dual_think_ctrl* modelp);
    ~Vanvil_qn1_dual_think_ctrl__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
