// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top__Syms.h"
#include "Vanvil_qn1_top_anvil_qn1_scalar.h"

VL_INLINE_OPT void Vanvil_qn1_top_anvil_qn1_scalar___ico_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic__0(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vanvil_qn1_top_anvil_qn1_scalar___ico_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic__0\n"); );
    // Body
    vlSelf->square_root__DOT____VdfgTmp_h0890133b__0 
        = ((~ (IData)(vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__unit_flush)) 
           & (IData)(vlSymsp->TOP.rst_n));
    vlSelf->in_ready = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                        & (0U == (IData)(vlSelf->__PVT__state)));
    vlSelf->out_valid = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                         & (3U == (IData)(vlSelf->__PVT__state)));
    vlSelf->__PVT__divide__DOT__ready = ((~ (IData)(vlSelf->__PVT__divide__DOT__active)) 
                                         & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
    vlSelf->__PVT__square_root__DOT__ready = ((~ (IData)(vlSelf->__PVT__square_root__DOT__active)) 
                                              & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
}

VL_INLINE_OPT void Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic__0(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic__0\n"); );
    // Init
    CData/*0:0*/ __PVT__add__DOT__a_larger;
    __PVT__add__DOT__a_larger = 0;
    IData/*30:0*/ __PVT__square_root__DOT__shifted_remainder;
    __PVT__square_root__DOT__shifted_remainder = 0;
    QData/*32:0*/ __Vfunc_round_pack32__133__Vfuncout;
    __Vfunc_round_pack32__133__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__133__negative;
    __Vfunc_round_pack32__133__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__133__exponent;
    __Vfunc_round_pack32__133__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__133__significand;
    __Vfunc_round_pack32__133__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__133__shifted;
    __Vfunc_round_pack32__133__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__133__rounded;
    __Vfunc_round_pack32__133__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__133__adjusted;
    __Vfunc_round_pack32__133__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__133__biased;
    __Vfunc_round_pack32__133__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__135__Vfuncout;
    __Vfunc_fp32_invalid__135__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__135__value;
    __Vfunc_fp32_invalid__135__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__136__Vfuncout;
    __Vfunc_fp32_invalid__136__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__136__value;
    __Vfunc_fp32_invalid__136__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__137__Vfuncout;
    __Vfunc_shift_jam27__137__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__137__value;
    __Vfunc_shift_jam27__137__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__137__distance;
    __Vfunc_shift_jam27__137__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__137__shifted;
    __Vfunc_shift_jam27__137__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__137__discarded;
    __Vfunc_shift_jam27__137__discarded = 0;
    QData/*32:0*/ __Vfunc_round_pack32__140__Vfuncout;
    __Vfunc_round_pack32__140__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__140__negative;
    __Vfunc_round_pack32__140__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__140__exponent;
    __Vfunc_round_pack32__140__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__140__significand;
    __Vfunc_round_pack32__140__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__140__shifted;
    __Vfunc_round_pack32__140__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__140__rounded;
    __Vfunc_round_pack32__140__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__140__adjusted;
    __Vfunc_round_pack32__140__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__140__biased;
    __Vfunc_round_pack32__140__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__142__Vfuncout;
    __Vfunc_fp32_invalid__142__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__142__value;
    __Vfunc_fp32_invalid__142__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__143__Vfuncout;
    __Vfunc_fp32_invalid__143__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__143__value;
    __Vfunc_fp32_invalid__143__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__146__Vfuncout;
    __Vfunc_round_pack32__146__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__146__negative;
    __Vfunc_round_pack32__146__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__146__exponent;
    __Vfunc_round_pack32__146__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__146__significand;
    __Vfunc_round_pack32__146__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__146__shifted;
    __Vfunc_round_pack32__146__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__146__rounded;
    __Vfunc_round_pack32__146__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__146__adjusted;
    __Vfunc_round_pack32__146__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__146__biased;
    __Vfunc_round_pack32__146__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__148__Vfuncout;
    __Vfunc_fp32_invalid__148__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__148__value;
    __Vfunc_fp32_invalid__148__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__149__Vfuncout;
    __Vfunc_fp32_invalid__149__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__149__value;
    __Vfunc_fp32_invalid__149__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__151__Vfuncout;
    __Vfunc_round_pack32__151__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__151__negative;
    __Vfunc_round_pack32__151__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__151__exponent;
    __Vfunc_round_pack32__151__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__151__significand;
    __Vfunc_round_pack32__151__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__151__shifted;
    __Vfunc_round_pack32__151__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__151__rounded;
    __Vfunc_round_pack32__151__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__151__adjusted;
    __Vfunc_round_pack32__151__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__151__biased;
    __Vfunc_round_pack32__151__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__153__Vfuncout;
    __Vfunc_fp32_invalid__153__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__153__value;
    __Vfunc_fp32_invalid__153__value = 0;
    CData/*1:0*/ __Vdly__state;
    __Vdly__state = 0;
    IData/*31:0*/ __Vdly__a;
    __Vdly__a = 0;
    IData/*31:0*/ __Vdly__b;
    __Vdly__b = 0;
    CData/*2:0*/ __Vdly__operation;
    __Vdly__operation = 0;
    CData/*0:0*/ __Vdly__failed;
    __Vdly__failed = 0;
    CData/*5:0*/ __Vdly__elapsed;
    __Vdly__elapsed = 0;
    IData/*26:0*/ __Vdly__add__DOT__large1;
    __Vdly__add__DOT__large1 = 0;
    IData/*26:0*/ __Vdly__add__DOT__small1;
    __Vdly__add__DOT__small1 = 0;
    SData/*11:0*/ __Vdly__add__DOT__distance1;
    __Vdly__add__DOT__distance1 = 0;
    SData/*11:0*/ __Vdly__add__DOT__exponent1;
    __Vdly__add__DOT__exponent1 = 0;
    SData/*11:0*/ __Vdly__add__DOT__exponent2;
    __Vdly__add__DOT__exponent2 = 0;
    SData/*11:0*/ __Vdly__add__DOT__exponent3;
    __Vdly__add__DOT__exponent3 = 0;
    CData/*0:0*/ __Vdly__add__DOT__negative1;
    __Vdly__add__DOT__negative1 = 0;
    CData/*0:0*/ __Vdly__add__DOT__negative2;
    __Vdly__add__DOT__negative2 = 0;
    CData/*0:0*/ __Vdly__add__DOT__negative3;
    __Vdly__add__DOT__negative3 = 0;
    CData/*0:0*/ __Vdly__add__DOT__subtract1;
    __Vdly__add__DOT__subtract1 = 0;
    CData/*0:0*/ __Vdly__add__DOT__subtract2;
    __Vdly__add__DOT__subtract2 = 0;
    IData/*27:0*/ __Vdly__add__DOT__sum3;
    __Vdly__add__DOT__sum3 = 0;
    CData/*4:0*/ __Vdly__add__DOT__failed;
    __Vdly__add__DOT__failed = 0;
    IData/*23:0*/ __Vdly__multiply__DOT__mantissa_a1;
    __Vdly__multiply__DOT__mantissa_a1 = 0;
    IData/*23:0*/ __Vdly__multiply__DOT__mantissa_b1;
    __Vdly__multiply__DOT__mantissa_b1 = 0;
    SData/*11:0*/ __Vdly__multiply__DOT__exponent_a1;
    __Vdly__multiply__DOT__exponent_a1 = 0;
    SData/*11:0*/ __Vdly__multiply__DOT__exponent_b1;
    __Vdly__multiply__DOT__exponent_b1 = 0;
    SData/*11:0*/ __Vdly__multiply__DOT__exponent2;
    __Vdly__multiply__DOT__exponent2 = 0;
    QData/*47:0*/ __Vdly__multiply__DOT__product2;
    __Vdly__multiply__DOT__product2 = 0;
    CData/*3:0*/ __Vdly__multiply__DOT__negative;
    __Vdly__multiply__DOT__negative = 0;
    CData/*3:0*/ __Vdly__multiply__DOT__failed;
    __Vdly__multiply__DOT__failed = 0;
    CData/*0:0*/ __Vdly__divide__DOT__active;
    __Vdly__divide__DOT__active = 0;
    CData/*5:0*/ __Vdly__divide__DOT__cycle;
    __Vdly__divide__DOT__cycle = 0;
    IData/*26:0*/ __Vdly__divide__DOT__quotient;
    __Vdly__divide__DOT__quotient = 0;
    CData/*0:0*/ __Vdly__divide__DOT__failed;
    __Vdly__divide__DOT__failed = 0;
    IData/*31:0*/ __Vdly__divide__DOT__rounded_value;
    __Vdly__divide__DOT__rounded_value = 0;
    CData/*0:0*/ __Vdly__divide__DOT__rounded_failed;
    __Vdly__divide__DOT__rounded_failed = 0;
    CData/*0:0*/ __Vdly__square_root__DOT__active;
    __Vdly__square_root__DOT__active = 0;
    CData/*5:0*/ __Vdly__square_root__DOT__cycle;
    __Vdly__square_root__DOT__cycle = 0;
    QData/*53:0*/ __Vdly__square_root__DOT__pairs;
    __Vdly__square_root__DOT__pairs = 0;
    IData/*26:0*/ __Vdly__square_root__DOT__root;
    __Vdly__square_root__DOT__root = 0;
    CData/*0:0*/ __Vdly__square_root__DOT__failed;
    __Vdly__square_root__DOT__failed = 0;
    IData/*31:0*/ __Vdly__square_root__DOT__rounded_value;
    __Vdly__square_root__DOT__rounded_value = 0;
    CData/*0:0*/ __Vdly__square_root__DOT__rounded_failed;
    __Vdly__square_root__DOT__rounded_failed = 0;
    // Body
    __Vdly__add__DOT__failed = vlSelf->__PVT__add__DOT__failed;
    __Vdly__add__DOT__subtract1 = vlSelf->__PVT__add__DOT__subtract1;
    __Vdly__add__DOT__negative3 = vlSelf->__PVT__add__DOT__negative3;
    __Vdly__add__DOT__negative2 = vlSelf->__PVT__add__DOT__negative2;
    __Vdly__add__DOT__negative1 = vlSelf->__PVT__add__DOT__negative1;
    __Vdly__add__DOT__exponent3 = vlSelf->__PVT__add__DOT__exponent3;
    __Vdly__add__DOT__exponent2 = vlSelf->__PVT__add__DOT__exponent2;
    __Vdly__add__DOT__exponent1 = vlSelf->__PVT__add__DOT__exponent1;
    __Vdly__add__DOT__distance1 = vlSelf->__PVT__add__DOT__distance1;
    __Vdly__add__DOT__small1 = vlSelf->__PVT__add__DOT__small1;
    __Vdly__add__DOT__large1 = vlSelf->__PVT__add__DOT__large1;
    __Vdly__add__DOT__subtract2 = vlSelf->__PVT__add__DOT__subtract2;
    __Vdly__add__DOT__sum3 = vlSelf->__PVT__add__DOT__sum3;
    __Vdly__multiply__DOT__failed = vlSelf->__PVT__multiply__DOT__failed;
    __Vdly__multiply__DOT__product2 = vlSelf->__PVT__multiply__DOT__product2;
    __Vdly__multiply__DOT__exponent2 = vlSelf->__PVT__multiply__DOT__exponent2;
    __Vdly__multiply__DOT__exponent_b1 = vlSelf->__PVT__multiply__DOT__exponent_b1;
    __Vdly__multiply__DOT__exponent_a1 = vlSelf->__PVT__multiply__DOT__exponent_a1;
    __Vdly__multiply__DOT__mantissa_b1 = vlSelf->__PVT__multiply__DOT__mantissa_b1;
    __Vdly__multiply__DOT__mantissa_a1 = vlSelf->__PVT__multiply__DOT__mantissa_a1;
    __Vdly__multiply__DOT__negative = vlSelf->__PVT__multiply__DOT__negative;
    __Vdly__square_root__DOT__rounded_failed = vlSelf->__PVT__square_root__DOT__rounded_failed;
    __Vdly__square_root__DOT__rounded_value = vlSelf->__PVT__square_root__DOT__rounded_value;
    __Vdly__square_root__DOT__failed = vlSelf->__PVT__square_root__DOT__failed;
    __Vdly__square_root__DOT__cycle = vlSelf->__PVT__square_root__DOT__cycle;
    __Vdly__square_root__DOT__active = vlSelf->__PVT__square_root__DOT__active;
    __Vdly__square_root__DOT__pairs = vlSelf->__PVT__square_root__DOT__pairs;
    __Vdly__square_root__DOT__root = vlSelf->__PVT__square_root__DOT__root;
    __Vdly__divide__DOT__rounded_failed = vlSelf->__PVT__divide__DOT__rounded_failed;
    __Vdly__divide__DOT__rounded_value = vlSelf->__PVT__divide__DOT__rounded_value;
    __Vdly__divide__DOT__failed = vlSelf->__PVT__divide__DOT__failed;
    __Vdly__divide__DOT__cycle = vlSelf->__PVT__divide__DOT__cycle;
    __Vdly__divide__DOT__active = vlSelf->__PVT__divide__DOT__active;
    __Vdly__divide__DOT__quotient = vlSelf->__PVT__divide__DOT__quotient;
    __Vdly__elapsed = vlSelf->__PVT__elapsed;
    __Vdly__failed = vlSelf->__PVT__failed;
    __Vdly__state = vlSelf->__PVT__state;
    __Vdly__operation = vlSelf->__PVT__operation;
    __Vdly__b = vlSelf->__PVT__b;
    __Vdly__a = vlSelf->__PVT__a;
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__unit_flush) {
            __Vdly__state = 0U;
            vlSelf->__PVT__data = 0U;
            vlSelf->__PVT__result_failed = 0U;
        } else if ((0U == (IData)(vlSelf->__PVT__state))) {
            if (((IData)(vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__alu_valid) 
                 & (IData)(vlSelf->in_ready))) {
                __Vdly__a = vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__a;
                __Vdly__b = vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__b;
                __Vdly__operation = vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__op;
                __Vdly__failed = (4U < (IData)(vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__op));
                __Vdly__elapsed = 0U;
                __Vdly__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__state))) {
            __Vdly__elapsed = 1U;
            __Vdly__state = 2U;
        } else if ((2U == (IData)(vlSelf->__PVT__state))) {
            __Vdly__elapsed = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__elapsed)));
            if (((((((1U >= (IData)(vlSelf->__PVT__operation)) 
                     & (5U == (IData)(vlSelf->__PVT__elapsed))) 
                    | ((2U == (IData)(vlSelf->__PVT__operation)) 
                       & (4U == (IData)(vlSelf->__PVT__elapsed)))) 
                   | ((3U == (IData)(vlSelf->__PVT__operation)) 
                      & ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                         & (IData)(vlSelf->__PVT__divide__DOT__done_reg)))) 
                  | ((4U == (IData)(vlSelf->__PVT__operation)) 
                     & ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                        & (IData)(vlSelf->__PVT__square_root__DOT__done_reg)))) 
                 | (4U < (IData)(vlSelf->__PVT__operation)))) {
                if (((0U == (IData)(vlSelf->__PVT__operation)) 
                     || (1U == (IData)(vlSelf->__PVT__operation)))) {
                    if (vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) {
                        vlSelf->__PVT__data = vlSelf->__PVT__add__DOT__value5;
                        vlSelf->__PVT__result_failed 
                            = vlSelf->__PVT__add__DOT__error5;
                    } else {
                        vlSelf->__PVT__data = 0U;
                        vlSelf->__PVT__result_failed = 0U;
                    }
                } else if ((2U == (IData)(vlSelf->__PVT__operation))) {
                    if (vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) {
                        vlSelf->__PVT__data = vlSelf->__PVT__multiply__DOT__value4;
                        vlSelf->__PVT__result_failed 
                            = vlSelf->__PVT__multiply__DOT__error4;
                    } else {
                        vlSelf->__PVT__data = 0U;
                        vlSelf->__PVT__result_failed = 0U;
                    }
                } else if ((3U == (IData)(vlSelf->__PVT__operation))) {
                    if (vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) {
                        vlSelf->__PVT__data = vlSelf->__PVT__divide__DOT__value;
                        vlSelf->__PVT__result_failed 
                            = vlSelf->__PVT__divide__DOT__result_failed;
                    } else {
                        vlSelf->__PVT__data = 0U;
                        vlSelf->__PVT__result_failed = 0U;
                    }
                } else if ((4U == (IData)(vlSelf->__PVT__operation))) {
                    if (vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) {
                        vlSelf->__PVT__data = vlSelf->__PVT__square_root__DOT__value;
                        vlSelf->__PVT__result_failed 
                            = vlSelf->__PVT__square_root__DOT__result_failed;
                    } else {
                        vlSelf->__PVT__data = 0U;
                        vlSelf->__PVT__result_failed = 0U;
                    }
                } else {
                    vlSelf->__PVT__data = 0U;
                    vlSelf->__PVT__result_failed = 1U;
                }
                __Vdly__state = 3U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__state))) {
            if (vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__waiting) {
                __Vdly__state = 0U;
            }
        } else {
            __Vdly__state = 0U;
        }
    } else {
        __Vdly__state = 0U;
        __Vdly__operation = 0U;
        __Vdly__elapsed = 0U;
        __Vdly__a = 0U;
        __Vdly__b = 0U;
        vlSelf->__PVT__data = 0U;
        __Vdly__failed = 0U;
        vlSelf->__PVT__result_failed = 0U;
    }
    vlSelf->__PVT__elapsed = __Vdly__elapsed;
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__unit_flush) {
            __Vdly__add__DOT__large1 = 0U;
            __Vdly__add__DOT__small1 = 0U;
            vlSelf->__PVT__add__DOT__large2 = 0U;
            vlSelf->__PVT__add__DOT__small2 = 0U;
            __Vdly__add__DOT__distance1 = 0U;
            __Vdly__add__DOT__exponent1 = 0U;
            __Vdly__add__DOT__exponent2 = 0U;
            __Vdly__add__DOT__exponent3 = 0U;
            vlSelf->__PVT__add__DOT__exponent4 = 0U;
            __Vdly__add__DOT__negative1 = 0U;
            __Vdly__add__DOT__negative2 = 0U;
            __Vdly__add__DOT__negative3 = 0U;
            vlSelf->__PVT__add__DOT__negative4 = 0U;
            __Vdly__add__DOT__subtract1 = 0U;
            __Vdly__add__DOT__subtract2 = 0U;
            __Vdly__add__DOT__sum3 = 0U;
            vlSelf->__PVT__add__DOT__significand4 = 0U;
            __Vdly__add__DOT__failed = 0U;
            vlSelf->__PVT__add__DOT__value5 = 0U;
            vlSelf->__PVT__add__DOT__error5 = 0U;
        } else {
            __Vdly__add__DOT__failed = ((0x1eU & ((IData)(vlSelf->__PVT__add__DOT__failed) 
                                                  << 1U)) 
                                        | (((IData)(vlSelf->__PVT__failed) 
                                            | ([&]() {
                                __Vfunc_fp32_invalid__135__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__135__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__135__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__135__Vfuncout))) 
                                           | ([&]() {
                            __Vfunc_fp32_invalid__136__value 
                                = vlSelf->__PVT__add_b;
                            __Vfunc_fp32_invalid__136__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__136__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__136__Vfuncout))));
            __Vfunc_shift_jam27__137__distance = vlSelf->__PVT__add__DOT__distance1;
            __Vfunc_shift_jam27__137__value = vlSelf->__PVT__add__DOT__small1;
            vlSelf->__PVT__add__DOT__large2 = vlSelf->__PVT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__137__distance))) {
                __Vfunc_shift_jam27__137__Vfuncout 
                    = __Vfunc_shift_jam27__137__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__137__distance))) {
                __Vfunc_shift_jam27__137__Vfuncout 
                    = (0U != __Vfunc_shift_jam27__137__value);
            } else {
                __Vfunc_shift_jam27__137__shifted = 
                    (0x7ffffffU & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__137__value, (IData)(__Vfunc_shift_jam27__137__distance)));
                __Vfunc_shift_jam27__137__discarded 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__137__value, 
                                                  (0xfffU 
                                                   & ((IData)(0x1bU) 
                                                      - (IData)(__Vfunc_shift_jam27__137__distance)))));
                __Vfunc_shift_jam27__137__Vfuncout 
                    = ((0x7fffffeU & __Vfunc_shift_jam27__137__shifted) 
                       | (1U & (__Vfunc_shift_jam27__137__shifted 
                                | (0U != __Vfunc_shift_jam27__137__discarded))));
            }
            if ((0x8000000U & vlSelf->__PVT__add__DOT__sum3)) {
                vlSelf->__PVT__add__DOT__significand4 
                    = ((0x7fffffeU & (vlSelf->__PVT__add__DOT__sum3 
                                      >> 1U)) | (IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelf->__PVT__add__DOT__sum3))));
                vlSelf->__PVT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->__PVT__add__DOT__exponent3)));
            } else {
                vlSelf->__PVT__add__DOT__significand4 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,6, vlSelf->__PVT__add__DOT__sum3, (IData)(vlSelf->__PVT__add__DOT__left_shift)));
                vlSelf->__PVT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(vlSelf->__PVT__add__DOT__exponent3) 
                                 - (IData)(vlSelf->__PVT__add__DOT__left_shift)));
            }
            vlSelf->__PVT__add__DOT__negative4 = vlSelf->__PVT__add__DOT__negative3;
            vlSelf->__PVT__add__DOT__value5 = ((1U 
                                                & (((IData)(vlSelf->__PVT__add__DOT__failed) 
                                                    >> 3U) 
                                                   | (IData)(
                                                             (vlSelf->__PVT__add__DOT__packed5 
                                                              >> 0x20U))))
                                                ? 0U
                                                : (IData)(vlSelf->__PVT__add__DOT__packed5));
            __Vdly__add__DOT__distance1 = (0xfffU & 
                                           ((IData)(vlSelf->__PVT__add__DOT__large_exponent) 
                                            - ((0U 
                                                == 
                                                (0xffU 
                                                 & (vlSelf->__PVT__add__DOT__small_value 
                                                    >> 0x17U)))
                                                ? 0xf82U
                                                : (
                                                   (0xffU 
                                                    & (vlSelf->__PVT__add__DOT__small_value 
                                                       >> 0x17U)) 
                                                   - (IData)(0x7fU)))));
            vlSelf->__PVT__add__DOT__small2 = __Vfunc_shift_jam27__137__Vfuncout;
            vlSelf->__PVT__add__DOT__error5 = (1U & 
                                               (((IData)(vlSelf->__PVT__add__DOT__failed) 
                                                 >> 3U) 
                                                | (IData)(
                                                          (vlSelf->__PVT__add__DOT__packed5 
                                                           >> 0x20U))));
            __Vdly__add__DOT__small1 = (((0U != (0xffU 
                                                 & (vlSelf->__PVT__add__DOT__small_value 
                                                    >> 0x17U))) 
                                         << 0x1aU) 
                                        | (0x3fffff8U 
                                           & (vlSelf->__PVT__add__DOT__small_value 
                                              << 3U)));
            __Vdly__add__DOT__large1 = (((0U != (0xffU 
                                                 & (vlSelf->__PVT__add__DOT__large_value 
                                                    >> 0x17U))) 
                                         << 0x1aU) 
                                        | (0x3fffff8U 
                                           & (vlSelf->__PVT__add__DOT__large_value 
                                              << 3U)));
            __Vdly__add__DOT__sum3 = vlSelf->__PVT__add__DOT__sum_next;
            __Vdly__add__DOT__exponent3 = vlSelf->__PVT__add__DOT__exponent2;
            __Vdly__add__DOT__negative3 = ((~ ((0U 
                                                == vlSelf->__PVT__add__DOT__sum_next) 
                                               & (IData)(vlSelf->__PVT__add__DOT__subtract2))) 
                                           & (IData)(vlSelf->__PVT__add__DOT__negative2));
            __Vdly__add__DOT__exponent2 = vlSelf->__PVT__add__DOT__exponent1;
            __Vdly__add__DOT__negative2 = vlSelf->__PVT__add__DOT__negative1;
            __Vdly__add__DOT__subtract2 = vlSelf->__PVT__add__DOT__subtract1;
            __Vdly__add__DOT__exponent1 = vlSelf->__PVT__add__DOT__large_exponent;
            __Vdly__add__DOT__negative1 = (vlSelf->__PVT__add__DOT__large_value 
                                           >> 0x1fU);
            __Vdly__add__DOT__subtract1 = ((vlSelf->__PVT__a 
                                            ^ vlSelf->__PVT__add_b) 
                                           >> 0x1fU);
        }
    } else {
        __Vdly__add__DOT__large1 = 0U;
        __Vdly__add__DOT__small1 = 0U;
        vlSelf->__PVT__add__DOT__large2 = 0U;
        vlSelf->__PVT__add__DOT__small2 = 0U;
        __Vdly__add__DOT__distance1 = 0U;
        __Vdly__add__DOT__exponent1 = 0U;
        __Vdly__add__DOT__exponent2 = 0U;
        __Vdly__add__DOT__exponent3 = 0U;
        vlSelf->__PVT__add__DOT__exponent4 = 0U;
        __Vdly__add__DOT__negative1 = 0U;
        __Vdly__add__DOT__negative2 = 0U;
        __Vdly__add__DOT__negative3 = 0U;
        vlSelf->__PVT__add__DOT__negative4 = 0U;
        __Vdly__add__DOT__subtract1 = 0U;
        __Vdly__add__DOT__subtract2 = 0U;
        __Vdly__add__DOT__sum3 = 0U;
        vlSelf->__PVT__add__DOT__significand4 = 0U;
        __Vdly__add__DOT__failed = 0U;
        vlSelf->__PVT__add__DOT__value5 = 0U;
        vlSelf->__PVT__add__DOT__error5 = 0U;
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__unit_flush) {
            __Vdly__multiply__DOT__mantissa_a1 = 0U;
            __Vdly__multiply__DOT__mantissa_b1 = 0U;
            __Vdly__multiply__DOT__exponent_a1 = 0U;
            __Vdly__multiply__DOT__exponent_b1 = 0U;
            __Vdly__multiply__DOT__exponent2 = 0U;
            vlSelf->__PVT__multiply__DOT__exponent3 = 0U;
            __Vdly__multiply__DOT__product2 = 0ULL;
            vlSelf->__PVT__multiply__DOT__significand3 = 0U;
            __Vdly__multiply__DOT__negative = 0U;
            __Vdly__multiply__DOT__failed = 0U;
            vlSelf->__PVT__multiply__DOT__value4 = 0U;
            vlSelf->__PVT__multiply__DOT__error4 = 0U;
        } else {
            __Vdly__multiply__DOT__negative = ((0xeU 
                                                & ((IData)(vlSelf->__PVT__multiply__DOT__negative) 
                                                   << 1U)) 
                                               | ((vlSelf->__PVT__a 
                                                   ^ vlSelf->__PVT__b) 
                                                  >> 0x1fU));
            __Vdly__multiply__DOT__failed = ((0xeU 
                                              & ((IData)(vlSelf->__PVT__multiply__DOT__failed) 
                                                 << 1U)) 
                                             | (((IData)(vlSelf->__PVT__failed) 
                                                 | ([&]() {
                                __Vfunc_fp32_invalid__142__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__142__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__142__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__142__Vfuncout))) 
                                                | ([&]() {
                            __Vfunc_fp32_invalid__143__value 
                                = vlSelf->__PVT__b;
                            __Vfunc_fp32_invalid__143__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__143__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__143__Vfuncout))));
            if ((1U & (IData)((vlSelf->__PVT__multiply__DOT__product2 
                               >> 0x2fU)))) {
                vlSelf->__PVT__multiply__DOT__significand3 
                    = ((0x7fffffeU & ((IData)((vlSelf->__PVT__multiply__DOT__product2 
                                               >> 0x16U)) 
                                      << 1U)) | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x3fffffULL 
                                                          & vlSelf->__PVT__multiply__DOT__product2))));
                vlSelf->__PVT__multiply__DOT__exponent3 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->__PVT__multiply__DOT__exponent2)));
            } else {
                vlSelf->__PVT__multiply__DOT__significand3 
                    = ((0x7fffffeU & ((IData)((vlSelf->__PVT__multiply__DOT__product2 
                                               >> 0x15U)) 
                                      << 1U)) | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x1fffffULL 
                                                          & vlSelf->__PVT__multiply__DOT__product2))));
                vlSelf->__PVT__multiply__DOT__exponent3 
                    = vlSelf->__PVT__multiply__DOT__exponent2;
            }
            if ((1U & (((IData)(vlSelf->__PVT__multiply__DOT__failed) 
                        >> 2U) | (IData)((vlSelf->__PVT__multiply__DOT__packed4 
                                          >> 0x20U))))) {
                vlSelf->__PVT__multiply__DOT__value4 = 0U;
                vlSelf->__PVT__multiply__DOT__error4 = 1U;
            } else {
                vlSelf->__PVT__multiply__DOT__value4 
                    = (IData)(vlSelf->__PVT__multiply__DOT__packed4);
                vlSelf->__PVT__multiply__DOT__error4 = 0U;
            }
            __Vdly__multiply__DOT__product2 = (0xffffffffffffULL 
                                               & ((QData)((IData)(vlSelf->__PVT__multiply__DOT__mantissa_a1)) 
                                                  * (QData)((IData)(vlSelf->__PVT__multiply__DOT__mantissa_b1))));
            __Vdly__multiply__DOT__exponent2 = (0xfffU 
                                                & ((IData)(vlSelf->__PVT__multiply__DOT__exponent_a1) 
                                                   + (IData)(vlSelf->__PVT__multiply__DOT__exponent_b1)));
            __Vdly__multiply__DOT__mantissa_a1 = (0xffffffU 
                                                  & VL_SHIFTL_III(24,24,6, vlSelf->__PVT__divide__DOT__raw_a, (IData)(vlSelf->__PVT__multiply__DOT__shift_a)));
            __Vdly__multiply__DOT__mantissa_b1 = (0xffffffU 
                                                  & VL_SHIFTL_III(24,24,6, vlSelf->__PVT__divide__DOT__raw_b, (IData)(vlSelf->__PVT__multiply__DOT__shift_b)));
            __Vdly__multiply__DOT__exponent_a1 = (0xfffU 
                                                  & ((IData)(vlSelf->__VdfgTmp_ha96a2c24__0) 
                                                     - (IData)(vlSelf->__PVT__multiply__DOT__shift_a)));
            __Vdly__multiply__DOT__exponent_b1 = (0xfffU 
                                                  & ((IData)(vlSelf->__VdfgTmp_h3e0667de__0) 
                                                     - (IData)(vlSelf->__PVT__multiply__DOT__shift_b)));
        }
    } else {
        __Vdly__multiply__DOT__mantissa_a1 = 0U;
        __Vdly__multiply__DOT__mantissa_b1 = 0U;
        __Vdly__multiply__DOT__exponent_a1 = 0U;
        __Vdly__multiply__DOT__exponent_b1 = 0U;
        __Vdly__multiply__DOT__exponent2 = 0U;
        vlSelf->__PVT__multiply__DOT__exponent3 = 0U;
        __Vdly__multiply__DOT__product2 = 0ULL;
        vlSelf->__PVT__multiply__DOT__significand3 = 0U;
        __Vdly__multiply__DOT__negative = 0U;
        __Vdly__multiply__DOT__failed = 0U;
        vlSelf->__PVT__multiply__DOT__value4 = 0U;
        vlSelf->__PVT__multiply__DOT__error4 = 0U;
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__unit_flush) {
            __Vdly__square_root__DOT__active = 0U;
            vlSelf->__PVT__square_root__DOT__done_reg = 0U;
            vlSelf->__PVT__square_root__DOT__value = 0U;
            vlSelf->__PVT__square_root__DOT__result_failed = 0U;
        } else {
            vlSelf->__PVT__square_root__DOT__done_reg = 0U;
            if ((((1U == (IData)(vlSelf->__PVT__state)) 
                  & (4U == (IData)(vlSelf->__PVT__operation))) 
                 & (IData)(vlSelf->__PVT__square_root__DOT__ready))) {
                __Vdly__square_root__DOT__active = 1U;
                __Vdly__square_root__DOT__cycle = 1U;
                __Vdly__square_root__DOT__pairs = (0x3fffffffffffffULL 
                                                   & ((QData)((IData)(
                                                                      (0xffffffU 
                                                                       & VL_SHIFTL_III(24,24,6, vlSelf->__PVT__divide__DOT__raw_a, (IData)(vlSelf->__PVT__square_root__DOT__shift))))) 
                                                      << 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__square_root__DOT__input_exponent))
                                                        ? 0x1eU
                                                        : 0x1dU)));
                vlSelf->__PVT__square_root__DOT__remainder = 0U;
                __Vdly__square_root__DOT__root = 0U;
                vlSelf->__PVT__square_root__DOT__exponent 
                    = (0xfffU & VL_SHIFTRS_III(12,12,32, (IData)(vlSelf->__PVT__square_root__DOT__input_exponent), 1U));
                vlSelf->__PVT__square_root__DOT__negative 
                    = ((vlSelf->__PVT__a >> 0x1fU) 
                       & (0U == vlSelf->__PVT__divide__DOT__raw_a));
                __Vdly__square_root__DOT__failed = 
                    (((IData)(vlSelf->__PVT__failed) 
                      | ([&]() {
                                __Vfunc_fp32_invalid__153__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__153__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__153__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__153__Vfuncout))) 
                     | ((vlSelf->__PVT__a >> 0x1fU) 
                        & (0U != vlSelf->__PVT__divide__DOT__raw_a)));
            } else if (vlSelf->__PVT__square_root__DOT__active) {
                __Vdly__square_root__DOT__cycle = (0x3fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__square_root__DOT__cycle)));
                if ((0x1bU >= (IData)(vlSelf->__PVT__square_root__DOT__cycle))) {
                    __Vdly__square_root__DOT__pairs 
                        = (0x3ffffffffffffcULL & (vlSelf->__PVT__square_root__DOT__pairs 
                                                  << 2U));
                    __Vdly__square_root__DOT__root 
                        = ((0x7fffffeU & (vlSelf->__PVT__square_root__DOT__root 
                                          << 1U)) | (IData)(vlSelf->__PVT__square_root__DOT__take_bit));
                    vlSelf->__PVT__square_root__DOT__remainder 
                        = (0x1fffffffU & vlSelf->__PVT__square_root__DOT__next_remainder);
                } else if ((0x1cU == (IData)(vlSelf->__PVT__square_root__DOT__cycle))) {
                    if (((IData)(vlSelf->__PVT__square_root__DOT__failed) 
                         | (vlSelf->__PVT__square_root__DOT__packed_result 
                            >> 0x20U))) {
                        __Vdly__square_root__DOT__rounded_value = 0U;
                        __Vdly__square_root__DOT__rounded_failed = 1U;
                    } else {
                        __Vdly__square_root__DOT__rounded_value 
                            = (IData)(vlSelf->__PVT__square_root__DOT__packed_result);
                        __Vdly__square_root__DOT__rounded_failed = 0U;
                    }
                } else if ((0x21U == (IData)(vlSelf->__PVT__square_root__DOT__cycle))) {
                    vlSelf->__PVT__square_root__DOT__value 
                        = vlSelf->__PVT__square_root__DOT__rounded_value;
                    vlSelf->__PVT__square_root__DOT__result_failed 
                        = vlSelf->__PVT__square_root__DOT__rounded_failed;
                    __Vdly__square_root__DOT__active = 0U;
                    vlSelf->__PVT__square_root__DOT__done_reg = 1U;
                }
            }
        }
    } else {
        __Vdly__square_root__DOT__active = 0U;
        vlSelf->__PVT__square_root__DOT__done_reg = 0U;
        __Vdly__square_root__DOT__failed = 0U;
        vlSelf->__PVT__square_root__DOT__negative = 0U;
        __Vdly__square_root__DOT__cycle = 0U;
        __Vdly__square_root__DOT__pairs = 0ULL;
        vlSelf->__PVT__square_root__DOT__remainder = 0U;
        __Vdly__square_root__DOT__root = 0U;
        vlSelf->__PVT__square_root__DOT__exponent = 0U;
        vlSelf->__PVT__square_root__DOT__value = 0U;
        vlSelf->__PVT__square_root__DOT__result_failed = 0U;
        __Vdly__square_root__DOT__rounded_value = 0U;
        __Vdly__square_root__DOT__rounded_failed = 0U;
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__unit_flush) {
            __Vdly__divide__DOT__active = 0U;
            vlSelf->__PVT__divide__DOT__done_reg = 0U;
            vlSelf->__PVT__divide__DOT__value = 0U;
            vlSelf->__PVT__divide__DOT__result_failed = 0U;
        } else {
            vlSelf->__PVT__divide__DOT__done_reg = 0U;
            if ((((1U == (IData)(vlSelf->__PVT__state)) 
                  & (3U == (IData)(vlSelf->__PVT__operation))) 
                 & (IData)(vlSelf->__PVT__divide__DOT__ready))) {
                __Vdly__divide__DOT__active = 1U;
                __Vdly__divide__DOT__cycle = 1U;
                vlSelf->__PVT__divide__DOT__divisor 
                    = vlSelf->__PVT__divide__DOT__normalized_b;
                vlSelf->__PVT__divide__DOT__remainder 
                    = (0x1ffffffU & (((IData)(vlSelf->__PVT__divide__DOT__below_one)
                                       ? (vlSelf->__PVT__divide__DOT__normalized_a 
                                          << 1U) : vlSelf->__PVT__divide__DOT__normalized_a) 
                                     - vlSelf->__PVT__divide__DOT__normalized_b));
                __Vdly__divide__DOT__quotient = 1U;
                vlSelf->__PVT__divide__DOT__exponent 
                    = (0xfffU & ((((IData)(vlSelf->__VdfgTmp_ha96a2c24__0) 
                                   - (IData)(vlSelf->__PVT__divide__DOT__shift_a)) 
                                  - ((IData)(vlSelf->__VdfgTmp_h3e0667de__0) 
                                     - (IData)(vlSelf->__PVT__divide__DOT__shift_b))) 
                                 - ((IData)(vlSelf->__PVT__divide__DOT__below_one)
                                     ? 1U : 0U)));
                vlSelf->__PVT__divide__DOT__negative 
                    = ((vlSelf->__PVT__a ^ vlSelf->__PVT__b) 
                       >> 0x1fU);
                vlSelf->__PVT__divide__DOT__zero = 
                    (0U == vlSelf->__PVT__divide__DOT__raw_a);
                __Vdly__divide__DOT__failed = ((((IData)(vlSelf->__PVT__failed) 
                                                 | ([&]() {
                                    __Vfunc_fp32_invalid__148__value 
                                        = vlSelf->__PVT__a;
                                    __Vfunc_fp32_invalid__148__Vfuncout 
                                        = (0xffU == 
                                           (0xffU & 
                                            (__Vfunc_fp32_invalid__148__value 
                                             >> 0x17U)));
                                }(), (IData)(__Vfunc_fp32_invalid__148__Vfuncout))) 
                                                | ([&]() {
                                __Vfunc_fp32_invalid__149__value 
                                    = vlSelf->__PVT__b;
                                __Vfunc_fp32_invalid__149__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__149__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__149__Vfuncout))) 
                                               | (0U 
                                                  == vlSelf->__PVT__divide__DOT__raw_b));
            } else if (vlSelf->__PVT__divide__DOT__active) {
                __Vdly__divide__DOT__cycle = (0x3fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__divide__DOT__cycle)));
                if ((0x1aU >= (IData)(vlSelf->__PVT__divide__DOT__cycle))) {
                    __Vdly__divide__DOT__quotient = 
                        ((0x7fffffeU & (vlSelf->__PVT__divide__DOT__quotient 
                                        << 1U)) | (IData)(vlSelf->__PVT__divide__DOT__take_bit));
                    vlSelf->__PVT__divide__DOT__remainder 
                        = (0x1ffffffU & vlSelf->__PVT__divide__DOT__next_remainder);
                } else if ((0x1bU == (IData)(vlSelf->__PVT__divide__DOT__cycle))) {
                    if (((IData)(vlSelf->__PVT__divide__DOT__failed) 
                         | (vlSelf->__PVT__divide__DOT__packed_result 
                            >> 0x20U))) {
                        __Vdly__divide__DOT__rounded_value = 0U;
                        __Vdly__divide__DOT__rounded_failed = 1U;
                    } else {
                        __Vdly__divide__DOT__rounded_value 
                            = (IData)(vlSelf->__PVT__divide__DOT__packed_result);
                        __Vdly__divide__DOT__rounded_failed = 0U;
                    }
                } else if ((0x21U == (IData)(vlSelf->__PVT__divide__DOT__cycle))) {
                    vlSelf->__PVT__divide__DOT__value 
                        = vlSelf->__PVT__divide__DOT__rounded_value;
                    vlSelf->__PVT__divide__DOT__result_failed 
                        = vlSelf->__PVT__divide__DOT__rounded_failed;
                    __Vdly__divide__DOT__active = 0U;
                    vlSelf->__PVT__divide__DOT__done_reg = 1U;
                }
            }
        }
    } else {
        __Vdly__divide__DOT__active = 0U;
        vlSelf->__PVT__divide__DOT__done_reg = 0U;
        vlSelf->__PVT__divide__DOT__negative = 0U;
        __Vdly__divide__DOT__failed = 0U;
        vlSelf->__PVT__divide__DOT__zero = 0U;
        __Vdly__divide__DOT__cycle = 0U;
        vlSelf->__PVT__divide__DOT__divisor = 0U;
        vlSelf->__PVT__divide__DOT__remainder = 0U;
        __Vdly__divide__DOT__quotient = 0U;
        vlSelf->__PVT__divide__DOT__exponent = 0U;
        vlSelf->__PVT__divide__DOT__value = 0U;
        vlSelf->__PVT__divide__DOT__result_failed = 0U;
        __Vdly__divide__DOT__rounded_value = 0U;
        __Vdly__divide__DOT__rounded_failed = 0U;
    }
    vlSelf->__PVT__add__DOT__large1 = __Vdly__add__DOT__large1;
    vlSelf->__PVT__add__DOT__small1 = __Vdly__add__DOT__small1;
    vlSelf->__PVT__add__DOT__distance1 = __Vdly__add__DOT__distance1;
    vlSelf->__PVT__add__DOT__exponent1 = __Vdly__add__DOT__exponent1;
    vlSelf->__PVT__add__DOT__exponent2 = __Vdly__add__DOT__exponent2;
    vlSelf->__PVT__add__DOT__exponent3 = __Vdly__add__DOT__exponent3;
    vlSelf->__PVT__add__DOT__negative1 = __Vdly__add__DOT__negative1;
    vlSelf->__PVT__add__DOT__negative2 = __Vdly__add__DOT__negative2;
    vlSelf->__PVT__add__DOT__negative3 = __Vdly__add__DOT__negative3;
    vlSelf->__PVT__add__DOT__subtract1 = __Vdly__add__DOT__subtract1;
    vlSelf->__PVT__add__DOT__failed = __Vdly__add__DOT__failed;
    vlSelf->__PVT__add__DOT__subtract2 = __Vdly__add__DOT__subtract2;
    vlSelf->__PVT__add__DOT__sum3 = __Vdly__add__DOT__sum3;
    vlSelf->__PVT__multiply__DOT__mantissa_a1 = __Vdly__multiply__DOT__mantissa_a1;
    vlSelf->__PVT__multiply__DOT__mantissa_b1 = __Vdly__multiply__DOT__mantissa_b1;
    vlSelf->__PVT__multiply__DOT__exponent_a1 = __Vdly__multiply__DOT__exponent_a1;
    vlSelf->__PVT__multiply__DOT__exponent_b1 = __Vdly__multiply__DOT__exponent_b1;
    vlSelf->__PVT__multiply__DOT__exponent2 = __Vdly__multiply__DOT__exponent2;
    vlSelf->__PVT__multiply__DOT__product2 = __Vdly__multiply__DOT__product2;
    vlSelf->__PVT__multiply__DOT__failed = __Vdly__multiply__DOT__failed;
    vlSelf->__PVT__multiply__DOT__negative = __Vdly__multiply__DOT__negative;
    vlSelf->__PVT__square_root__DOT__cycle = __Vdly__square_root__DOT__cycle;
    vlSelf->__PVT__square_root__DOT__failed = __Vdly__square_root__DOT__failed;
    vlSelf->__PVT__square_root__DOT__rounded_value 
        = __Vdly__square_root__DOT__rounded_value;
    vlSelf->__PVT__square_root__DOT__rounded_failed 
        = __Vdly__square_root__DOT__rounded_failed;
    vlSelf->__PVT__square_root__DOT__active = __Vdly__square_root__DOT__active;
    vlSelf->__PVT__square_root__DOT__pairs = __Vdly__square_root__DOT__pairs;
    vlSelf->__PVT__square_root__DOT__root = __Vdly__square_root__DOT__root;
    vlSelf->__PVT__divide__DOT__cycle = __Vdly__divide__DOT__cycle;
    vlSelf->__PVT__divide__DOT__failed = __Vdly__divide__DOT__failed;
    vlSelf->__PVT__divide__DOT__rounded_value = __Vdly__divide__DOT__rounded_value;
    vlSelf->__PVT__divide__DOT__rounded_failed = __Vdly__divide__DOT__rounded_failed;
    vlSelf->__PVT__failed = __Vdly__failed;
    vlSelf->__PVT__divide__DOT__active = __Vdly__divide__DOT__active;
    vlSelf->__PVT__state = __Vdly__state;
    vlSelf->__PVT__divide__DOT__quotient = __Vdly__divide__DOT__quotient;
    vlSelf->__PVT__operation = __Vdly__operation;
    vlSelf->__PVT__b = __Vdly__b;
    vlSelf->__PVT__a = __Vdly__a;
    vlSelf->__PVT__add__DOT__sum_next = (0xfffffffU 
                                         & ((IData)(vlSelf->__PVT__add__DOT__subtract2)
                                             ? (vlSelf->__PVT__add__DOT__large2 
                                                - vlSelf->__PVT__add__DOT__small2)
                                             : (vlSelf->__PVT__add__DOT__large2 
                                                + vlSelf->__PVT__add__DOT__small2)));
    vlSelf->__PVT__add__DOT__left_shift = ((0U == vlSelf->__PVT__add__DOT__sum3)
                                            ? 0U : 
                                           (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__132__value 
                            = vlSelf->__PVT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__132__part 
                            = vlSelf->__Vfunc_leading_zero32__132__value;
                        vlSelf->__Vfunc_leading_zero32__132__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__132__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__132__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__132__count)));
                            vlSelf->__Vfunc_leading_zero32__132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__132__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__132__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__132__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__132__count)));
                            vlSelf->__Vfunc_leading_zero32__132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__132__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__132__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__132__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__132__count)));
                            vlSelf->__Vfunc_leading_zero32__132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__132__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__132__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__132__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__132__count)));
                            vlSelf->__Vfunc_leading_zero32__132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__132__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__132__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__132__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__132__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__132__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__132__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__132__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__132__Vfuncout)) 
                                             - (IData)(5U))));
    __Vfunc_round_pack32__133__significand = vlSelf->__PVT__add__DOT__significand4;
    __Vfunc_round_pack32__133__exponent = vlSelf->__PVT__add__DOT__exponent4;
    __Vfunc_round_pack32__133__negative = vlSelf->__PVT__add__DOT__negative4;
    __Vfunc_round_pack32__133__adjusted = __Vfunc_round_pack32__133__exponent;
    __Vfunc_round_pack32__133__shifted = __Vfunc_round_pack32__133__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__133__exponent))) {
        vlSelf->__Vfunc_shift_jam27__134__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__133__exponent)));
        vlSelf->__Vfunc_shift_jam27__134__value = __Vfunc_round_pack32__133__significand;
        __Vfunc_round_pack32__133__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__134__distance))) {
            vlSelf->__Vfunc_shift_jam27__134__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__134__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__134__distance))) {
            vlSelf->__Vfunc_shift_jam27__134__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__134__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__134__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__134__value, (IData)(vlSelf->__Vfunc_shift_jam27__134__distance)));
            vlSelf->__Vfunc_shift_jam27__134__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__134__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__134__distance)))));
            vlSelf->__Vfunc_shift_jam27__134__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__134__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__134__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__134__discarded))));
        }
        __Vfunc_round_pack32__133__shifted = vlSelf->__Vfunc_shift_jam27__134__Vfuncout;
    }
    __Vfunc_round_pack32__133__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__133__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__133__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__133__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__133__rounded)) {
        __Vfunc_round_pack32__133__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__133__rounded, 1U));
        __Vfunc_round_pack32__133__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__133__adjusted)));
    }
    __Vfunc_round_pack32__133__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__133__rounded)) {
        __Vfunc_round_pack32__133__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__133__adjusted)));
    }
    __Vfunc_round_pack32__133__Vfuncout = (((0U == __Vfunc_round_pack32__133__significand) 
                                            | (0U == __Vfunc_round_pack32__133__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__133__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__133__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__133__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__133__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__133__rounded)))))));
    vlSelf->__PVT__add__DOT__packed5 = __Vfunc_round_pack32__133__Vfuncout;
    __Vfunc_round_pack32__140__significand = vlSelf->__PVT__multiply__DOT__significand3;
    __Vfunc_round_pack32__140__exponent = vlSelf->__PVT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__140__negative = (1U & ((IData)(vlSelf->__PVT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__140__adjusted = __Vfunc_round_pack32__140__exponent;
    __Vfunc_round_pack32__140__shifted = __Vfunc_round_pack32__140__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__140__exponent))) {
        vlSelf->__Vfunc_shift_jam27__141__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__140__exponent)));
        vlSelf->__Vfunc_shift_jam27__141__value = __Vfunc_round_pack32__140__significand;
        __Vfunc_round_pack32__140__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__141__distance))) {
            vlSelf->__Vfunc_shift_jam27__141__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__141__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__141__distance))) {
            vlSelf->__Vfunc_shift_jam27__141__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__141__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__141__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__141__value, (IData)(vlSelf->__Vfunc_shift_jam27__141__distance)));
            vlSelf->__Vfunc_shift_jam27__141__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__141__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__141__distance)))));
            vlSelf->__Vfunc_shift_jam27__141__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__141__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__141__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__141__discarded))));
        }
        __Vfunc_round_pack32__140__shifted = vlSelf->__Vfunc_shift_jam27__141__Vfuncout;
    }
    __Vfunc_round_pack32__140__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__140__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__140__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__140__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__140__rounded)) {
        __Vfunc_round_pack32__140__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__140__rounded, 1U));
        __Vfunc_round_pack32__140__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__140__adjusted)));
    }
    __Vfunc_round_pack32__140__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__140__rounded)) {
        __Vfunc_round_pack32__140__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__140__adjusted)));
    }
    __Vfunc_round_pack32__140__Vfuncout = (((0U == __Vfunc_round_pack32__140__significand) 
                                            | (0U == __Vfunc_round_pack32__140__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__140__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__140__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__140__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__140__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__140__rounded)))))));
    vlSelf->__PVT__multiply__DOT__packed4 = __Vfunc_round_pack32__140__Vfuncout;
    __PVT__square_root__DOT__shifted_remainder = ((vlSelf->__PVT__square_root__DOT__remainder 
                                                   << 2U) 
                                                  | (3U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__square_root__DOT__pairs 
                                                                >> 0x34U))));
    __Vfunc_round_pack32__151__significand = ((0x7fffffeU 
                                               & vlSelf->__PVT__square_root__DOT__root) 
                                              | (1U 
                                                 & (vlSelf->__PVT__square_root__DOT__root 
                                                    | (0U 
                                                       != vlSelf->__PVT__square_root__DOT__remainder))));
    __Vfunc_round_pack32__151__exponent = vlSelf->__PVT__square_root__DOT__exponent;
    __Vfunc_round_pack32__151__negative = vlSelf->__PVT__square_root__DOT__negative;
    __Vfunc_round_pack32__151__adjusted = __Vfunc_round_pack32__151__exponent;
    __Vfunc_round_pack32__151__shifted = __Vfunc_round_pack32__151__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__151__exponent))) {
        vlSelf->__Vfunc_shift_jam27__152__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__151__exponent)));
        vlSelf->__Vfunc_shift_jam27__152__value = __Vfunc_round_pack32__151__significand;
        __Vfunc_round_pack32__151__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__152__distance))) {
            vlSelf->__Vfunc_shift_jam27__152__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__152__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__152__distance))) {
            vlSelf->__Vfunc_shift_jam27__152__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__152__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__152__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__152__value, (IData)(vlSelf->__Vfunc_shift_jam27__152__distance)));
            vlSelf->__Vfunc_shift_jam27__152__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__152__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__152__distance)))));
            vlSelf->__Vfunc_shift_jam27__152__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__152__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__152__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__152__discarded))));
        }
        __Vfunc_round_pack32__151__shifted = vlSelf->__Vfunc_shift_jam27__152__Vfuncout;
    }
    __Vfunc_round_pack32__151__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__151__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__151__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__151__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__151__rounded)) {
        __Vfunc_round_pack32__151__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__151__rounded, 1U));
        __Vfunc_round_pack32__151__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__151__adjusted)));
    }
    __Vfunc_round_pack32__151__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__151__rounded)) {
        __Vfunc_round_pack32__151__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__151__adjusted)));
    }
    __Vfunc_round_pack32__151__Vfuncout = (((0U == __Vfunc_round_pack32__151__significand) 
                                            | (0U == __Vfunc_round_pack32__151__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__151__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__151__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__151__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__151__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__151__rounded)))))));
    vlSelf->__PVT__square_root__DOT__packed_result 
        = __Vfunc_round_pack32__151__Vfuncout;
    vlSelf->__PVT__divide__DOT__take_bit = ((vlSelf->__PVT__divide__DOT__remainder 
                                             << 1U) 
                                            >= vlSelf->__PVT__divide__DOT__divisor);
    __Vfunc_round_pack32__146__significand = ((IData)(vlSelf->__PVT__divide__DOT__zero)
                                               ? 0U
                                               : ((0x7fffffeU 
                                                   & vlSelf->__PVT__divide__DOT__quotient) 
                                                  | (1U 
                                                     & (vlSelf->__PVT__divide__DOT__quotient 
                                                        | (0U 
                                                           != vlSelf->__PVT__divide__DOT__remainder)))));
    __Vfunc_round_pack32__146__exponent = vlSelf->__PVT__divide__DOT__exponent;
    __Vfunc_round_pack32__146__negative = vlSelf->__PVT__divide__DOT__negative;
    __Vfunc_round_pack32__146__adjusted = __Vfunc_round_pack32__146__exponent;
    __Vfunc_round_pack32__146__shifted = __Vfunc_round_pack32__146__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__146__exponent))) {
        vlSelf->__Vfunc_shift_jam27__147__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__146__exponent)));
        vlSelf->__Vfunc_shift_jam27__147__value = __Vfunc_round_pack32__146__significand;
        __Vfunc_round_pack32__146__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__147__distance))) {
            vlSelf->__Vfunc_shift_jam27__147__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__147__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__147__distance))) {
            vlSelf->__Vfunc_shift_jam27__147__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__147__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__147__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__147__value, (IData)(vlSelf->__Vfunc_shift_jam27__147__distance)));
            vlSelf->__Vfunc_shift_jam27__147__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__147__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__147__distance)))));
            vlSelf->__Vfunc_shift_jam27__147__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__147__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__147__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__147__discarded))));
        }
        __Vfunc_round_pack32__146__shifted = vlSelf->__Vfunc_shift_jam27__147__Vfuncout;
    }
    __Vfunc_round_pack32__146__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__146__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__146__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__146__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__146__rounded)) {
        __Vfunc_round_pack32__146__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__146__rounded, 1U));
        __Vfunc_round_pack32__146__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__146__adjusted)));
    }
    __Vfunc_round_pack32__146__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__146__rounded)) {
        __Vfunc_round_pack32__146__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__146__adjusted)));
    }
    __Vfunc_round_pack32__146__Vfuncout = (((0U == __Vfunc_round_pack32__146__significand) 
                                            | (0U == __Vfunc_round_pack32__146__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__146__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__146__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__146__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__146__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__146__rounded)))))));
    vlSelf->__PVT__divide__DOT__packed_result = __Vfunc_round_pack32__146__Vfuncout;
    vlSelf->__VdfgTmp_h3e0667de__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__b 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__b 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__add_b = ((1U == (IData)(vlSelf->__PVT__operation))
                             ? (((~ (vlSelf->__PVT__b 
                                     >> 0x1fU)) << 0x1fU) 
                                | (0x7fffffffU & vlSelf->__PVT__b))
                             : vlSelf->__PVT__b);
    vlSelf->__PVT__divide__DOT__raw_b = (((0U != (0xffU 
                                                  & (vlSelf->__PVT__b 
                                                     >> 0x17U))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & vlSelf->__PVT__b));
    vlSelf->__VdfgTmp_ha96a2c24__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__a 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__a 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__divide__DOT__raw_a = (((0U != (0xffU 
                                                  & (vlSelf->__PVT__a 
                                                     >> 0x17U))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & vlSelf->__PVT__a));
    vlSelf->__PVT__square_root__DOT__take_bit = (__PVT__square_root__DOT__shifted_remainder 
                                                 >= 
                                                 (1U 
                                                  | (vlSelf->__PVT__square_root__DOT__root 
                                                     << 2U)));
    vlSelf->__PVT__divide__DOT__next_remainder = (0x3ffffffU 
                                                  & ((IData)(vlSelf->__PVT__divide__DOT__take_bit)
                                                      ? 
                                                     ((vlSelf->__PVT__divide__DOT__remainder 
                                                       << 1U) 
                                                      - vlSelf->__PVT__divide__DOT__divisor)
                                                      : 
                                                     (vlSelf->__PVT__divide__DOT__remainder 
                                                      << 1U)));
    __PVT__add__DOT__a_larger = ((0x7fffffffU & vlSelf->__PVT__a) 
                                 >= (0x7fffffffU & vlSelf->__PVT__add_b));
    vlSelf->__PVT__multiply__DOT__shift_b = ((0U == vlSelf->__PVT__divide__DOT__raw_b)
                                              ? 0U : 
                                             (0x3fU 
                                              & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__139__value 
                            = vlSelf->__PVT__divide__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__139__part 
                            = vlSelf->__Vfunc_leading_zero32__139__value;
                        vlSelf->__Vfunc_leading_zero32__139__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__139__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__139__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__139__count)));
                            vlSelf->__Vfunc_leading_zero32__139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__139__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__139__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__139__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__139__count)));
                            vlSelf->__Vfunc_leading_zero32__139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__139__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__139__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__139__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__139__count)));
                            vlSelf->__Vfunc_leading_zero32__139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__139__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__139__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__139__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__139__count)));
                            vlSelf->__Vfunc_leading_zero32__139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__139__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__139__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__139__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__139__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__139__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__139__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__139__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__139__Vfuncout)) 
                                                 - (IData)(8U))));
    vlSelf->__PVT__divide__DOT__shift_b = ((0U == vlSelf->__PVT__divide__DOT__raw_b)
                                            ? 0U : 
                                           (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__145__value 
                            = vlSelf->__PVT__divide__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__145__part 
                            = vlSelf->__Vfunc_leading_zero32__145__value;
                        vlSelf->__Vfunc_leading_zero32__145__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__145__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__145__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__145__count)));
                            vlSelf->__Vfunc_leading_zero32__145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__145__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__145__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__145__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__145__count)));
                            vlSelf->__Vfunc_leading_zero32__145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__145__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__145__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__145__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__145__count)));
                            vlSelf->__Vfunc_leading_zero32__145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__145__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__145__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__145__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__145__count)));
                            vlSelf->__Vfunc_leading_zero32__145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__145__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__145__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__145__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__145__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__145__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__145__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__145__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__145__Vfuncout)) 
                                             - (IData)(8U))));
    vlSelf->__PVT__multiply__DOT__shift_a = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                              ? 0U : 
                                             (0x3fU 
                                              & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__138__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__138__part 
                            = vlSelf->__Vfunc_leading_zero32__138__value;
                        vlSelf->__Vfunc_leading_zero32__138__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__138__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__138__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__138__count)));
                            vlSelf->__Vfunc_leading_zero32__138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__138__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__138__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__138__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__138__count)));
                            vlSelf->__Vfunc_leading_zero32__138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__138__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__138__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__138__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__138__count)));
                            vlSelf->__Vfunc_leading_zero32__138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__138__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__138__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__138__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__138__count)));
                            vlSelf->__Vfunc_leading_zero32__138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__138__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__138__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__138__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__138__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__138__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__138__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__138__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__138__Vfuncout)) 
                                                 - (IData)(8U))));
    vlSelf->__PVT__square_root__DOT__shift = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                               ? 0U
                                               : (0x3fU 
                                                  & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__150__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__150__part 
                            = vlSelf->__Vfunc_leading_zero32__150__value;
                        vlSelf->__Vfunc_leading_zero32__150__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__150__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__150__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__150__count)));
                            vlSelf->__Vfunc_leading_zero32__150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__150__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__150__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__150__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__150__count)));
                            vlSelf->__Vfunc_leading_zero32__150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__150__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__150__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__150__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__150__count)));
                            vlSelf->__Vfunc_leading_zero32__150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__150__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__150__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__150__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__150__count)));
                            vlSelf->__Vfunc_leading_zero32__150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__150__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__150__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__150__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__150__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__150__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__150__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__150__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__150__Vfuncout)) 
                                                     - (IData)(8U))));
    vlSelf->__PVT__divide__DOT__shift_a = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                            ? 0U : 
                                           (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__144__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__144__part 
                            = vlSelf->__Vfunc_leading_zero32__144__value;
                        vlSelf->__Vfunc_leading_zero32__144__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__144__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__144__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__144__count)));
                            vlSelf->__Vfunc_leading_zero32__144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__144__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__144__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__144__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__144__count)));
                            vlSelf->__Vfunc_leading_zero32__144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__144__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__144__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__144__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__144__count)));
                            vlSelf->__Vfunc_leading_zero32__144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__144__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__144__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__144__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__144__count)));
                            vlSelf->__Vfunc_leading_zero32__144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__144__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__144__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__144__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__144__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__144__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__144__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__144__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__144__Vfuncout)) 
                                             - (IData)(8U))));
    vlSelf->__PVT__square_root__DOT__next_remainder 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__square_root__DOT__take_bit)
                           ? (__PVT__square_root__DOT__shifted_remainder 
                              - (1U | (vlSelf->__PVT__square_root__DOT__root 
                                       << 2U))) : __PVT__square_root__DOT__shifted_remainder));
    if (__PVT__add__DOT__a_larger) {
        vlSelf->__PVT__add__DOT__small_value = vlSelf->__PVT__add_b;
        vlSelf->__PVT__add__DOT__large_value = vlSelf->__PVT__a;
    } else {
        vlSelf->__PVT__add__DOT__small_value = vlSelf->__PVT__a;
        vlSelf->__PVT__add__DOT__large_value = vlSelf->__PVT__add_b;
    }
    vlSelf->__PVT__divide__DOT__normalized_b = (0xffffffU 
                                                & VL_SHIFTL_III(24,24,6, vlSelf->__PVT__divide__DOT__raw_b, (IData)(vlSelf->__PVT__divide__DOT__shift_b)));
    vlSelf->__PVT__square_root__DOT__input_exponent 
        = (0xfffU & ((IData)(vlSelf->__VdfgTmp_ha96a2c24__0) 
                     - (IData)(vlSelf->__PVT__square_root__DOT__shift)));
    vlSelf->__PVT__divide__DOT__normalized_a = (0xffffffU 
                                                & VL_SHIFTL_III(24,24,6, vlSelf->__PVT__divide__DOT__raw_a, (IData)(vlSelf->__PVT__divide__DOT__shift_a)));
    vlSelf->__PVT__add__DOT__large_exponent = ((0U 
                                                == 
                                                (0xffU 
                                                 & (vlSelf->__PVT__add__DOT__large_value 
                                                    >> 0x17U)))
                                                ? 0xf82U
                                                : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__add__DOT__large_value 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__divide__DOT__below_one = (vlSelf->__PVT__divide__DOT__normalized_a 
                                             < vlSelf->__PVT__divide__DOT__normalized_b);
}

