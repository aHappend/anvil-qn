// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCONTROL_TB__SYMS_H_
#define VERILATED_VCONTROL_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcontrol_tb.h"

// INCLUDE MODULE CLASSES
#include "Vcontrol_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcontrol_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcontrol_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcontrol_tb___024root          TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_control_tb;
    VerilatedScope __Vscope_control_tb__reset_outputs;

    // CONSTRUCTORS
    Vcontrol_tb__Syms(VerilatedContext* contextp, const char* namep, Vcontrol_tb* modelp);
    ~Vcontrol_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
