// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcontrol_tb__pch.h"
#include "Vcontrol_tb.h"
#include "Vcontrol_tb___024root.h"

// FUNCTIONS
Vcontrol_tb__Syms::~Vcontrol_tb__Syms()
{
}

Vcontrol_tb__Syms::Vcontrol_tb__Syms(VerilatedContext* contextp, const char* namep, Vcontrol_tb* modelp)
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
    __Vscope_control_tb.configure(this, name(), "control_tb", "control_tb", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_control_tb__reset_outputs.configure(this, name(), "control_tb.reset_outputs", "reset_outputs", -12, VerilatedScope::SCOPE_OTHER);
}
