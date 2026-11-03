// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_anvil_qn1_scalar.h"

VL_INLINE_OPT void Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic__0(Vtop_tb_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic__0\n"); );
    // Body
    vlSelf->square_root__DOT____VdfgTmp_h0890133b__0 
        = ((~ (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__unit_flush)) 
           & (IData)(vlSymsp->TOP.top_tb__DOT__rst_n));
    vlSelf->in_ready = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                        & (0U == (IData)(vlSelf->__PVT__state)));
    vlSelf->__PVT__divide__DOT__ready = ((~ (IData)(vlSelf->__PVT__divide__DOT__active)) 
                                         & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
    vlSelf->__PVT__square_root__DOT__ready = ((~ (IData)(vlSelf->__PVT__square_root__DOT__active)) 
                                              & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
    vlSelf->out_valid = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                         & (3U == (IData)(vlSelf->__PVT__state)));
    vlSelf->out_data = ((IData)(vlSelf->out_valid) ? vlSelf->__PVT__data
                         : 0U);
}

VL_INLINE_OPT void Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic__0(Vtop_tb_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic__0\n"); );
    // Init
    CData/*0:0*/ __PVT__add__DOT__a_larger;
    __PVT__add__DOT__a_larger = 0;
    IData/*30:0*/ __PVT__square_root__DOT__shifted_remainder;
    __PVT__square_root__DOT__shifted_remainder = 0;
    QData/*32:0*/ __Vfunc_round_pack32__1__Vfuncout;
    __Vfunc_round_pack32__1__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__1__negative;
    __Vfunc_round_pack32__1__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__1__exponent;
    __Vfunc_round_pack32__1__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__1__significand;
    __Vfunc_round_pack32__1__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__1__shifted;
    __Vfunc_round_pack32__1__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__1__rounded;
    __Vfunc_round_pack32__1__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__1__adjusted;
    __Vfunc_round_pack32__1__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__1__biased;
    __Vfunc_round_pack32__1__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__3__Vfuncout;
    __Vfunc_fp32_invalid__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__3__value;
    __Vfunc_fp32_invalid__3__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__4__Vfuncout;
    __Vfunc_fp32_invalid__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__4__value;
    __Vfunc_fp32_invalid__4__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__5__Vfuncout;
    __Vfunc_shift_jam27__5__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__5__value;
    __Vfunc_shift_jam27__5__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__5__distance;
    __Vfunc_shift_jam27__5__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__5__shifted;
    __Vfunc_shift_jam27__5__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__5__discarded;
    __Vfunc_shift_jam27__5__discarded = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8__Vfuncout;
    __Vfunc_round_pack32__8__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8__negative;
    __Vfunc_round_pack32__8__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8__exponent;
    __Vfunc_round_pack32__8__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8__significand;
    __Vfunc_round_pack32__8__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8__shifted;
    __Vfunc_round_pack32__8__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8__rounded;
    __Vfunc_round_pack32__8__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8__adjusted;
    __Vfunc_round_pack32__8__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8__biased;
    __Vfunc_round_pack32__8__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__10__Vfuncout;
    __Vfunc_fp32_invalid__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__10__value;
    __Vfunc_fp32_invalid__10__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__11__Vfuncout;
    __Vfunc_fp32_invalid__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__11__value;
    __Vfunc_fp32_invalid__11__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__14__Vfuncout;
    __Vfunc_round_pack32__14__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__14__negative;
    __Vfunc_round_pack32__14__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__14__exponent;
    __Vfunc_round_pack32__14__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__14__significand;
    __Vfunc_round_pack32__14__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__14__shifted;
    __Vfunc_round_pack32__14__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__14__rounded;
    __Vfunc_round_pack32__14__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__14__adjusted;
    __Vfunc_round_pack32__14__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__14__biased;
    __Vfunc_round_pack32__14__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__16__Vfuncout;
    __Vfunc_fp32_invalid__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__16__value;
    __Vfunc_fp32_invalid__16__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__17__Vfuncout;
    __Vfunc_fp32_invalid__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__17__value;
    __Vfunc_fp32_invalid__17__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__19__Vfuncout;
    __Vfunc_round_pack32__19__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__19__negative;
    __Vfunc_round_pack32__19__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__19__exponent;
    __Vfunc_round_pack32__19__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__19__significand;
    __Vfunc_round_pack32__19__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__19__shifted;
    __Vfunc_round_pack32__19__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__19__rounded;
    __Vfunc_round_pack32__19__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__19__adjusted;
    __Vfunc_round_pack32__19__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__19__biased;
    __Vfunc_round_pack32__19__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__21__Vfuncout;
    __Vfunc_fp32_invalid__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__21__value;
    __Vfunc_fp32_invalid__21__value = 0;
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
    vlSelf->__Vdly__result_failed = vlSelf->__PVT__result_failed;
    __Vdly__state = vlSelf->__PVT__state;
    __Vdly__operation = vlSelf->__PVT__operation;
    __Vdly__b = vlSelf->__PVT__b;
    __Vdly__a = vlSelf->__PVT__a;
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__unit_flush) {
            __Vdly__state = 0U;
            vlSelf->__PVT__data = 0U;
            vlSelf->__Vdly__result_failed = 0U;
        } else if ((0U == (IData)(vlSelf->__PVT__state))) {
            if ((((~ (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting)) 
                  & (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic_state)) 
                 & (IData)(vlSelf->in_ready))) {
                __Vdly__a = vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a;
                __Vdly__b = vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b;
                __Vdly__operation = vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__op;
                __Vdly__failed = ((IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__failed) 
                                  | (4U < (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__op)));
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
                        vlSelf->__Vdly__result_failed 
                            = vlSelf->__PVT__add__DOT__error5;
                    } else {
                        vlSelf->__PVT__data = 0U;
                        vlSelf->__Vdly__result_failed = 0U;
                    }
                } else if ((2U == (IData)(vlSelf->__PVT__operation))) {
                    if (vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) {
                        vlSelf->__PVT__data = vlSelf->__PVT__multiply__DOT__value4;
                        vlSelf->__Vdly__result_failed 
                            = vlSelf->__PVT__multiply__DOT__error4;
                    } else {
                        vlSelf->__PVT__data = 0U;
                        vlSelf->__Vdly__result_failed = 0U;
                    }
                } else if ((3U == (IData)(vlSelf->__PVT__operation))) {
                    if (vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) {
                        vlSelf->__PVT__data = vlSelf->__PVT__divide__DOT__value;
                        vlSelf->__Vdly__result_failed 
                            = vlSelf->__PVT__divide__DOT__result_failed;
                    } else {
                        vlSelf->__PVT__data = 0U;
                        vlSelf->__Vdly__result_failed = 0U;
                    }
                } else if ((4U == (IData)(vlSelf->__PVT__operation))) {
                    if (vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) {
                        vlSelf->__PVT__data = vlSelf->__PVT__square_root__DOT__value;
                        vlSelf->__Vdly__result_failed 
                            = vlSelf->__PVT__square_root__DOT__result_failed;
                    } else {
                        vlSelf->__PVT__data = 0U;
                        vlSelf->__Vdly__result_failed = 0U;
                    }
                } else {
                    vlSelf->__PVT__data = 0U;
                    vlSelf->__Vdly__result_failed = 1U;
                }
                __Vdly__state = 3U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__state))) {
            if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting) {
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
        vlSelf->__Vdly__result_failed = 0U;
    }
    vlSelf->__PVT__elapsed = __Vdly__elapsed;
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__unit_flush) {
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
                                __Vfunc_fp32_invalid__3__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__3__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__3__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__3__Vfuncout))) 
                                           | ([&]() {
                            __Vfunc_fp32_invalid__4__value 
                                = vlSelf->__PVT__add_b;
                            __Vfunc_fp32_invalid__4__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__4__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__4__Vfuncout))));
            __Vfunc_shift_jam27__5__distance = vlSelf->__PVT__add__DOT__distance1;
            __Vfunc_shift_jam27__5__value = vlSelf->__PVT__add__DOT__small1;
            vlSelf->__PVT__add__DOT__large2 = vlSelf->__PVT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__5__distance))) {
                __Vfunc_shift_jam27__5__Vfuncout = __Vfunc_shift_jam27__5__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__5__distance))) {
                __Vfunc_shift_jam27__5__Vfuncout = 
                    (0U != __Vfunc_shift_jam27__5__value);
            } else {
                __Vfunc_shift_jam27__5__shifted = (0x7ffffffU 
                                                   & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__5__value, (IData)(__Vfunc_shift_jam27__5__distance)));
                __Vfunc_shift_jam27__5__discarded = 
                    (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__5__value, 
                                                (0xfffU 
                                                 & ((IData)(0x1bU) 
                                                    - (IData)(__Vfunc_shift_jam27__5__distance)))));
                __Vfunc_shift_jam27__5__Vfuncout = 
                    ((0x7fffffeU & __Vfunc_shift_jam27__5__shifted) 
                     | (1U & (__Vfunc_shift_jam27__5__shifted 
                              | (0U != __Vfunc_shift_jam27__5__discarded))));
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
            vlSelf->__PVT__add__DOT__small2 = __Vfunc_shift_jam27__5__Vfuncout;
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__unit_flush) {
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
                                __Vfunc_fp32_invalid__10__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__10__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__10__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__10__Vfuncout))) 
                                                | ([&]() {
                            __Vfunc_fp32_invalid__11__value 
                                = vlSelf->__PVT__b;
                            __Vfunc_fp32_invalid__11__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__11__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__11__Vfuncout))));
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__unit_flush) {
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
                                __Vfunc_fp32_invalid__21__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__21__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__21__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__21__Vfuncout))) 
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__unit_flush) {
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
                                    __Vfunc_fp32_invalid__16__value 
                                        = vlSelf->__PVT__a;
                                    __Vfunc_fp32_invalid__16__Vfuncout 
                                        = (0xffU == 
                                           (0xffU & 
                                            (__Vfunc_fp32_invalid__16__value 
                                             >> 0x17U)));
                                }(), (IData)(__Vfunc_fp32_invalid__16__Vfuncout))) 
                                                | ([&]() {
                                __Vfunc_fp32_invalid__17__value 
                                    = vlSelf->__PVT__b;
                                __Vfunc_fp32_invalid__17__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__17__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__17__Vfuncout))) 
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
                        vlSelf->__Vfunc_leading_zero32__0__value 
                            = vlSelf->__PVT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__0__part 
                            = vlSelf->__Vfunc_leading_zero32__0__value;
                        vlSelf->__Vfunc_leading_zero32__0__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__0__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__0__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__0__count)));
                            vlSelf->__Vfunc_leading_zero32__0__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__0__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__0__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__0__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__0__count)));
                            vlSelf->__Vfunc_leading_zero32__0__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__0__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__0__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__0__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__0__count)));
                            vlSelf->__Vfunc_leading_zero32__0__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__0__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__0__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__0__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__0__count)));
                            vlSelf->__Vfunc_leading_zero32__0__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__0__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__0__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__0__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__0__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__0__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__0__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__0__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__0__Vfuncout)) 
                                             - (IData)(5U))));
    __Vfunc_round_pack32__1__significand = vlSelf->__PVT__add__DOT__significand4;
    __Vfunc_round_pack32__1__exponent = vlSelf->__PVT__add__DOT__exponent4;
    __Vfunc_round_pack32__1__negative = vlSelf->__PVT__add__DOT__negative4;
    __Vfunc_round_pack32__1__adjusted = __Vfunc_round_pack32__1__exponent;
    __Vfunc_round_pack32__1__shifted = __Vfunc_round_pack32__1__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__1__exponent))) {
        vlSelf->__Vfunc_shift_jam27__2__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__1__exponent)));
        vlSelf->__Vfunc_shift_jam27__2__value = __Vfunc_round_pack32__1__significand;
        __Vfunc_round_pack32__1__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__2__distance))) {
            vlSelf->__Vfunc_shift_jam27__2__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__2__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__2__distance))) {
            vlSelf->__Vfunc_shift_jam27__2__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__2__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__2__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__2__value, (IData)(vlSelf->__Vfunc_shift_jam27__2__distance)));
            vlSelf->__Vfunc_shift_jam27__2__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__2__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__2__distance)))));
            vlSelf->__Vfunc_shift_jam27__2__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__2__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__2__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__2__discarded))));
        }
        __Vfunc_round_pack32__1__shifted = vlSelf->__Vfunc_shift_jam27__2__Vfuncout;
    }
    __Vfunc_round_pack32__1__rounded = (0x1ffffffU 
                                        & ((0xffffffU 
                                            & (__Vfunc_round_pack32__1__shifted 
                                               >> 3U)) 
                                           + (1U & 
                                              ((__Vfunc_round_pack32__1__shifted 
                                                >> 2U) 
                                               & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xbU 
                                                           & __Vfunc_round_pack32__1__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__1__rounded)) {
        __Vfunc_round_pack32__1__rounded = (0x1ffffffU 
                                            & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__1__rounded, 1U));
        __Vfunc_round_pack32__1__adjusted = (0xfffU 
                                             & ((IData)(1U) 
                                                + (IData)(__Vfunc_round_pack32__1__adjusted)));
    }
    __Vfunc_round_pack32__1__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__1__rounded)) {
        __Vfunc_round_pack32__1__biased = (0xffU & 
                                           ((IData)(0x7fU) 
                                            + (IData)(__Vfunc_round_pack32__1__adjusted)));
    }
    __Vfunc_round_pack32__1__Vfuncout = (((0U == __Vfunc_round_pack32__1__significand) 
                                          | (0U == __Vfunc_round_pack32__1__rounded))
                                          ? ((QData)((IData)(__Vfunc_round_pack32__1__negative)) 
                                             << 0x1fU)
                                          : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__1__adjusted))
                                              ? 0x100000000ULL
                                              : (((QData)((IData)(__Vfunc_round_pack32__1__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__1__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__1__rounded)))))));
    vlSelf->__PVT__add__DOT__packed5 = __Vfunc_round_pack32__1__Vfuncout;
    __Vfunc_round_pack32__8__significand = vlSelf->__PVT__multiply__DOT__significand3;
    __Vfunc_round_pack32__8__exponent = vlSelf->__PVT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__8__negative = (1U & ((IData)(vlSelf->__PVT__multiply__DOT__negative) 
                                               >> 2U));
    __Vfunc_round_pack32__8__adjusted = __Vfunc_round_pack32__8__exponent;
    __Vfunc_round_pack32__8__shifted = __Vfunc_round_pack32__8__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8__exponent)));
        vlSelf->__Vfunc_shift_jam27__9__value = __Vfunc_round_pack32__8__significand;
        __Vfunc_round_pack32__8__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9__distance))) {
            vlSelf->__Vfunc_shift_jam27__9__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9__distance))) {
            vlSelf->__Vfunc_shift_jam27__9__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9__value, (IData)(vlSelf->__Vfunc_shift_jam27__9__distance)));
            vlSelf->__Vfunc_shift_jam27__9__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9__distance)))));
            vlSelf->__Vfunc_shift_jam27__9__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9__discarded))));
        }
        __Vfunc_round_pack32__8__shifted = vlSelf->__Vfunc_shift_jam27__9__Vfuncout;
    }
    __Vfunc_round_pack32__8__rounded = (0x1ffffffU 
                                        & ((0xffffffU 
                                            & (__Vfunc_round_pack32__8__shifted 
                                               >> 3U)) 
                                           + (1U & 
                                              ((__Vfunc_round_pack32__8__shifted 
                                                >> 2U) 
                                               & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xbU 
                                                           & __Vfunc_round_pack32__8__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8__rounded)) {
        __Vfunc_round_pack32__8__rounded = (0x1ffffffU 
                                            & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8__rounded, 1U));
        __Vfunc_round_pack32__8__adjusted = (0xfffU 
                                             & ((IData)(1U) 
                                                + (IData)(__Vfunc_round_pack32__8__adjusted)));
    }
    __Vfunc_round_pack32__8__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8__rounded)) {
        __Vfunc_round_pack32__8__biased = (0xffU & 
                                           ((IData)(0x7fU) 
                                            + (IData)(__Vfunc_round_pack32__8__adjusted)));
    }
    __Vfunc_round_pack32__8__Vfuncout = (((0U == __Vfunc_round_pack32__8__significand) 
                                          | (0U == __Vfunc_round_pack32__8__rounded))
                                          ? ((QData)((IData)(__Vfunc_round_pack32__8__negative)) 
                                             << 0x1fU)
                                          : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8__adjusted))
                                              ? 0x100000000ULL
                                              : (((QData)((IData)(__Vfunc_round_pack32__8__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8__rounded)))))));
    vlSelf->__PVT__multiply__DOT__packed4 = __Vfunc_round_pack32__8__Vfuncout;
    __PVT__square_root__DOT__shifted_remainder = ((vlSelf->__PVT__square_root__DOT__remainder 
                                                   << 2U) 
                                                  | (3U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__square_root__DOT__pairs 
                                                                >> 0x34U))));
    __Vfunc_round_pack32__19__significand = ((0x7fffffeU 
                                              & vlSelf->__PVT__square_root__DOT__root) 
                                             | (1U 
                                                & (vlSelf->__PVT__square_root__DOT__root 
                                                   | (0U 
                                                      != vlSelf->__PVT__square_root__DOT__remainder))));
    __Vfunc_round_pack32__19__exponent = vlSelf->__PVT__square_root__DOT__exponent;
    __Vfunc_round_pack32__19__negative = vlSelf->__PVT__square_root__DOT__negative;
    __Vfunc_round_pack32__19__adjusted = __Vfunc_round_pack32__19__exponent;
    __Vfunc_round_pack32__19__shifted = __Vfunc_round_pack32__19__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__19__exponent))) {
        vlSelf->__Vfunc_shift_jam27__20__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__19__exponent)));
        vlSelf->__Vfunc_shift_jam27__20__value = __Vfunc_round_pack32__19__significand;
        __Vfunc_round_pack32__19__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__20__distance))) {
            vlSelf->__Vfunc_shift_jam27__20__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__20__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__20__distance))) {
            vlSelf->__Vfunc_shift_jam27__20__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__20__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__20__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__20__value, (IData)(vlSelf->__Vfunc_shift_jam27__20__distance)));
            vlSelf->__Vfunc_shift_jam27__20__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__20__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__20__distance)))));
            vlSelf->__Vfunc_shift_jam27__20__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__20__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__20__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__20__discarded))));
        }
        __Vfunc_round_pack32__19__shifted = vlSelf->__Vfunc_shift_jam27__20__Vfuncout;
    }
    __Vfunc_round_pack32__19__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__19__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__19__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__19__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__19__rounded)) {
        __Vfunc_round_pack32__19__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__19__rounded, 1U));
        __Vfunc_round_pack32__19__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__19__adjusted)));
    }
    __Vfunc_round_pack32__19__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__19__rounded)) {
        __Vfunc_round_pack32__19__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__19__adjusted)));
    }
    __Vfunc_round_pack32__19__Vfuncout = (((0U == __Vfunc_round_pack32__19__significand) 
                                           | (0U == __Vfunc_round_pack32__19__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__19__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__19__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__19__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__19__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__19__rounded)))))));
    vlSelf->__PVT__square_root__DOT__packed_result 
        = __Vfunc_round_pack32__19__Vfuncout;
    vlSelf->__PVT__divide__DOT__take_bit = ((vlSelf->__PVT__divide__DOT__remainder 
                                             << 1U) 
                                            >= vlSelf->__PVT__divide__DOT__divisor);
    __Vfunc_round_pack32__14__significand = ((IData)(vlSelf->__PVT__divide__DOT__zero)
                                              ? 0U : 
                                             ((0x7fffffeU 
                                               & vlSelf->__PVT__divide__DOT__quotient) 
                                              | (1U 
                                                 & (vlSelf->__PVT__divide__DOT__quotient 
                                                    | (0U 
                                                       != vlSelf->__PVT__divide__DOT__remainder)))));
    __Vfunc_round_pack32__14__exponent = vlSelf->__PVT__divide__DOT__exponent;
    __Vfunc_round_pack32__14__negative = vlSelf->__PVT__divide__DOT__negative;
    __Vfunc_round_pack32__14__adjusted = __Vfunc_round_pack32__14__exponent;
    __Vfunc_round_pack32__14__shifted = __Vfunc_round_pack32__14__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__14__exponent))) {
        vlSelf->__Vfunc_shift_jam27__15__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__14__exponent)));
        vlSelf->__Vfunc_shift_jam27__15__value = __Vfunc_round_pack32__14__significand;
        __Vfunc_round_pack32__14__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__15__distance))) {
            vlSelf->__Vfunc_shift_jam27__15__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__15__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__15__distance))) {
            vlSelf->__Vfunc_shift_jam27__15__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__15__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__15__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__15__value, (IData)(vlSelf->__Vfunc_shift_jam27__15__distance)));
            vlSelf->__Vfunc_shift_jam27__15__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__15__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__15__distance)))));
            vlSelf->__Vfunc_shift_jam27__15__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__15__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__15__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__15__discarded))));
        }
        __Vfunc_round_pack32__14__shifted = vlSelf->__Vfunc_shift_jam27__15__Vfuncout;
    }
    __Vfunc_round_pack32__14__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__14__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__14__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__14__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__14__rounded)) {
        __Vfunc_round_pack32__14__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__14__rounded, 1U));
        __Vfunc_round_pack32__14__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__14__adjusted)));
    }
    __Vfunc_round_pack32__14__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__14__rounded)) {
        __Vfunc_round_pack32__14__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__14__adjusted)));
    }
    __Vfunc_round_pack32__14__Vfuncout = (((0U == __Vfunc_round_pack32__14__significand) 
                                           | (0U == __Vfunc_round_pack32__14__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__14__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__14__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__14__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__14__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__14__rounded)))))));
    vlSelf->__PVT__divide__DOT__packed_result = __Vfunc_round_pack32__14__Vfuncout;
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
                        vlSelf->__Vfunc_leading_zero32__7__value 
                            = vlSelf->__PVT__divide__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__7__part 
                            = vlSelf->__Vfunc_leading_zero32__7__value;
                        vlSelf->__Vfunc_leading_zero32__7__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7__count)));
                            vlSelf->__Vfunc_leading_zero32__7__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7__count)));
                            vlSelf->__Vfunc_leading_zero32__7__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7__count)));
                            vlSelf->__Vfunc_leading_zero32__7__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7__count)));
                            vlSelf->__Vfunc_leading_zero32__7__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7__Vfuncout)) 
                                                 - (IData)(8U))));
    vlSelf->__PVT__divide__DOT__shift_b = ((0U == vlSelf->__PVT__divide__DOT__raw_b)
                                            ? 0U : 
                                           (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13__value 
                            = vlSelf->__PVT__divide__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13__part 
                            = vlSelf->__Vfunc_leading_zero32__13__value;
                        vlSelf->__Vfunc_leading_zero32__13__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13__count)));
                            vlSelf->__Vfunc_leading_zero32__13__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13__count)));
                            vlSelf->__Vfunc_leading_zero32__13__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13__count)));
                            vlSelf->__Vfunc_leading_zero32__13__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13__count)));
                            vlSelf->__Vfunc_leading_zero32__13__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13__Vfuncout)) 
                                             - (IData)(8U))));
    vlSelf->__PVT__multiply__DOT__shift_a = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                              ? 0U : 
                                             (0x3fU 
                                              & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6__part 
                            = vlSelf->__Vfunc_leading_zero32__6__value;
                        vlSelf->__Vfunc_leading_zero32__6__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6__count)));
                            vlSelf->__Vfunc_leading_zero32__6__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6__count)));
                            vlSelf->__Vfunc_leading_zero32__6__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6__count)));
                            vlSelf->__Vfunc_leading_zero32__6__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6__count)));
                            vlSelf->__Vfunc_leading_zero32__6__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6__Vfuncout)) 
                                                 - (IData)(8U))));
    vlSelf->__PVT__square_root__DOT__shift = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                               ? 0U
                                               : (0x3fU 
                                                  & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__18__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__18__part 
                            = vlSelf->__Vfunc_leading_zero32__18__value;
                        vlSelf->__Vfunc_leading_zero32__18__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__18__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__18__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__18__count)));
                            vlSelf->__Vfunc_leading_zero32__18__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__18__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__18__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__18__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__18__count)));
                            vlSelf->__Vfunc_leading_zero32__18__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__18__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__18__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__18__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__18__count)));
                            vlSelf->__Vfunc_leading_zero32__18__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__18__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__18__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__18__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__18__count)));
                            vlSelf->__Vfunc_leading_zero32__18__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__18__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__18__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__18__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__18__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__18__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__18__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__18__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__18__Vfuncout)) 
                                                     - (IData)(8U))));
    vlSelf->__PVT__divide__DOT__shift_a = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                            ? 0U : 
                                           (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12__part 
                            = vlSelf->__Vfunc_leading_zero32__12__value;
                        vlSelf->__Vfunc_leading_zero32__12__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12__count)));
                            vlSelf->__Vfunc_leading_zero32__12__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12__count)));
                            vlSelf->__Vfunc_leading_zero32__12__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12__count)));
                            vlSelf->__Vfunc_leading_zero32__12__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12__count)));
                            vlSelf->__Vfunc_leading_zero32__12__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12__Vfuncout)) 
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

