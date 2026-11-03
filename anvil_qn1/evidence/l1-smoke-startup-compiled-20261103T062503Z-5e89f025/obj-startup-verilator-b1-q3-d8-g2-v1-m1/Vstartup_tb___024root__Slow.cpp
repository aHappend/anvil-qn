// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstartup_tb.h for the primary calling header

#include "Vstartup_tb__pch.h"
#include "Vstartup_tb__Syms.h"
#include "Vstartup_tb___024root.h"

void Vstartup_tb___024root___ctor_var_reset(Vstartup_tb___024root* vlSelf);

Vstartup_tb___024root::Vstartup_tb___024root(Vstartup_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstartup_tb___024root___ctor_var_reset(this);
}

void Vstartup_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vstartup_tb___024root::~Vstartup_tb___024root() {
}
