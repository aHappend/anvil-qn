// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top_anvil_qn1_scalar.h"

VL_INLINE_OPT void Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic__1(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic__1\n"); );
    // Body
    vlSelf->__PVT__result_failed = vlSelf->__Vdly__result_failed;
    vlSelf->__PVT__data = vlSelf->__Vdly__data;
}

VL_INLINE_OPT void Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic__0(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic__0\n"); );
    // Body
    vlSelf->__Vdly__add__DOT__failed = vlSelf->__PVT__add__DOT__failed;
    vlSelf->__Vdly__add__DOT__subtract1 = vlSelf->__PVT__add__DOT__subtract1;
    vlSelf->__Vdly__add__DOT__negative3 = vlSelf->__PVT__add__DOT__negative3;
    vlSelf->__Vdly__add__DOT__negative2 = vlSelf->__PVT__add__DOT__negative2;
    vlSelf->__Vdly__add__DOT__negative1 = vlSelf->__PVT__add__DOT__negative1;
    vlSelf->__Vdly__add__DOT__exponent3 = vlSelf->__PVT__add__DOT__exponent3;
    vlSelf->__Vdly__add__DOT__exponent2 = vlSelf->__PVT__add__DOT__exponent2;
    vlSelf->__Vdly__add__DOT__exponent1 = vlSelf->__PVT__add__DOT__exponent1;
    vlSelf->__Vdly__add__DOT__distance1 = vlSelf->__PVT__add__DOT__distance1;
    vlSelf->__Vdly__add__DOT__small1 = vlSelf->__PVT__add__DOT__small1;
    vlSelf->__Vdly__add__DOT__large1 = vlSelf->__PVT__add__DOT__large1;
    vlSelf->__Vdly__add__DOT__subtract2 = vlSelf->__PVT__add__DOT__subtract2;
    vlSelf->__Vdly__add__DOT__sum3 = vlSelf->__PVT__add__DOT__sum3;
    vlSelf->__Vdly__multiply__DOT__failed = vlSelf->__PVT__multiply__DOT__failed;
    vlSelf->__Vdly__multiply__DOT__product2 = vlSelf->__PVT__multiply__DOT__product2;
    vlSelf->__Vdly__multiply__DOT__exponent2 = vlSelf->__PVT__multiply__DOT__exponent2;
    vlSelf->__Vdly__multiply__DOT__exponent_b1 = vlSelf->__PVT__multiply__DOT__exponent_b1;
    vlSelf->__Vdly__multiply__DOT__exponent_a1 = vlSelf->__PVT__multiply__DOT__exponent_a1;
    vlSelf->__Vdly__multiply__DOT__mantissa_b1 = vlSelf->__PVT__multiply__DOT__mantissa_b1;
    vlSelf->__Vdly__multiply__DOT__mantissa_a1 = vlSelf->__PVT__multiply__DOT__mantissa_a1;
    vlSelf->__Vdly__multiply__DOT__negative = vlSelf->__PVT__multiply__DOT__negative;
    vlSelf->__Vdly__square_root__DOT__rounded_failed 
        = vlSelf->__PVT__square_root__DOT__rounded_failed;
    vlSelf->__Vdly__square_root__DOT__rounded_value 
        = vlSelf->__PVT__square_root__DOT__rounded_value;
    vlSelf->__Vdly__square_root__DOT__failed = vlSelf->__PVT__square_root__DOT__failed;
    vlSelf->__Vdly__square_root__DOT__cycle = vlSelf->__PVT__square_root__DOT__cycle;
    vlSelf->__Vdly__square_root__DOT__active = vlSelf->__PVT__square_root__DOT__active;
    vlSelf->__Vdly__square_root__DOT__pairs = vlSelf->__PVT__square_root__DOT__pairs;
    vlSelf->__Vdly__square_root__DOT__root = vlSelf->__PVT__square_root__DOT__root;
    vlSelf->__Vdly__divide__DOT__rounded_failed = vlSelf->__PVT__divide__DOT__rounded_failed;
    vlSelf->__Vdly__divide__DOT__rounded_value = vlSelf->__PVT__divide__DOT__rounded_value;
    vlSelf->__Vdly__divide__DOT__failed = vlSelf->__PVT__divide__DOT__failed;
    vlSelf->__Vdly__divide__DOT__cycle = vlSelf->__PVT__divide__DOT__cycle;
    vlSelf->__Vdly__divide__DOT__active = vlSelf->__PVT__divide__DOT__active;
    vlSelf->__Vdly__divide__DOT__quotient = vlSelf->__PVT__divide__DOT__quotient;
    vlSelf->__Vdly__elapsed = vlSelf->__PVT__elapsed;
    vlSelf->__Vdly__failed = vlSelf->__PVT__failed;
    vlSelf->__Vdly__state = vlSelf->__PVT__state;
    vlSelf->__Vdly__operation = vlSelf->__PVT__operation;
    vlSelf->__Vdly__b = vlSelf->__PVT__b;
    vlSelf->__Vdly__a = vlSelf->__PVT__a;
}
