// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleaf_tb.h for the primary calling header

#include "Vleaf_tb__pch.h"
#include "Vleaf_tb__Syms.h"
#include "Vleaf_tb___024root.h"

void Vleaf_tb___024root___ctor_var_reset(Vleaf_tb___024root* vlSelf);

Vleaf_tb___024root::Vleaf_tb___024root(Vleaf_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vleaf_tb___024root___ctor_var_reset(this);
}

void Vleaf_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vleaf_tb___024root::~Vleaf_tb___024root() {
}
