// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSCALAR_TB__SYMS_H_
#define VERILATED_VSCALAR_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vscalar_tb.h"

// INCLUDE MODULE CLASSES
#include "Vscalar_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vscalar_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vscalar_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vscalar_tb___024root           TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_scalar_tb;
    VerilatedScope __Vscope_scalar_tb__reset_outputs;

    // CONSTRUCTORS
    Vscalar_tb__Syms(VerilatedContext* contextp, const char* namep, Vscalar_tb* modelp);
    ~Vscalar_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