VL_INLINE_OPT void Vanvil_qn1_top_anvil_qn1_scalar___ico_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add__0(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vanvil_qn1_top_anvil_qn1_scalar___ico_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add__0\n"); );
    // Body
    vlSelf->square_root__DOT____VdfgTmp_h0890133b__0 
        = ((~ (IData)(vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT____Vcellinp__legal__DOT__accumulator_add__flush)) 
           & (IData)(vlSymsp->TOP.rst_n));
    vlSelf->in_ready = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                        & (0U == (IData)(vlSelf->__PVT__state)));
    vlSelf->out_valid = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                         & (3U == (IData)(vlSelf->__PVT__state)));
    vlSelf->__PVT__divide__DOT__ready = ((~ (IData)(vlSelf->__PVT__divide__DOT__active)) 
                                         & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
    vlSelf->__PVT__square_root__DOT__ready = ((~ (IData)(vlSelf->__PVT__square_root__DOT__active)) 
                                              & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
}

VL_INLINE_OPT void Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add__1(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add__1\n"); );
    // Init
    CData/*0:0*/ __PVT__add__DOT__a_larger;
    __PVT__add__DOT__a_larger = 0;
    IData/*30:0*/ __PVT__square_root__DOT__shifted_remainder;
    __PVT__square_root__DOT__shifted_remainder = 0;
    QData/*32:0*/ __Vfunc_round_pack32__155__Vfuncout;
    __Vfunc_round_pack32__155__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__155__negative;
    __Vfunc_round_pack32__155__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__155__exponent;
    __Vfunc_round_pack32__155__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__155__significand;
    __Vfunc_round_pack32__155__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__155__shifted;
    __Vfunc_round_pack32__155__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__155__rounded;
    __Vfunc_round_pack32__155__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__155__adjusted;
    __Vfunc_round_pack32__155__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__155__biased;
    __Vfunc_round_pack32__155__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__157__Vfuncout;
    __Vfunc_fp32_invalid__157__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__157__value;
    __Vfunc_fp32_invalid__157__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__158__Vfuncout;
    __Vfunc_fp32_invalid__158__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__158__value;
    __Vfunc_fp32_invalid__158__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__159__Vfuncout;
    __Vfunc_shift_jam27__159__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__159__value;
    __Vfunc_shift_jam27__159__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__159__distance;
    __Vfunc_shift_jam27__159__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__159__shifted;
    __Vfunc_shift_jam27__159__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__159__discarded;
    __Vfunc_shift_jam27__159__discarded = 0;
    QData/*32:0*/ __Vfunc_round_pack32__162__Vfuncout;
    __Vfunc_round_pack32__162__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__162__negative;
    __Vfunc_round_pack32__162__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__162__exponent;
    __Vfunc_round_pack32__162__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__162__significand;
    __Vfunc_round_pack32__162__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__162__shifted;
    __Vfunc_round_pack32__162__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__162__rounded;
    __Vfunc_round_pack32__162__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__162__adjusted;
    __Vfunc_round_pack32__162__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__162__biased;
    __Vfunc_round_pack32__162__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__164__Vfuncout;
    __Vfunc_fp32_invalid__164__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__164__value;
    __Vfunc_fp32_invalid__164__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__165__Vfuncout;
    __Vfunc_fp32_invalid__165__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__165__value;
    __Vfunc_fp32_invalid__165__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__168__Vfuncout;
    __Vfunc_round_pack32__168__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__168__negative;
    __Vfunc_round_pack32__168__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__168__exponent;
    __Vfunc_round_pack32__168__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__168__significand;
    __Vfunc_round_pack32__168__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__168__shifted;
    __Vfunc_round_pack32__168__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__168__rounded;
    __Vfunc_round_pack32__168__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__168__adjusted;
    __Vfunc_round_pack32__168__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__168__biased;
    __Vfunc_round_pack32__168__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__170__Vfuncout;
    __Vfunc_fp32_invalid__170__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__170__value;
    __Vfunc_fp32_invalid__170__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__171__Vfuncout;
    __Vfunc_fp32_invalid__171__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__171__value;
    __Vfunc_fp32_invalid__171__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__173__Vfuncout;
    __Vfunc_round_pack32__173__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__173__negative;
    __Vfunc_round_pack32__173__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__173__exponent;
    __Vfunc_round_pack32__173__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__173__significand;
    __Vfunc_round_pack32__173__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__173__shifted;
    __Vfunc_round_pack32__173__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__173__rounded;
    __Vfunc_round_pack32__173__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__173__adjusted;
    __Vfunc_round_pack32__173__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__173__biased;
    __Vfunc_round_pack32__173__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__175__Vfuncout;
    __Vfunc_fp32_invalid__175__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__175__value;
    __Vfunc_fp32_invalid__175__value = 0;
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT____Vcellinp__legal__DOT__accumulator_add__flush) {
            vlSelf->__Vdly__state = 0U;
            vlSelf->__PVT__data = 0U;
            vlSelf->__PVT__result_failed = 0U;
        } else if ((0U == (IData)(vlSelf->__PVT__state))) {
            if ((((~ (IData)(vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting)) 
                  & (6U == (IData)(vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) 
                 & (IData)(vlSelf->in_ready))) {
                vlSelf->__Vdly__a = vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator;
                vlSelf->__Vdly__b = vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__partial;
                vlSelf->__Vdly__operation = 0U;
                vlSelf->__Vdly__failed = 0U;
                vlSelf->__Vdly__elapsed = 0U;
                vlSelf->__Vdly__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__state))) {
            vlSelf->__Vdly__elapsed = 1U;
            vlSelf->__Vdly__state = 2U;
        } else if ((2U == (IData)(vlSelf->__PVT__state))) {
            vlSelf->__Vdly__elapsed = (0x3fU & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__elapsed)));
            if (((((((1U >= (IData)(vlSelf->__PVT__operation)) 
                     & (5U == (IData)(vlSelf->__PVT__elapsed))) 
                    | ((2U == (IData)(vlSelf->__PVT__operation)) 
                       & (4U == (IData)(vlSelf->__PVT__elapsed)))) 
                   | ((3U == (IData)(vlSelf->__PVT__operation)) 
                      & ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                         & (IData)(vlSelf->__PVT__divide__DOT__done_reg)))) 
                  | ((4U == (IData)(vlSelf->__PVT__operation)) 
                     & ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                        & (IData)(vlSelf->__PVT__square_root__DOT__done_reg)))) 
                 | (4U < (IData)(vlSelf->__PVT__operation)))) {
                if (((0U == (IData)(vlSelf->__PVT__operation)) 
                     || (1U == (IData)(vlSelf->__PVT__operation)))) {
                    if (vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) {
                        vlSelf->__PVT__data = vlSelf->__PVT__add__DOT__value5;
                        vlSelf->__PVT__result_failed 
                            = vlSelf->__PVT__add__DOT__error5;
                    } else {
                        vlSelf->__PVT__data = 0U;
                        vlSelf->__PVT__result_failed = 0U;
                    }
                } else if ((2U == (IData)(vlSelf->__PVT__operation))) {
                    if (vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) {
                        vlSelf->__PVT__data = vlSelf->__PVT__multiply__DOT__value4;
                        vlSelf->__PVT__result_failed 
                            = vlSelf->__PVT__multiply__DOT__error4;
                    } else {
                        vlSelf->__PVT__data = 0U;
                        vlSelf->__PVT__result_failed = 0U;
                    }
                } else if ((3U == (IData)(vlSelf->__PVT__operation))) {
                    if (vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) {
                        vlSelf->__PVT__data = vlSelf->__PVT__divide__DOT__value;
                        vlSelf->__PVT__result_failed 
                            = vlSelf->__PVT__divide__DOT__result_failed;
                    } else {
                        vlSelf->__PVT__data = 0U;
                        vlSelf->__PVT__result_failed = 0U;
                    }
                } else if ((4U == (IData)(vlSelf->__PVT__operation))) {
                    if (vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) {
                        vlSelf->__PVT__data = vlSelf->__PVT__square_root__DOT__value;
                        vlSelf->__PVT__result_failed 
                            = vlSelf->__PVT__square_root__DOT__result_failed;
                    } else {
                        vlSelf->__PVT__data = 0U;
                        vlSelf->__PVT__result_failed = 0U;
                    }
                } else {
                    vlSelf->__PVT__data = 0U;
                    vlSelf->__PVT__result_failed = 1U;
                }
                vlSelf->__Vdly__state = 3U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__state))) {
            if (vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting) {
                vlSelf->__Vdly__state = 0U;
            }
        } else {
            vlSelf->__Vdly__state = 0U;
        }
    } else {
        vlSelf->__Vdly__state = 0U;
        vlSelf->__Vdly__operation = 0U;
        vlSelf->__Vdly__elapsed = 0U;
        vlSelf->__Vdly__a = 0U;
        vlSelf->__Vdly__b = 0U;
        vlSelf->__PVT__data = 0U;
        vlSelf->__Vdly__failed = 0U;
        vlSelf->__PVT__result_failed = 0U;
    }
    vlSelf->__PVT__elapsed = vlSelf->__Vdly__elapsed;
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT____Vcellinp__legal__DOT__accumulator_add__flush) {
            vlSelf->__Vdly__add__DOT__large1 = 0U;
            vlSelf->__Vdly__add__DOT__small1 = 0U;
            vlSelf->__PVT__add__DOT__large2 = 0U;
            vlSelf->__PVT__add__DOT__small2 = 0U;
            vlSelf->__Vdly__add__DOT__distance1 = 0U;
            vlSelf->__Vdly__add__DOT__exponent1 = 0U;
            vlSelf->__Vdly__add__DOT__exponent2 = 0U;
            vlSelf->__Vdly__add__DOT__exponent3 = 0U;
            vlSelf->__PVT__add__DOT__exponent4 = 0U;
            vlSelf->__Vdly__add__DOT__negative1 = 0U;
            vlSelf->__Vdly__add__DOT__negative2 = 0U;
            vlSelf->__Vdly__add__DOT__negative3 = 0U;
            vlSelf->__PVT__add__DOT__negative4 = 0U;
            vlSelf->__Vdly__add__DOT__subtract1 = 0U;
            vlSelf->__Vdly__add__DOT__subtract2 = 0U;
            vlSelf->__Vdly__add__DOT__sum3 = 0U;
            vlSelf->__PVT__add__DOT__significand4 = 0U;
            vlSelf->__Vdly__add__DOT__failed = 0U;
            vlSelf->__PVT__add__DOT__value5 = 0U;
            vlSelf->__PVT__add__DOT__error5 = 0U;
        } else {
            vlSelf->__Vdly__add__DOT__failed = ((0x1eU 
                                                 & ((IData)(vlSelf->__PVT__add__DOT__failed) 
                                                    << 1U)) 
                                                | (((IData)(vlSelf->__PVT__failed) 
                                                    | ([&]() {
                                __Vfunc_fp32_invalid__157__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__157__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__157__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__157__Vfuncout))) 
                                                   | ([&]() {
                            __Vfunc_fp32_invalid__158__value 
                                = vlSelf->__PVT__add_b;
                            __Vfunc_fp32_invalid__158__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__158__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__158__Vfuncout))));
            __Vfunc_shift_jam27__159__distance = vlSelf->__PVT__add__DOT__distance1;
            __Vfunc_shift_jam27__159__value = vlSelf->__PVT__add__DOT__small1;
            vlSelf->__PVT__add__DOT__large2 = vlSelf->__PVT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__159__distance))) {
                __Vfunc_shift_jam27__159__Vfuncout 
                    = __Vfunc_shift_jam27__159__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__159__distance))) {
                __Vfunc_shift_jam27__159__Vfuncout 
                    = (0U != __Vfunc_shift_jam27__159__value);
            } else {
                __Vfunc_shift_jam27__159__shifted = 
                    (0x7ffffffU & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__159__value, (IData)(__Vfunc_shift_jam27__159__distance)));
                __Vfunc_shift_jam27__159__discarded 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__159__value, 
                                                  (0xfffU 
                                                   & ((IData)(0x1bU) 
                                                      - (IData)(__Vfunc_shift_jam27__159__distance)))));
                __Vfunc_shift_jam27__159__Vfuncout 
                    = ((0x7fffffeU & __Vfunc_shift_jam27__159__shifted) 
                       | (1U & (__Vfunc_shift_jam27__159__shifted 
                                | (0U != __Vfunc_shift_jam27__159__discarded))));
            }
            if ((0x8000000U & vlSelf->__PVT__add__DOT__sum3)) {
                vlSelf->__PVT__add__DOT__significand4 
                    = ((0x7fffffeU & (vlSelf->__PVT__add__DOT__sum3 
                                      >> 1U)) | (IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelf->__PVT__add__DOT__sum3))));
                vlSelf->__PVT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->__PVT__add__DOT__exponent3)));
            } else {
                vlSelf->__PVT__add__DOT__significand4 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,6, vlSelf->__PVT__add__DOT__sum3, (IData)(vlSelf->__PVT__add__DOT__left_shift)));
                vlSelf->__PVT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(vlSelf->__PVT__add__DOT__exponent3) 
                                 - (IData)(vlSelf->__PVT__add__DOT__left_shift)));
            }
            vlSelf->__PVT__add__DOT__negative4 = vlSelf->__PVT__add__DOT__negative3;
            vlSelf->__PVT__add__DOT__value5 = ((1U 
                                                & (((IData)(vlSelf->__PVT__add__DOT__failed) 
                                                    >> 3U) 
                                                   | (IData)(
                                                             (vlSelf->__PVT__add__DOT__packed5 
                                                              >> 0x20U))))
                                                ? 0U
                                                : (IData)(vlSelf->__PVT__add__DOT__packed5));
            vlSelf->__Vdly__add__DOT__distance1 = (0xfffU 
                                                   & ((IData)(vlSelf->__PVT__add__DOT__large_exponent) 
                                                      - 
                                                      ((0U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__add__DOT__small_value 
                                                            >> 0x17U)))
                                                        ? 0xf82U
                                                        : 
                                                       ((0xffU 
                                                         & (vlSelf->__PVT__add__DOT__small_value 
                                                            >> 0x17U)) 
                                                        - (IData)(0x7fU)))));
            vlSelf->__PVT__add__DOT__small2 = __Vfunc_shift_jam27__159__Vfuncout;
            vlSelf->__PVT__add__DOT__error5 = (1U & 
                                               (((IData)(vlSelf->__PVT__add__DOT__failed) 
                                                 >> 3U) 
                                                | (IData)(
                                                          (vlSelf->__PVT__add__DOT__packed5 
                                                           >> 0x20U))));
            vlSelf->__Vdly__add__DOT__small1 = (((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__add__DOT__small_value 
                                                      >> 0x17U))) 
                                                 << 0x1aU) 
                                                | (0x3fffff8U 
                                                   & (vlSelf->__PVT__add__DOT__small_value 
                                                      << 3U)));
            vlSelf->__Vdly__add__DOT__large1 = (((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__add__DOT__large_value 
                                                      >> 0x17U))) 
                                                 << 0x1aU) 
                                                | (0x3fffff8U 
                                                   & (vlSelf->__PVT__add__DOT__large_value 
                                                      << 3U)));
            vlSelf->__Vdly__add__DOT__sum3 = vlSelf->__PVT__add__DOT__sum_next;
            vlSelf->__Vdly__add__DOT__exponent3 = vlSelf->__PVT__add__DOT__exponent2;
            vlSelf->__Vdly__add__DOT__negative3 = (
                                                   (~ 
                                                    ((0U 
                                                      == vlSelf->__PVT__add__DOT__sum_next) 
                                                     & (IData)(vlSelf->__PVT__add__DOT__subtract2))) 
                                                   & (IData)(vlSelf->__PVT__add__DOT__negative2));
            vlSelf->__Vdly__add__DOT__exponent2 = vlSelf->__PVT__add__DOT__exponent1;
            vlSelf->__Vdly__add__DOT__negative2 = vlSelf->__PVT__add__DOT__negative1;
            vlSelf->__Vdly__add__DOT__subtract2 = vlSelf->__PVT__add__DOT__subtract1;
            vlSelf->__Vdly__add__DOT__exponent1 = vlSelf->__PVT__add__DOT__large_exponent;
            vlSelf->__Vdly__add__DOT__negative1 = (vlSelf->__PVT__add__DOT__large_value 
                                                   >> 0x1fU);
            vlSelf->__Vdly__add__DOT__subtract1 = (
                                                   (vlSelf->__PVT__a 
                                                    ^ vlSelf->__PVT__add_b) 
                                                   >> 0x1fU);
        }
    } else {
        vlSelf->__Vdly__add__DOT__large1 = 0U;
        vlSelf->__Vdly__add__DOT__small1 = 0U;
        vlSelf->__PVT__add__DOT__large2 = 0U;
        vlSelf->__PVT__add__DOT__small2 = 0U;
        vlSelf->__Vdly__add__DOT__distance1 = 0U;
        vlSelf->__Vdly__add__DOT__exponent1 = 0U;
        vlSelf->__Vdly__add__DOT__exponent2 = 0U;
        vlSelf->__Vdly__add__DOT__exponent3 = 0U;
        vlSelf->__PVT__add__DOT__exponent4 = 0U;
        vlSelf->__Vdly__add__DOT__negative1 = 0U;
        vlSelf->__Vdly__add__DOT__negative2 = 0U;
        vlSelf->__Vdly__add__DOT__negative3 = 0U;
        vlSelf->__PVT__add__DOT__negative4 = 0U;
        vlSelf->__Vdly__add__DOT__subtract1 = 0U;
        vlSelf->__Vdly__add__DOT__subtract2 = 0U;
        vlSelf->__Vdly__add__DOT__sum3 = 0U;
        vlSelf->__PVT__add__DOT__significand4 = 0U;
        vlSelf->__Vdly__add__DOT__failed = 0U;
        vlSelf->__PVT__add__DOT__value5 = 0U;
        vlSelf->__PVT__add__DOT__error5 = 0U;
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT____Vcellinp__legal__DOT__accumulator_add__flush) {
            vlSelf->__Vdly__multiply__DOT__mantissa_a1 = 0U;
            vlSelf->__Vdly__multiply__DOT__mantissa_b1 = 0U;
            vlSelf->__Vdly__multiply__DOT__exponent_a1 = 0U;
            vlSelf->__Vdly__multiply__DOT__exponent_b1 = 0U;
            vlSelf->__Vdly__multiply__DOT__exponent2 = 0U;
            vlSelf->__PVT__multiply__DOT__exponent3 = 0U;
            vlSelf->__Vdly__multiply__DOT__product2 = 0ULL;
            vlSelf->__PVT__multiply__DOT__significand3 = 0U;
            vlSelf->__Vdly__multiply__DOT__negative = 0U;
            vlSelf->__Vdly__multiply__DOT__failed = 0U;
            vlSelf->__PVT__multiply__DOT__value4 = 0U;
            vlSelf->__PVT__multiply__DOT__error4 = 0U;
        } else {
            vlSelf->__Vdly__multiply__DOT__negative 
                = ((0xeU & ((IData)(vlSelf->__PVT__multiply__DOT__negative) 
                            << 1U)) | ((vlSelf->__PVT__a 
                                        ^ vlSelf->__PVT__b) 
                                       >> 0x1fU));
            vlSelf->__Vdly__multiply__DOT__failed = 
                ((0xeU & ((IData)(vlSelf->__PVT__multiply__DOT__failed) 
                          << 1U)) | (((IData)(vlSelf->__PVT__failed) 
                                      | ([&]() {
                                __Vfunc_fp32_invalid__164__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__164__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__164__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__164__Vfuncout))) 
                                     | ([&]() {
                            __Vfunc_fp32_invalid__165__value 
                                = vlSelf->__PVT__b;
                            __Vfunc_fp32_invalid__165__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__165__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__165__Vfuncout))));
            if ((1U & (IData)((vlSelf->__PVT__multiply__DOT__product2 
                               >> 0x2fU)))) {
                vlSelf->__PVT__multiply__DOT__significand3 
                    = ((0x7fffffeU & ((IData)((vlSelf->__PVT__multiply__DOT__product2 
                                               >> 0x16U)) 
                                      << 1U)) | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x3fffffULL 
                                                          & vlSelf->__PVT__multiply__DOT__product2))));
                vlSelf->__PVT__multiply__DOT__exponent3 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->__PVT__multiply__DOT__exponent2)));
            } else {
                vlSelf->__PVT__multiply__DOT__significand3 
                    = ((0x7fffffeU & ((IData)((vlSelf->__PVT__multiply__DOT__product2 
                                               >> 0x15U)) 
                                      << 1U)) | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x1fffffULL 
                                                          & vlSelf->__PVT__multiply__DOT__product2))));
                vlSelf->__PVT__multiply__DOT__exponent3 
                    = vlSelf->__PVT__multiply__DOT__exponent2;
            }
            if ((1U & (((IData)(vlSelf->__PVT__multiply__DOT__failed) 
                        >> 2U) | (IData)((vlSelf->__PVT__multiply__DOT__packed4 
                                          >> 0x20U))))) {
                vlSelf->__PVT__multiply__DOT__value4 = 0U;
                vlSelf->__PVT__multiply__DOT__error4 = 1U;
            } else {
                vlSelf->__PVT__multiply__DOT__value4 
                    = (IData)(vlSelf->__PVT__multiply__DOT__packed4);
                vlSelf->__PVT__multiply__DOT__error4 = 0U;
            }
            vlSelf->__Vdly__multiply__DOT__product2 
                = (0xffffffffffffULL & ((QData)((IData)(vlSelf->__PVT__multiply__DOT__mantissa_a1)) 
                                        * (QData)((IData)(vlSelf->__PVT__multiply__DOT__mantissa_b1))));
            vlSelf->__Vdly__multiply__DOT__exponent2 
                = (0xfffU & ((IData)(vlSelf->__PVT__multiply__DOT__exponent_a1) 
                             + (IData)(vlSelf->__PVT__multiply__DOT__exponent_b1)));
            vlSelf->__Vdly__multiply__DOT__mantissa_a1 
                = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->__PVT__divide__DOT__raw_a, (IData)(vlSelf->__PVT__multiply__DOT__shift_a)));
            vlSelf->__Vdly__multiply__DOT__mantissa_b1 
                = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->__PVT__divide__DOT__raw_b, (IData)(vlSelf->__PVT__multiply__DOT__shift_b)));
            vlSelf->__Vdly__multiply__DOT__exponent_a1 
                = (0xfffU & ((IData)(vlSelf->__VdfgTmp_ha96a2c24__0) 
                             - (IData)(vlSelf->__PVT__multiply__DOT__shift_a)));
            vlSelf->__Vdly__multiply__DOT__exponent_b1 
                = (0xfffU & ((IData)(vlSelf->__VdfgTmp_h3e0667de__0) 
                             - (IData)(vlSelf->__PVT__multiply__DOT__shift_b)));
        }
    } else {
        vlSelf->__Vdly__multiply__DOT__mantissa_a1 = 0U;
        vlSelf->__Vdly__multiply__DOT__mantissa_b1 = 0U;
        vlSelf->__Vdly__multiply__DOT__exponent_a1 = 0U;
        vlSelf->__Vdly__multiply__DOT__exponent_b1 = 0U;
        vlSelf->__Vdly__multiply__DOT__exponent2 = 0U;
        vlSelf->__PVT__multiply__DOT__exponent3 = 0U;
        vlSelf->__Vdly__multiply__DOT__product2 = 0ULL;
        vlSelf->__PVT__multiply__DOT__significand3 = 0U;
        vlSelf->__Vdly__multiply__DOT__negative = 0U;
        vlSelf->__Vdly__multiply__DOT__failed = 0U;
        vlSelf->__PVT__multiply__DOT__value4 = 0U;
        vlSelf->__PVT__multiply__DOT__error4 = 0U;
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT____Vcellinp__legal__DOT__accumulator_add__flush) {
            vlSelf->__Vdly__square_root__DOT__active = 0U;
            vlSelf->__PVT__square_root__DOT__done_reg = 0U;
            vlSelf->__PVT__square_root__DOT__value = 0U;
            vlSelf->__PVT__square_root__DOT__result_failed = 0U;
        } else {
            vlSelf->__PVT__square_root__DOT__done_reg = 0U;
            if ((((1U == (IData)(vlSelf->__PVT__state)) 
                  & (4U == (IData)(vlSelf->__PVT__operation))) 
                 & (IData)(vlSelf->__PVT__square_root__DOT__ready))) {
                vlSelf->__Vdly__square_root__DOT__active = 1U;
                vlSelf->__Vdly__square_root__DOT__cycle = 1U;
                vlSelf->__Vdly__square_root__DOT__pairs 
                    = (0x3fffffffffffffULL & ((QData)((IData)(
                                                              (0xffffffU 
                                                               & VL_SHIFTL_III(24,24,6, vlSelf->__PVT__divide__DOT__raw_a, (IData)(vlSelf->__PVT__square_root__DOT__shift))))) 
                                              << ((1U 
                                                   & (IData)(vlSelf->__PVT__square_root__DOT__input_exponent))
                                                   ? 0x1eU
                                                   : 0x1dU)));
                vlSelf->__PVT__square_root__DOT__remainder = 0U;
                vlSelf->__Vdly__square_root__DOT__root = 0U;
                vlSelf->__PVT__square_root__DOT__exponent 
                    = (0xfffU & VL_SHIFTRS_III(12,12,32, (IData)(vlSelf->__PVT__square_root__DOT__input_exponent), 1U));
                vlSelf->__PVT__square_root__DOT__negative 
                    = ((vlSelf->__PVT__a >> 0x1fU) 
                       & (0U == vlSelf->__PVT__divide__DOT__raw_a));
                vlSelf->__Vdly__square_root__DOT__failed 
                    = (((IData)(vlSelf->__PVT__failed) 
                        | ([&]() {
                                __Vfunc_fp32_invalid__175__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__175__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__175__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__175__Vfuncout))) 
                       | ((vlSelf->__PVT__a >> 0x1fU) 
                          & (0U != vlSelf->__PVT__divide__DOT__raw_a)));
            } else if (vlSelf->__PVT__square_root__DOT__active) {
                vlSelf->__Vdly__square_root__DOT__cycle 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->__PVT__square_root__DOT__cycle)));
                if ((0x1bU >= (IData)(vlSelf->__PVT__square_root__DOT__cycle))) {
                    vlSelf->__Vdly__square_root__DOT__pairs 
                        = (0x3ffffffffffffcULL & (vlSelf->__PVT__square_root__DOT__pairs 
                                                  << 2U));
                    vlSelf->__Vdly__square_root__DOT__root 
                        = ((0x7fffffeU & (vlSelf->__PVT__square_root__DOT__root 
                                          << 1U)) | (IData)(vlSelf->__PVT__square_root__DOT__take_bit));
                    vlSelf->__PVT__square_root__DOT__remainder 
                        = (0x1fffffffU & vlSelf->__PVT__square_root__DOT__next_remainder);
                } else if ((0x1cU == (IData)(vlSelf->__PVT__square_root__DOT__cycle))) {
                    if (((IData)(vlSelf->__PVT__square_root__DOT__failed) 
                         | (vlSelf->__PVT__square_root__DOT__packed_result 
                            >> 0x20U))) {
                        vlSelf->__Vdly__square_root__DOT__rounded_value = 0U;
                        vlSelf->__Vdly__square_root__DOT__rounded_failed = 1U;
                    } else {
                        vlSelf->__Vdly__square_root__DOT__rounded_value 
                            = (IData)(vlSelf->__PVT__square_root__DOT__packed_result);
                        vlSelf->__Vdly__square_root__DOT__rounded_failed = 0U;
                    }
                } else if ((0x21U == (IData)(vlSelf->__PVT__square_root__DOT__cycle))) {
                    vlSelf->__PVT__square_root__DOT__value 
                        = vlSelf->__PVT__square_root__DOT__rounded_value;
                    vlSelf->__PVT__square_root__DOT__result_failed 
                        = vlSelf->__PVT__square_root__DOT__rounded_failed;
                    vlSelf->__Vdly__square_root__DOT__active = 0U;
                    vlSelf->__PVT__square_root__DOT__done_reg = 1U;
                }
            }
        }
    } else {
        vlSelf->__Vdly__square_root__DOT__active = 0U;
        vlSelf->__PVT__square_root__DOT__done_reg = 0U;
        vlSelf->__Vdly__square_root__DOT__failed = 0U;
        vlSelf->__PVT__square_root__DOT__negative = 0U;
        vlSelf->__Vdly__square_root__DOT__cycle = 0U;
        vlSelf->__Vdly__square_root__DOT__pairs = 0ULL;
        vlSelf->__PVT__square_root__DOT__remainder = 0U;
        vlSelf->__Vdly__square_root__DOT__root = 0U;
        vlSelf->__PVT__square_root__DOT__exponent = 0U;
        vlSelf->__PVT__square_root__DOT__value = 0U;
        vlSelf->__PVT__square_root__DOT__result_failed = 0U;
        vlSelf->__Vdly__square_root__DOT__rounded_value = 0U;
        vlSelf->__Vdly__square_root__DOT__rounded_failed = 0U;
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT____Vcellinp__legal__DOT__accumulator_add__flush) {
            vlSelf->__Vdly__divide__DOT__active = 0U;
            vlSelf->__PVT__divide__DOT__done_reg = 0U;
            vlSelf->__PVT__divide__DOT__value = 0U;
            vlSelf->__PVT__divide__DOT__result_failed = 0U;
        } else {
            vlSelf->__PVT__divide__DOT__done_reg = 0U;
            if ((((1U == (IData)(vlSelf->__PVT__state)) 
                  & (3U == (IData)(vlSelf->__PVT__operation))) 
                 & (IData)(vlSelf->__PVT__divide__DOT__ready))) {
                vlSelf->__Vdly__divide__DOT__active = 1U;
                vlSelf->__Vdly__divide__DOT__cycle = 1U;
                vlSelf->__PVT__divide__DOT__divisor 
                    = vlSelf->__PVT__divide__DOT__normalized_b;
                vlSelf->__PVT__divide__DOT__remainder 
                    = (0x1ffffffU & (((IData)(vlSelf->__PVT__divide__DOT__below_one)
                                       ? (vlSelf->__PVT__divide__DOT__normalized_a 
                                          << 1U) : vlSelf->__PVT__divide__DOT__normalized_a) 
                                     - vlSelf->__PVT__divide__DOT__normalized_b));
                vlSelf->__Vdly__divide__DOT__quotient = 1U;
                vlSelf->__PVT__divide__DOT__exponent 
                    = (0xfffU & ((((IData)(vlSelf->__VdfgTmp_ha96a2c24__0) 
                                   - (IData)(vlSelf->__PVT__divide__DOT__shift_a)) 
                                  - ((IData)(vlSelf->__VdfgTmp_h3e0667de__0) 
                                     - (IData)(vlSelf->__PVT__divide__DOT__shift_b))) 
                                 - ((IData)(vlSelf->__PVT__divide__DOT__below_one)
                                     ? 1U : 0U)));
                vlSelf->__PVT__divide__DOT__negative 
                    = ((vlSelf->__PVT__a ^ vlSelf->__PVT__b) 
                       >> 0x1fU);
                vlSelf->__PVT__divide__DOT__zero = 
                    (0U == vlSelf->__PVT__divide__DOT__raw_a);
                vlSelf->__Vdly__divide__DOT__failed 
                    = ((((IData)(vlSelf->__PVT__failed) 
                         | ([&]() {
                                    __Vfunc_fp32_invalid__170__value 
                                        = vlSelf->__PVT__a;
                                    __Vfunc_fp32_invalid__170__Vfuncout 
                                        = (0xffU == 
                                           (0xffU & 
                                            (__Vfunc_fp32_invalid__170__value 
                                             >> 0x17U)));
                                }(), (IData)(__Vfunc_fp32_invalid__170__Vfuncout))) 
                        | ([&]() {
                                __Vfunc_fp32_invalid__171__value 
                                    = vlSelf->__PVT__b;
                                __Vfunc_fp32_invalid__171__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__171__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__171__Vfuncout))) 
                       | (0U == vlSelf->__PVT__divide__DOT__raw_b));
            } else if (vlSelf->__PVT__divide__DOT__active) {
                vlSelf->__Vdly__divide__DOT__cycle 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->__PVT__divide__DOT__cycle)));
                if ((0x1aU >= (IData)(vlSelf->__PVT__divide__DOT__cycle))) {
                    vlSelf->__Vdly__divide__DOT__quotient 
                        = ((0x7fffffeU & (vlSelf->__PVT__divide__DOT__quotient 
                                          << 1U)) | (IData)(vlSelf->__PVT__divide__DOT__take_bit));
                    vlSelf->__PVT__divide__DOT__remainder 
                        = (0x1ffffffU & vlSelf->__PVT__divide__DOT__next_remainder);
                } else if ((0x1bU == (IData)(vlSelf->__PVT__divide__DOT__cycle))) {
                    if (((IData)(vlSelf->__PVT__divide__DOT__failed) 
                         | (vlSelf->__PVT__divide__DOT__packed_result 
                            >> 0x20U))) {
                        vlSelf->__Vdly__divide__DOT__rounded_value = 0U;
                        vlSelf->__Vdly__divide__DOT__rounded_failed = 1U;
                    } else {
                        vlSelf->__Vdly__divide__DOT__rounded_value 
                            = (IData)(vlSelf->__PVT__divide__DOT__packed_result);
                        vlSelf->__Vdly__divide__DOT__rounded_failed = 0U;
                    }
                } else if ((0x21U == (IData)(vlSelf->__PVT__divide__DOT__cycle))) {
                    vlSelf->__PVT__divide__DOT__value 
                        = vlSelf->__PVT__divide__DOT__rounded_value;
                    vlSelf->__PVT__divide__DOT__result_failed 
                        = vlSelf->__PVT__divide__DOT__rounded_failed;
                    vlSelf->__Vdly__divide__DOT__active = 0U;
                    vlSelf->__PVT__divide__DOT__done_reg = 1U;
                }
            }
        }
    } else {
        vlSelf->__Vdly__divide__DOT__active = 0U;
        vlSelf->__PVT__divide__DOT__done_reg = 0U;
        vlSelf->__PVT__divide__DOT__negative = 0U;
        vlSelf->__Vdly__divide__DOT__failed = 0U;
        vlSelf->__PVT__divide__DOT__zero = 0U;
        vlSelf->__Vdly__divide__DOT__cycle = 0U;
        vlSelf->__PVT__divide__DOT__divisor = 0U;
        vlSelf->__PVT__divide__DOT__remainder = 0U;
        vlSelf->__Vdly__divide__DOT__quotient = 0U;
        vlSelf->__PVT__divide__DOT__exponent = 0U;
        vlSelf->__PVT__divide__DOT__value = 0U;
        vlSelf->__PVT__divide__DOT__result_failed = 0U;
        vlSelf->__Vdly__divide__DOT__rounded_value = 0U;
        vlSelf->__Vdly__divide__DOT__rounded_failed = 0U;
    }
    vlSelf->__PVT__add__DOT__large1 = vlSelf->__Vdly__add__DOT__large1;
    vlSelf->__PVT__add__DOT__small1 = vlSelf->__Vdly__add__DOT__small1;
    vlSelf->__PVT__add__DOT__distance1 = vlSelf->__Vdly__add__DOT__distance1;
    vlSelf->__PVT__add__DOT__exponent1 = vlSelf->__Vdly__add__DOT__exponent1;
    vlSelf->__PVT__add__DOT__exponent2 = vlSelf->__Vdly__add__DOT__exponent2;
    vlSelf->__PVT__add__DOT__exponent3 = vlSelf->__Vdly__add__DOT__exponent3;
    vlSelf->__PVT__add__DOT__negative1 = vlSelf->__Vdly__add__DOT__negative1;
    vlSelf->__PVT__add__DOT__negative2 = vlSelf->__Vdly__add__DOT__negative2;
    vlSelf->__PVT__add__DOT__negative3 = vlSelf->__Vdly__add__DOT__negative3;
    vlSelf->__PVT__add__DOT__subtract1 = vlSelf->__Vdly__add__DOT__subtract1;
    vlSelf->__PVT__add__DOT__failed = vlSelf->__Vdly__add__DOT__failed;
    vlSelf->__PVT__add__DOT__subtract2 = vlSelf->__Vdly__add__DOT__subtract2;
    vlSelf->__PVT__add__DOT__sum3 = vlSelf->__Vdly__add__DOT__sum3;
    vlSelf->__PVT__multiply__DOT__mantissa_a1 = vlSelf->__Vdly__multiply__DOT__mantissa_a1;
    vlSelf->__PVT__multiply__DOT__mantissa_b1 = vlSelf->__Vdly__multiply__DOT__mantissa_b1;
    vlSelf->__PVT__multiply__DOT__exponent_a1 = vlSelf->__Vdly__multiply__DOT__exponent_a1;
    vlSelf->__PVT__multiply__DOT__exponent_b1 = vlSelf->__Vdly__multiply__DOT__exponent_b1;
    vlSelf->__PVT__multiply__DOT__exponent2 = vlSelf->__Vdly__multiply__DOT__exponent2;
    vlSelf->__PVT__multiply__DOT__product2 = vlSelf->__Vdly__multiply__DOT__product2;
    vlSelf->__PVT__multiply__DOT__failed = vlSelf->__Vdly__multiply__DOT__failed;
    vlSelf->__PVT__multiply__DOT__negative = vlSelf->__Vdly__multiply__DOT__negative;
    vlSelf->__PVT__square_root__DOT__cycle = vlSelf->__Vdly__square_root__DOT__cycle;
    vlSelf->__PVT__square_root__DOT__failed = vlSelf->__Vdly__square_root__DOT__failed;
    vlSelf->__PVT__square_root__DOT__rounded_value 
        = vlSelf->__Vdly__square_root__DOT__rounded_value;
    vlSelf->__PVT__square_root__DOT__rounded_failed 
        = vlSelf->__Vdly__square_root__DOT__rounded_failed;
    vlSelf->__PVT__square_root__DOT__active = vlSelf->__Vdly__square_root__DOT__active;
    vlSelf->__PVT__square_root__DOT__pairs = vlSelf->__Vdly__square_root__DOT__pairs;
    vlSelf->__PVT__square_root__DOT__root = vlSelf->__Vdly__square_root__DOT__root;
    vlSelf->__PVT__divide__DOT__cycle = vlSelf->__Vdly__divide__DOT__cycle;
    vlSelf->__PVT__divide__DOT__failed = vlSelf->__Vdly__divide__DOT__failed;
    vlSelf->__PVT__divide__DOT__rounded_value = vlSelf->__Vdly__divide__DOT__rounded_value;
    vlSelf->__PVT__divide__DOT__rounded_failed = vlSelf->__Vdly__divide__DOT__rounded_failed;
    vlSelf->__PVT__failed = vlSelf->__Vdly__failed;
    vlSelf->__PVT__divide__DOT__active = vlSelf->__Vdly__divide__DOT__active;
    vlSelf->__PVT__state = vlSelf->__Vdly__state;
    vlSelf->__PVT__divide__DOT__quotient = vlSelf->__Vdly__divide__DOT__quotient;
    vlSelf->__PVT__operation = vlSelf->__Vdly__operation;
    vlSelf->__PVT__b = vlSelf->__Vdly__b;
    vlSelf->__PVT__a = vlSelf->__Vdly__a;
    vlSelf->__PVT__add__DOT__sum_next = (0xfffffffU 
                                         & ((IData)(vlSelf->__PVT__add__DOT__subtract2)
                                             ? (vlSelf->__PVT__add__DOT__large2 
                                                - vlSelf->__PVT__add__DOT__small2)
                                             : (vlSelf->__PVT__add__DOT__large2 
                                                + vlSelf->__PVT__add__DOT__small2)));
    vlSelf->__PVT__add__DOT__left_shift = ((0U == vlSelf->__PVT__add__DOT__sum3)
                                            ? 0U : 
                                           (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__154__value 
                            = vlSelf->__PVT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__154__part 
                            = vlSelf->__Vfunc_leading_zero32__154__value;
                        vlSelf->__Vfunc_leading_zero32__154__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__154__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__154__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__154__count)));
                            vlSelf->__Vfunc_leading_zero32__154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__154__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__154__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__154__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__154__count)));
                            vlSelf->__Vfunc_leading_zero32__154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__154__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__154__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__154__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__154__count)));
                            vlSelf->__Vfunc_leading_zero32__154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__154__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__154__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__154__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__154__count)));
                            vlSelf->__Vfunc_leading_zero32__154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__154__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__154__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__154__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__154__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__154__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__154__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__154__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__154__Vfuncout)) 
                                             - (IData)(5U))));
    __Vfunc_round_pack32__155__significand = vlSelf->__PVT__add__DOT__significand4;
    __Vfunc_round_pack32__155__exponent = vlSelf->__PVT__add__DOT__exponent4;
    __Vfunc_round_pack32__155__negative = vlSelf->__PVT__add__DOT__negative4;
    __Vfunc_round_pack32__155__adjusted = __Vfunc_round_pack32__155__exponent;
    __Vfunc_round_pack32__155__shifted = __Vfunc_round_pack32__155__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__155__exponent))) {
        vlSelf->__Vfunc_shift_jam27__156__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__155__exponent)));
        vlSelf->__Vfunc_shift_jam27__156__value = __Vfunc_round_pack32__155__significand;
        __Vfunc_round_pack32__155__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__156__distance))) {
            vlSelf->__Vfunc_shift_jam27__156__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__156__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__156__distance))) {
            vlSelf->__Vfunc_shift_jam27__156__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__156__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__156__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__156__value, (IData)(vlSelf->__Vfunc_shift_jam27__156__distance)));
            vlSelf->__Vfunc_shift_jam27__156__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__156__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__156__distance)))));
            vlSelf->__Vfunc_shift_jam27__156__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__156__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__156__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__156__discarded))));
        }
        __Vfunc_round_pack32__155__shifted = vlSelf->__Vfunc_shift_jam27__156__Vfuncout;
    }
    __Vfunc_round_pack32__155__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__155__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__155__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__155__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__155__rounded)) {
        __Vfunc_round_pack32__155__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__155__rounded, 1U));
        __Vfunc_round_pack32__155__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__155__adjusted)));
    }
    __Vfunc_round_pack32__155__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__155__rounded)) {
        __Vfunc_round_pack32__155__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__155__adjusted)));
    }
    __Vfunc_round_pack32__155__Vfuncout = (((0U == __Vfunc_round_pack32__155__significand) 
                                            | (0U == __Vfunc_round_pack32__155__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__155__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__155__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__155__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__155__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__155__rounded)))))));
    vlSelf->__PVT__add__DOT__packed5 = __Vfunc_round_pack32__155__Vfuncout;
    __Vfunc_round_pack32__162__significand = vlSelf->__PVT__multiply__DOT__significand3;
    __Vfunc_round_pack32__162__exponent = vlSelf->__PVT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__162__negative = (1U & ((IData)(vlSelf->__PVT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__162__adjusted = __Vfunc_round_pack32__162__exponent;
    __Vfunc_round_pack32__162__shifted = __Vfunc_round_pack32__162__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__162__exponent))) {
        vlSelf->__Vfunc_shift_jam27__163__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__162__exponent)));
        vlSelf->__Vfunc_shift_jam27__163__value = __Vfunc_round_pack32__162__significand;
        __Vfunc_round_pack32__162__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__163__distance))) {
            vlSelf->__Vfunc_shift_jam27__163__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__163__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__163__distance))) {
            vlSelf->__Vfunc_shift_jam27__163__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__163__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__163__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__163__value, (IData)(vlSelf->__Vfunc_shift_jam27__163__distance)));
            vlSelf->__Vfunc_shift_jam27__163__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__163__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__163__distance)))));
            vlSelf->__Vfunc_shift_jam27__163__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__163__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__163__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__163__discarded))));
        }
        __Vfunc_round_pack32__162__shifted = vlSelf->__Vfunc_shift_jam27__163__Vfuncout;
    }
    __Vfunc_round_pack32__162__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__162__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__162__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__162__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__162__rounded)) {
        __Vfunc_round_pack32__162__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__162__rounded, 1U));
        __Vfunc_round_pack32__162__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__162__adjusted)));
    }
    __Vfunc_round_pack32__162__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__162__rounded)) {
        __Vfunc_round_pack32__162__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__162__adjusted)));
    }
    __Vfunc_round_pack32__162__Vfuncout = (((0U == __Vfunc_round_pack32__162__significand) 
                                            | (0U == __Vfunc_round_pack32__162__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__162__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__162__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__162__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__162__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__162__rounded)))))));
    vlSelf->__PVT__multiply__DOT__packed4 = __Vfunc_round_pack32__162__Vfuncout;
    __PVT__square_root__DOT__shifted_remainder = ((vlSelf->__PVT__square_root__DOT__remainder 
                                                   << 2U) 
                                                  | (3U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__square_root__DOT__pairs 
                                                                >> 0x34U))));
    __Vfunc_round_pack32__173__significand = ((0x7fffffeU 
                                               & vlSelf->__PVT__square_root__DOT__root) 
                                              | (1U 
                                                 & (vlSelf->__PVT__square_root__DOT__root 
                                                    | (0U 
                                                       != vlSelf->__PVT__square_root__DOT__remainder))));
    __Vfunc_round_pack32__173__exponent = vlSelf->__PVT__square_root__DOT__exponent;
    __Vfunc_round_pack32__173__negative = vlSelf->__PVT__square_root__DOT__negative;
    __Vfunc_round_pack32__173__adjusted = __Vfunc_round_pack32__173__exponent;
    __Vfunc_round_pack32__173__shifted = __Vfunc_round_pack32__173__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__173__exponent))) {
        vlSelf->__Vfunc_shift_jam27__174__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__173__exponent)));
        vlSelf->__Vfunc_shift_jam27__174__value = __Vfunc_round_pack32__173__significand;
        __Vfunc_round_pack32__173__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__174__distance))) {
            vlSelf->__Vfunc_shift_jam27__174__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__174__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__174__distance))) {
            vlSelf->__Vfunc_shift_jam27__174__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__174__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__174__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__174__value, (IData)(vlSelf->__Vfunc_shift_jam27__174__distance)));
            vlSelf->__Vfunc_shift_jam27__174__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__174__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__174__distance)))));
            vlSelf->__Vfunc_shift_jam27__174__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__174__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__174__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__174__discarded))));
        }
        __Vfunc_round_pack32__173__shifted = vlSelf->__Vfunc_shift_jam27__174__Vfuncout;
    }
    __Vfunc_round_pack32__173__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__173__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__173__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__173__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__173__rounded)) {
        __Vfunc_round_pack32__173__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__173__rounded, 1U));
        __Vfunc_round_pack32__173__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__173__adjusted)));
    }
    __Vfunc_round_pack32__173__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__173__rounded)) {
        __Vfunc_round_pack32__173__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__173__adjusted)));
    }
    __Vfunc_round_pack32__173__Vfuncout = (((0U == __Vfunc_round_pack32__173__significand) 
                                            | (0U == __Vfunc_round_pack32__173__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__173__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__173__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__173__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__173__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__173__rounded)))))));
    vlSelf->__PVT__square_root__DOT__packed_result 
        = __Vfunc_round_pack32__173__Vfuncout;
    vlSelf->__PVT__divide__DOT__take_bit = ((vlSelf->__PVT__divide__DOT__remainder 
                                             << 1U) 
                                            >= vlSelf->__PVT__divide__DOT__divisor);
    __Vfunc_round_pack32__168__significand = ((IData)(vlSelf->__PVT__divide__DOT__zero)
                                               ? 0U
                                               : ((0x7fffffeU 
                                                   & vlSelf->__PVT__divide__DOT__quotient) 
                                                  | (1U 
                                                     & (vlSelf->__PVT__divide__DOT__quotient 
                                                        | (0U 
                                                           != vlSelf->__PVT__divide__DOT__remainder)))));
    __Vfunc_round_pack32__168__exponent = vlSelf->__PVT__divide__DOT__exponent;
    __Vfunc_round_pack32__168__negative = vlSelf->__PVT__divide__DOT__negative;
    __Vfunc_round_pack32__168__adjusted = __Vfunc_round_pack32__168__exponent;
    __Vfunc_round_pack32__168__shifted = __Vfunc_round_pack32__168__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__168__exponent))) {
        vlSelf->__Vfunc_shift_jam27__169__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__168__exponent)));
        vlSelf->__Vfunc_shift_jam27__169__value = __Vfunc_round_pack32__168__significand;
        __Vfunc_round_pack32__168__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__169__distance))) {
            vlSelf->__Vfunc_shift_jam27__169__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__169__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__169__distance))) {
            vlSelf->__Vfunc_shift_jam27__169__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__169__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__169__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__169__value, (IData)(vlSelf->__Vfunc_shift_jam27__169__distance)));
            vlSelf->__Vfunc_shift_jam27__169__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__169__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__169__distance)))));
            vlSelf->__Vfunc_shift_jam27__169__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__169__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__169__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__169__discarded))));
        }
        __Vfunc_round_pack32__168__shifted = vlSelf->__Vfunc_shift_jam27__169__Vfuncout;
    }
    __Vfunc_round_pack32__168__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__168__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__168__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__168__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__168__rounded)) {
        __Vfunc_round_pack32__168__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__168__rounded, 1U));
        __Vfunc_round_pack32__168__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__168__adjusted)));
    }
    __Vfunc_round_pack32__168__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__168__rounded)) {
        __Vfunc_round_pack32__168__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__168__adjusted)));
    }
    __Vfunc_round_pack32__168__Vfuncout = (((0U == __Vfunc_round_pack32__168__significand) 
                                            | (0U == __Vfunc_round_pack32__168__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__168__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__168__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__168__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__168__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__168__rounded)))))));
    vlSelf->__PVT__divide__DOT__packed_result = __Vfunc_round_pack32__168__Vfuncout;
    vlSelf->__VdfgTmp_h3e0667de__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__b 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__b 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__add_b = ((1U == (IData)(vlSelf->__PVT__operation))
                             ? (((~ (vlSelf->__PVT__b 
                                     >> 0x1fU)) << 0x1fU) 
                                | (0x7fffffffU & vlSelf->__PVT__b))
                             : vlSelf->__PVT__b);
    vlSelf->__PVT__divide__DOT__raw_b = (((0U != (0xffU 
                                                  & (vlSelf->__PVT__b 
                                                     >> 0x17U))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & vlSelf->__PVT__b));
    vlSelf->__VdfgTmp_ha96a2c24__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__a 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__a 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__divide__DOT__raw_a = (((0U != (0xffU 
                                                  & (vlSelf->__PVT__a 
                                                     >> 0x17U))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & vlSelf->__PVT__a));
    vlSelf->__PVT__square_root__DOT__take_bit = (__PVT__square_root__DOT__shifted_remainder 
                                                 >= 
                                                 (1U 
                                                  | (vlSelf->__PVT__square_root__DOT__root 
                                                     << 2U)));
    vlSelf->__PVT__divide__DOT__next_remainder = (0x3ffffffU 
                                                  & ((IData)(vlSelf->__PVT__divide__DOT__take_bit)
                                                      ? 
                                                     ((vlSelf->__PVT__divide__DOT__remainder 
                                                       << 1U) 
                                                      - vlSelf->__PVT__divide__DOT__divisor)
                                                      : 
                                                     (vlSelf->__PVT__divide__DOT__remainder 
                                                      << 1U)));
    __PVT__add__DOT__a_larger = ((0x7fffffffU & vlSelf->__PVT__a) 
                                 >= (0x7fffffffU & vlSelf->__PVT__add_b));
    vlSelf->__PVT__multiply__DOT__shift_b = ((0U == vlSelf->__PVT__divide__DOT__raw_b)
                                              ? 0U : 
                                             (0x3fU 
                                              & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__161__value 
                            = vlSelf->__PVT__divide__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__161__part 
                            = vlSelf->__Vfunc_leading_zero32__161__value;
                        vlSelf->__Vfunc_leading_zero32__161__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__161__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__161__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__161__count)));
                            vlSelf->__Vfunc_leading_zero32__161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__161__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__161__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__161__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__161__count)));
                            vlSelf->__Vfunc_leading_zero32__161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__161__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__161__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__161__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__161__count)));
                            vlSelf->__Vfunc_leading_zero32__161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__161__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__161__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__161__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__161__count)));
                            vlSelf->__Vfunc_leading_zero32__161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__161__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__161__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__161__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__161__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__161__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__161__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__161__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__161__Vfuncout)) 
                                                 - (IData)(8U))));
    vlSelf->__PVT__divide__DOT__shift_b = ((0U == vlSelf->__PVT__divide__DOT__raw_b)
                                            ? 0U : 
                                           (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__167__value 
                            = vlSelf->__PVT__divide__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__167__part 
                            = vlSelf->__Vfunc_leading_zero32__167__value;
                        vlSelf->__Vfunc_leading_zero32__167__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__167__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__167__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__167__count)));
                            vlSelf->__Vfunc_leading_zero32__167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__167__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__167__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__167__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__167__count)));
                            vlSelf->__Vfunc_leading_zero32__167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__167__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__167__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__167__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__167__count)));
                            vlSelf->__Vfunc_leading_zero32__167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__167__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__167__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__167__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__167__count)));
                            vlSelf->__Vfunc_leading_zero32__167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__167__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__167__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__167__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__167__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__167__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__167__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__167__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__167__Vfuncout)) 
                                             - (IData)(8U))));
    vlSelf->__PVT__multiply__DOT__shift_a = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                              ? 0U : 
                                             (0x3fU 
                                              & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__160__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__160__part 
                            = vlSelf->__Vfunc_leading_zero32__160__value;
                        vlSelf->__Vfunc_leading_zero32__160__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__160__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__160__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__160__count)));
                            vlSelf->__Vfunc_leading_zero32__160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__160__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__160__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__160__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__160__count)));
                            vlSelf->__Vfunc_leading_zero32__160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__160__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__160__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__160__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__160__count)));
                            vlSelf->__Vfunc_leading_zero32__160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__160__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__160__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__160__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__160__count)));
                            vlSelf->__Vfunc_leading_zero32__160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__160__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__160__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__160__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__160__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__160__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__160__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__160__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__160__Vfuncout)) 
                                                 - (IData)(8U))));
    vlSelf->__PVT__square_root__DOT__shift = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                               ? 0U
                                               : (0x3fU 
                                                  & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__172__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__172__part 
                            = vlSelf->__Vfunc_leading_zero32__172__value;
                        vlSelf->__Vfunc_leading_zero32__172__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__172__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__172__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__172__count)));
                            vlSelf->__Vfunc_leading_zero32__172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__172__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__172__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__172__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__172__count)));
                            vlSelf->__Vfunc_leading_zero32__172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__172__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__172__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__172__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__172__count)));
                            vlSelf->__Vfunc_leading_zero32__172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__172__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__172__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__172__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__172__count)));
                            vlSelf->__Vfunc_leading_zero32__172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__172__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__172__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__172__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__172__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__172__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__172__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__172__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__172__Vfuncout)) 
                                                     - (IData)(8U))));
    vlSelf->__PVT__divide__DOT__shift_a = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                            ? 0U : 
                                           (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__166__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__166__part 
                            = vlSelf->__Vfunc_leading_zero32__166__value;
                        vlSelf->__Vfunc_leading_zero32__166__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__166__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__166__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__166__count)));
                            vlSelf->__Vfunc_leading_zero32__166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__166__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__166__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__166__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__166__count)));
                            vlSelf->__Vfunc_leading_zero32__166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__166__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__166__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__166__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__166__count)));
                            vlSelf->__Vfunc_leading_zero32__166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__166__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__166__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__166__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__166__count)));
                            vlSelf->__Vfunc_leading_zero32__166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__166__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__166__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__166__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__166__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__166__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__166__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__166__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__166__Vfuncout)) 
                                             - (IData)(8U))));
    vlSelf->__PVT__square_root__DOT__next_remainder 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__square_root__DOT__take_bit)
                           ? (__PVT__square_root__DOT__shifted_remainder 
                              - (1U | (vlSelf->__PVT__square_root__DOT__root 
                                       << 2U))) : __PVT__square_root__DOT__shifted_remainder));
    if (__PVT__add__DOT__a_larger) {
        vlSelf->__PVT__add__DOT__small_value = vlSelf->__PVT__add_b;
        vlSelf->__PVT__add__DOT__large_value = vlSelf->__PVT__a;
    } else {
        vlSelf->__PVT__add__DOT__small_value = vlSelf->__PVT__a;
        vlSelf->__PVT__add__DOT__large_value = vlSelf->__PVT__add_b;
    }
    vlSelf->__PVT__divide__DOT__normalized_b = (0xffffffU 
                                                & VL_SHIFTL_III(24,24,6, vlSelf->__PVT__divide__DOT__raw_b, (IData)(vlSelf->__PVT__divide__DOT__shift_b)));
    vlSelf->__PVT__square_root__DOT__input_exponent 
        = (0xfffU & ((IData)(vlSelf->__VdfgTmp_ha96a2c24__0) 
                     - (IData)(vlSelf->__PVT__square_root__DOT__shift)));
    vlSelf->__PVT__divide__DOT__normalized_a = (0xffffffU 
                                                & VL_SHIFTL_III(24,24,6, vlSelf->__PVT__divide__DOT__raw_a, (IData)(vlSelf->__PVT__divide__DOT__shift_a)));
    vlSelf->__PVT__add__DOT__large_exponent = ((0U 
                                                == 
                                                (0xffU 
                                                 & (vlSelf->__PVT__add__DOT__large_value 
                                                    >> 0x17U)))
                                                ? 0xf82U
                                                : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__add__DOT__large_value 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__divide__DOT__below_one = (vlSelf->__PVT__divide__DOT__normalized_a 
                                             < vlSelf->__PVT__divide__DOT__normalized_b);
}