VL_INLINE_OPT void Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__0(Vtop_tb_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__0\n"); );
    // Body
    vlSelf->square_root__DOT____VdfgTmp_h0890133b__0 
        = ((~ (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__unit_flush)) 
           & (IData)(vlSymsp->TOP.top_tb__DOT__rst_n));
    vlSelf->in_ready = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                        & (0U == (IData)(vlSelf->__PVT__state)));
    vlSelf->out_valid = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                         & (3U == (IData)(vlSelf->__PVT__state)));
    vlSelf->__PVT__divide__DOT__ready = ((~ (IData)(vlSelf->__PVT__divide__DOT__active)) 
                                         & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
    vlSelf->__PVT__square_root__DOT__ready = ((~ (IData)(vlSelf->__PVT__square_root__DOT__active)) 
                                              & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
}

VL_INLINE_OPT void Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__0(Vtop_tb_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__0\n"); );
    // Init
    CData/*0:0*/ __PVT__add__DOT__a_larger;
    __PVT__add__DOT__a_larger = 0;
    IData/*30:0*/ __PVT__square_root__DOT__shifted_remainder;
    __PVT__square_root__DOT__shifted_remainder = 0;
    QData/*32:0*/ __Vfunc_round_pack32__23__Vfuncout;
    __Vfunc_round_pack32__23__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__23__negative;
    __Vfunc_round_pack32__23__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__23__exponent;
    __Vfunc_round_pack32__23__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__23__significand;
    __Vfunc_round_pack32__23__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__23__shifted;
    __Vfunc_round_pack32__23__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__23__rounded;
    __Vfunc_round_pack32__23__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__23__adjusted;
    __Vfunc_round_pack32__23__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__23__biased;
    __Vfunc_round_pack32__23__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__25__Vfuncout;
    __Vfunc_fp32_invalid__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__25__value;
    __Vfunc_fp32_invalid__25__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__26__Vfuncout;
    __Vfunc_fp32_invalid__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__26__value;
    __Vfunc_fp32_invalid__26__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__27__Vfuncout;
    __Vfunc_shift_jam27__27__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__27__value;
    __Vfunc_shift_jam27__27__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__27__distance;
    __Vfunc_shift_jam27__27__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__27__shifted;
    __Vfunc_shift_jam27__27__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__27__discarded;
    __Vfunc_shift_jam27__27__discarded = 0;
    QData/*32:0*/ __Vfunc_round_pack32__30__Vfuncout;
    __Vfunc_round_pack32__30__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__30__negative;
    __Vfunc_round_pack32__30__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__30__exponent;
    __Vfunc_round_pack32__30__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__30__significand;
    __Vfunc_round_pack32__30__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__30__shifted;
    __Vfunc_round_pack32__30__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__30__rounded;
    __Vfunc_round_pack32__30__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__30__adjusted;
    __Vfunc_round_pack32__30__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__30__biased;
    __Vfunc_round_pack32__30__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__32__Vfuncout;
    __Vfunc_fp32_invalid__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__32__value;
    __Vfunc_fp32_invalid__32__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__33__Vfuncout;
    __Vfunc_fp32_invalid__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__33__value;
    __Vfunc_fp32_invalid__33__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__36__Vfuncout;
    __Vfunc_round_pack32__36__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__36__negative;
    __Vfunc_round_pack32__36__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__36__exponent;
    __Vfunc_round_pack32__36__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__36__significand;
    __Vfunc_round_pack32__36__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__36__shifted;
    __Vfunc_round_pack32__36__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__36__rounded;
    __Vfunc_round_pack32__36__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__36__adjusted;
    __Vfunc_round_pack32__36__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__36__biased;
    __Vfunc_round_pack32__36__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__38__Vfuncout;
    __Vfunc_fp32_invalid__38__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__38__value;
    __Vfunc_fp32_invalid__38__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__39__Vfuncout;
    __Vfunc_fp32_invalid__39__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__39__value;
    __Vfunc_fp32_invalid__39__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__41__Vfuncout;
    __Vfunc_round_pack32__41__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__41__negative;
    __Vfunc_round_pack32__41__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__41__exponent;
    __Vfunc_round_pack32__41__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__41__significand;
    __Vfunc_round_pack32__41__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__41__shifted;
    __Vfunc_round_pack32__41__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__41__rounded;
    __Vfunc_round_pack32__41__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__41__adjusted;
    __Vfunc_round_pack32__41__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__41__biased;
    __Vfunc_round_pack32__41__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__43__Vfuncout;
    __Vfunc_fp32_invalid__43__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__43__value;
    __Vfunc_fp32_invalid__43__value = 0;
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
    vlSelf->__Vdly__result_failed = vlSelf->__PVT__result_failed;
    vlSelf->__Vdly__data = vlSelf->__PVT__data;
    __Vdly__state = vlSelf->__PVT__state;
    __Vdly__operation = vlSelf->__PVT__operation;
    __Vdly__b = vlSelf->__PVT__b;
    __Vdly__a = vlSelf->__PVT__a;
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__unit_flush) {
            __Vdly__state = 0U;
            vlSelf->__Vdly__data = 0U;
            vlSelf->__Vdly__result_failed = 0U;
        } else if ((0U == (IData)(vlSelf->__PVT__state))) {
            if ((((~ (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting)) 
                  & (5U == (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) 
                 & (IData)(vlSelf->in_ready))) {
                __Vdly__a = ((IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__a) 
                             << 0x10U);
                __Vdly__b = ((IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__b) 
                             << 0x10U);
                __Vdly__operation = 0U;
                __Vdly__failed = 0U;
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
                        vlSelf->__Vdly__data = vlSelf->__PVT__add__DOT__value5;
                        vlSelf->__Vdly__result_failed 
                            = vlSelf->__PVT__add__DOT__error5;
                    } else {
                        vlSelf->__Vdly__data = 0U;
                        vlSelf->__Vdly__result_failed = 0U;
                    }
                } else if ((2U == (IData)(vlSelf->__PVT__operation))) {
                    if (vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) {
                        vlSelf->__Vdly__data = vlSelf->__PVT__multiply__DOT__value4;
                        vlSelf->__Vdly__result_failed 
                            = vlSelf->__PVT__multiply__DOT__error4;
                    } else {
                        vlSelf->__Vdly__data = 0U;
                        vlSelf->__Vdly__result_failed = 0U;
                    }
                } else if ((3U == (IData)(vlSelf->__PVT__operation))) {
                    if (vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) {
                        vlSelf->__Vdly__data = vlSelf->__PVT__divide__DOT__value;
                        vlSelf->__Vdly__result_failed 
                            = vlSelf->__PVT__divide__DOT__result_failed;
                    } else {
                        vlSelf->__Vdly__data = 0U;
                        vlSelf->__Vdly__result_failed = 0U;
                    }
                } else if ((4U == (IData)(vlSelf->__PVT__operation))) {
                    if (vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) {
                        vlSelf->__Vdly__data = vlSelf->__PVT__square_root__DOT__value;
                        vlSelf->__Vdly__result_failed 
                            = vlSelf->__PVT__square_root__DOT__result_failed;
                    } else {
                        vlSelf->__Vdly__data = 0U;
                        vlSelf->__Vdly__result_failed = 0U;
                    }
                } else {
                    vlSelf->__Vdly__data = 0U;
                    vlSelf->__Vdly__result_failed = 1U;
                }
                __Vdly__state = 3U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__state))) {
            if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting) {
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
        vlSelf->__Vdly__data = 0U;
        __Vdly__failed = 0U;
        vlSelf->__Vdly__result_failed = 0U;
    }
    vlSelf->__PVT__elapsed = __Vdly__elapsed;
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__unit_flush) {
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
                                __Vfunc_fp32_invalid__25__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__25__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__25__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__25__Vfuncout))) 
                                           | ([&]() {
                            __Vfunc_fp32_invalid__26__value 
                                = vlSelf->__PVT__add_b;
                            __Vfunc_fp32_invalid__26__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__26__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__26__Vfuncout))));
            __Vfunc_shift_jam27__27__distance = vlSelf->__PVT__add__DOT__distance1;
            __Vfunc_shift_jam27__27__value = vlSelf->__PVT__add__DOT__small1;
            vlSelf->__PVT__add__DOT__large2 = vlSelf->__PVT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__27__distance))) {
                __Vfunc_shift_jam27__27__Vfuncout = __Vfunc_shift_jam27__27__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__27__distance))) {
                __Vfunc_shift_jam27__27__Vfuncout = 
                    (0U != __Vfunc_shift_jam27__27__value);
            } else {
                __Vfunc_shift_jam27__27__shifted = 
                    (0x7ffffffU & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__27__value, (IData)(__Vfunc_shift_jam27__27__distance)));
                __Vfunc_shift_jam27__27__discarded 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__27__value, 
                                                  (0xfffU 
                                                   & ((IData)(0x1bU) 
                                                      - (IData)(__Vfunc_shift_jam27__27__distance)))));
                __Vfunc_shift_jam27__27__Vfuncout = 
                    ((0x7fffffeU & __Vfunc_shift_jam27__27__shifted) 
                     | (1U & (__Vfunc_shift_jam27__27__shifted 
                              | (0U != __Vfunc_shift_jam27__27__discarded))));
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
            vlSelf->__PVT__add__DOT__small2 = __Vfunc_shift_jam27__27__Vfuncout;
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__unit_flush) {
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
                                __Vfunc_fp32_invalid__32__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__32__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__32__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__32__Vfuncout))) 
                                                | ([&]() {
                            __Vfunc_fp32_invalid__33__value 
                                = vlSelf->__PVT__b;
                            __Vfunc_fp32_invalid__33__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__33__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__33__Vfuncout))));
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__unit_flush) {
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
                                __Vfunc_fp32_invalid__43__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__43__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__43__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__43__Vfuncout))) 
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__unit_flush) {
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
                                    __Vfunc_fp32_invalid__38__value 
                                        = vlSelf->__PVT__a;
                                    __Vfunc_fp32_invalid__38__Vfuncout 
                                        = (0xffU == 
                                           (0xffU & 
                                            (__Vfunc_fp32_invalid__38__value 
                                             >> 0x17U)));
                                }(), (IData)(__Vfunc_fp32_invalid__38__Vfuncout))) 
                                                | ([&]() {
                                __Vfunc_fp32_invalid__39__value 
                                    = vlSelf->__PVT__b;
                                __Vfunc_fp32_invalid__39__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__39__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__39__Vfuncout))) 
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
                        vlSelf->__Vfunc_leading_zero32__22__value 
                            = vlSelf->__PVT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__22__part 
                            = vlSelf->__Vfunc_leading_zero32__22__value;
                        vlSelf->__Vfunc_leading_zero32__22__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__22__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__22__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__22__count)));
                            vlSelf->__Vfunc_leading_zero32__22__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__22__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__22__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__22__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__22__count)));
                            vlSelf->__Vfunc_leading_zero32__22__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__22__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__22__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__22__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__22__count)));
                            vlSelf->__Vfunc_leading_zero32__22__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__22__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__22__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__22__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__22__count)));
                            vlSelf->__Vfunc_leading_zero32__22__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__22__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__22__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__22__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__22__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__22__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__22__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__22__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__22__Vfuncout)) 
                                             - (IData)(5U))));
    __Vfunc_round_pack32__23__significand = vlSelf->__PVT__add__DOT__significand4;
    __Vfunc_round_pack32__23__exponent = vlSelf->__PVT__add__DOT__exponent4;
    __Vfunc_round_pack32__23__negative = vlSelf->__PVT__add__DOT__negative4;
    __Vfunc_round_pack32__23__adjusted = __Vfunc_round_pack32__23__exponent;
    __Vfunc_round_pack32__23__shifted = __Vfunc_round_pack32__23__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__23__exponent))) {
        vlSelf->__Vfunc_shift_jam27__24__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__23__exponent)));
        vlSelf->__Vfunc_shift_jam27__24__value = __Vfunc_round_pack32__23__significand;
        __Vfunc_round_pack32__23__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__24__distance))) {
            vlSelf->__Vfunc_shift_jam27__24__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__24__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__24__distance))) {
            vlSelf->__Vfunc_shift_jam27__24__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__24__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__24__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__24__value, (IData)(vlSelf->__Vfunc_shift_jam27__24__distance)));
            vlSelf->__Vfunc_shift_jam27__24__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__24__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__24__distance)))));
            vlSelf->__Vfunc_shift_jam27__24__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__24__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__24__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__24__discarded))));
        }
        __Vfunc_round_pack32__23__shifted = vlSelf->__Vfunc_shift_jam27__24__Vfuncout;
    }
    __Vfunc_round_pack32__23__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__23__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__23__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__23__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__23__rounded)) {
        __Vfunc_round_pack32__23__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__23__rounded, 1U));
        __Vfunc_round_pack32__23__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__23__adjusted)));
    }
    __Vfunc_round_pack32__23__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__23__rounded)) {
        __Vfunc_round_pack32__23__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__23__adjusted)));
    }
    __Vfunc_round_pack32__23__Vfuncout = (((0U == __Vfunc_round_pack32__23__significand) 
                                           | (0U == __Vfunc_round_pack32__23__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__23__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__23__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__23__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__23__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__23__rounded)))))));
    vlSelf->__PVT__add__DOT__packed5 = __Vfunc_round_pack32__23__Vfuncout;
    __Vfunc_round_pack32__30__significand = vlSelf->__PVT__multiply__DOT__significand3;
    __Vfunc_round_pack32__30__exponent = vlSelf->__PVT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__30__negative = (1U & ((IData)(vlSelf->__PVT__multiply__DOT__negative) 
                                                >> 2U));
    __Vfunc_round_pack32__30__adjusted = __Vfunc_round_pack32__30__exponent;
    __Vfunc_round_pack32__30__shifted = __Vfunc_round_pack32__30__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__30__exponent))) {
        vlSelf->__Vfunc_shift_jam27__31__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__30__exponent)));
        vlSelf->__Vfunc_shift_jam27__31__value = __Vfunc_round_pack32__30__significand;
        __Vfunc_round_pack32__30__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__31__distance))) {
            vlSelf->__Vfunc_shift_jam27__31__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__31__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__31__distance))) {
            vlSelf->__Vfunc_shift_jam27__31__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__31__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__31__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__31__value, (IData)(vlSelf->__Vfunc_shift_jam27__31__distance)));
            vlSelf->__Vfunc_shift_jam27__31__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__31__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__31__distance)))));
            vlSelf->__Vfunc_shift_jam27__31__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__31__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__31__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__31__discarded))));
        }
        __Vfunc_round_pack32__30__shifted = vlSelf->__Vfunc_shift_jam27__31__Vfuncout;
    }
    __Vfunc_round_pack32__30__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__30__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__30__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__30__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__30__rounded)) {
        __Vfunc_round_pack32__30__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__30__rounded, 1U));
        __Vfunc_round_pack32__30__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__30__adjusted)));
    }
    __Vfunc_round_pack32__30__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__30__rounded)) {
        __Vfunc_round_pack32__30__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__30__adjusted)));
    }
    __Vfunc_round_pack32__30__Vfuncout = (((0U == __Vfunc_round_pack32__30__significand) 
                                           | (0U == __Vfunc_round_pack32__30__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__30__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__30__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__30__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__30__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__30__rounded)))))));
    vlSelf->__PVT__multiply__DOT__packed4 = __Vfunc_round_pack32__30__Vfuncout;
    __PVT__square_root__DOT__shifted_remainder = ((vlSelf->__PVT__square_root__DOT__remainder 
                                                   << 2U) 
                                                  | (3U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__square_root__DOT__pairs 
                                                                >> 0x34U))));
    __Vfunc_round_pack32__41__significand = ((0x7fffffeU 
                                              & vlSelf->__PVT__square_root__DOT__root) 
                                             | (1U 
                                                & (vlSelf->__PVT__square_root__DOT__root 
                                                   | (0U 
                                                      != vlSelf->__PVT__square_root__DOT__remainder))));
    __Vfunc_round_pack32__41__exponent = vlSelf->__PVT__square_root__DOT__exponent;
    __Vfunc_round_pack32__41__negative = vlSelf->__PVT__square_root__DOT__negative;
    __Vfunc_round_pack32__41__adjusted = __Vfunc_round_pack32__41__exponent;
    __Vfunc_round_pack32__41__shifted = __Vfunc_round_pack32__41__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__41__exponent))) {
        vlSelf->__Vfunc_shift_jam27__42__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__41__exponent)));
        vlSelf->__Vfunc_shift_jam27__42__value = __Vfunc_round_pack32__41__significand;
        __Vfunc_round_pack32__41__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__42__distance))) {
            vlSelf->__Vfunc_shift_jam27__42__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__42__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__42__distance))) {
            vlSelf->__Vfunc_shift_jam27__42__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__42__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__42__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__42__value, (IData)(vlSelf->__Vfunc_shift_jam27__42__distance)));
            vlSelf->__Vfunc_shift_jam27__42__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__42__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__42__distance)))));
            vlSelf->__Vfunc_shift_jam27__42__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__42__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__42__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__42__discarded))));
        }
        __Vfunc_round_pack32__41__shifted = vlSelf->__Vfunc_shift_jam27__42__Vfuncout;
    }
    __Vfunc_round_pack32__41__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__41__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__41__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__41__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__41__rounded)) {
        __Vfunc_round_pack32__41__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__41__rounded, 1U));
        __Vfunc_round_pack32__41__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__41__adjusted)));
    }
    __Vfunc_round_pack32__41__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__41__rounded)) {
        __Vfunc_round_pack32__41__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__41__adjusted)));
    }
    __Vfunc_round_pack32__41__Vfuncout = (((0U == __Vfunc_round_pack32__41__significand) 
                                           | (0U == __Vfunc_round_pack32__41__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__41__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__41__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__41__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__41__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__41__rounded)))))));
    vlSelf->__PVT__square_root__DOT__packed_result 
        = __Vfunc_round_pack32__41__Vfuncout;
    vlSelf->__PVT__divide__DOT__take_bit = ((vlSelf->__PVT__divide__DOT__remainder 
                                             << 1U) 
                                            >= vlSelf->__PVT__divide__DOT__divisor);
    __Vfunc_round_pack32__36__significand = ((IData)(vlSelf->__PVT__divide__DOT__zero)
                                              ? 0U : 
                                             ((0x7fffffeU 
                                               & vlSelf->__PVT__divide__DOT__quotient) 
                                              | (1U 
                                                 & (vlSelf->__PVT__divide__DOT__quotient 
                                                    | (0U 
                                                       != vlSelf->__PVT__divide__DOT__remainder)))));
    __Vfunc_round_pack32__36__exponent = vlSelf->__PVT__divide__DOT__exponent;
    __Vfunc_round_pack32__36__negative = vlSelf->__PVT__divide__DOT__negative;
    __Vfunc_round_pack32__36__adjusted = __Vfunc_round_pack32__36__exponent;
    __Vfunc_round_pack32__36__shifted = __Vfunc_round_pack32__36__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__36__exponent))) {
        vlSelf->__Vfunc_shift_jam27__37__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__36__exponent)));
        vlSelf->__Vfunc_shift_jam27__37__value = __Vfunc_round_pack32__36__significand;
        __Vfunc_round_pack32__36__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__37__distance))) {
            vlSelf->__Vfunc_shift_jam27__37__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__37__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__37__distance))) {
            vlSelf->__Vfunc_shift_jam27__37__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__37__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__37__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__37__value, (IData)(vlSelf->__Vfunc_shift_jam27__37__distance)));
            vlSelf->__Vfunc_shift_jam27__37__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__37__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__37__distance)))));
            vlSelf->__Vfunc_shift_jam27__37__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__37__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__37__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__37__discarded))));
        }
        __Vfunc_round_pack32__36__shifted = vlSelf->__Vfunc_shift_jam27__37__Vfuncout;
    }
    __Vfunc_round_pack32__36__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__36__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__36__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__36__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__36__rounded)) {
        __Vfunc_round_pack32__36__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__36__rounded, 1U));
        __Vfunc_round_pack32__36__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__36__adjusted)));
    }
    __Vfunc_round_pack32__36__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__36__rounded)) {
        __Vfunc_round_pack32__36__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__36__adjusted)));
    }
    __Vfunc_round_pack32__36__Vfuncout = (((0U == __Vfunc_round_pack32__36__significand) 
                                           | (0U == __Vfunc_round_pack32__36__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__36__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__36__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__36__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__36__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__36__rounded)))))));
    vlSelf->__PVT__divide__DOT__packed_result = __Vfunc_round_pack32__36__Vfuncout;
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
                        vlSelf->__Vfunc_leading_zero32__29__value 
                            = vlSelf->__PVT__divide__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__29__part 
                            = vlSelf->__Vfunc_leading_zero32__29__value;
                        vlSelf->__Vfunc_leading_zero32__29__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__29__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__29__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__29__count)));
                            vlSelf->__Vfunc_leading_zero32__29__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__29__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__29__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__29__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__29__count)));
                            vlSelf->__Vfunc_leading_zero32__29__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__29__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__29__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__29__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__29__count)));
                            vlSelf->__Vfunc_leading_zero32__29__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__29__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__29__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__29__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__29__count)));
                            vlSelf->__Vfunc_leading_zero32__29__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__29__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__29__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__29__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__29__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__29__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__29__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__29__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__29__Vfuncout)) 
                                                 - (IData)(8U))));
    vlSelf->__PVT__divide__DOT__shift_b = ((0U == vlSelf->__PVT__divide__DOT__raw_b)
                                            ? 0U : 
                                           (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__35__value 
                            = vlSelf->__PVT__divide__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__35__part 
                            = vlSelf->__Vfunc_leading_zero32__35__value;
                        vlSelf->__Vfunc_leading_zero32__35__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__35__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__35__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__35__count)));
                            vlSelf->__Vfunc_leading_zero32__35__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__35__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__35__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__35__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__35__count)));
                            vlSelf->__Vfunc_leading_zero32__35__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__35__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__35__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__35__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__35__count)));
                            vlSelf->__Vfunc_leading_zero32__35__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__35__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__35__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__35__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__35__count)));
                            vlSelf->__Vfunc_leading_zero32__35__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__35__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__35__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__35__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__35__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__35__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__35__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__35__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__35__Vfuncout)) 
                                             - (IData)(8U))));
    vlSelf->__PVT__multiply__DOT__shift_a = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                              ? 0U : 
                                             (0x3fU 
                                              & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__28__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__28__part 
                            = vlSelf->__Vfunc_leading_zero32__28__value;
                        vlSelf->__Vfunc_leading_zero32__28__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__28__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__28__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__28__count)));
                            vlSelf->__Vfunc_leading_zero32__28__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__28__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__28__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__28__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__28__count)));
                            vlSelf->__Vfunc_leading_zero32__28__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__28__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__28__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__28__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__28__count)));
                            vlSelf->__Vfunc_leading_zero32__28__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__28__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__28__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__28__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__28__count)));
                            vlSelf->__Vfunc_leading_zero32__28__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__28__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__28__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__28__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__28__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__28__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__28__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__28__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__28__Vfuncout)) 
                                                 - (IData)(8U))));
    vlSelf->__PVT__square_root__DOT__shift = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                               ? 0U
                                               : (0x3fU 
                                                  & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__40__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__40__part 
                            = vlSelf->__Vfunc_leading_zero32__40__value;
                        vlSelf->__Vfunc_leading_zero32__40__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__40__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__40__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__40__count)));
                            vlSelf->__Vfunc_leading_zero32__40__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__40__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__40__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__40__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__40__count)));
                            vlSelf->__Vfunc_leading_zero32__40__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__40__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__40__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__40__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__40__count)));
                            vlSelf->__Vfunc_leading_zero32__40__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__40__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__40__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__40__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__40__count)));
                            vlSelf->__Vfunc_leading_zero32__40__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__40__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__40__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__40__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__40__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__40__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__40__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__40__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__40__Vfuncout)) 
                                                     - (IData)(8U))));
    vlSelf->__PVT__divide__DOT__shift_a = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                            ? 0U : 
                                           (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__34__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__34__part 
                            = vlSelf->__Vfunc_leading_zero32__34__value;
                        vlSelf->__Vfunc_leading_zero32__34__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__34__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__34__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__34__count)));
                            vlSelf->__Vfunc_leading_zero32__34__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__34__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__34__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__34__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__34__count)));
                            vlSelf->__Vfunc_leading_zero32__34__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__34__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__34__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__34__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__34__count)));
                            vlSelf->__Vfunc_leading_zero32__34__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__34__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__34__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__34__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__34__count)));
                            vlSelf->__Vfunc_leading_zero32__34__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__34__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__34__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__34__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__34__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__34__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__34__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__34__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__34__Vfuncout)) 
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

