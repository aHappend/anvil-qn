// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscalar_tb.h for the primary calling header

#include "Vscalar_tb__pch.h"
#include "Vscalar_tb__Syms.h"
#include "Vscalar_tb___024root.h"

void Vscalar_tb___024root___ctor_var_reset(Vscalar_tb___024root* vlSelf);

Vscalar_tb___024root::Vscalar_tb___024root(Vscalar_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vscalar_tb___024root___ctor_var_reset(this);
}

void Vscalar_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vscalar_tb___024root::~Vscalar_tb___024root() {
}
