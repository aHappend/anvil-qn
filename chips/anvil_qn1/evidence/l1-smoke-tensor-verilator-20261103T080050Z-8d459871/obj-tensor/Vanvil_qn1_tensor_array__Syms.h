// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VANVIL_QN1_TENSOR_ARRAY__SYMS_H_
#define VERILATED_VANVIL_QN1_TENSOR_ARRAY__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vanvil_qn1_tensor_array.h"

// INCLUDE MODULE CLASSES
#include "Vanvil_qn1_tensor_array___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vanvil_qn1_tensor_array__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vanvil_qn1_tensor_array* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vanvil_qn1_tensor_array___024root TOP;

    // CONSTRUCTORS
    Vanvil_qn1_tensor_array__Syms(VerilatedContext* contextp, const char* namep, Vanvil_qn1_tensor_array* modelp);
    ~Vanvil_qn1_tensor_array__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