VL_INLINE_OPT void Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0(Vtop_tb_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0\n"); );
    // Body
    vlSelf->square_root__DOT____VdfgTmp_h0890133b__0 
        = ((~ (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush)) 
           & (IData)(vlSymsp->TOP.top_tb__DOT__rst_n));
    vlSelf->in_ready = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                        & (0U == (IData)(vlSelf->__PVT__state)));
    vlSelf->out_valid = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                         & (3U == (IData)(vlSelf->__PVT__state)));
    vlSelf->__PVT__divide__DOT__ready = ((~ (IData)(vlSelf->__PVT__divide__DOT__active)) 
                                         & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
    vlSelf->__PVT__square_root__DOT__ready = ((~ (IData)(vlSelf->__PVT__square_root__DOT__active)) 
                                              & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
}

VL_INLINE_OPT void Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0(Vtop_tb_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0\n"); );
    // Init
    CData/*0:0*/ __PVT__add__DOT__a_larger;
    __PVT__add__DOT__a_larger = 0;
    IData/*30:0*/ __PVT__square_root__DOT__shifted_remainder;
    __PVT__square_root__DOT__shifted_remainder = 0;
    QData/*32:0*/ __Vfunc_round_pack32__45__Vfuncout;
    __Vfunc_round_pack32__45__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__45__negative;
    __Vfunc_round_pack32__45__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__45__exponent;
    __Vfunc_round_pack32__45__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__45__significand;
    __Vfunc_round_pack32__45__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__45__shifted;
    __Vfunc_round_pack32__45__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__45__rounded;
    __Vfunc_round_pack32__45__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__45__adjusted;
    __Vfunc_round_pack32__45__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__45__biased;
    __Vfunc_round_pack32__45__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__47__Vfuncout;
    __Vfunc_fp32_invalid__47__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__47__value;
    __Vfunc_fp32_invalid__47__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__48__Vfuncout;
    __Vfunc_fp32_invalid__48__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__48__value;
    __Vfunc_fp32_invalid__48__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__49__Vfuncout;
    __Vfunc_shift_jam27__49__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__49__value;
    __Vfunc_shift_jam27__49__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__49__distance;
    __Vfunc_shift_jam27__49__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__49__shifted;
    __Vfunc_shift_jam27__49__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__49__discarded;
    __Vfunc_shift_jam27__49__discarded = 0;
    QData/*32:0*/ __Vfunc_round_pack32__52__Vfuncout;
    __Vfunc_round_pack32__52__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__52__negative;
    __Vfunc_round_pack32__52__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__52__exponent;
    __Vfunc_round_pack32__52__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__52__significand;
    __Vfunc_round_pack32__52__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__52__shifted;
    __Vfunc_round_pack32__52__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__52__rounded;
    __Vfunc_round_pack32__52__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__52__adjusted;
    __Vfunc_round_pack32__52__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__52__biased;
    __Vfunc_round_pack32__52__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__54__Vfuncout;
    __Vfunc_fp32_invalid__54__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__54__value;
    __Vfunc_fp32_invalid__54__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__55__Vfuncout;
    __Vfunc_fp32_invalid__55__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__55__value;
    __Vfunc_fp32_invalid__55__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__58__Vfuncout;
    __Vfunc_round_pack32__58__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__58__negative;
    __Vfunc_round_pack32__58__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__58__exponent;
    __Vfunc_round_pack32__58__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__58__significand;
    __Vfunc_round_pack32__58__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__58__shifted;
    __Vfunc_round_pack32__58__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__58__rounded;
    __Vfunc_round_pack32__58__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__58__adjusted;
    __Vfunc_round_pack32__58__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__58__biased;
    __Vfunc_round_pack32__58__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__60__Vfuncout;
    __Vfunc_fp32_invalid__60__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__60__value;
    __Vfunc_fp32_invalid__60__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__61__Vfuncout;
    __Vfunc_fp32_invalid__61__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__61__value;
    __Vfunc_fp32_invalid__61__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__63__Vfuncout;
    __Vfunc_round_pack32__63__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__63__negative;
    __Vfunc_round_pack32__63__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__63__exponent;
    __Vfunc_round_pack32__63__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__63__significand;
    __Vfunc_round_pack32__63__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__63__shifted;
    __Vfunc_round_pack32__63__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__63__rounded;
    __Vfunc_round_pack32__63__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__63__adjusted;
    __Vfunc_round_pack32__63__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__63__biased;
    __Vfunc_round_pack32__63__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__65__Vfuncout;
    __Vfunc_fp32_invalid__65__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__65__value;
    __Vfunc_fp32_invalid__65__value = 0;
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
            __Vdly__state = 0U;
            vlSelf->__PVT__data = 0U;
            vlSelf->__PVT__result_failed = 0U;
        } else if ((0U == (IData)(vlSelf->__PVT__state))) {
            if ((((~ (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__waiting)) 
                  & (0xbU == (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) 
                 & (IData)(vlSelf->in_ready))) {
                __Vdly__a = ((IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__activated) 
                             << 0x10U);
                __Vdly__b = ((IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__up) 
                             << 0x10U);
                __Vdly__operation = 2U;
                __Vdly__failed = 0U;
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
            if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__waiting) {
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
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
                                __Vfunc_fp32_invalid__47__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__47__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__47__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__47__Vfuncout))) 
                                           | ([&]() {
                            __Vfunc_fp32_invalid__48__value 
                                = vlSelf->__PVT__add_b;
                            __Vfunc_fp32_invalid__48__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__48__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__48__Vfuncout))));
            __Vfunc_shift_jam27__49__distance = vlSelf->__PVT__add__DOT__distance1;
            __Vfunc_shift_jam27__49__value = vlSelf->__PVT__add__DOT__small1;
            vlSelf->__PVT__add__DOT__large2 = vlSelf->__PVT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__49__distance))) {
                __Vfunc_shift_jam27__49__Vfuncout = __Vfunc_shift_jam27__49__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__49__distance))) {
                __Vfunc_shift_jam27__49__Vfuncout = 
                    (0U != __Vfunc_shift_jam27__49__value);
            } else {
                __Vfunc_shift_jam27__49__shifted = 
                    (0x7ffffffU & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__49__value, (IData)(__Vfunc_shift_jam27__49__distance)));
                __Vfunc_shift_jam27__49__discarded 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__49__value, 
                                                  (0xfffU 
                                                   & ((IData)(0x1bU) 
                                                      - (IData)(__Vfunc_shift_jam27__49__distance)))));
                __Vfunc_shift_jam27__49__Vfuncout = 
                    ((0x7fffffeU & __Vfunc_shift_jam27__49__shifted) 
                     | (1U & (__Vfunc_shift_jam27__49__shifted 
                              | (0U != __Vfunc_shift_jam27__49__discarded))));
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
            vlSelf->__PVT__add__DOT__small2 = __Vfunc_shift_jam27__49__Vfuncout;
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
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
                                __Vfunc_fp32_invalid__54__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__54__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__54__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__54__Vfuncout))) 
                                                | ([&]() {
                            __Vfunc_fp32_invalid__55__value 
                                = vlSelf->__PVT__b;
                            __Vfunc_fp32_invalid__55__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__55__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__55__Vfuncout))));
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
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
                                __Vfunc_fp32_invalid__65__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__65__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__65__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__65__Vfuncout))) 
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
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
                                    __Vfunc_fp32_invalid__60__value 
                                        = vlSelf->__PVT__a;
                                    __Vfunc_fp32_invalid__60__Vfuncout 
                                        = (0xffU == 
                                           (0xffU & 
                                            (__Vfunc_fp32_invalid__60__value 
                                             >> 0x17U)));
                                }(), (IData)(__Vfunc_fp32_invalid__60__Vfuncout))) 
                                                | ([&]() {
                                __Vfunc_fp32_invalid__61__value 
                                    = vlSelf->__PVT__b;
                                __Vfunc_fp32_invalid__61__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__61__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__61__Vfuncout))) 
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
                        vlSelf->__Vfunc_leading_zero32__44__value 
                            = vlSelf->__PVT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__44__part 
                            = vlSelf->__Vfunc_leading_zero32__44__value;
                        vlSelf->__Vfunc_leading_zero32__44__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__44__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__44__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__44__count)));
                            vlSelf->__Vfunc_leading_zero32__44__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__44__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__44__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__44__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__44__count)));
                            vlSelf->__Vfunc_leading_zero32__44__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__44__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__44__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__44__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__44__count)));
                            vlSelf->__Vfunc_leading_zero32__44__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__44__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__44__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__44__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__44__count)));
                            vlSelf->__Vfunc_leading_zero32__44__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__44__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__44__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__44__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__44__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__44__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__44__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__44__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__44__Vfuncout)) 
                                             - (IData)(5U))));
    __Vfunc_round_pack32__45__significand = vlSelf->__PVT__add__DOT__significand4;
    __Vfunc_round_pack32__45__exponent = vlSelf->__PVT__add__DOT__exponent4;
    __Vfunc_round_pack32__45__negative = vlSelf->__PVT__add__DOT__negative4;
    __Vfunc_round_pack32__45__adjusted = __Vfunc_round_pack32__45__exponent;
    __Vfunc_round_pack32__45__shifted = __Vfunc_round_pack32__45__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__45__exponent))) {
        vlSelf->__Vfunc_shift_jam27__46__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__45__exponent)));
        vlSelf->__Vfunc_shift_jam27__46__value = __Vfunc_round_pack32__45__significand;
        __Vfunc_round_pack32__45__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__46__distance))) {
            vlSelf->__Vfunc_shift_jam27__46__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__46__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__46__distance))) {
            vlSelf->__Vfunc_shift_jam27__46__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__46__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__46__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__46__value, (IData)(vlSelf->__Vfunc_shift_jam27__46__distance)));
            vlSelf->__Vfunc_shift_jam27__46__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__46__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__46__distance)))));
            vlSelf->__Vfunc_shift_jam27__46__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__46__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__46__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__46__discarded))));
        }
        __Vfunc_round_pack32__45__shifted = vlSelf->__Vfunc_shift_jam27__46__Vfuncout;
    }
    __Vfunc_round_pack32__45__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__45__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__45__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__45__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__45__rounded)) {
        __Vfunc_round_pack32__45__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__45__rounded, 1U));
        __Vfunc_round_pack32__45__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__45__adjusted)));
    }
    __Vfunc_round_pack32__45__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__45__rounded)) {
        __Vfunc_round_pack32__45__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__45__adjusted)));
    }
    __Vfunc_round_pack32__45__Vfuncout = (((0U == __Vfunc_round_pack32__45__significand) 
                                           | (0U == __Vfunc_round_pack32__45__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__45__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__45__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__45__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__45__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__45__rounded)))))));
    vlSelf->__PVT__add__DOT__packed5 = __Vfunc_round_pack32__45__Vfuncout;
    __Vfunc_round_pack32__52__significand = vlSelf->__PVT__multiply__DOT__significand3;
    __Vfunc_round_pack32__52__exponent = vlSelf->__PVT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__52__negative = (1U & ((IData)(vlSelf->__PVT__multiply__DOT__negative) 
                                                >> 2U));
    __Vfunc_round_pack32__52__adjusted = __Vfunc_round_pack32__52__exponent;
    __Vfunc_round_pack32__52__shifted = __Vfunc_round_pack32__52__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__52__exponent))) {
        vlSelf->__Vfunc_shift_jam27__53__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__52__exponent)));
        vlSelf->__Vfunc_shift_jam27__53__value = __Vfunc_round_pack32__52__significand;
        __Vfunc_round_pack32__52__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__53__distance))) {
            vlSelf->__Vfunc_shift_jam27__53__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__53__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__53__distance))) {
            vlSelf->__Vfunc_shift_jam27__53__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__53__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__53__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__53__value, (IData)(vlSelf->__Vfunc_shift_jam27__53__distance)));
            vlSelf->__Vfunc_shift_jam27__53__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__53__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__53__distance)))));
            vlSelf->__Vfunc_shift_jam27__53__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__53__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__53__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__53__discarded))));
        }
        __Vfunc_round_pack32__52__shifted = vlSelf->__Vfunc_shift_jam27__53__Vfuncout;
    }
    __Vfunc_round_pack32__52__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__52__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__52__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__52__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__52__rounded)) {
        __Vfunc_round_pack32__52__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__52__rounded, 1U));
        __Vfunc_round_pack32__52__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__52__adjusted)));
    }
    __Vfunc_round_pack32__52__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__52__rounded)) {
        __Vfunc_round_pack32__52__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__52__adjusted)));
    }
    __Vfunc_round_pack32__52__Vfuncout = (((0U == __Vfunc_round_pack32__52__significand) 
                                           | (0U == __Vfunc_round_pack32__52__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__52__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__52__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__52__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__52__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__52__rounded)))))));
    vlSelf->__PVT__multiply__DOT__packed4 = __Vfunc_round_pack32__52__Vfuncout;
    __PVT__square_root__DOT__shifted_remainder = ((vlSelf->__PVT__square_root__DOT__remainder 
                                                   << 2U) 
                                                  | (3U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__square_root__DOT__pairs 
                                                                >> 0x34U))));
    __Vfunc_round_pack32__63__significand = ((0x7fffffeU 
                                              & vlSelf->__PVT__square_root__DOT__root) 
                                             | (1U 
                                                & (vlSelf->__PVT__square_root__DOT__root 
                                                   | (0U 
                                                      != vlSelf->__PVT__square_root__DOT__remainder))));
    __Vfunc_round_pack32__63__exponent = vlSelf->__PVT__square_root__DOT__exponent;
    __Vfunc_round_pack32__63__negative = vlSelf->__PVT__square_root__DOT__negative;
    __Vfunc_round_pack32__63__adjusted = __Vfunc_round_pack32__63__exponent;
    __Vfunc_round_pack32__63__shifted = __Vfunc_round_pack32__63__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__63__exponent))) {
        vlSelf->__Vfunc_shift_jam27__64__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__63__exponent)));
        vlSelf->__Vfunc_shift_jam27__64__value = __Vfunc_round_pack32__63__significand;
        __Vfunc_round_pack32__63__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__64__distance))) {
            vlSelf->__Vfunc_shift_jam27__64__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__64__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__64__distance))) {
            vlSelf->__Vfunc_shift_jam27__64__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__64__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__64__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__64__value, (IData)(vlSelf->__Vfunc_shift_jam27__64__distance)));
            vlSelf->__Vfunc_shift_jam27__64__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__64__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__64__distance)))));
            vlSelf->__Vfunc_shift_jam27__64__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__64__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__64__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__64__discarded))));
        }
        __Vfunc_round_pack32__63__shifted = vlSelf->__Vfunc_shift_jam27__64__Vfuncout;
    }
    __Vfunc_round_pack32__63__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__63__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__63__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__63__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__63__rounded)) {
        __Vfunc_round_pack32__63__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__63__rounded, 1U));
        __Vfunc_round_pack32__63__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__63__adjusted)));
    }
    __Vfunc_round_pack32__63__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__63__rounded)) {
        __Vfunc_round_pack32__63__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__63__adjusted)));
    }
    __Vfunc_round_pack32__63__Vfuncout = (((0U == __Vfunc_round_pack32__63__significand) 
                                           | (0U == __Vfunc_round_pack32__63__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__63__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__63__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__63__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__63__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__63__rounded)))))));
    vlSelf->__PVT__square_root__DOT__packed_result 
        = __Vfunc_round_pack32__63__Vfuncout;
    vlSelf->__PVT__divide__DOT__take_bit = ((vlSelf->__PVT__divide__DOT__remainder 
                                             << 1U) 
                                            >= vlSelf->__PVT__divide__DOT__divisor);
    __Vfunc_round_pack32__58__significand = ((IData)(vlSelf->__PVT__divide__DOT__zero)
                                              ? 0U : 
                                             ((0x7fffffeU 
                                               & vlSelf->__PVT__divide__DOT__quotient) 
                                              | (1U 
                                                 & (vlSelf->__PVT__divide__DOT__quotient 
                                                    | (0U 
                                                       != vlSelf->__PVT__divide__DOT__remainder)))));
    __Vfunc_round_pack32__58__exponent = vlSelf->__PVT__divide__DOT__exponent;
    __Vfunc_round_pack32__58__negative = vlSelf->__PVT__divide__DOT__negative;
    __Vfunc_round_pack32__58__adjusted = __Vfunc_round_pack32__58__exponent;
    __Vfunc_round_pack32__58__shifted = __Vfunc_round_pack32__58__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__58__exponent))) {
        vlSelf->__Vfunc_shift_jam27__59__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__58__exponent)));
        vlSelf->__Vfunc_shift_jam27__59__value = __Vfunc_round_pack32__58__significand;
        __Vfunc_round_pack32__58__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__59__distance))) {
            vlSelf->__Vfunc_shift_jam27__59__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__59__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__59__distance))) {
            vlSelf->__Vfunc_shift_jam27__59__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__59__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__59__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__59__value, (IData)(vlSelf->__Vfunc_shift_jam27__59__distance)));
            vlSelf->__Vfunc_shift_jam27__59__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__59__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__59__distance)))));
            vlSelf->__Vfunc_shift_jam27__59__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__59__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__59__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__59__discarded))));
        }
        __Vfunc_round_pack32__58__shifted = vlSelf->__Vfunc_shift_jam27__59__Vfuncout;
    }
    __Vfunc_round_pack32__58__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__58__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__58__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__58__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__58__rounded)) {
        __Vfunc_round_pack32__58__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__58__rounded, 1U));
        __Vfunc_round_pack32__58__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__58__adjusted)));
    }
    __Vfunc_round_pack32__58__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__58__rounded)) {
        __Vfunc_round_pack32__58__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__58__adjusted)));
    }
    __Vfunc_round_pack32__58__Vfuncout = (((0U == __Vfunc_round_pack32__58__significand) 
                                           | (0U == __Vfunc_round_pack32__58__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__58__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__58__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__58__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__58__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__58__rounded)))))));
    vlSelf->__PVT__divide__DOT__packed_result = __Vfunc_round_pack32__58__Vfuncout;
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
                        vlSelf->__Vfunc_leading_zero32__51__value 
                            = vlSelf->__PVT__divide__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__51__part 
                            = vlSelf->__Vfunc_leading_zero32__51__value;
                        vlSelf->__Vfunc_leading_zero32__51__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__51__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__51__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__51__count)));
                            vlSelf->__Vfunc_leading_zero32__51__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__51__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__51__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__51__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__51__count)));
                            vlSelf->__Vfunc_leading_zero32__51__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__51__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__51__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__51__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__51__count)));
                            vlSelf->__Vfunc_leading_zero32__51__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__51__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__51__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__51__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__51__count)));
                            vlSelf->__Vfunc_leading_zero32__51__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__51__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__51__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__51__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__51__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__51__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__51__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__51__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__51__Vfuncout)) 
                                                 - (IData)(8U))));
    vlSelf->__PVT__divide__DOT__shift_b = ((0U == vlSelf->__PVT__divide__DOT__raw_b)
                                            ? 0U : 
                                           (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__57__value 
                            = vlSelf->__PVT__divide__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__57__part 
                            = vlSelf->__Vfunc_leading_zero32__57__value;
                        vlSelf->__Vfunc_leading_zero32__57__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__57__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__57__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__57__count)));
                            vlSelf->__Vfunc_leading_zero32__57__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__57__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__57__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__57__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__57__count)));
                            vlSelf->__Vfunc_leading_zero32__57__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__57__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__57__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__57__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__57__count)));
                            vlSelf->__Vfunc_leading_zero32__57__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__57__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__57__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__57__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__57__count)));
                            vlSelf->__Vfunc_leading_zero32__57__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__57__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__57__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__57__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__57__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__57__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__57__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__57__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__57__Vfuncout)) 
                                             - (IData)(8U))));
    vlSelf->__PVT__multiply__DOT__shift_a = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                              ? 0U : 
                                             (0x3fU 
                                              & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__50__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__50__part 
                            = vlSelf->__Vfunc_leading_zero32__50__value;
                        vlSelf->__Vfunc_leading_zero32__50__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__50__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__50__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__50__count)));
                            vlSelf->__Vfunc_leading_zero32__50__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__50__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__50__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__50__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__50__count)));
                            vlSelf->__Vfunc_leading_zero32__50__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__50__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__50__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__50__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__50__count)));
                            vlSelf->__Vfunc_leading_zero32__50__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__50__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__50__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__50__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__50__count)));
                            vlSelf->__Vfunc_leading_zero32__50__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__50__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__50__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__50__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__50__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__50__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__50__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__50__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__50__Vfuncout)) 
                                                 - (IData)(8U))));
    vlSelf->__PVT__square_root__DOT__shift = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                               ? 0U
                                               : (0x3fU 
                                                  & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__62__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__62__part 
                            = vlSelf->__Vfunc_leading_zero32__62__value;
                        vlSelf->__Vfunc_leading_zero32__62__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__62__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__62__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__62__count)));
                            vlSelf->__Vfunc_leading_zero32__62__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__62__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__62__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__62__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__62__count)));
                            vlSelf->__Vfunc_leading_zero32__62__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__62__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__62__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__62__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__62__count)));
                            vlSelf->__Vfunc_leading_zero32__62__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__62__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__62__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__62__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__62__count)));
                            vlSelf->__Vfunc_leading_zero32__62__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__62__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__62__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__62__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__62__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__62__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__62__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__62__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__62__Vfuncout)) 
                                                     - (IData)(8U))));
    vlSelf->__PVT__divide__DOT__shift_a = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                            ? 0U : 
                                           (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__56__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__56__part 
                            = vlSelf->__Vfunc_leading_zero32__56__value;
                        vlSelf->__Vfunc_leading_zero32__56__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__56__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__56__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__56__count)));
                            vlSelf->__Vfunc_leading_zero32__56__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__56__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__56__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__56__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__56__count)));
                            vlSelf->__Vfunc_leading_zero32__56__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__56__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__56__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__56__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__56__count)));
                            vlSelf->__Vfunc_leading_zero32__56__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__56__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__56__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__56__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__56__count)));
                            vlSelf->__Vfunc_leading_zero32__56__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__56__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__56__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__56__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__56__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__56__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__56__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__56__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__56__Vfuncout)) 
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

