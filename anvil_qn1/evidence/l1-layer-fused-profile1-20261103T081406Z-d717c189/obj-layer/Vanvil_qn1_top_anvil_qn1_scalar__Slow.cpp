// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top__Syms.h"
#include "Vanvil_qn1_top_anvil_qn1_scalar.h"

void Vanvil_qn1_top_anvil_qn1_scalar___ctor_var_reset(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf);

Vanvil_qn1_top_anvil_qn1_scalar::Vanvil_qn1_top_anvil_qn1_scalar(Vanvil_qn1_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vanvil_qn1_top_anvil_qn1_scalar___ctor_var_reset(this);
}

void Vanvil_qn1_top_anvil_qn1_scalar::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vanvil_qn1_top_anvil_qn1_scalar::~Vanvil_qn1_top_anvil_qn1_scalar() {
}
