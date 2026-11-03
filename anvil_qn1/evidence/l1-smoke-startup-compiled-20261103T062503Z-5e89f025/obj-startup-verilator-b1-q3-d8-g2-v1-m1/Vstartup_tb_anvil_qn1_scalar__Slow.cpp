// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstartup_tb.h for the primary calling header

#include "Vstartup_tb__pch.h"
#include "Vstartup_tb__Syms.h"
#include "Vstartup_tb_anvil_qn1_scalar.h"

void Vstartup_tb_anvil_qn1_scalar___ctor_var_reset(Vstartup_tb_anvil_qn1_scalar* vlSelf);

Vstartup_tb_anvil_qn1_scalar::Vstartup_tb_anvil_qn1_scalar(Vstartup_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstartup_tb_anvil_qn1_scalar___ctor_var_reset(this);
}

void Vstartup_tb_anvil_qn1_scalar::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vstartup_tb_anvil_qn1_scalar::~Vstartup_tb_anvil_qn1_scalar() {
}