VL_INLINE_OPT void Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic__0(Vtop_tb_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic__0\n"); );
    // Init
    CData/*0:0*/ __PVT__add__DOT__a_larger;
    __PVT__add__DOT__a_larger = 0;
    IData/*30:0*/ __PVT__square_root__DOT__shifted_remainder;
    __PVT__square_root__DOT__shifted_remainder = 0;
    QData/*32:0*/ __Vfunc_round_pack32__67__Vfuncout;
    __Vfunc_round_pack32__67__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__67__negative;
    __Vfunc_round_pack32__67__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__67__exponent;
    __Vfunc_round_pack32__67__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__67__significand;
    __Vfunc_round_pack32__67__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__67__shifted;
    __Vfunc_round_pack32__67__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__67__rounded;
    __Vfunc_round_pack32__67__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__67__adjusted;
    __Vfunc_round_pack32__67__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__67__biased;
    __Vfunc_round_pack32__67__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__69__Vfuncout;
    __Vfunc_fp32_invalid__69__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__69__value;
    __Vfunc_fp32_invalid__69__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__70__Vfuncout;
    __Vfunc_fp32_invalid__70__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__70__value;
    __Vfunc_fp32_invalid__70__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__71__Vfuncout;
    __Vfunc_shift_jam27__71__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__71__value;
    __Vfunc_shift_jam27__71__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__71__distance;
    __Vfunc_shift_jam27__71__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__71__shifted;
    __Vfunc_shift_jam27__71__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__71__discarded;
    __Vfunc_shift_jam27__71__discarded = 0;
    QData/*32:0*/ __Vfunc_round_pack32__74__Vfuncout;
    __Vfunc_round_pack32__74__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__74__negative;
    __Vfunc_round_pack32__74__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__74__exponent;
    __Vfunc_round_pack32__74__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__74__significand;
    __Vfunc_round_pack32__74__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__74__shifted;
    __Vfunc_round_pack32__74__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__74__rounded;
    __Vfunc_round_pack32__74__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__74__adjusted;
    __Vfunc_round_pack32__74__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__74__biased;
    __Vfunc_round_pack32__74__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__76__Vfuncout;
    __Vfunc_fp32_invalid__76__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__76__value;
    __Vfunc_fp32_invalid__76__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__77__Vfuncout;
    __Vfunc_fp32_invalid__77__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__77__value;
    __Vfunc_fp32_invalid__77__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__80__Vfuncout;
    __Vfunc_round_pack32__80__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__80__negative;
    __Vfunc_round_pack32__80__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__80__exponent;
    __Vfunc_round_pack32__80__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__80__significand;
    __Vfunc_round_pack32__80__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__80__shifted;
    __Vfunc_round_pack32__80__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__80__rounded;
    __Vfunc_round_pack32__80__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__80__adjusted;
    __Vfunc_round_pack32__80__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__80__biased;
    __Vfunc_round_pack32__80__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__82__Vfuncout;
    __Vfunc_fp32_invalid__82__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__82__value;
    __Vfunc_fp32_invalid__82__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__83__Vfuncout;
    __Vfunc_fp32_invalid__83__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__83__value;
    __Vfunc_fp32_invalid__83__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__85__Vfuncout;
    __Vfunc_round_pack32__85__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__85__negative;
    __Vfunc_round_pack32__85__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__85__exponent;
    __Vfunc_round_pack32__85__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__85__significand;
    __Vfunc_round_pack32__85__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__85__shifted;
    __Vfunc_round_pack32__85__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__85__rounded;
    __Vfunc_round_pack32__85__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__85__adjusted;
    __Vfunc_round_pack32__85__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__85__biased;
    __Vfunc_round_pack32__85__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__87__Vfuncout;
    __Vfunc_fp32_invalid__87__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__87__value;
    __Vfunc_fp32_invalid__87__value = 0;
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
    vlSelf->__Vdly__result_failed = vlSelf->__PVT__result_failed;
    vlSelf->__Vdly__data = vlSelf->__PVT__data;
    __Vdly__state = vlSelf->__PVT__state;
    __Vdly__operation = vlSelf->__PVT__operation;
    __Vdly__b = vlSelf->__PVT__b;
    __Vdly__a = vlSelf->__PVT__a;
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
            __Vdly__state = 0U;
            vlSelf->__Vdly__data = 0U;
            vlSelf->__Vdly__result_failed = 0U;
        } else if ((0U == (IData)(vlSelf->__PVT__state))) {
            if ((((~ (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting)) 
                  & (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic_state)) 
                 & (IData)(vlSelf->in_ready))) {
                if ((3U == (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                    __Vdly__a = 0x3f800000U;
                    __Vdly__operation = 0U;
                } else if ((4U == (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                    __Vdly__a = vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x;
                    __Vdly__operation = 2U;
                } else {
                    __Vdly__a = vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__numerator;
                    __Vdly__operation = 3U;
                }
                __Vdly__b = ((5U == (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))
                              ? vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__denominator
                              : vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential);
                __Vdly__failed = (4U < ((3U == (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))
                                         ? 0U : ((4U 
                                                  == (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))
                                                  ? 2U
                                                  : 3U)));
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
                        vlSelf->__Vdly__data = vlSelf->__PVT__add__DOT__value5;
                        vlSelf->__Vdly__result_failed 
                            = vlSelf->__PVT__add__DOT__error5;
                    } else {
                        vlSelf->__Vdly__data = 0U;
                        vlSelf->__Vdly__result_failed = 0U;
                    }
                } else if ((2U == (IData)(vlSelf->__PVT__operation))) {
                    if (vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) {
                        vlSelf->__Vdly__data = vlSelf->__PVT__multiply__DOT__value4;
                        vlSelf->__Vdly__result_failed 
                            = vlSelf->__PVT__multiply__DOT__error4;
                    } else {
                        vlSelf->__Vdly__data = 0U;
                        vlSelf->__Vdly__result_failed = 0U;
                    }
                } else if ((3U == (IData)(vlSelf->__PVT__operation))) {
                    if (vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) {
                        vlSelf->__Vdly__data = vlSelf->__PVT__divide__DOT__value;
                        vlSelf->__Vdly__result_failed 
                            = vlSelf->__PVT__divide__DOT__result_failed;
                    } else {
                        vlSelf->__Vdly__data = 0U;
                        vlSelf->__Vdly__result_failed = 0U;
                    }
                } else if ((4U == (IData)(vlSelf->__PVT__operation))) {
                    if (vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) {
                        vlSelf->__Vdly__data = vlSelf->__PVT__square_root__DOT__value;
                        vlSelf->__Vdly__result_failed 
                            = vlSelf->__PVT__square_root__DOT__result_failed;
                    } else {
                        vlSelf->__Vdly__data = 0U;
                        vlSelf->__Vdly__result_failed = 0U;
                    }
                } else {
                    vlSelf->__Vdly__data = 0U;
                    vlSelf->__Vdly__result_failed = 1U;
                }
                __Vdly__state = 3U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__state))) {
            if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting) {
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
        vlSelf->__Vdly__data = 0U;
        __Vdly__failed = 0U;
        vlSelf->__Vdly__result_failed = 0U;
    }
    vlSelf->__PVT__elapsed = __Vdly__elapsed;
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
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
                                __Vfunc_fp32_invalid__69__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__69__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__69__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__69__Vfuncout))) 
                                           | ([&]() {
                            __Vfunc_fp32_invalid__70__value 
                                = vlSelf->__PVT__add_b;
                            __Vfunc_fp32_invalid__70__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__70__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__70__Vfuncout))));
            __Vfunc_shift_jam27__71__distance = vlSelf->__PVT__add__DOT__distance1;
            __Vfunc_shift_jam27__71__value = vlSelf->__PVT__add__DOT__small1;
            vlSelf->__PVT__add__DOT__large2 = vlSelf->__PVT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__71__distance))) {
                __Vfunc_shift_jam27__71__Vfuncout = __Vfunc_shift_jam27__71__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__71__distance))) {
                __Vfunc_shift_jam27__71__Vfuncout = 
                    (0U != __Vfunc_shift_jam27__71__value);
            } else {
                __Vfunc_shift_jam27__71__shifted = 
                    (0x7ffffffU & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__71__value, (IData)(__Vfunc_shift_jam27__71__distance)));
                __Vfunc_shift_jam27__71__discarded 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__71__value, 
                                                  (0xfffU 
                                                   & ((IData)(0x1bU) 
                                                      - (IData)(__Vfunc_shift_jam27__71__distance)))));
                __Vfunc_shift_jam27__71__Vfuncout = 
                    ((0x7fffffeU & __Vfunc_shift_jam27__71__shifted) 
                     | (1U & (__Vfunc_shift_jam27__71__shifted 
                              | (0U != __Vfunc_shift_jam27__71__discarded))));
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
            vlSelf->__PVT__add__DOT__small2 = __Vfunc_shift_jam27__71__Vfuncout;
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
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
                                __Vfunc_fp32_invalid__76__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__76__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__76__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__76__Vfuncout))) 
                                                | ([&]() {
                            __Vfunc_fp32_invalid__77__value 
                                = vlSelf->__PVT__b;
                            __Vfunc_fp32_invalid__77__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__77__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__77__Vfuncout))));
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
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
                                __Vfunc_fp32_invalid__87__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__87__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__87__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__87__Vfuncout))) 
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
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
                                    __Vfunc_fp32_invalid__82__value 
                                        = vlSelf->__PVT__a;
                                    __Vfunc_fp32_invalid__82__Vfuncout 
                                        = (0xffU == 
                                           (0xffU & 
                                            (__Vfunc_fp32_invalid__82__value 
                                             >> 0x17U)));
                                }(), (IData)(__Vfunc_fp32_invalid__82__Vfuncout))) 
                                                | ([&]() {
                                __Vfunc_fp32_invalid__83__value 
                                    = vlSelf->__PVT__b;
                                __Vfunc_fp32_invalid__83__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__83__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__83__Vfuncout))) 
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
                        vlSelf->__Vfunc_leading_zero32__66__value 
                            = vlSelf->__PVT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__66__part 
                            = vlSelf->__Vfunc_leading_zero32__66__value;
                        vlSelf->__Vfunc_leading_zero32__66__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__66__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__66__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__66__count)));
                            vlSelf->__Vfunc_leading_zero32__66__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__66__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__66__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__66__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__66__count)));
                            vlSelf->__Vfunc_leading_zero32__66__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__66__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__66__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__66__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__66__count)));
                            vlSelf->__Vfunc_leading_zero32__66__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__66__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__66__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__66__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__66__count)));
                            vlSelf->__Vfunc_leading_zero32__66__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__66__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__66__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__66__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__66__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__66__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__66__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__66__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__66__Vfuncout)) 
                                             - (IData)(5U))));
    __Vfunc_round_pack32__67__significand = vlSelf->__PVT__add__DOT__significand4;
    __Vfunc_round_pack32__67__exponent = vlSelf->__PVT__add__DOT__exponent4;
    __Vfunc_round_pack32__67__negative = vlSelf->__PVT__add__DOT__negative4;
    __Vfunc_round_pack32__67__adjusted = __Vfunc_round_pack32__67__exponent;
    __Vfunc_round_pack32__67__shifted = __Vfunc_round_pack32__67__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__67__exponent))) {
        vlSelf->__Vfunc_shift_jam27__68__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__67__exponent)));
        vlSelf->__Vfunc_shift_jam27__68__value = __Vfunc_round_pack32__67__significand;
        __Vfunc_round_pack32__67__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__68__distance))) {
            vlSelf->__Vfunc_shift_jam27__68__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__68__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__68__distance))) {
            vlSelf->__Vfunc_shift_jam27__68__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__68__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__68__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__68__value, (IData)(vlSelf->__Vfunc_shift_jam27__68__distance)));
            vlSelf->__Vfunc_shift_jam27__68__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__68__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__68__distance)))));
            vlSelf->__Vfunc_shift_jam27__68__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__68__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__68__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__68__discarded))));
        }
        __Vfunc_round_pack32__67__shifted = vlSelf->__Vfunc_shift_jam27__68__Vfuncout;
    }
    __Vfunc_round_pack32__67__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__67__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__67__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__67__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__67__rounded)) {
        __Vfunc_round_pack32__67__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__67__rounded, 1U));
        __Vfunc_round_pack32__67__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__67__adjusted)));
    }
    __Vfunc_round_pack32__67__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__67__rounded)) {
        __Vfunc_round_pack32__67__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__67__adjusted)));
    }
    __Vfunc_round_pack32__67__Vfuncout = (((0U == __Vfunc_round_pack32__67__significand) 
                                           | (0U == __Vfunc_round_pack32__67__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__67__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__67__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__67__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__67__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__67__rounded)))))));
    vlSelf->__PVT__add__DOT__packed5 = __Vfunc_round_pack32__67__Vfuncout;
    __Vfunc_round_pack32__74__significand = vlSelf->__PVT__multiply__DOT__significand3;
    __Vfunc_round_pack32__74__exponent = vlSelf->__PVT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__74__negative = (1U & ((IData)(vlSelf->__PVT__multiply__DOT__negative) 
                                                >> 2U));
    __Vfunc_round_pack32__74__adjusted = __Vfunc_round_pack32__74__exponent;
    __Vfunc_round_pack32__74__shifted = __Vfunc_round_pack32__74__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__74__exponent))) {
        vlSelf->__Vfunc_shift_jam27__75__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__74__exponent)));
        vlSelf->__Vfunc_shift_jam27__75__value = __Vfunc_round_pack32__74__significand;
        __Vfunc_round_pack32__74__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__75__distance))) {
            vlSelf->__Vfunc_shift_jam27__75__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__75__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__75__distance))) {
            vlSelf->__Vfunc_shift_jam27__75__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__75__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__75__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__75__value, (IData)(vlSelf->__Vfunc_shift_jam27__75__distance)));
            vlSelf->__Vfunc_shift_jam27__75__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__75__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__75__distance)))));
            vlSelf->__Vfunc_shift_jam27__75__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__75__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__75__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__75__discarded))));
        }
        __Vfunc_round_pack32__74__shifted = vlSelf->__Vfunc_shift_jam27__75__Vfuncout;
    }
    __Vfunc_round_pack32__74__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__74__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__74__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__74__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__74__rounded)) {
        __Vfunc_round_pack32__74__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__74__rounded, 1U));
        __Vfunc_round_pack32__74__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__74__adjusted)));
    }
    __Vfunc_round_pack32__74__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__74__rounded)) {
        __Vfunc_round_pack32__74__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__74__adjusted)));
    }
    __Vfunc_round_pack32__74__Vfuncout = (((0U == __Vfunc_round_pack32__74__significand) 
                                           | (0U == __Vfunc_round_pack32__74__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__74__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__74__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__74__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__74__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__74__rounded)))))));
    vlSelf->__PVT__multiply__DOT__packed4 = __Vfunc_round_pack32__74__Vfuncout;
    __PVT__square_root__DOT__shifted_remainder = ((vlSelf->__PVT__square_root__DOT__remainder 
                                                   << 2U) 
                                                  | (3U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__square_root__DOT__pairs 
                                                                >> 0x34U))));
    __Vfunc_round_pack32__85__significand = ((0x7fffffeU 
                                              & vlSelf->__PVT__square_root__DOT__root) 
                                             | (1U 
                                                & (vlSelf->__PVT__square_root__DOT__root 
                                                   | (0U 
                                                      != vlSelf->__PVT__square_root__DOT__remainder))));
    __Vfunc_round_pack32__85__exponent = vlSelf->__PVT__square_root__DOT__exponent;
    __Vfunc_round_pack32__85__negative = vlSelf->__PVT__square_root__DOT__negative;
    __Vfunc_round_pack32__85__adjusted = __Vfunc_round_pack32__85__exponent;
    __Vfunc_round_pack32__85__shifted = __Vfunc_round_pack32__85__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__85__exponent))) {
        vlSelf->__Vfunc_shift_jam27__86__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__85__exponent)));
        vlSelf->__Vfunc_shift_jam27__86__value = __Vfunc_round_pack32__85__significand;
        __Vfunc_round_pack32__85__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__86__distance))) {
            vlSelf->__Vfunc_shift_jam27__86__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__86__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__86__distance))) {
            vlSelf->__Vfunc_shift_jam27__86__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__86__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__86__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__86__value, (IData)(vlSelf->__Vfunc_shift_jam27__86__distance)));
            vlSelf->__Vfunc_shift_jam27__86__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__86__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__86__distance)))));
            vlSelf->__Vfunc_shift_jam27__86__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__86__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__86__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__86__discarded))));
        }
        __Vfunc_round_pack32__85__shifted = vlSelf->__Vfunc_shift_jam27__86__Vfuncout;
    }
    __Vfunc_round_pack32__85__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__85__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__85__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__85__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__85__rounded)) {
        __Vfunc_round_pack32__85__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__85__rounded, 1U));
        __Vfunc_round_pack32__85__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__85__adjusted)));
    }
    __Vfunc_round_pack32__85__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__85__rounded)) {
        __Vfunc_round_pack32__85__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__85__adjusted)));
    }
    __Vfunc_round_pack32__85__Vfuncout = (((0U == __Vfunc_round_pack32__85__significand) 
                                           | (0U == __Vfunc_round_pack32__85__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__85__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__85__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__85__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__85__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__85__rounded)))))));
    vlSelf->__PVT__square_root__DOT__packed_result 
        = __Vfunc_round_pack32__85__Vfuncout;
    vlSelf->__PVT__divide__DOT__take_bit = ((vlSelf->__PVT__divide__DOT__remainder 
                                             << 1U) 
                                            >= vlSelf->__PVT__divide__DOT__divisor);
    __Vfunc_round_pack32__80__significand = ((IData)(vlSelf->__PVT__divide__DOT__zero)
                                              ? 0U : 
                                             ((0x7fffffeU 
                                               & vlSelf->__PVT__divide__DOT__quotient) 
                                              | (1U 
                                                 & (vlSelf->__PVT__divide__DOT__quotient 
                                                    | (0U 
                                                       != vlSelf->__PVT__divide__DOT__remainder)))));
    __Vfunc_round_pack32__80__exponent = vlSelf->__PVT__divide__DOT__exponent;
    __Vfunc_round_pack32__80__negative = vlSelf->__PVT__divide__DOT__negative;
    __Vfunc_round_pack32__80__adjusted = __Vfunc_round_pack32__80__exponent;
    __Vfunc_round_pack32__80__shifted = __Vfunc_round_pack32__80__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__80__exponent))) {
        vlSelf->__Vfunc_shift_jam27__81__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__80__exponent)));
        vlSelf->__Vfunc_shift_jam27__81__value = __Vfunc_round_pack32__80__significand;
        __Vfunc_round_pack32__80__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__81__distance))) {
            vlSelf->__Vfunc_shift_jam27__81__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__81__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__81__distance))) {
            vlSelf->__Vfunc_shift_jam27__81__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__81__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__81__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__81__value, (IData)(vlSelf->__Vfunc_shift_jam27__81__distance)));
            vlSelf->__Vfunc_shift_jam27__81__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__81__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__81__distance)))));
            vlSelf->__Vfunc_shift_jam27__81__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__81__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__81__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__81__discarded))));
        }
        __Vfunc_round_pack32__80__shifted = vlSelf->__Vfunc_shift_jam27__81__Vfuncout;
    }
    __Vfunc_round_pack32__80__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__80__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__80__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__80__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__80__rounded)) {
        __Vfunc_round_pack32__80__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__80__rounded, 1U));
        __Vfunc_round_pack32__80__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__80__adjusted)));
    }
    __Vfunc_round_pack32__80__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__80__rounded)) {
        __Vfunc_round_pack32__80__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__80__adjusted)));
    }
    __Vfunc_round_pack32__80__Vfuncout = (((0U == __Vfunc_round_pack32__80__significand) 
                                           | (0U == __Vfunc_round_pack32__80__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__80__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__80__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__80__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__80__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__80__rounded)))))));
    vlSelf->__PVT__divide__DOT__packed_result = __Vfunc_round_pack32__80__Vfuncout;
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
                        vlSelf->__Vfunc_leading_zero32__73__value 
                            = vlSelf->__PVT__divide__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__73__part 
                            = vlSelf->__Vfunc_leading_zero32__73__value;
                        vlSelf->__Vfunc_leading_zero32__73__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__73__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__73__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__73__count)));
                            vlSelf->__Vfunc_leading_zero32__73__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__73__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__73__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__73__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__73__count)));
                            vlSelf->__Vfunc_leading_zero32__73__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__73__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__73__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__73__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__73__count)));
                            vlSelf->__Vfunc_leading_zero32__73__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__73__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__73__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__73__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__73__count)));
                            vlSelf->__Vfunc_leading_zero32__73__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__73__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__73__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__73__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__73__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__73__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__73__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__73__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__73__Vfuncout)) 
                                                 - (IData)(8U))));
    vlSelf->__PVT__divide__DOT__shift_b = ((0U == vlSelf->__PVT__divide__DOT__raw_b)
                                            ? 0U : 
                                           (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__79__value 
                            = vlSelf->__PVT__divide__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__79__part 
                            = vlSelf->__Vfunc_leading_zero32__79__value;
                        vlSelf->__Vfunc_leading_zero32__79__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__79__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__79__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__79__count)));
                            vlSelf->__Vfunc_leading_zero32__79__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__79__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__79__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__79__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__79__count)));
                            vlSelf->__Vfunc_leading_zero32__79__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__79__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__79__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__79__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__79__count)));
                            vlSelf->__Vfunc_leading_zero32__79__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__79__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__79__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__79__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__79__count)));
                            vlSelf->__Vfunc_leading_zero32__79__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__79__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__79__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__79__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__79__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__79__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__79__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__79__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__79__Vfuncout)) 
                                             - (IData)(8U))));
    vlSelf->__PVT__multiply__DOT__shift_a = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                              ? 0U : 
                                             (0x3fU 
                                              & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__72__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__72__part 
                            = vlSelf->__Vfunc_leading_zero32__72__value;
                        vlSelf->__Vfunc_leading_zero32__72__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__72__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__72__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__72__count)));
                            vlSelf->__Vfunc_leading_zero32__72__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__72__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__72__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__72__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__72__count)));
                            vlSelf->__Vfunc_leading_zero32__72__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__72__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__72__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__72__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__72__count)));
                            vlSelf->__Vfunc_leading_zero32__72__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__72__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__72__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__72__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__72__count)));
                            vlSelf->__Vfunc_leading_zero32__72__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__72__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__72__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__72__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__72__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__72__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__72__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__72__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__72__Vfuncout)) 
                                                 - (IData)(8U))));
    vlSelf->__PVT__square_root__DOT__shift = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                               ? 0U
                                               : (0x3fU 
                                                  & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__84__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__84__part 
                            = vlSelf->__Vfunc_leading_zero32__84__value;
                        vlSelf->__Vfunc_leading_zero32__84__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__84__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__84__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__84__count)));
                            vlSelf->__Vfunc_leading_zero32__84__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__84__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__84__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__84__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__84__count)));
                            vlSelf->__Vfunc_leading_zero32__84__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__84__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__84__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__84__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__84__count)));
                            vlSelf->__Vfunc_leading_zero32__84__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__84__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__84__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__84__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__84__count)));
                            vlSelf->__Vfunc_leading_zero32__84__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__84__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__84__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__84__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__84__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__84__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__84__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__84__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__84__Vfuncout)) 
                                                     - (IData)(8U))));
    vlSelf->__PVT__divide__DOT__shift_a = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                            ? 0U : 
                                           (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__78__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__78__part 
                            = vlSelf->__Vfunc_leading_zero32__78__value;
                        vlSelf->__Vfunc_leading_zero32__78__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__78__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__78__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__78__count)));
                            vlSelf->__Vfunc_leading_zero32__78__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__78__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__78__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__78__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__78__count)));
                            vlSelf->__Vfunc_leading_zero32__78__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__78__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__78__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__78__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__78__count)));
                            vlSelf->__Vfunc_leading_zero32__78__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__78__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__78__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__78__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__78__count)));
                            vlSelf->__Vfunc_leading_zero32__78__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__78__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__78__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__78__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__78__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__78__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__78__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__78__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__78__Vfuncout)) 
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

