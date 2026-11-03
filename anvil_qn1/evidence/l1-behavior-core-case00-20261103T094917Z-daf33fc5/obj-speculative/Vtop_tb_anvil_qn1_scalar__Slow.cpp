// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_anvil_qn1_scalar.h"

void Vtop_tb_anvil_qn1_scalar___ctor_var_reset(Vtop_tb_anvil_qn1_scalar* vlSelf);

Vtop_tb_anvil_qn1_scalar::Vtop_tb_anvil_qn1_scalar(Vtop_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_tb_anvil_qn1_scalar___ctor_var_reset(this);
}

void Vtop_tb_anvil_qn1_scalar::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_tb_anvil_qn1_scalar::~Vtop_tb_anvil_qn1_scalar() {
}
