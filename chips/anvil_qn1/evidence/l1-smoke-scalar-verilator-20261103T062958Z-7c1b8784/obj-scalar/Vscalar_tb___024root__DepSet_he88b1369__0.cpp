// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscalar_tb.h for the primary calling header

#include "Vscalar_tb__pch.h"
#include "Vscalar_tb___024root.h"

VlCoroutine Vscalar_tb___024root___eval_initial__TOP__Vtiming__0(Vscalar_tb___024root* vlSelf);
VlCoroutine Vscalar_tb___024root___eval_initial__TOP__Vtiming__1(Vscalar_tb___024root* vlSelf);
VlCoroutine Vscalar_tb___024root___eval_initial__TOP__Vtiming__2(Vscalar_tb___024root* vlSelf);

void Vscalar_tb___024root___eval_initial(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___eval_initial\n"); );
    // Body
    Vscalar_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vscalar_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vscalar_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__scalar_tb__DOT__clk__0 
        = vlSelf->scalar_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__scalar_tb__DOT__rst_n__0 
        = vlSelf->scalar_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vscalar_tb___024root___eval_initial__TOP__Vtiming__2(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                           4);
        vlSelf->scalar_tb__DOT__clk = (1U & (~ (IData)(vlSelf->scalar_tb__DOT__clk)));
    }
}

VL_INLINE_OPT void Vscalar_tb___024root___act_comb__TOP__0(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->scalar_tb__DOT__in_ready = ((IData)(vlSelf->scalar_tb__DOT__rst_n) 
                                        & (0U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__state)));
    vlSelf->scalar_tb__DOT__out_valid = ((IData)(vlSelf->scalar_tb__DOT__rst_n) 
                                         & (3U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__state)));
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__ready 
        = ((~ (IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__active)) 
           & (IData)(vlSelf->scalar_tb__DOT__rst_n));
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__ready 
        = ((~ (IData)(vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__active)) 
           & (IData)(vlSelf->scalar_tb__DOT__rst_n));
}