VL_INLINE_OPT void Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic__1(Vtop_tb_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic__1\n"); );
    // Init
    CData/*0:0*/ __PVT__add__DOT__a_larger;
    __PVT__add__DOT__a_larger = 0;
    IData/*30:0*/ __PVT__square_root__DOT__shifted_remainder;
    __PVT__square_root__DOT__shifted_remainder = 0;
    QData/*32:0*/ __Vfunc_round_pack32__89__Vfuncout;
    __Vfunc_round_pack32__89__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__89__negative;
    __Vfunc_round_pack32__89__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__89__exponent;
    __Vfunc_round_pack32__89__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__89__significand;
    __Vfunc_round_pack32__89__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__89__shifted;
    __Vfunc_round_pack32__89__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__89__rounded;
    __Vfunc_round_pack32__89__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__89__adjusted;
    __Vfunc_round_pack32__89__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__89__biased;
    __Vfunc_round_pack32__89__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__91__Vfuncout;
    __Vfunc_fp32_invalid__91__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__91__value;
    __Vfunc_fp32_invalid__91__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__92__Vfuncout;
    __Vfunc_fp32_invalid__92__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__92__value;
    __Vfunc_fp32_invalid__92__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__93__Vfuncout;
    __Vfunc_shift_jam27__93__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__93__value;
    __Vfunc_shift_jam27__93__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__93__distance;
    __Vfunc_shift_jam27__93__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__93__shifted;
    __Vfunc_shift_jam27__93__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__93__discarded;
    __Vfunc_shift_jam27__93__discarded = 0;
    QData/*32:0*/ __Vfunc_round_pack32__96__Vfuncout;
    __Vfunc_round_pack32__96__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__96__negative;
    __Vfunc_round_pack32__96__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__96__exponent;
    __Vfunc_round_pack32__96__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__96__significand;
    __Vfunc_round_pack32__96__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__96__shifted;
    __Vfunc_round_pack32__96__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__96__rounded;
    __Vfunc_round_pack32__96__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__96__adjusted;
    __Vfunc_round_pack32__96__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__96__biased;
    __Vfunc_round_pack32__96__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__98__Vfuncout;
    __Vfunc_fp32_invalid__98__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__98__value;
    __Vfunc_fp32_invalid__98__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__99__Vfuncout;
    __Vfunc_fp32_invalid__99__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__99__value;
    __Vfunc_fp32_invalid__99__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__102__Vfuncout;
    __Vfunc_round_pack32__102__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__102__negative;
    __Vfunc_round_pack32__102__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__102__exponent;
    __Vfunc_round_pack32__102__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__102__significand;
    __Vfunc_round_pack32__102__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__102__shifted;
    __Vfunc_round_pack32__102__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__102__rounded;
    __Vfunc_round_pack32__102__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__102__adjusted;
    __Vfunc_round_pack32__102__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__102__biased;
    __Vfunc_round_pack32__102__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__104__Vfuncout;
    __Vfunc_fp32_invalid__104__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__104__value;
    __Vfunc_fp32_invalid__104__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__105__Vfuncout;
    __Vfunc_fp32_invalid__105__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__105__value;
    __Vfunc_fp32_invalid__105__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__107__Vfuncout;
    __Vfunc_round_pack32__107__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__107__negative;
    __Vfunc_round_pack32__107__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__107__exponent;
    __Vfunc_round_pack32__107__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__107__significand;
    __Vfunc_round_pack32__107__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__107__shifted;
    __Vfunc_round_pack32__107__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__107__rounded;
    __Vfunc_round_pack32__107__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__107__adjusted;
    __Vfunc_round_pack32__107__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__107__biased;
    __Vfunc_round_pack32__107__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__109__Vfuncout;
    __Vfunc_fp32_invalid__109__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__109__value;
    __Vfunc_fp32_invalid__109__value = 0;
    // Body
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
            vlSelf->__Vdly__state = 0U;
            vlSelf->__PVT__data = 0U;
            vlSelf->__PVT__result_failed = 0U;
        } else if ((0U == (IData)(vlSelf->__PVT__state))) {
            if (((IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__alu_valid) 
                 & (IData)(vlSelf->in_ready))) {
                vlSelf->__Vdly__a = vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__a;
                vlSelf->__Vdly__b = vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__b;
                vlSelf->__Vdly__operation = vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__op;
                vlSelf->__Vdly__failed = (4U < (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__op));
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
            if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__waiting) {
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
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
                                __Vfunc_fp32_invalid__91__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__91__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__91__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__91__Vfuncout))) 
                                                   | ([&]() {
                            __Vfunc_fp32_invalid__92__value 
                                = vlSelf->__PVT__add_b;
                            __Vfunc_fp32_invalid__92__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__92__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__92__Vfuncout))));
            __Vfunc_shift_jam27__93__distance = vlSelf->__PVT__add__DOT__distance1;
            __Vfunc_shift_jam27__93__value = vlSelf->__PVT__add__DOT__small1;
            vlSelf->__PVT__add__DOT__large2 = vlSelf->__PVT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__93__distance))) {
                __Vfunc_shift_jam27__93__Vfuncout = __Vfunc_shift_jam27__93__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__93__distance))) {
                __Vfunc_shift_jam27__93__Vfuncout = 
                    (0U != __Vfunc_shift_jam27__93__value);
            } else {
                __Vfunc_shift_jam27__93__shifted = 
                    (0x7ffffffU & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__93__value, (IData)(__Vfunc_shift_jam27__93__distance)));
                __Vfunc_shift_jam27__93__discarded 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__93__value, 
                                                  (0xfffU 
                                                   & ((IData)(0x1bU) 
                                                      - (IData)(__Vfunc_shift_jam27__93__distance)))));
                __Vfunc_shift_jam27__93__Vfuncout = 
                    ((0x7fffffeU & __Vfunc_shift_jam27__93__shifted) 
                     | (1U & (__Vfunc_shift_jam27__93__shifted 
                              | (0U != __Vfunc_shift_jam27__93__discarded))));
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
            vlSelf->__PVT__add__DOT__small2 = __Vfunc_shift_jam27__93__Vfuncout;
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
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
                                __Vfunc_fp32_invalid__98__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__98__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__98__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__98__Vfuncout))) 
                                     | ([&]() {
                            __Vfunc_fp32_invalid__99__value 
                                = vlSelf->__PVT__b;
                            __Vfunc_fp32_invalid__99__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__99__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__99__Vfuncout))));
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
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
                                __Vfunc_fp32_invalid__109__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__109__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__109__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__109__Vfuncout))) 
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
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
                                    __Vfunc_fp32_invalid__104__value 
                                        = vlSelf->__PVT__a;
                                    __Vfunc_fp32_invalid__104__Vfuncout 
                                        = (0xffU == 
                                           (0xffU & 
                                            (__Vfunc_fp32_invalid__104__value 
                                             >> 0x17U)));
                                }(), (IData)(__Vfunc_fp32_invalid__104__Vfuncout))) 
                        | ([&]() {
                                __Vfunc_fp32_invalid__105__value 
                                    = vlSelf->__PVT__b;
                                __Vfunc_fp32_invalid__105__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__105__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__105__Vfuncout))) 
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
                        vlSelf->__Vfunc_leading_zero32__88__value 
                            = vlSelf->__PVT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__88__part 
                            = vlSelf->__Vfunc_leading_zero32__88__value;
                        vlSelf->__Vfunc_leading_zero32__88__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__88__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__88__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__88__count)));
                            vlSelf->__Vfunc_leading_zero32__88__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__88__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__88__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__88__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__88__count)));
                            vlSelf->__Vfunc_leading_zero32__88__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__88__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__88__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__88__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__88__count)));
                            vlSelf->__Vfunc_leading_zero32__88__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__88__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__88__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__88__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__88__count)));
                            vlSelf->__Vfunc_leading_zero32__88__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__88__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__88__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__88__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__88__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__88__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__88__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__88__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__88__Vfuncout)) 
                                             - (IData)(5U))));
    __Vfunc_round_pack32__89__significand = vlSelf->__PVT__add__DOT__significand4;
    __Vfunc_round_pack32__89__exponent = vlSelf->__PVT__add__DOT__exponent4;
    __Vfunc_round_pack32__89__negative = vlSelf->__PVT__add__DOT__negative4;
    __Vfunc_round_pack32__89__adjusted = __Vfunc_round_pack32__89__exponent;
    __Vfunc_round_pack32__89__shifted = __Vfunc_round_pack32__89__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__89__exponent))) {
        vlSelf->__Vfunc_shift_jam27__90__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__89__exponent)));
        vlSelf->__Vfunc_shift_jam27__90__value = __Vfunc_round_pack32__89__significand;
        __Vfunc_round_pack32__89__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__90__distance))) {
            vlSelf->__Vfunc_shift_jam27__90__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__90__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__90__distance))) {
            vlSelf->__Vfunc_shift_jam27__90__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__90__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__90__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__90__value, (IData)(vlSelf->__Vfunc_shift_jam27__90__distance)));
            vlSelf->__Vfunc_shift_jam27__90__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__90__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__90__distance)))));
            vlSelf->__Vfunc_shift_jam27__90__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__90__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__90__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__90__discarded))));
        }
        __Vfunc_round_pack32__89__shifted = vlSelf->__Vfunc_shift_jam27__90__Vfuncout;
    }
    __Vfunc_round_pack32__89__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__89__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__89__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__89__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__89__rounded)) {
        __Vfunc_round_pack32__89__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__89__rounded, 1U));
        __Vfunc_round_pack32__89__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__89__adjusted)));
    }
    __Vfunc_round_pack32__89__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__89__rounded)) {
        __Vfunc_round_pack32__89__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__89__adjusted)));
    }
    __Vfunc_round_pack32__89__Vfuncout = (((0U == __Vfunc_round_pack32__89__significand) 
                                           | (0U == __Vfunc_round_pack32__89__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__89__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__89__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__89__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__89__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__89__rounded)))))));
    vlSelf->__PVT__add__DOT__packed5 = __Vfunc_round_pack32__89__Vfuncout;
    __Vfunc_round_pack32__96__significand = vlSelf->__PVT__multiply__DOT__significand3;
    __Vfunc_round_pack32__96__exponent = vlSelf->__PVT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__96__negative = (1U & ((IData)(vlSelf->__PVT__multiply__DOT__negative) 
                                                >> 2U));
    __Vfunc_round_pack32__96__adjusted = __Vfunc_round_pack32__96__exponent;
    __Vfunc_round_pack32__96__shifted = __Vfunc_round_pack32__96__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__96__exponent))) {
        vlSelf->__Vfunc_shift_jam27__97__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__96__exponent)));
        vlSelf->__Vfunc_shift_jam27__97__value = __Vfunc_round_pack32__96__significand;
        __Vfunc_round_pack32__96__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__97__distance))) {
            vlSelf->__Vfunc_shift_jam27__97__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__97__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__97__distance))) {
            vlSelf->__Vfunc_shift_jam27__97__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__97__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__97__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__97__value, (IData)(vlSelf->__Vfunc_shift_jam27__97__distance)));
            vlSelf->__Vfunc_shift_jam27__97__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__97__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__97__distance)))));
            vlSelf->__Vfunc_shift_jam27__97__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__97__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__97__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__97__discarded))));
        }
        __Vfunc_round_pack32__96__shifted = vlSelf->__Vfunc_shift_jam27__97__Vfuncout;
    }
    __Vfunc_round_pack32__96__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__96__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__96__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__96__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__96__rounded)) {
        __Vfunc_round_pack32__96__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__96__rounded, 1U));
        __Vfunc_round_pack32__96__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__96__adjusted)));
    }
    __Vfunc_round_pack32__96__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__96__rounded)) {
        __Vfunc_round_pack32__96__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__96__adjusted)));
    }
    __Vfunc_round_pack32__96__Vfuncout = (((0U == __Vfunc_round_pack32__96__significand) 
                                           | (0U == __Vfunc_round_pack32__96__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__96__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__96__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__96__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__96__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__96__rounded)))))));
    vlSelf->__PVT__multiply__DOT__packed4 = __Vfunc_round_pack32__96__Vfuncout;
    __PVT__square_root__DOT__shifted_remainder = ((vlSelf->__PVT__square_root__DOT__remainder 
                                                   << 2U) 
                                                  | (3U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__square_root__DOT__pairs 
                                                                >> 0x34U))));
    __Vfunc_round_pack32__107__significand = ((0x7fffffeU 
                                               & vlSelf->__PVT__square_root__DOT__root) 
                                              | (1U 
                                                 & (vlSelf->__PVT__square_root__DOT__root 
                                                    | (0U 
                                                       != vlSelf->__PVT__square_root__DOT__remainder))));
    __Vfunc_round_pack32__107__exponent = vlSelf->__PVT__square_root__DOT__exponent;
    __Vfunc_round_pack32__107__negative = vlSelf->__PVT__square_root__DOT__negative;
    __Vfunc_round_pack32__107__adjusted = __Vfunc_round_pack32__107__exponent;
    __Vfunc_round_pack32__107__shifted = __Vfunc_round_pack32__107__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__107__exponent))) {
        vlSelf->__Vfunc_shift_jam27__108__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__107__exponent)));
        vlSelf->__Vfunc_shift_jam27__108__value = __Vfunc_round_pack32__107__significand;
        __Vfunc_round_pack32__107__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__108__distance))) {
            vlSelf->__Vfunc_shift_jam27__108__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__108__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__108__distance))) {
            vlSelf->__Vfunc_shift_jam27__108__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__108__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__108__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__108__value, (IData)(vlSelf->__Vfunc_shift_jam27__108__distance)));
            vlSelf->__Vfunc_shift_jam27__108__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__108__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__108__distance)))));
            vlSelf->__Vfunc_shift_jam27__108__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__108__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__108__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__108__discarded))));
        }
        __Vfunc_round_pack32__107__shifted = vlSelf->__Vfunc_shift_jam27__108__Vfuncout;
    }
    __Vfunc_round_pack32__107__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__107__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__107__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__107__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__107__rounded)) {
        __Vfunc_round_pack32__107__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__107__rounded, 1U));
        __Vfunc_round_pack32__107__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__107__adjusted)));
    }
    __Vfunc_round_pack32__107__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__107__rounded)) {
        __Vfunc_round_pack32__107__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__107__adjusted)));
    }
    __Vfunc_round_pack32__107__Vfuncout = (((0U == __Vfunc_round_pack32__107__significand) 
                                            | (0U == __Vfunc_round_pack32__107__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__107__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__107__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__107__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__107__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__107__rounded)))))));
    vlSelf->__PVT__square_root__DOT__packed_result 
        = __Vfunc_round_pack32__107__Vfuncout;
    vlSelf->__PVT__divide__DOT__take_bit = ((vlSelf->__PVT__divide__DOT__remainder 
                                             << 1U) 
                                            >= vlSelf->__PVT__divide__DOT__divisor);
    __Vfunc_round_pack32__102__significand = ((IData)(vlSelf->__PVT__divide__DOT__zero)
                                               ? 0U
                                               : ((0x7fffffeU 
                                                   & vlSelf->__PVT__divide__DOT__quotient) 
                                                  | (1U 
                                                     & (vlSelf->__PVT__divide__DOT__quotient 
                                                        | (0U 
                                                           != vlSelf->__PVT__divide__DOT__remainder)))));
    __Vfunc_round_pack32__102__exponent = vlSelf->__PVT__divide__DOT__exponent;
    __Vfunc_round_pack32__102__negative = vlSelf->__PVT__divide__DOT__negative;
    __Vfunc_round_pack32__102__adjusted = __Vfunc_round_pack32__102__exponent;
    __Vfunc_round_pack32__102__shifted = __Vfunc_round_pack32__102__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__102__exponent))) {
        vlSelf->__Vfunc_shift_jam27__103__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__102__exponent)));
        vlSelf->__Vfunc_shift_jam27__103__value = __Vfunc_round_pack32__102__significand;
        __Vfunc_round_pack32__102__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__103__distance))) {
            vlSelf->__Vfunc_shift_jam27__103__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__103__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__103__distance))) {
            vlSelf->__Vfunc_shift_jam27__103__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__103__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__103__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__103__value, (IData)(vlSelf->__Vfunc_shift_jam27__103__distance)));
            vlSelf->__Vfunc_shift_jam27__103__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__103__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__103__distance)))));
            vlSelf->__Vfunc_shift_jam27__103__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__103__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__103__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__103__discarded))));
        }
        __Vfunc_round_pack32__102__shifted = vlSelf->__Vfunc_shift_jam27__103__Vfuncout;
    }
    __Vfunc_round_pack32__102__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__102__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__102__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__102__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__102__rounded)) {
        __Vfunc_round_pack32__102__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__102__rounded, 1U));
        __Vfunc_round_pack32__102__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__102__adjusted)));
    }
    __Vfunc_round_pack32__102__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__102__rounded)) {
        __Vfunc_round_pack32__102__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__102__adjusted)));
    }
    __Vfunc_round_pack32__102__Vfuncout = (((0U == __Vfunc_round_pack32__102__significand) 
                                            | (0U == __Vfunc_round_pack32__102__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__102__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__102__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__102__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__102__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__102__rounded)))))));
    vlSelf->__PVT__divide__DOT__packed_result = __Vfunc_round_pack32__102__Vfuncout;
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
                        vlSelf->__Vfunc_leading_zero32__95__value 
                            = vlSelf->__PVT__divide__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__95__part 
                            = vlSelf->__Vfunc_leading_zero32__95__value;
                        vlSelf->__Vfunc_leading_zero32__95__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__95__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__95__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__95__count)));
                            vlSelf->__Vfunc_leading_zero32__95__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__95__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__95__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__95__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__95__count)));
                            vlSelf->__Vfunc_leading_zero32__95__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__95__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__95__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__95__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__95__count)));
                            vlSelf->__Vfunc_leading_zero32__95__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__95__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__95__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__95__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__95__count)));
                            vlSelf->__Vfunc_leading_zero32__95__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__95__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__95__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__95__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__95__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__95__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__95__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__95__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__95__Vfuncout)) 
                                                 - (IData)(8U))));
    vlSelf->__PVT__divide__DOT__shift_b = ((0U == vlSelf->__PVT__divide__DOT__raw_b)
                                            ? 0U : 
                                           (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__101__value 
                            = vlSelf->__PVT__divide__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__101__part 
                            = vlSelf->__Vfunc_leading_zero32__101__value;
                        vlSelf->__Vfunc_leading_zero32__101__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__101__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__101__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__101__count)));
                            vlSelf->__Vfunc_leading_zero32__101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__101__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__101__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__101__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__101__count)));
                            vlSelf->__Vfunc_leading_zero32__101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__101__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__101__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__101__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__101__count)));
                            vlSelf->__Vfunc_leading_zero32__101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__101__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__101__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__101__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__101__count)));
                            vlSelf->__Vfunc_leading_zero32__101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__101__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__101__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__101__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__101__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__101__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__101__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__101__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__101__Vfuncout)) 
                                             - (IData)(8U))));
    vlSelf->__PVT__multiply__DOT__shift_a = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                              ? 0U : 
                                             (0x3fU 
                                              & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__94__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__94__part 
                            = vlSelf->__Vfunc_leading_zero32__94__value;
                        vlSelf->__Vfunc_leading_zero32__94__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__94__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__94__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__94__count)));
                            vlSelf->__Vfunc_leading_zero32__94__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__94__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__94__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__94__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__94__count)));
                            vlSelf->__Vfunc_leading_zero32__94__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__94__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__94__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__94__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__94__count)));
                            vlSelf->__Vfunc_leading_zero32__94__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__94__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__94__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__94__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__94__count)));
                            vlSelf->__Vfunc_leading_zero32__94__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__94__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__94__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__94__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__94__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__94__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__94__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__94__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__94__Vfuncout)) 
                                                 - (IData)(8U))));
    vlSelf->__PVT__square_root__DOT__shift = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                               ? 0U
                                               : (0x3fU 
                                                  & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__106__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__106__part 
                            = vlSelf->__Vfunc_leading_zero32__106__value;
                        vlSelf->__Vfunc_leading_zero32__106__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__106__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__106__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__106__count)));
                            vlSelf->__Vfunc_leading_zero32__106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__106__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__106__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__106__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__106__count)));
                            vlSelf->__Vfunc_leading_zero32__106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__106__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__106__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__106__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__106__count)));
                            vlSelf->__Vfunc_leading_zero32__106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__106__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__106__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__106__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__106__count)));
                            vlSelf->__Vfunc_leading_zero32__106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__106__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__106__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__106__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__106__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__106__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__106__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__106__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__106__Vfuncout)) 
                                                     - (IData)(8U))));
    vlSelf->__PVT__divide__DOT__shift_a = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                            ? 0U : 
                                           (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__100__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__100__part 
                            = vlSelf->__Vfunc_leading_zero32__100__value;
                        vlSelf->__Vfunc_leading_zero32__100__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__100__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__100__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__100__count)));
                            vlSelf->__Vfunc_leading_zero32__100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__100__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__100__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__100__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__100__count)));
                            vlSelf->__Vfunc_leading_zero32__100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__100__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__100__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__100__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__100__count)));
                            vlSelf->__Vfunc_leading_zero32__100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__100__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__100__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__100__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__100__count)));
                            vlSelf->__Vfunc_leading_zero32__100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__100__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__100__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__100__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__100__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__100__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__100__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__100__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__100__Vfuncout)) 
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

