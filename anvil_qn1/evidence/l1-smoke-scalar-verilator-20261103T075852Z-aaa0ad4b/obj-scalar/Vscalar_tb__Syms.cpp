// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vscalar_tb__pch.h"
#include "Vscalar_tb.h"
#include "Vscalar_tb___024root.h"

// FUNCTIONS
Vscalar_tb__Syms::~Vscalar_tb__Syms()
{
}

Vscalar_tb__Syms::Vscalar_tb__Syms(VerilatedContext* contextp, const char* namep, Vscalar_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_scalar_tb.configure(this, name(), "scalar_tb", "scalar_tb", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_scalar_tb__reset_outputs.configure(this, name(), "scalar_tb.reset_outputs", "reset_outputs", -12, VerilatedScope::SCOPE_OTHER);
}
