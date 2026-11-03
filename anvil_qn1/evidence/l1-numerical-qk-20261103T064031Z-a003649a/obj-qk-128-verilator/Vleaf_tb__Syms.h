// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLEAF_TB__SYMS_H_
#define VERILATED_VLEAF_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vleaf_tb.h"

// INCLUDE MODULE CLASSES
#include "Vleaf_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vleaf_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vleaf_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vleaf_tb___024root             TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_leaf_tb;
    VerilatedScope __Vscope_leaf_tb__reset_outputs;

    // CONSTRUCTORS
    Vleaf_tb__Syms(VerilatedContext* contextp, const char* namep, Vleaf_tb* modelp);
    ~Vleaf_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