void Vscalar_tb___024root___eval_act(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___eval_act\n"); );
    // Body
    if ((0x1cULL & vlSelf->__VactTriggered.word(0U))) {
        Vscalar_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vscalar_tb___024root___nba_sequent__TOP__0(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__add__DOT__failed 
        = vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__failed;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__multiply__DOT__failed 
        = vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__failed;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_failed 
        = vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_failed;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_value 
        = vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_value;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__failed 
        = vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__failed;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__cycle 
        = vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__cycle;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__active 
        = vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__active;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__pairs 
        = vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__pairs;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__root 
        = vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__root;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__rounded_failed 
        = vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__rounded_failed;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__rounded_value 
        = vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__rounded_value;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__failed 
        = vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__failed;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__cycle 
        = vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__cycle;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__active 
        = vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__active;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__quotient 
        = vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__quotient;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__elapsed 
        = vlSelf->scalar_tb__DOT__dut__DOT__elapsed;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__failed 
        = vlSelf->scalar_tb__DOT__dut__DOT__failed;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__state 
        = vlSelf->scalar_tb__DOT__dut__DOT__state;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__operation 
        = vlSelf->scalar_tb__DOT__dut__DOT__operation;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__b = vlSelf->scalar_tb__DOT__dut__DOT__b;
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__a = vlSelf->scalar_tb__DOT__dut__DOT__a;
}

VL_INLINE_OPT void Vscalar_tb___024root___nba_sequent__TOP__2(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ scalar_tb__DOT__dut__DOT__add__DOT__a_larger;
    scalar_tb__DOT__dut__DOT__add__DOT__a_larger = 0;
    IData/*30:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__shifted_remainder;
    scalar_tb__DOT__dut__DOT__square_root__DOT__shifted_remainder = 0;
    QData/*32:0*/ __Vfunc_round_pack32__3__Vfuncout;
    __Vfunc_round_pack32__3__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__3__negative;
    __Vfunc_round_pack32__3__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__3__exponent;
    __Vfunc_round_pack32__3__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__3__significand;
    __Vfunc_round_pack32__3__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__3__shifted;
    __Vfunc_round_pack32__3__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__3__rounded;
    __Vfunc_round_pack32__3__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__3__adjusted;
    __Vfunc_round_pack32__3__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__3__biased;
    __Vfunc_round_pack32__3__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__5__Vfuncout;
    __Vfunc_fp32_invalid__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__5__value;
    __Vfunc_fp32_invalid__5__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__6__Vfuncout;
    __Vfunc_fp32_invalid__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__6__value;
    __Vfunc_fp32_invalid__6__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7__Vfuncout;
    __Vfunc_shift_jam27__7__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7__value;
    __Vfunc_shift_jam27__7__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__7__distance;
    __Vfunc_shift_jam27__7__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7__shifted;
    __Vfunc_shift_jam27__7__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7__discarded;
    __Vfunc_shift_jam27__7__discarded = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10__Vfuncout;
    __Vfunc_round_pack32__10__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10__negative;
    __Vfunc_round_pack32__10__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10__exponent;
    __Vfunc_round_pack32__10__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10__significand;
    __Vfunc_round_pack32__10__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10__shifted;
    __Vfunc_round_pack32__10__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10__rounded;
    __Vfunc_round_pack32__10__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10__adjusted;
    __Vfunc_round_pack32__10__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10__biased;
    __Vfunc_round_pack32__10__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__12__Vfuncout;
    __Vfunc_fp32_invalid__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__12__value;
    __Vfunc_fp32_invalid__12__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__13__Vfuncout;
    __Vfunc_fp32_invalid__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__13__value;
    __Vfunc_fp32_invalid__13__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__16__Vfuncout;
    __Vfunc_round_pack32__16__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__16__negative;
    __Vfunc_round_pack32__16__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__16__exponent;
    __Vfunc_round_pack32__16__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__16__significand;
    __Vfunc_round_pack32__16__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__16__shifted;
    __Vfunc_round_pack32__16__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__16__rounded;
    __Vfunc_round_pack32__16__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__16__adjusted;
    __Vfunc_round_pack32__16__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__16__biased;
    __Vfunc_round_pack32__16__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__18__Vfuncout;
    __Vfunc_fp32_invalid__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__18__value;
    __Vfunc_fp32_invalid__18__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__19__Vfuncout;
    __Vfunc_fp32_invalid__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__19__value;
    __Vfunc_fp32_invalid__19__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__21__Vfuncout;
    __Vfunc_round_pack32__21__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__21__negative;
    __Vfunc_round_pack32__21__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__21__exponent;
    __Vfunc_round_pack32__21__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__21__significand;
    __Vfunc_round_pack32__21__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__21__shifted;
    __Vfunc_round_pack32__21__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__21__rounded;
    __Vfunc_round_pack32__21__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__21__adjusted;
    __Vfunc_round_pack32__21__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__21__biased;
    __Vfunc_round_pack32__21__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__23__Vfuncout;
    __Vfunc_fp32_invalid__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__23__value;
    __Vfunc_fp32_invalid__23__value = 0;
    // Body
    if (vlSelf->scalar_tb__DOT__rst_n) {
        if ((0U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__state))) {
            if (((IData)(vlSelf->scalar_tb__DOT__in_valid) 
                 & (IData)(vlSelf->scalar_tb__DOT__in_ready))) {
                vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__a 
                    = vlSelf->scalar_tb__DOT__in_a;
                vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__b 
                    = vlSelf->scalar_tb__DOT__in_b;
                vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__operation 
                    = vlSelf->scalar_tb__DOT__in_op;
                vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__failed 
                    = ((IData)(vlSelf->scalar_tb__DOT__in_error) 
                       | (4U < (IData)(vlSelf->scalar_tb__DOT__in_op)));
                vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__elapsed = 0U;
                vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__state))) {
            vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__elapsed = 1U;
            vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__state))) {
            vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__elapsed 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->scalar_tb__DOT__dut__DOT__elapsed)));
            if (((((((1U >= (IData)(vlSelf->scalar_tb__DOT__dut__DOT__operation)) 
                     & (5U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__elapsed))) 
                    | ((2U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__operation)) 
                       & (4U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__elapsed)))) 
                   | ((3U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__operation)) 
                      & ((IData)(vlSelf->scalar_tb__DOT__rst_n) 
                         & (IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__done_reg)))) 
                  | ((4U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__operation)) 
                     & ((IData)(vlSelf->scalar_tb__DOT__rst_n) 
                        & (IData)(vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__done_reg)))) 
                 | (4U < (IData)(vlSelf->scalar_tb__DOT__dut__DOT__operation)))) {
                if (((0U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__operation)) 
                     || (1U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__operation)))) {
                    if (vlSelf->scalar_tb__DOT__rst_n) {
                        vlSelf->scalar_tb__DOT__dut__DOT__data 
                            = vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__value5;
                        vlSelf->scalar_tb__DOT__dut__DOT__result_failed 
                            = vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__error5;
                    } else {
                        vlSelf->scalar_tb__DOT__dut__DOT__data = 0U;
                        vlSelf->scalar_tb__DOT__dut__DOT__result_failed = 0U;
                    }
                } else if ((2U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__operation))) {
                    if (vlSelf->scalar_tb__DOT__rst_n) {
                        vlSelf->scalar_tb__DOT__dut__DOT__data 
                            = vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__value4;
                        vlSelf->scalar_tb__DOT__dut__DOT__result_failed 
                            = vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__error4;
                    } else {
                        vlSelf->scalar_tb__DOT__dut__DOT__data = 0U;
                        vlSelf->scalar_tb__DOT__dut__DOT__result_failed = 0U;
                    }
                } else if ((3U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__operation))) {
                    if (vlSelf->scalar_tb__DOT__rst_n) {
                        vlSelf->scalar_tb__DOT__dut__DOT__data 
                            = vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__value;
                        vlSelf->scalar_tb__DOT__dut__DOT__result_failed 
                            = vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__result_failed;
                    } else {
                        vlSelf->scalar_tb__DOT__dut__DOT__data = 0U;
                        vlSelf->scalar_tb__DOT__dut__DOT__result_failed = 0U;
                    }
                } else if ((4U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__operation))) {
                    if (vlSelf->scalar_tb__DOT__rst_n) {
                        vlSelf->scalar_tb__DOT__dut__DOT__data 
                            = vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__value;
                        vlSelf->scalar_tb__DOT__dut__DOT__result_failed 
                            = vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__result_failed;
                    } else {
                        vlSelf->scalar_tb__DOT__dut__DOT__data = 0U;
                        vlSelf->scalar_tb__DOT__dut__DOT__result_failed = 0U;
                    }
                } else {
                    vlSelf->scalar_tb__DOT__dut__DOT__data = 0U;
                    vlSelf->scalar_tb__DOT__dut__DOT__result_failed = 1U;
                }
                vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__state = 3U;
            }
        } else if ((3U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__state))) {
            if (vlSelf->scalar_tb__DOT__out_ready) {
                vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__state = 0U;
            }
        } else {
            vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__state = 0U;
        }
    } else {
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__state = 0U;
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__operation = 0U;
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__elapsed = 0U;
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__a = 0U;
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__b = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__data = 0U;
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__failed = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__result_failed = 0U;
    }
    vlSelf->scalar_tb__DOT__dut__DOT__elapsed = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__elapsed;
    if (vlSelf->scalar_tb__DOT__rst_n) {
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__add__DOT__failed 
            = ((0x1eU & ((IData)(vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__failed) 
                         << 1U)) | (((IData)(vlSelf->scalar_tb__DOT__dut__DOT__failed) 
                                     | ([&]() {
                            __Vfunc_fp32_invalid__5__value 
                                = vlSelf->scalar_tb__DOT__dut__DOT__a;
                            __Vfunc_fp32_invalid__5__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__5__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__5__Vfuncout))) 
                                    | ([&]() {
                        __Vfunc_fp32_invalid__6__value 
                            = vlSelf->scalar_tb__DOT__dut__DOT__add_b;
                        __Vfunc_fp32_invalid__6__Vfuncout 
                            = (0xffU == (0xffU & (__Vfunc_fp32_invalid__6__value 
                                                  >> 0x17U)));
                    }(), (IData)(__Vfunc_fp32_invalid__6__Vfuncout))));
        __Vfunc_shift_jam27__7__distance = vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__distance1;
        __Vfunc_shift_jam27__7__value = vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__small1;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large2 
            = vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large1;
        if ((0U == (IData)(__Vfunc_shift_jam27__7__distance))) {
            __Vfunc_shift_jam27__7__Vfuncout = __Vfunc_shift_jam27__7__value;
        } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__7__distance))) {
            __Vfunc_shift_jam27__7__Vfuncout = (0U 
                                                != __Vfunc_shift_jam27__7__value);
        } else {
            __Vfunc_shift_jam27__7__shifted = (0x7ffffffU 
                                               & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__7__value, (IData)(__Vfunc_shift_jam27__7__distance)));
            __Vfunc_shift_jam27__7__discarded = (0x7ffffffU 
                                                 & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__7__value, 
                                                                 (0xfffU 
                                                                  & ((IData)(0x1bU) 
                                                                     - (IData)(__Vfunc_shift_jam27__7__distance)))));
            __Vfunc_shift_jam27__7__Vfuncout = ((0x7fffffeU 
                                                 & __Vfunc_shift_jam27__7__shifted) 
                                                | (1U 
                                                   & (__Vfunc_shift_jam27__7__shifted 
                                                      | (0U 
                                                         != __Vfunc_shift_jam27__7__discarded))));
        }
        if ((0x8000000U & vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__sum3)) {
            vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__significand4 
                = ((0x7fffffeU & (vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__sum3 
                                  >> 1U)) | (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__sum3))));
            vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__exponent4 
                = (0xfffU & ((IData)(1U) + (IData)(vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__exponent3)));
        } else {
            vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__significand4 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,6, vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__sum3, (IData)(vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__left_shift)));
            vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__exponent4 
                = (0xfffU & ((IData)(vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__exponent3) 
                             - (IData)(vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__left_shift)));
        }
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__negative4 
            = vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__negative3;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__value5 
            = ((1U & (((IData)(vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__failed) 
                       >> 3U) | (IData)((vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__packed5 
                                         >> 0x20U))))
                ? 0U : (IData)(vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__packed5));
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__distance1 
            = (0xfffU & ((IData)(vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large_exponent) 
                         - ((0U == (0xffU & (vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__small_value 
                                             >> 0x17U)))
                             ? 0xf82U : ((0xffU & (vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__small_value 
                                                   >> 0x17U)) 
                                         - (IData)(0x7fU)))));
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__small2 
            = __Vfunc_shift_jam27__7__Vfuncout;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__error5 
            = (1U & (((IData)(vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__failed) 
                      >> 3U) | (IData)((vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__packed5 
                                        >> 0x20U))));
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__small1 
            = (((0U != (0xffU & (vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__small_value 
                                 >> 0x17U))) << 0x1aU) 
               | (0x3fffff8U & (vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__small_value 
                                << 3U)));
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large1 
            = (((0U != (0xffU & (vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large_value 
                                 >> 0x17U))) << 0x1aU) 
               | (0x3fffff8U & (vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large_value 
                                << 3U)));
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__sum3 
            = vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__sum_next;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__exponent3 
            = vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__exponent2;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__negative3 
            = ((~ ((0U == vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__sum_next) 
                   & (IData)(vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__subtract2))) 
               & (IData)(vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__negative2));
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__exponent2 
            = vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__exponent1;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__negative2 
            = vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__negative1;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__subtract2 
            = vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__subtract1;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__exponent1 
            = vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large_exponent;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__negative1 
            = (vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large_value 
               >> 0x1fU);
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__subtract1 
            = ((vlSelf->scalar_tb__DOT__dut__DOT__a 
                ^ vlSelf->scalar_tb__DOT__dut__DOT__add_b) 
               >> 0x1fU);
    } else {
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large1 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__small1 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large2 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__small2 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__distance1 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__exponent1 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__exponent2 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__exponent3 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__exponent4 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__negative1 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__negative2 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__negative3 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__negative4 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__subtract1 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__subtract2 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__sum3 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__significand4 = 0U;
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__add__DOT__failed = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__value5 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__error5 = 0U;
    }
    if (vlSelf->scalar_tb__DOT__rst_n) {
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__multiply__DOT__failed 
            = ((0xeU & ((IData)(vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__failed) 
                        << 1U)) | (((IData)(vlSelf->scalar_tb__DOT__dut__DOT__failed) 
                                    | ([&]() {
                            __Vfunc_fp32_invalid__12__value 
                                = vlSelf->scalar_tb__DOT__dut__DOT__a;
                            __Vfunc_fp32_invalid__12__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__12__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__12__Vfuncout))) 
                                   | ([&]() {
                        __Vfunc_fp32_invalid__13__value 
                            = vlSelf->scalar_tb__DOT__dut__DOT__b;
                        __Vfunc_fp32_invalid__13__Vfuncout 
                            = (0xffU == (0xffU & (__Vfunc_fp32_invalid__13__value 
                                                  >> 0x17U)));
                    }(), (IData)(__Vfunc_fp32_invalid__13__Vfuncout))));
        vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__negative 
            = ((0xeU & ((IData)(vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__negative) 
                        << 1U)) | ((vlSelf->scalar_tb__DOT__dut__DOT__a 
                                    ^ vlSelf->scalar_tb__DOT__dut__DOT__b) 
                                   >> 0x1fU));
        if ((1U & (IData)((vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__product2 
                           >> 0x2fU)))) {
            vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__significand3 
                = ((0x7fffffeU & ((IData)((vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__product2 
                                           >> 0x16U)) 
                                  << 1U)) | (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0x3fffffULL 
                                                      & vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__product2))));
            vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__exponent3 
                = (0xfffU & ((IData)(1U) + (IData)(vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__exponent2)));
        } else {
            vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__significand3 
                = ((0x7fffffeU & ((IData)((vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__product2 
                                           >> 0x15U)) 
                                  << 1U)) | (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0x1fffffULL 
                                                      & vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__product2))));
            vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__exponent3 
                = vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__exponent2;
        }
        if ((1U & (((IData)(vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__failed) 
                    >> 2U) | (IData)((vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__packed4 
                                      >> 0x20U))))) {
            vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__value4 = 0U;
            vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__error4 = 1U;
        } else {
            vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__value4 
                = (IData)(vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__packed4);
            vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__error4 = 0U;
        }
        vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__product2 
            = (0xffffffffffffULL & ((QData)((IData)(vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__mantissa_a1)) 
                                    * (QData)((IData)(vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__mantissa_b1))));
        vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__exponent2 
            = (0xfffU & ((IData)(vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__exponent_a1) 
                         + (IData)(vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__exponent_b1)));
        vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__mantissa_a1 
            = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_a, (IData)(vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__shift_a)));
        vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__mantissa_b1 
            = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_b, (IData)(vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__shift_b)));
        vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__exponent_a1 
            = (0xfffU & ((IData)(vlSelf->__VdfgTmp_h7232e3dc__0) 
                         - (IData)(vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__shift_a)));
        vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__exponent_b1 
            = (0xfffU & ((IData)(vlSelf->__VdfgTmp_heaa3740b__0) 
                         - (IData)(vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__shift_b)));
    } else {
        vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__negative = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__mantissa_a1 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__mantissa_b1 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__exponent_a1 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__exponent_b1 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__exponent2 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__exponent3 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__product2 = 0ULL;
        vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__significand3 = 0U;
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__multiply__DOT__failed = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__value4 = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__error4 = 0U;
    }
    if (vlSelf->scalar_tb__DOT__rst_n) {
        vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__done_reg = 0U;
        if ((((1U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__state)) 
              & (4U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__operation))) 
             & (IData)(vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__ready))) {
            vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__active = 1U;
            vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__cycle = 1U;
            vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__pairs 
                = (0x3fffffffffffffULL & ((QData)((IData)(
                                                          (0xffffffU 
                                                           & VL_SHIFTL_III(24,24,6, vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_a, (IData)(vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__shift))))) 
                                          << ((1U & (IData)(vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__input_exponent))
                                               ? 0x1eU
                                               : 0x1dU)));
            vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__remainder = 0U;
            vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__root = 0U;
            vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__exponent 
                = (0xfffU & VL_SHIFTRS_III(12,12,32, (IData)(vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__input_exponent), 1U));
            vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__negative 
                = ((vlSelf->scalar_tb__DOT__dut__DOT__a 
                    >> 0x1fU) & (0U == vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_a));
            vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__failed 
                = (((IData)(vlSelf->scalar_tb__DOT__dut__DOT__failed) 
                    | ([&]() {
                            __Vfunc_fp32_invalid__23__value 
                                = vlSelf->scalar_tb__DOT__dut__DOT__a;
                            __Vfunc_fp32_invalid__23__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__23__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__23__Vfuncout))) 
                   | ((vlSelf->scalar_tb__DOT__dut__DOT__a 
                       >> 0x1fU) & (0U != vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_a)));
        } else if (vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__active) {
            vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__cycle 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__cycle)));
            if ((0x1bU >= (IData)(vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__cycle))) {
                vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__pairs 
                    = (0x3ffffffffffffcULL & (vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__pairs 
                                              << 2U));
                vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__root 
                    = ((0x7fffffeU & (vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__root 
                                      << 1U)) | (IData)(vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__take_bit));
                vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__remainder 
                    = (0x1fffffffU & vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__next_remainder);
            } else if ((0x1cU == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__cycle))) {
                if (((IData)(vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__failed) 
                     | (vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__packed_result 
                        >> 0x20U))) {
                    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_value = 0U;
                    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_failed = 1U;
                } else {
                    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_value 
                        = (IData)(vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__packed_result);
                    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_failed = 0U;
                }
            } else if ((0x21U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__cycle))) {
                vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__value 
                    = vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_value;
                vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__result_failed 
                    = vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_failed;
                vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__active = 0U;
                vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__done_reg = 1U;
            }
        }
    } else {
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__active = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__done_reg = 0U;
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__failed = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__negative = 0U;
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__cycle = 0U;
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__pairs = 0ULL;
        vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__remainder = 0U;
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__root = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__exponent = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__value = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__result_failed = 0U;
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_value = 0U;
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_failed = 0U;
    }
    if (vlSelf->scalar_tb__DOT__rst_n) {
        vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__done_reg = 0U;
        if ((((1U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__state)) 
              & (3U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__operation))) 
             & (IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__ready))) {
            vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__active = 1U;
            vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__cycle = 1U;
            vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__divisor 
                = vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__normalized_b;
            vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__remainder 
                = (0x1ffffffU & (((IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__below_one)
                                   ? (vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__normalized_a 
                                      << 1U) : vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__normalized_a) 
                                 - vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__normalized_b));
            vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__quotient = 1U;
            vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__exponent 
                = (0xfffU & ((((IData)(vlSelf->__VdfgTmp_h7232e3dc__0) 
                               - (IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__shift_a)) 
                              - ((IData)(vlSelf->__VdfgTmp_heaa3740b__0) 
                                 - (IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__shift_b))) 
                             - ((IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__below_one)
                                 ? 1U : 0U)));
            vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__negative 
                = ((vlSelf->scalar_tb__DOT__dut__DOT__a 
                    ^ vlSelf->scalar_tb__DOT__dut__DOT__b) 
                   >> 0x1fU);
            vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__zero 
                = (0U == vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_a);
            vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__failed 
                = ((((IData)(vlSelf->scalar_tb__DOT__dut__DOT__failed) 
                     | ([&]() {
                                __Vfunc_fp32_invalid__18__value 
                                    = vlSelf->scalar_tb__DOT__dut__DOT__a;
                                __Vfunc_fp32_invalid__18__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__18__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__18__Vfuncout))) 
                    | ([&]() {
                            __Vfunc_fp32_invalid__19__value 
                                = vlSelf->scalar_tb__DOT__dut__DOT__b;
                            __Vfunc_fp32_invalid__19__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__19__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__19__Vfuncout))) 
                   | (0U == vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_b));
        } else if (vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__active) {
            vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__cycle 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__cycle)));
            if ((0x1aU >= (IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__cycle))) {
                vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__quotient 
                    = ((0x7fffffeU & (vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__quotient 
                                      << 1U)) | (IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__take_bit));
                vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__remainder 
                    = (0x1ffffffU & vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__next_remainder);
            } else if ((0x1bU == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__cycle))) {
                if (((IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__failed) 
                     | (vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__packed_result 
                        >> 0x20U))) {
                    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__rounded_value = 0U;
                    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__rounded_failed = 1U;
                } else {
                    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__rounded_value 
                        = (IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__packed_result);
                    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__rounded_failed = 0U;
                }
            } else if ((0x21U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__cycle))) {
                vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__value 
                    = vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__rounded_value;
                vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__result_failed 
                    = vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__rounded_failed;
                vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__active = 0U;
                vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__done_reg = 1U;
            }
        }
    } else {
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__active = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__done_reg = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__negative = 0U;
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__failed = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__zero = 0U;
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__cycle = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__divisor = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__remainder = 0U;
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__quotient = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__exponent = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__value = 0U;
        vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__result_failed = 0U;
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__rounded_value = 0U;
        vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__rounded_failed = 0U;
    }
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__failed 
        = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__add__DOT__failed;
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__failed 
        = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__multiply__DOT__failed;
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__cycle 
        = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__cycle;
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__failed 
        = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__failed;
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_value 
        = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_value;
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_failed 
        = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_failed;
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__active 
        = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__active;
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__pairs 
        = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__pairs;
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__root 
        = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__root;
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__cycle 
        = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__cycle;
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__failed 
        = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__failed;
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__rounded_value 
        = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__rounded_value;
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__rounded_failed 
        = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__rounded_failed;
    vlSelf->scalar_tb__DOT__dut__DOT__failed = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__failed;
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__active 
        = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__active;
    vlSelf->scalar_tb__DOT__dut__DOT__state = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__state;
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__quotient 
        = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__quotient;
    vlSelf->scalar_tb__DOT__dut__DOT__operation = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__operation;
    vlSelf->scalar_tb__DOT__dut__DOT__b = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__b;
    vlSelf->scalar_tb__DOT__dut__DOT__a = vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__a;
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__subtract2)
                          ? (vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large2 
                             - vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__small2)
                          : (vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large2 
                             + vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__small2)));
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__left_shift 
        = ((0U == vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2__value 
                            = vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2__part 
                            = vlSelf->__Vfunc_leading_zero32__2__value;
                        vlSelf->__Vfunc_leading_zero32__2__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2__count)));
                            vlSelf->__Vfunc_leading_zero32__2__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2__count)));
                            vlSelf->__Vfunc_leading_zero32__2__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2__count)));
                            vlSelf->__Vfunc_leading_zero32__2__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2__count)));
                            vlSelf->__Vfunc_leading_zero32__2__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__3__significand = vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__significand4;
    __Vfunc_round_pack32__3__exponent = vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__exponent4;
    __Vfunc_round_pack32__3__negative = vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__negative4;
    __Vfunc_round_pack32__3__adjusted = __Vfunc_round_pack32__3__exponent;
    __Vfunc_round_pack32__3__shifted = __Vfunc_round_pack32__3__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__3__exponent))) {
        vlSelf->__Vfunc_shift_jam27__4__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__3__exponent)));
        vlSelf->__Vfunc_shift_jam27__4__value = __Vfunc_round_pack32__3__significand;
        __Vfunc_round_pack32__3__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__4__distance))) {
            vlSelf->__Vfunc_shift_jam27__4__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__4__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__4__distance))) {
            vlSelf->__Vfunc_shift_jam27__4__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__4__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__4__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__4__value, (IData)(vlSelf->__Vfunc_shift_jam27__4__distance)));
            vlSelf->__Vfunc_shift_jam27__4__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__4__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__4__distance)))));
            vlSelf->__Vfunc_shift_jam27__4__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__4__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__4__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__4__discarded))));
        }
        __Vfunc_round_pack32__3__shifted = vlSelf->__Vfunc_shift_jam27__4__Vfuncout;
    }
    __Vfunc_round_pack32__3__rounded = (0x1ffffffU 
                                        & ((0xffffffU 
                                            & (__Vfunc_round_pack32__3__shifted 
                                               >> 3U)) 
                                           + (1U & 
                                              ((__Vfunc_round_pack32__3__shifted 
                                                >> 2U) 
                                               & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xbU 
                                                           & __Vfunc_round_pack32__3__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__3__rounded)) {
        __Vfunc_round_pack32__3__rounded = (0x1ffffffU 
                                            & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__3__rounded, 1U));
        __Vfunc_round_pack32__3__adjusted = (0xfffU 
                                             & ((IData)(1U) 
                                                + (IData)(__Vfunc_round_pack32__3__adjusted)));
    }
    __Vfunc_round_pack32__3__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__3__rounded)) {
        __Vfunc_round_pack32__3__biased = (0xffU & 
                                           ((IData)(0x7fU) 
                                            + (IData)(__Vfunc_round_pack32__3__adjusted)));
    }
    __Vfunc_round_pack32__3__Vfuncout = (((0U == __Vfunc_round_pack32__3__significand) 
                                          | (0U == __Vfunc_round_pack32__3__rounded))
                                          ? ((QData)((IData)(__Vfunc_round_pack32__3__negative)) 
                                             << 0x1fU)
                                          : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__3__adjusted))
                                              ? 0x100000000ULL
                                              : (((QData)((IData)(__Vfunc_round_pack32__3__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__3__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__3__rounded)))))));
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__packed5 
        = __Vfunc_round_pack32__3__Vfuncout;
    __Vfunc_round_pack32__10__significand = vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__10__exponent = vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__10__negative = (1U & ((IData)(vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__negative) 
                                                >> 2U));
    __Vfunc_round_pack32__10__adjusted = __Vfunc_round_pack32__10__exponent;
    __Vfunc_round_pack32__10__shifted = __Vfunc_round_pack32__10__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10__exponent)));
        vlSelf->__Vfunc_shift_jam27__11__value = __Vfunc_round_pack32__10__significand;
        __Vfunc_round_pack32__10__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11__distance))) {
            vlSelf->__Vfunc_shift_jam27__11__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11__distance))) {
            vlSelf->__Vfunc_shift_jam27__11__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11__value, (IData)(vlSelf->__Vfunc_shift_jam27__11__distance)));
            vlSelf->__Vfunc_shift_jam27__11__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11__distance)))));
            vlSelf->__Vfunc_shift_jam27__11__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11__discarded))));
        }
        __Vfunc_round_pack32__10__shifted = vlSelf->__Vfunc_shift_jam27__11__Vfuncout;
    }
    __Vfunc_round_pack32__10__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__10__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__10__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__10__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10__rounded)) {
        __Vfunc_round_pack32__10__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10__rounded, 1U));
        __Vfunc_round_pack32__10__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__10__adjusted)));
    }
    __Vfunc_round_pack32__10__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10__rounded)) {
        __Vfunc_round_pack32__10__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__10__adjusted)));
    }
    __Vfunc_round_pack32__10__Vfuncout = (((0U == __Vfunc_round_pack32__10__significand) 
                                           | (0U == __Vfunc_round_pack32__10__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__10__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__10__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10__rounded)))))));
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__10__Vfuncout;
    scalar_tb__DOT__dut__DOT__square_root__DOT__shifted_remainder 
        = ((vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__remainder 
            << 2U) | (3U & (IData)((vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__pairs 
                                    >> 0x34U))));
    __Vfunc_round_pack32__21__significand = ((0x7fffffeU 
                                              & vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__root) 
                                             | (1U 
                                                & (vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__root 
                                                   | (0U 
                                                      != vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__remainder))));
    __Vfunc_round_pack32__21__exponent = vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__exponent;
    __Vfunc_round_pack32__21__negative = vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__negative;
    __Vfunc_round_pack32__21__adjusted = __Vfunc_round_pack32__21__exponent;
    __Vfunc_round_pack32__21__shifted = __Vfunc_round_pack32__21__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__21__exponent))) {
        vlSelf->__Vfunc_shift_jam27__22__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__21__exponent)));
        vlSelf->__Vfunc_shift_jam27__22__value = __Vfunc_round_pack32__21__significand;
        __Vfunc_round_pack32__21__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__22__distance))) {
            vlSelf->__Vfunc_shift_jam27__22__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__22__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__22__distance))) {
            vlSelf->__Vfunc_shift_jam27__22__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__22__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__22__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__22__value, (IData)(vlSelf->__Vfunc_shift_jam27__22__distance)));
            vlSelf->__Vfunc_shift_jam27__22__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__22__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__22__distance)))));
            vlSelf->__Vfunc_shift_jam27__22__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__22__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__22__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__22__discarded))));
        }
        __Vfunc_round_pack32__21__shifted = vlSelf->__Vfunc_shift_jam27__22__Vfuncout;
    }
    __Vfunc_round_pack32__21__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__21__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__21__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__21__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__21__rounded)) {
        __Vfunc_round_pack32__21__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__21__rounded, 1U));
        __Vfunc_round_pack32__21__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__21__adjusted)));
    }
    __Vfunc_round_pack32__21__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__21__rounded)) {
        __Vfunc_round_pack32__21__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__21__adjusted)));
    }
    __Vfunc_round_pack32__21__Vfuncout = (((0U == __Vfunc_round_pack32__21__significand) 
                                           | (0U == __Vfunc_round_pack32__21__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__21__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__21__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__21__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__21__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__21__rounded)))))));
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__packed_result 
        = __Vfunc_round_pack32__21__Vfuncout;
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__take_bit 
        = ((vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__remainder 
            << 1U) >= vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__divisor);
    __Vfunc_round_pack32__16__significand = ((IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__zero)
                                              ? 0U : 
                                             ((0x7fffffeU 
                                               & vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__quotient) 
                                              | (1U 
                                                 & (vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__quotient 
                                                    | (0U 
                                                       != vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__remainder)))));
    __Vfunc_round_pack32__16__exponent = vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__exponent;
    __Vfunc_round_pack32__16__negative = vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__negative;
    __Vfunc_round_pack32__16__adjusted = __Vfunc_round_pack32__16__exponent;
    __Vfunc_round_pack32__16__shifted = __Vfunc_round_pack32__16__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__16__exponent))) {
        vlSelf->__Vfunc_shift_jam27__17__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__16__exponent)));
        vlSelf->__Vfunc_shift_jam27__17__value = __Vfunc_round_pack32__16__significand;
        __Vfunc_round_pack32__16__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__17__distance))) {
            vlSelf->__Vfunc_shift_jam27__17__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__17__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__17__distance))) {
            vlSelf->__Vfunc_shift_jam27__17__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__17__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__17__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__17__value, (IData)(vlSelf->__Vfunc_shift_jam27__17__distance)));
            vlSelf->__Vfunc_shift_jam27__17__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__17__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__17__distance)))));
            vlSelf->__Vfunc_shift_jam27__17__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__17__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__17__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__17__discarded))));
        }
        __Vfunc_round_pack32__16__shifted = vlSelf->__Vfunc_shift_jam27__17__Vfuncout;
    }
    __Vfunc_round_pack32__16__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__16__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__16__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__16__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__16__rounded)) {
        __Vfunc_round_pack32__16__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__16__rounded, 1U));
        __Vfunc_round_pack32__16__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__16__adjusted)));
    }
    __Vfunc_round_pack32__16__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__16__rounded)) {
        __Vfunc_round_pack32__16__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__16__adjusted)));
    }
    __Vfunc_round_pack32__16__Vfuncout = (((0U == __Vfunc_round_pack32__16__significand) 
                                           | (0U == __Vfunc_round_pack32__16__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__16__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__16__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__16__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__16__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__16__rounded)))))));
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__packed_result 
        = __Vfunc_round_pack32__16__Vfuncout;
    vlSelf->__VdfgTmp_heaa3740b__0 = ((0U == (0xffU 
                                              & (vlSelf->scalar_tb__DOT__dut__DOT__b 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->scalar_tb__DOT__dut__DOT__b 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->scalar_tb__DOT__dut__DOT__add_b = ((1U 
                                                == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__operation))
                                                ? (
                                                   ((~ 
                                                     (vlSelf->scalar_tb__DOT__dut__DOT__b 
                                                      >> 0x1fU)) 
                                                    << 0x1fU) 
                                                   | (0x7fffffffU 
                                                      & vlSelf->scalar_tb__DOT__dut__DOT__b))
                                                : vlSelf->scalar_tb__DOT__dut__DOT__b);
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->scalar_tb__DOT__dut__DOT__b 
                             >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->scalar_tb__DOT__dut__DOT__b));
    vlSelf->__VdfgTmp_h7232e3dc__0 = ((0U == (0xffU 
                                              & (vlSelf->scalar_tb__DOT__dut__DOT__a 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->scalar_tb__DOT__dut__DOT__a 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->scalar_tb__DOT__dut__DOT__a 
                             >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->scalar_tb__DOT__dut__DOT__a));
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__take_bit 
        = (scalar_tb__DOT__dut__DOT__square_root__DOT__shifted_remainder 
           >= (1U | (vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__root 
                     << 2U)));
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__next_remainder 
        = (0x3ffffffU & ((IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__take_bit)
                          ? ((vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__remainder 
                              << 1U) - vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__divisor)
                          : (vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__remainder 
                             << 1U)));
    scalar_tb__DOT__dut__DOT__add__DOT__a_larger = 
        ((0x7fffffffU & vlSelf->scalar_tb__DOT__dut__DOT__a) 
         >= (0x7fffffffU & vlSelf->scalar_tb__DOT__dut__DOT__add_b));
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9__value 
                            = vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__9__part 
                            = vlSelf->__Vfunc_leading_zero32__9__value;
                        vlSelf->__Vfunc_leading_zero32__9__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9__count)));
                            vlSelf->__Vfunc_leading_zero32__9__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9__count)));
                            vlSelf->__Vfunc_leading_zero32__9__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9__count)));
                            vlSelf->__Vfunc_leading_zero32__9__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9__count)));
                            vlSelf->__Vfunc_leading_zero32__9__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__shift_b 
        = ((0U == vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__15__value 
                            = vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__15__part 
                            = vlSelf->__Vfunc_leading_zero32__15__value;
                        vlSelf->__Vfunc_leading_zero32__15__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__15__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__15__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__15__count)));
                            vlSelf->__Vfunc_leading_zero32__15__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__15__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__15__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__15__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__15__count)));
                            vlSelf->__Vfunc_leading_zero32__15__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__15__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__15__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__15__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__15__count)));
                            vlSelf->__Vfunc_leading_zero32__15__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__15__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__15__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__15__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__15__count)));
                            vlSelf->__Vfunc_leading_zero32__15__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__15__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__15__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__15__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__15__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__15__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__15__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__15__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__15__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8__value 
                            = vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8__part 
                            = vlSelf->__Vfunc_leading_zero32__8__value;
                        vlSelf->__Vfunc_leading_zero32__8__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8__count)));
                            vlSelf->__Vfunc_leading_zero32__8__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8__count)));
                            vlSelf->__Vfunc_leading_zero32__8__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8__count)));
                            vlSelf->__Vfunc_leading_zero32__8__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8__count)));
                            vlSelf->__Vfunc_leading_zero32__8__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__shift 
        = ((0U == vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__20__value 
                            = vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__20__part 
                            = vlSelf->__Vfunc_leading_zero32__20__value;
                        vlSelf->__Vfunc_leading_zero32__20__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__20__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__20__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__20__count)));
                            vlSelf->__Vfunc_leading_zero32__20__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__20__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__20__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__20__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__20__count)));
                            vlSelf->__Vfunc_leading_zero32__20__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__20__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__20__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__20__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__20__count)));
                            vlSelf->__Vfunc_leading_zero32__20__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__20__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__20__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__20__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__20__count)));
                            vlSelf->__Vfunc_leading_zero32__20__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__20__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__20__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__20__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__20__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__20__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__20__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__20__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__20__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__shift_a 
        = ((0U == vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14__value 
                            = vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14__part 
                            = vlSelf->__Vfunc_leading_zero32__14__value;
                        vlSelf->__Vfunc_leading_zero32__14__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14__count)));
                            vlSelf->__Vfunc_leading_zero32__14__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14__count)));
                            vlSelf->__Vfunc_leading_zero32__14__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14__count)));
                            vlSelf->__Vfunc_leading_zero32__14__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14__count)));
                            vlSelf->__Vfunc_leading_zero32__14__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__next_remainder 
        = (0x7fffffffU & ((IData)(vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__take_bit)
                           ? (scalar_tb__DOT__dut__DOT__square_root__DOT__shifted_remainder 
                              - (1U | (vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__root 
                                       << 2U))) : scalar_tb__DOT__dut__DOT__square_root__DOT__shifted_remainder));
    if (scalar_tb__DOT__dut__DOT__add__DOT__a_larger) {
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__small_value 
            = vlSelf->scalar_tb__DOT__dut__DOT__add_b;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large_value 
            = vlSelf->scalar_tb__DOT__dut__DOT__a;
    } else {
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__small_value 
            = vlSelf->scalar_tb__DOT__dut__DOT__a;
        vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large_value 
            = vlSelf->scalar_tb__DOT__dut__DOT__add_b;
    }
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__normalized_b 
        = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_b, (IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__shift_b)));
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__input_exponent 
        = (0xfffU & ((IData)(vlSelf->__VdfgTmp_h7232e3dc__0) 
                     - (IData)(vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__shift)));
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__normalized_a 
        = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_a, (IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__shift_a)));
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__below_one 
        = (vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__normalized_a 
           < vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__normalized_b);
}

