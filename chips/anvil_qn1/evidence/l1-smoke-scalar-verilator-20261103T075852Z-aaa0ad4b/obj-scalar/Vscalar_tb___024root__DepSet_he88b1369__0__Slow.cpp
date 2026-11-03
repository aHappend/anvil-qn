// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscalar_tb.h for the primary calling header

#include "Vscalar_tb__pch.h"
#include "Vscalar_tb___024root.h"

VL_ATTR_COLD void Vscalar_tb___024root___eval_static__TOP(Vscalar_tb___024root* vlSelf);

VL_ATTR_COLD void Vscalar_tb___024root___eval_static(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___eval_static\n"); );
    // Body
    Vscalar_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vscalar_tb___024root___eval_static__TOP(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->scalar_tb__DOT__clk = 0U;
    vlSelf->scalar_tb__DOT__in_valid = 0U;
    vlSelf->scalar_tb__DOT__out_ready = 0U;
    vlSelf->scalar_tb__DOT__in_op = 0U;
    vlSelf->scalar_tb__DOT__in_a = 0U;
    vlSelf->scalar_tb__DOT__in_b = 0U;
    vlSelf->scalar_tb__DOT__in_error = 0U;
    vlSelf->scalar_tb__DOT__count = 0U;
}

VL_ATTR_COLD void Vscalar_tb___024root___eval_final(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscalar_tb___024root___dump_triggers__stl(Vscalar_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vscalar_tb___024root___eval_phase__stl(Vscalar_tb___024root* vlSelf);

VL_ATTR_COLD void Vscalar_tb___024root___eval_settle(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vscalar_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("evidence/l1-smoke-scalar-verilator-20261103T075852Z-aaa0ad4b/scalar_tb.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vscalar_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscalar_tb___024root___dump_triggers__stl(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vscalar_tb___024root___stl_sequent__TOP__0(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___stl_sequent__TOP__0\n"); );
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
    // Body
    vlSelf->__VdfgTmp_heaa3740b__0 = ((0U == (0xffU 
                                              & (vlSelf->scalar_tb__DOT__dut__DOT__b 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->scalar_tb__DOT__dut__DOT__b 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
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
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__subtract2)
                          ? (vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large2 
                             - vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__small2)
                          : (vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large2 
                             + vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__small2)));
    vlSelf->__VdfgTmp_h7232e3dc__0 = ((0U == (0xffU 
                                              & (vlSelf->scalar_tb__DOT__dut__DOT__a 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->scalar_tb__DOT__dut__DOT__a 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__take_bit 
        = ((vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__remainder 
            << 1U) >= vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__divisor);
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
    scalar_tb__DOT__dut__DOT__square_root__DOT__shifted_remainder 
        = ((vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__remainder 
            << 2U) | (3U & (IData)((vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__pairs 
                                    >> 0x34U))));
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
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->scalar_tb__DOT__dut__DOT__a 
                             >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->scalar_tb__DOT__dut__DOT__a));
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__next_remainder 
        = (0x3ffffffU & ((IData)(vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__take_bit)
                          ? ((vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__remainder 
                              << 1U) - vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__divisor)
                          : (vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__remainder 
                             << 1U)));
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__take_bit 
        = (scalar_tb__DOT__dut__DOT__square_root__DOT__shifted_remainder 
           >= (1U | (vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__root 
                     << 2U)));
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

VL_ATTR_COLD void Vscalar_tb___024root___eval_stl(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vscalar_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vscalar_tb___024root___eval_triggers__stl(Vscalar_tb___024root* vlSelf);

VL_ATTR_COLD bool Vscalar_tb___024root___eval_phase__stl(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vscalar_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vscalar_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscalar_tb___024root___dump_triggers__act(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(edge scalar_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge scalar_tb.clk or negedge scalar_tb.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge scalar_tb.clk)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge scalar_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscalar_tb___024root___dump_triggers__nba(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(edge scalar_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge scalar_tb.clk or negedge scalar_tb.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge scalar_tb.clk)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge scalar_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vscalar_tb___024root___ctor_var_reset(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->scalar_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__out_ready = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__in_op = VL_RAND_RESET_I(3);
    vlSelf->scalar_tb__DOT__in_a = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__in_b = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__in_error = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__in_ready = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__operation = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__error_value = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__expected_error = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__cycles = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__expected = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->scalar_tb__DOT__filename);
    vlSelf->scalar_tb__DOT__dut__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->scalar_tb__DOT__dut__DOT__operation = VL_RAND_RESET_I(3);
    vlSelf->scalar_tb__DOT__dut__DOT__elapsed = VL_RAND_RESET_I(6);
    vlSelf->scalar_tb__DOT__dut__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__dut__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__dut__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__dut__DOT__failed = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__result_failed = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__add_b = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large_value = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__small_value = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large_exponent = VL_RAND_RESET_I(12);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large1 = VL_RAND_RESET_I(27);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__small1 = VL_RAND_RESET_I(27);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__large2 = VL_RAND_RESET_I(27);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__small2 = VL_RAND_RESET_I(27);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__distance1 = VL_RAND_RESET_I(12);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__exponent1 = VL_RAND_RESET_I(12);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__exponent2 = VL_RAND_RESET_I(12);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__exponent3 = VL_RAND_RESET_I(12);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__exponent4 = VL_RAND_RESET_I(12);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__negative1 = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__negative2 = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__negative3 = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__negative4 = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__subtract1 = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__subtract2 = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__sum3 = VL_RAND_RESET_I(28);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__significand4 = VL_RAND_RESET_I(27);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__failed = VL_RAND_RESET_I(5);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__value5 = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__error5 = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__sum_next = VL_RAND_RESET_I(28);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__left_shift = VL_RAND_RESET_I(6);
    vlSelf->scalar_tb__DOT__dut__DOT__add__DOT__packed5 = VL_RAND_RESET_Q(33);
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_a = VL_RAND_RESET_I(24);
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__raw_b = VL_RAND_RESET_I(24);
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__shift_a = VL_RAND_RESET_I(6);
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__shift_b = VL_RAND_RESET_I(6);
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__mantissa_a1 = VL_RAND_RESET_I(24);
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__mantissa_b1 = VL_RAND_RESET_I(24);
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__exponent_a1 = VL_RAND_RESET_I(12);
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__exponent_b1 = VL_RAND_RESET_I(12);
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__exponent2 = VL_RAND_RESET_I(12);
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__exponent3 = VL_RAND_RESET_I(12);
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__product2 = VL_RAND_RESET_Q(48);
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__significand3 = VL_RAND_RESET_I(27);
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__negative = VL_RAND_RESET_I(4);
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__failed = VL_RAND_RESET_I(4);
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__value4 = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__error4 = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__multiply__DOT__packed4 = VL_RAND_RESET_Q(33);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__shift_a = VL_RAND_RESET_I(6);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__shift_b = VL_RAND_RESET_I(6);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__normalized_a = VL_RAND_RESET_I(24);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__normalized_b = VL_RAND_RESET_I(24);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__below_one = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__active = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__done_reg = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__negative = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__failed = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__cycle = VL_RAND_RESET_I(6);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__divisor = VL_RAND_RESET_I(24);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__remainder = VL_RAND_RESET_I(25);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__quotient = VL_RAND_RESET_I(27);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__exponent = VL_RAND_RESET_I(12);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__value = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__rounded_value = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__result_failed = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__rounded_failed = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__take_bit = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__next_remainder = VL_RAND_RESET_I(26);
    vlSelf->scalar_tb__DOT__dut__DOT__divide__DOT__packed_result = VL_RAND_RESET_Q(33);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__shift = VL_RAND_RESET_I(6);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__input_exponent = VL_RAND_RESET_I(12);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__active = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__done_reg = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__failed = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__negative = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__cycle = VL_RAND_RESET_I(6);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__pairs = VL_RAND_RESET_Q(54);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__remainder = VL_RAND_RESET_I(29);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__root = VL_RAND_RESET_I(27);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__exponent = VL_RAND_RESET_I(12);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__value = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_value = VL_RAND_RESET_I(32);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__result_failed = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_failed = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__take_bit = VL_RAND_RESET_I(1);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__next_remainder = VL_RAND_RESET_I(31);
    vlSelf->scalar_tb__DOT__dut__DOT__square_root__DOT__packed_result = VL_RAND_RESET_Q(33);
    vlSelf->__VdfgTmp_h7232e3dc__0 = 0;
    vlSelf->__VdfgTmp_heaa3740b__0 = 0;
    vlSelf->__Vfunc_leading_zero32__2__Vfuncout = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_leading_zero32__2__value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_leading_zero32__2__part = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_leading_zero32__2__count = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_shift_jam27__4__Vfuncout = VL_RAND_RESET_I(27);
    vlSelf->__Vfunc_shift_jam27__4__value = VL_RAND_RESET_I(27);
    vlSelf->__Vfunc_shift_jam27__4__distance = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_shift_jam27__4__shifted = VL_RAND_RESET_I(27);
    vlSelf->__Vfunc_shift_jam27__4__discarded = VL_RAND_RESET_I(27);
    vlSelf->__Vfunc_leading_zero32__8__Vfuncout = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_leading_zero32__8__value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_leading_zero32__8__part = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_leading_zero32__8__count = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_leading_zero32__9__Vfuncout = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_leading_zero32__9__value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_leading_zero32__9__part = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_leading_zero32__9__count = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_shift_jam27__11__Vfuncout = VL_RAND_RESET_I(27);
    vlSelf->__Vfunc_shift_jam27__11__value = VL_RAND_RESET_I(27);
    vlSelf->__Vfunc_shift_jam27__11__distance = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_shift_jam27__11__shifted = VL_RAND_RESET_I(27);
    vlSelf->__Vfunc_shift_jam27__11__discarded = VL_RAND_RESET_I(27);
    vlSelf->__Vfunc_leading_zero32__14__Vfuncout = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_leading_zero32__14__value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_leading_zero32__14__part = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_leading_zero32__14__count = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_leading_zero32__15__Vfuncout = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_leading_zero32__15__value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_leading_zero32__15__part = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_leading_zero32__15__count = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_shift_jam27__17__Vfuncout = VL_RAND_RESET_I(27);
    vlSelf->__Vfunc_shift_jam27__17__value = VL_RAND_RESET_I(27);
    vlSelf->__Vfunc_shift_jam27__17__distance = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_shift_jam27__17__shifted = VL_RAND_RESET_I(27);
    vlSelf->__Vfunc_shift_jam27__17__discarded = VL_RAND_RESET_I(27);
    vlSelf->__Vfunc_leading_zero32__20__Vfuncout = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_leading_zero32__20__value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_leading_zero32__20__part = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_leading_zero32__20__count = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_shift_jam27__22__Vfuncout = VL_RAND_RESET_I(27);
    vlSelf->__Vfunc_shift_jam27__22__value = VL_RAND_RESET_I(27);
    vlSelf->__Vfunc_shift_jam27__22__distance = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_shift_jam27__22__shifted = VL_RAND_RESET_I(27);
    vlSelf->__Vfunc_shift_jam27__22__discarded = VL_RAND_RESET_I(27);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__operation = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__failed = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__elapsed = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__add__DOT__failed = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__multiply__DOT__failed = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__active = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__cycle = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__quotient = VL_RAND_RESET_I(27);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__failed = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__rounded_value = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__rounded_failed = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__active = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__cycle = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__pairs = VL_RAND_RESET_Q(54);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__root = VL_RAND_RESET_I(27);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__failed = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_value = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_failed = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__scalar_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__scalar_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
}