VL_INLINE_OPT void Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic__0(Vtop_tb_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic__0\n"); );
    // Body
    vlSelf->square_root__DOT____VdfgTmp_h0890133b__0 
        = ((~ (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__unit_flush)) 
           & (IData)(vlSymsp->TOP.top_tb__DOT__rst_n));
    vlSelf->in_ready = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                        & (0U == (IData)(vlSelf->__PVT__state)));
    vlSelf->__PVT__divide__DOT__ready = ((~ (IData)(vlSelf->__PVT__divide__DOT__active)) 
                                         & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
    vlSelf->__PVT__square_root__DOT__ready = ((~ (IData)(vlSelf->__PVT__square_root__DOT__active)) 
                                              & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
    vlSelf->out_valid = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                         & (3U == (IData)(vlSelf->__PVT__state)));
    if (vlSelf->out_valid) {
        vlSelf->out_data = vlSelf->__PVT__data;
        vlSelf->out_error = vlSelf->__PVT__result_failed;
    } else {
        vlSelf->out_data = 0U;
        vlSelf->out_error = 0U;
    }
}

VL_INLINE_OPT void Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic__0(Vtop_tb_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic__0\n"); );
    // Init
    CData/*0:0*/ __PVT__add__DOT__a_larger;
    __PVT__add__DOT__a_larger = 0;
    IData/*30:0*/ __PVT__square_root__DOT__shifted_remainder;
    __PVT__square_root__DOT__shifted_remainder = 0;
    QData/*32:0*/ __Vfunc_round_pack32__111__Vfuncout;
    __Vfunc_round_pack32__111__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__111__negative;
    __Vfunc_round_pack32__111__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__111__exponent;
    __Vfunc_round_pack32__111__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__111__significand;
    __Vfunc_round_pack32__111__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__111__shifted;
    __Vfunc_round_pack32__111__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__111__rounded;
    __Vfunc_round_pack32__111__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__111__adjusted;
    __Vfunc_round_pack32__111__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__111__biased;
    __Vfunc_round_pack32__111__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__113__Vfuncout;
    __Vfunc_fp32_invalid__113__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__113__value;
    __Vfunc_fp32_invalid__113__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__114__Vfuncout;
    __Vfunc_fp32_invalid__114__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__114__value;
    __Vfunc_fp32_invalid__114__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__115__Vfuncout;
    __Vfunc_shift_jam27__115__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__115__value;
    __Vfunc_shift_jam27__115__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__115__distance;
    __Vfunc_shift_jam27__115__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__115__shifted;
    __Vfunc_shift_jam27__115__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__115__discarded;
    __Vfunc_shift_jam27__115__discarded = 0;
    QData/*32:0*/ __Vfunc_round_pack32__118__Vfuncout;
    __Vfunc_round_pack32__118__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__118__negative;
    __Vfunc_round_pack32__118__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__118__exponent;
    __Vfunc_round_pack32__118__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__118__significand;
    __Vfunc_round_pack32__118__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__118__shifted;
    __Vfunc_round_pack32__118__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__118__rounded;
    __Vfunc_round_pack32__118__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__118__adjusted;
    __Vfunc_round_pack32__118__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__118__biased;
    __Vfunc_round_pack32__118__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__120__Vfuncout;
    __Vfunc_fp32_invalid__120__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__120__value;
    __Vfunc_fp32_invalid__120__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__121__Vfuncout;
    __Vfunc_fp32_invalid__121__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__121__value;
    __Vfunc_fp32_invalid__121__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__124__Vfuncout;
    __Vfunc_round_pack32__124__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__124__negative;
    __Vfunc_round_pack32__124__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__124__exponent;
    __Vfunc_round_pack32__124__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__124__significand;
    __Vfunc_round_pack32__124__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__124__shifted;
    __Vfunc_round_pack32__124__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__124__rounded;
    __Vfunc_round_pack32__124__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__124__adjusted;
    __Vfunc_round_pack32__124__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__124__biased;
    __Vfunc_round_pack32__124__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__126__Vfuncout;
    __Vfunc_fp32_invalid__126__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__126__value;
    __Vfunc_fp32_invalid__126__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__127__Vfuncout;
    __Vfunc_fp32_invalid__127__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__127__value;
    __Vfunc_fp32_invalid__127__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__129__Vfuncout;
    __Vfunc_round_pack32__129__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__129__negative;
    __Vfunc_round_pack32__129__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__129__exponent;
    __Vfunc_round_pack32__129__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__129__significand;
    __Vfunc_round_pack32__129__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__129__shifted;
    __Vfunc_round_pack32__129__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__129__rounded;
    __Vfunc_round_pack32__129__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__129__adjusted;
    __Vfunc_round_pack32__129__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__129__biased;
    __Vfunc_round_pack32__129__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__131__Vfuncout;
    __Vfunc_fp32_invalid__131__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__131__value;
    __Vfunc_fp32_invalid__131__value = 0;
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__unit_flush) {
            __Vdly__state = 0U;
            vlSelf->__PVT__data = 0U;
            vlSelf->__PVT__result_failed = 0U;
        } else if ((0U == (IData)(vlSelf->__PVT__state))) {
            if ((((~ (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__waiting)) 
                  & (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic_state)) 
                 & (IData)(vlSelf->in_ready))) {
                __Vdly__a = vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a;
                __Vdly__b = vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_b;
                __Vdly__operation = vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_op;
                __Vdly__failed = (4U < (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_op));
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
            if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__waiting) {
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__unit_flush) {
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
                                __Vfunc_fp32_invalid__113__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__113__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__113__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__113__Vfuncout))) 
                                           | ([&]() {
                            __Vfunc_fp32_invalid__114__value 
                                = vlSelf->__PVT__add_b;
                            __Vfunc_fp32_invalid__114__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__114__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__114__Vfuncout))));
            __Vfunc_shift_jam27__115__distance = vlSelf->__PVT__add__DOT__distance1;
            __Vfunc_shift_jam27__115__value = vlSelf->__PVT__add__DOT__small1;
            vlSelf->__PVT__add__DOT__large2 = vlSelf->__PVT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__115__distance))) {
                __Vfunc_shift_jam27__115__Vfuncout 
                    = __Vfunc_shift_jam27__115__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__115__distance))) {
                __Vfunc_shift_jam27__115__Vfuncout 
                    = (0U != __Vfunc_shift_jam27__115__value);
            } else {
                __Vfunc_shift_jam27__115__shifted = 
                    (0x7ffffffU & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__115__value, (IData)(__Vfunc_shift_jam27__115__distance)));
                __Vfunc_shift_jam27__115__discarded 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__115__value, 
                                                  (0xfffU 
                                                   & ((IData)(0x1bU) 
                                                      - (IData)(__Vfunc_shift_jam27__115__distance)))));
                __Vfunc_shift_jam27__115__Vfuncout 
                    = ((0x7fffffeU & __Vfunc_shift_jam27__115__shifted) 
                       | (1U & (__Vfunc_shift_jam27__115__shifted 
                                | (0U != __Vfunc_shift_jam27__115__discarded))));
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
            vlSelf->__PVT__add__DOT__small2 = __Vfunc_shift_jam27__115__Vfuncout;
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__unit_flush) {
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
                                __Vfunc_fp32_invalid__120__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__120__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__120__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__120__Vfuncout))) 
                                                | ([&]() {
                            __Vfunc_fp32_invalid__121__value 
                                = vlSelf->__PVT__b;
                            __Vfunc_fp32_invalid__121__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__121__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__121__Vfuncout))));
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__unit_flush) {
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
                                __Vfunc_fp32_invalid__131__value 
                                    = vlSelf->__PVT__a;
                                __Vfunc_fp32_invalid__131__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__131__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__131__Vfuncout))) 
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
    if (vlSymsp->TOP.top_tb__DOT__rst_n) {
        if (vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__unit_flush) {
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
                                    __Vfunc_fp32_invalid__126__value 
                                        = vlSelf->__PVT__a;
                                    __Vfunc_fp32_invalid__126__Vfuncout 
                                        = (0xffU == 
                                           (0xffU & 
                                            (__Vfunc_fp32_invalid__126__value 
                                             >> 0x17U)));
                                }(), (IData)(__Vfunc_fp32_invalid__126__Vfuncout))) 
                                                | ([&]() {
                                __Vfunc_fp32_invalid__127__value 
                                    = vlSelf->__PVT__b;
                                __Vfunc_fp32_invalid__127__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__127__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__127__Vfuncout))) 
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
                        vlSelf->__Vfunc_leading_zero32__110__value 
                            = vlSelf->__PVT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__110__part 
                            = vlSelf->__Vfunc_leading_zero32__110__value;
                        vlSelf->__Vfunc_leading_zero32__110__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__110__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__110__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__110__count)));
                            vlSelf->__Vfunc_leading_zero32__110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__110__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__110__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__110__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__110__count)));
                            vlSelf->__Vfunc_leading_zero32__110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__110__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__110__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__110__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__110__count)));
                            vlSelf->__Vfunc_leading_zero32__110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__110__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__110__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__110__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__110__count)));
                            vlSelf->__Vfunc_leading_zero32__110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__110__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__110__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__110__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__110__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__110__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__110__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__110__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__110__Vfuncout)) 
                                             - (IData)(5U))));
    __Vfunc_round_pack32__111__significand = vlSelf->__PVT__add__DOT__significand4;
    __Vfunc_round_pack32__111__exponent = vlSelf->__PVT__add__DOT__exponent4;
    __Vfunc_round_pack32__111__negative = vlSelf->__PVT__add__DOT__negative4;
    __Vfunc_round_pack32__111__adjusted = __Vfunc_round_pack32__111__exponent;
    __Vfunc_round_pack32__111__shifted = __Vfunc_round_pack32__111__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__111__exponent))) {
        vlSelf->__Vfunc_shift_jam27__112__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__111__exponent)));
        vlSelf->__Vfunc_shift_jam27__112__value = __Vfunc_round_pack32__111__significand;
        __Vfunc_round_pack32__111__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__112__distance))) {
            vlSelf->__Vfunc_shift_jam27__112__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__112__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__112__distance))) {
            vlSelf->__Vfunc_shift_jam27__112__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__112__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__112__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__112__value, (IData)(vlSelf->__Vfunc_shift_jam27__112__distance)));
            vlSelf->__Vfunc_shift_jam27__112__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__112__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__112__distance)))));
            vlSelf->__Vfunc_shift_jam27__112__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__112__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__112__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__112__discarded))));
        }
        __Vfunc_round_pack32__111__shifted = vlSelf->__Vfunc_shift_jam27__112__Vfuncout;
    }
    __Vfunc_round_pack32__111__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__111__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__111__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__111__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__111__rounded)) {
        __Vfunc_round_pack32__111__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__111__rounded, 1U));
        __Vfunc_round_pack32__111__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__111__adjusted)));
    }
    __Vfunc_round_pack32__111__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__111__rounded)) {
        __Vfunc_round_pack32__111__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__111__adjusted)));
    }
    __Vfunc_round_pack32__111__Vfuncout = (((0U == __Vfunc_round_pack32__111__significand) 
                                            | (0U == __Vfunc_round_pack32__111__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__111__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__111__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__111__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__111__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__111__rounded)))))));
    vlSelf->__PVT__add__DOT__packed5 = __Vfunc_round_pack32__111__Vfuncout;
    __Vfunc_round_pack32__118__significand = vlSelf->__PVT__multiply__DOT__significand3;
    __Vfunc_round_pack32__118__exponent = vlSelf->__PVT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__118__negative = (1U & ((IData)(vlSelf->__PVT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__118__adjusted = __Vfunc_round_pack32__118__exponent;
    __Vfunc_round_pack32__118__shifted = __Vfunc_round_pack32__118__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__118__exponent))) {
        vlSelf->__Vfunc_shift_jam27__119__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__118__exponent)));
        vlSelf->__Vfunc_shift_jam27__119__value = __Vfunc_round_pack32__118__significand;
        __Vfunc_round_pack32__118__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__119__distance))) {
            vlSelf->__Vfunc_shift_jam27__119__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__119__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__119__distance))) {
            vlSelf->__Vfunc_shift_jam27__119__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__119__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__119__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__119__value, (IData)(vlSelf->__Vfunc_shift_jam27__119__distance)));
            vlSelf->__Vfunc_shift_jam27__119__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__119__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__119__distance)))));
            vlSelf->__Vfunc_shift_jam27__119__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__119__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__119__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__119__discarded))));
        }
        __Vfunc_round_pack32__118__shifted = vlSelf->__Vfunc_shift_jam27__119__Vfuncout;
    }
    __Vfunc_round_pack32__118__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__118__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__118__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__118__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__118__rounded)) {
        __Vfunc_round_pack32__118__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__118__rounded, 1U));
        __Vfunc_round_pack32__118__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__118__adjusted)));
    }
    __Vfunc_round_pack32__118__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__118__rounded)) {
        __Vfunc_round_pack32__118__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__118__adjusted)));
    }
    __Vfunc_round_pack32__118__Vfuncout = (((0U == __Vfunc_round_pack32__118__significand) 
                                            | (0U == __Vfunc_round_pack32__118__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__118__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__118__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__118__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__118__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__118__rounded)))))));
    vlSelf->__PVT__multiply__DOT__packed4 = __Vfunc_round_pack32__118__Vfuncout;
    __PVT__square_root__DOT__shifted_remainder = ((vlSelf->__PVT__square_root__DOT__remainder 
                                                   << 2U) 
                                                  | (3U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__square_root__DOT__pairs 
                                                                >> 0x34U))));
    __Vfunc_round_pack32__129__significand = ((0x7fffffeU 
                                               & vlSelf->__PVT__square_root__DOT__root) 
                                              | (1U 
                                                 & (vlSelf->__PVT__square_root__DOT__root 
                                                    | (0U 
                                                       != vlSelf->__PVT__square_root__DOT__remainder))));
    __Vfunc_round_pack32__129__exponent = vlSelf->__PVT__square_root__DOT__exponent;
    __Vfunc_round_pack32__129__negative = vlSelf->__PVT__square_root__DOT__negative;
    __Vfunc_round_pack32__129__adjusted = __Vfunc_round_pack32__129__exponent;
    __Vfunc_round_pack32__129__shifted = __Vfunc_round_pack32__129__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__129__exponent))) {
        vlSelf->__Vfunc_shift_jam27__130__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__129__exponent)));
        vlSelf->__Vfunc_shift_jam27__130__value = __Vfunc_round_pack32__129__significand;
        __Vfunc_round_pack32__129__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__130__distance))) {
            vlSelf->__Vfunc_shift_jam27__130__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__130__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__130__distance))) {
            vlSelf->__Vfunc_shift_jam27__130__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__130__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__130__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__130__value, (IData)(vlSelf->__Vfunc_shift_jam27__130__distance)));
            vlSelf->__Vfunc_shift_jam27__130__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__130__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__130__distance)))));
            vlSelf->__Vfunc_shift_jam27__130__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__130__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__130__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__130__discarded))));
        }
        __Vfunc_round_pack32__129__shifted = vlSelf->__Vfunc_shift_jam27__130__Vfuncout;
    }
    __Vfunc_round_pack32__129__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__129__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__129__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__129__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__129__rounded)) {
        __Vfunc_round_pack32__129__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__129__rounded, 1U));
        __Vfunc_round_pack32__129__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__129__adjusted)));
    }
    __Vfunc_round_pack32__129__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__129__rounded)) {
        __Vfunc_round_pack32__129__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__129__adjusted)));
    }
    __Vfunc_round_pack32__129__Vfuncout = (((0U == __Vfunc_round_pack32__129__significand) 
                                            | (0U == __Vfunc_round_pack32__129__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__129__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__129__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__129__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__129__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__129__rounded)))))));
    vlSelf->__PVT__square_root__DOT__packed_result 
        = __Vfunc_round_pack32__129__Vfuncout;
    vlSelf->__PVT__divide__DOT__take_bit = ((vlSelf->__PVT__divide__DOT__remainder 
                                             << 1U) 
                                            >= vlSelf->__PVT__divide__DOT__divisor);
    __Vfunc_round_pack32__124__significand = ((IData)(vlSelf->__PVT__divide__DOT__zero)
                                               ? 0U
                                               : ((0x7fffffeU 
                                                   & vlSelf->__PVT__divide__DOT__quotient) 
                                                  | (1U 
                                                     & (vlSelf->__PVT__divide__DOT__quotient 
                                                        | (0U 
                                                           != vlSelf->__PVT__divide__DOT__remainder)))));
    __Vfunc_round_pack32__124__exponent = vlSelf->__PVT__divide__DOT__exponent;
    __Vfunc_round_pack32__124__negative = vlSelf->__PVT__divide__DOT__negative;
    __Vfunc_round_pack32__124__adjusted = __Vfunc_round_pack32__124__exponent;
    __Vfunc_round_pack32__124__shifted = __Vfunc_round_pack32__124__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__124__exponent))) {
        vlSelf->__Vfunc_shift_jam27__125__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__124__exponent)));
        vlSelf->__Vfunc_shift_jam27__125__value = __Vfunc_round_pack32__124__significand;
        __Vfunc_round_pack32__124__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__125__distance))) {
            vlSelf->__Vfunc_shift_jam27__125__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__125__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__125__distance))) {
            vlSelf->__Vfunc_shift_jam27__125__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__125__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__125__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__125__value, (IData)(vlSelf->__Vfunc_shift_jam27__125__distance)));
            vlSelf->__Vfunc_shift_jam27__125__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__125__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__125__distance)))));
            vlSelf->__Vfunc_shift_jam27__125__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__125__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__125__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__125__discarded))));
        }
        __Vfunc_round_pack32__124__shifted = vlSelf->__Vfunc_shift_jam27__125__Vfuncout;
    }
    __Vfunc_round_pack32__124__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__124__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__124__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__124__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__124__rounded)) {
        __Vfunc_round_pack32__124__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__124__rounded, 1U));
        __Vfunc_round_pack32__124__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__124__adjusted)));
    }
    __Vfunc_round_pack32__124__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__124__rounded)) {
        __Vfunc_round_pack32__124__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__124__adjusted)));
    }
    __Vfunc_round_pack32__124__Vfuncout = (((0U == __Vfunc_round_pack32__124__significand) 
                                            | (0U == __Vfunc_round_pack32__124__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__124__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__124__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__124__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__124__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__124__rounded)))))));
    vlSelf->__PVT__divide__DOT__packed_result = __Vfunc_round_pack32__124__Vfuncout;
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
                        vlSelf->__Vfunc_leading_zero32__117__value 
                            = vlSelf->__PVT__divide__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__117__part 
                            = vlSelf->__Vfunc_leading_zero32__117__value;
                        vlSelf->__Vfunc_leading_zero32__117__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__117__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__117__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__117__count)));
                            vlSelf->__Vfunc_leading_zero32__117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__117__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__117__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__117__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__117__count)));
                            vlSelf->__Vfunc_leading_zero32__117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__117__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__117__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__117__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__117__count)));
                            vlSelf->__Vfunc_leading_zero32__117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__117__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__117__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__117__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__117__count)));
                            vlSelf->__Vfunc_leading_zero32__117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__117__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__117__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__117__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__117__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__117__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__117__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__117__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__117__Vfuncout)) 
                                                 - (IData)(8U))));
    vlSelf->__PVT__divide__DOT__shift_b = ((0U == vlSelf->__PVT__divide__DOT__raw_b)
                                            ? 0U : 
                                           (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__123__value 
                            = vlSelf->__PVT__divide__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__123__part 
                            = vlSelf->__Vfunc_leading_zero32__123__value;
                        vlSelf->__Vfunc_leading_zero32__123__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__123__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__123__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__123__count)));
                            vlSelf->__Vfunc_leading_zero32__123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__123__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__123__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__123__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__123__count)));
                            vlSelf->__Vfunc_leading_zero32__123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__123__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__123__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__123__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__123__count)));
                            vlSelf->__Vfunc_leading_zero32__123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__123__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__123__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__123__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__123__count)));
                            vlSelf->__Vfunc_leading_zero32__123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__123__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__123__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__123__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__123__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__123__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__123__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__123__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__123__Vfuncout)) 
                                             - (IData)(8U))));
    vlSelf->__PVT__multiply__DOT__shift_a = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                              ? 0U : 
                                             (0x3fU 
                                              & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__116__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__116__part 
                            = vlSelf->__Vfunc_leading_zero32__116__value;
                        vlSelf->__Vfunc_leading_zero32__116__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__116__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__116__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__116__count)));
                            vlSelf->__Vfunc_leading_zero32__116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__116__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__116__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__116__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__116__count)));
                            vlSelf->__Vfunc_leading_zero32__116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__116__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__116__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__116__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__116__count)));
                            vlSelf->__Vfunc_leading_zero32__116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__116__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__116__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__116__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__116__count)));
                            vlSelf->__Vfunc_leading_zero32__116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__116__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__116__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__116__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__116__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__116__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__116__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__116__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__116__Vfuncout)) 
                                                 - (IData)(8U))));
    vlSelf->__PVT__square_root__DOT__shift = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                               ? 0U
                                               : (0x3fU 
                                                  & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__128__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__128__part 
                            = vlSelf->__Vfunc_leading_zero32__128__value;
                        vlSelf->__Vfunc_leading_zero32__128__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__128__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__128__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__128__count)));
                            vlSelf->__Vfunc_leading_zero32__128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__128__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__128__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__128__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__128__count)));
                            vlSelf->__Vfunc_leading_zero32__128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__128__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__128__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__128__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__128__count)));
                            vlSelf->__Vfunc_leading_zero32__128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__128__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__128__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__128__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__128__count)));
                            vlSelf->__Vfunc_leading_zero32__128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__128__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__128__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__128__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__128__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__128__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__128__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__128__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__128__Vfuncout)) 
                                                     - (IData)(8U))));
    vlSelf->__PVT__divide__DOT__shift_a = ((0U == vlSelf->__PVT__divide__DOT__raw_a)
                                            ? 0U : 
                                           (0x3fU & 
                                            (([&]() {
                        vlSelf->__Vfunc_leading_zero32__122__value 
                            = vlSelf->__PVT__divide__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__122__part 
                            = vlSelf->__Vfunc_leading_zero32__122__value;
                        vlSelf->__Vfunc_leading_zero32__122__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__122__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__122__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__122__count)));
                            vlSelf->__Vfunc_leading_zero32__122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__122__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__122__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__122__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__122__count)));
                            vlSelf->__Vfunc_leading_zero32__122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__122__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__122__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__122__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__122__count)));
                            vlSelf->__Vfunc_leading_zero32__122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__122__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__122__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__122__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__122__count)));
                            vlSelf->__Vfunc_leading_zero32__122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__122__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__122__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__122__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__122__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__122__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__122__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__122__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__122__Vfuncout)) 
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