VL_INLINE_OPT void Vscalar_tb___024root___nba_comb__TOP__0(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__ready 
        = ((~ (IData)(vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__active)) 
           & (IData)(vlSelf->scalar_tb__DOT__rst_n));
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__ready 
        = ((~ (IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__active)) 
           & (IData)(vlSelf->scalar_tb__DOT__rst_n));
    vlSelf->scalar_tb__DOT__in_ready = ((IData)(vlSelf->scalar_tb__DOT__rst_n) 
                                        & (0U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__state)));
    vlSelf->scalar_tb__DOT__out_valid = ((IData)(vlSelf->scalar_tb__DOT__rst_n) 
                                         & (3U == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__state)));
}

void Vscalar_tb___024root___nba_sequent__TOP__1(Vscalar_tb___024root* vlSelf);

void Vscalar_tb___024root___eval_nba(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscalar_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscalar_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscalar_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x1eULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscalar_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vscalar_tb___024root___timing_resume(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_he0636b2e__0.resume("@(negedge scalar_tb.clk)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_he063696b__0.resume("@(posedge scalar_tb.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vscalar_tb___024root___timing_commit(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___timing_commit\n"); );
    // Body
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_he0636b2e__0.commit("@(negedge scalar_tb.clk)");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_he063696b__0.commit("@(posedge scalar_tb.clk)");
    }
}

void Vscalar_tb___024root___eval_triggers__act(Vscalar_tb___024root* vlSelf);

bool Vscalar_tb___024root___eval_phase__act(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vscalar_tb___024root___eval_triggers__act(vlSelf);
    Vscalar_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vscalar_tb___024root___timing_resume(vlSelf);
        Vscalar_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vscalar_tb___024root___eval_phase__nba(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vscalar_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscalar_tb___024root___dump_triggers__nba(Vscalar_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vscalar_tb___024root___dump_triggers__act(Vscalar_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vscalar_tb___024root___eval(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vscalar_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vscalar_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vscalar_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vscalar_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vscalar_tb___024root___eval_debug_assertions(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
