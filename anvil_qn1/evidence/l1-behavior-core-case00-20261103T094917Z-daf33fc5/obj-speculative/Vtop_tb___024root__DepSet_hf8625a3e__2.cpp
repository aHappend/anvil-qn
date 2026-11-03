// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb___024root.h"

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__41(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__41\n"); );
    // Init
    IData/*16:0*/ __Vfunc_round_bf16__5__Vfuncout;
    __Vfunc_round_bf16__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__5__value;
    __Vfunc_round_bf16__5__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__5__rounded;
    __Vfunc_round_bf16__5__rounded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__7__Vfuncout;
    __Vfunc_bf16_invalid__7__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__7__value;
    __Vfunc_bf16_invalid__7__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__8__Vfuncout;
    __Vfunc_bf16_invalid__8__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__8__value;
    __Vfunc_bf16_invalid__8__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__10__Vfuncout;
    __Vfunc_round_bf16__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__10__value;
    __Vfunc_round_bf16__10__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__10__rounded;
    __Vfunc_round_bf16__10__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__15__Vfuncout;
    __Vfunc_round_bf16__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__15__value;
    __Vfunc_round_bf16__15__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__15__rounded;
    __Vfunc_round_bf16__15__rounded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__17__Vfuncout;
    __Vfunc_bf16_invalid__17__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__17__value;
    __Vfunc_bf16_invalid__17__value = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__18__Vfuncout;
    __Vfunc_unsigned32_to_fp32__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__18__value;
    __Vfunc_unsigned32_to_fp32__18__value = 0;
    CData/*5:0*/ __Vfunc_unsigned32_to_fp32__18__shift;
    __Vfunc_unsigned32_to_fp32__18__shift = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__18__normalized;
    __Vfunc_unsigned32_to_fp32__18__normalized = 0;
    QData/*32:0*/ __Vfunc_unsigned32_to_fp32__18__packed_value;
    __Vfunc_unsigned32_to_fp32__18__packed_value = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__19__Vfuncout;
    __Vfunc_leading_zero32__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__19__value;
    __Vfunc_leading_zero32__19__value = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__19__part;
    __Vfunc_leading_zero32__19__part = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__19__count;
    __Vfunc_leading_zero32__19__count = 0;
    QData/*32:0*/ __Vfunc_round_pack32__20__Vfuncout;
    __Vfunc_round_pack32__20__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_round_pack32__20__exponent;
    __Vfunc_round_pack32__20__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__20__significand;
    __Vfunc_round_pack32__20__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__20__shifted;
    __Vfunc_round_pack32__20__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__20__rounded;
    __Vfunc_round_pack32__20__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__20__adjusted;
    __Vfunc_round_pack32__20__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__20__biased;
    __Vfunc_round_pack32__20__biased = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__22__Vfuncout;
    __Vfunc_unsigned32_to_fp32__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__22__value;
    __Vfunc_unsigned32_to_fp32__22__value = 0;
    CData/*5:0*/ __Vfunc_unsigned32_to_fp32__22__shift;
    __Vfunc_unsigned32_to_fp32__22__shift = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__22__normalized;
    __Vfunc_unsigned32_to_fp32__22__normalized = 0;
    QData/*32:0*/ __Vfunc_unsigned32_to_fp32__22__packed_value;
    __Vfunc_unsigned32_to_fp32__22__packed_value = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__23__Vfuncout;
    __Vfunc_leading_zero32__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__23__value;
    __Vfunc_leading_zero32__23__value = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__23__part;
    __Vfunc_leading_zero32__23__part = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__23__count;
    __Vfunc_leading_zero32__23__count = 0;
    QData/*32:0*/ __Vfunc_round_pack32__24__Vfuncout;
    __Vfunc_round_pack32__24__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_round_pack32__24__exponent;
    __Vfunc_round_pack32__24__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__24__significand;
    __Vfunc_round_pack32__24__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__24__shifted;
    __Vfunc_round_pack32__24__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__24__rounded;
    __Vfunc_round_pack32__24__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__24__adjusted;
    __Vfunc_round_pack32__24__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__24__biased;
    __Vfunc_round_pack32__24__biased = 0;
    QData/*32:0*/ __Vfunc_scale32__27__Vfuncout;
    __Vfunc_scale32__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_scale32__27__value;
    __Vfunc_scale32__27__value = 0;
    SData/*11:0*/ __Vfunc_scale32__27__power;
    __Vfunc_scale32__27__power = 0;
    IData/*23:0*/ __Vfunc_scale32__27__raw;
    __Vfunc_scale32__27__raw = 0;
    IData/*23:0*/ __Vfunc_scale32__27__normalized;
    __Vfunc_scale32__27__normalized = 0;
    CData/*5:0*/ __Vfunc_scale32__27__shift;
    __Vfunc_scale32__27__shift = 0;
    SData/*11:0*/ __Vfunc_scale32__27__exponent;
    __Vfunc_scale32__27__exponent = 0;
    IData/*16:0*/ __Vfunc_round_bf16__147__Vfuncout;
    __Vfunc_round_bf16__147__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__147__value;
    __Vfunc_round_bf16__147__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__147__rounded;
    __Vfunc_round_bf16__147__rounded = 0;
    // Body
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__partial 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__partial;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state;
    if ((2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__op = 2U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__b = 0x3f317218U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__a 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__exponent32;
    } else if ((3U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__op = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__b 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__temporary;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__a 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__x;
    } else if ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__op = 2U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__b 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__r;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__a 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__term;
    } else if ((5U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__op = 3U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__b 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order32;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__a 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__temporary;
    } else {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__op = 0U;
        if ((6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__b 
                = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__term;
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__a 
                = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__sum;
        } else {
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__b = 0U;
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__a = 0U;
        }
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__waiting 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__waiting;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__activated 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__activated;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__up 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__up;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__waiting 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__waiting;
    __Vfunc_round_bf16__147__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator;
    __Vfunc_round_bf16__147__rounded = (0x1ffffU & 
                                        ((__Vfunc_round_bf16__147__value 
                                          >> 0x10U) 
                                         + (1U & ((__Vfunc_round_bf16__147__value 
                                                   >> 0xfU) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x17fffU 
                                                              & __Vfunc_round_bf16__147__value)))))));
    __Vfunc_round_bf16__147__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__148__value 
                        = __Vfunc_round_bf16__147__value;
                    vlSelf->__Vfunc_fp32_invalid__148__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__148__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__148__Vfuncout)) 
                                          | (0xffU 
                                             == (0xffU 
                                                 & (__Vfunc_round_bf16__147__rounded 
                                                    >> 7U))))
                                          ? 0x10000U
                                          : (0xffffU 
                                             & __Vfunc_round_bf16__147__rounded));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__147__Vfuncout;
    if ((2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_type 
            = ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued))
                ? 3U : 2U);
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_count 
            = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__active_groups) 
               << 1U);
    } else {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_type 
            = ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued))
                ? ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__w4)
                    ? 1U : 4U) : 0U);
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_count 
            = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__active_lanes) 
               << 1U);
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__load_state 
        = ((2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state)) 
           | (3U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state)));
    if (vlSelf->top_tb__DOT__rst_n) {
        if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 0U;
            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting = 0U;
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__done_reg = 0U;
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__error_reg = 0U;
        } else {
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__done_reg = 0U;
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__error_reg = 0U;
            if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__response_bad) {
                vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 0xaU;
            } else {
                if ((((5U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state)) 
                      & (~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting))) 
                     & (IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition.in_ready))) {
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting = 1U;
                }
                if (((((((((0U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state)) 
                           | (1U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) 
                          | (2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) 
                         | (3U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) 
                        | (4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) 
                       | (5U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) 
                      | (6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) 
                     | (7U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state)))) {
                    if ((0U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                        if ((((0x19U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)) 
                              | (0x1fU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                             & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residual_ready))) {
                            if ((0x19U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                                vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__a_slot = 0U;
                                vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__b_slot = 6U;
                                vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__target_slot = 7U;
                            } else {
                                vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__a_slot = 7U;
                                vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__b_slot = 0xcU;
                                vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__target_slot = 0U;
                            }
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__cursor = 0U;
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting = 0U;
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 1U;
                        }
                    } else if ((1U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                        if (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__residuals__req_valid) 
                             & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__req_ready))) {
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 2U;
                        }
                    } else if ((2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                        if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_valid) {
                            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__a 
                                = (0xffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_data);
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 3U;
                        }
                    } else if ((3U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                        if (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__residuals__req_valid) 
                             & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__req_ready))) {
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 4U;
                        }
                    } else if ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                        if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_valid) {
                            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__b 
                                = (0xffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_data);
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 5U;
                        }
                    } else if ((5U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                        if (((IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition.out_valid) 
                             & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting))) {
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting = 0U;
                            if (((IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition.out_valid) 
                                 & (IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition.__PVT__result_failed))) {
                                vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 0xaU;
                            } else {
                                vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__sum 
                                    = ((IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition.out_valid)
                                        ? vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition.__PVT__data
                                        : 0U);
                                vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 6U;
                            }
                        }
                    } else if ((6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                        if ((0x10000U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__rounded)) {
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 0xaU;
                        } else {
                            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__result 
                                = (0xffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__rounded);
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 7U;
                        }
                    } else if (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__residuals__req_valid) 
                                & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__req_ready))) {
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 8U;
                    }
                } else if ((8U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                    if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_valid) {
                        if ((7U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__cursor)) {
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 9U;
                        } else {
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__cursor 
                                = ((IData)(1U) + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__cursor);
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 1U;
                        }
                    }
                } else if ((9U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__done_reg = 1U;
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 0U;
                } else if ((0xaU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__error_reg = 1U;
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting = 0U;
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 0U;
                } else {
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 0xaU;
                }
            }
        }
    } else {
        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__a_slot = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__b_slot = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__target_slot = 0U;
        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__cursor = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__sum = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__a = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__b = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__result = 0U;
        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__done_reg = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__error_reg = 0U;
    }
    if (vlSelf->top_tb__DOT__rst_n) {
        if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__unit_flush) {
            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0U;
            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting = 0U;
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__failed = 0U;
            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__done_reg = 0U;
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__result = 0U;
        } else {
            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__done_reg = 0U;
            if ((((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic_state) 
                  & (~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting))) 
                 & (IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.in_ready))) {
                vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting = 1U;
            }
            if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__completed) {
                vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting = 0U;
                if (((IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_valid) 
                     & (IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.__PVT__result_failed))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__failed = 1U;
                }
                if (((((((((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
                           | (6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                          | (7U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                         | (8U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                        | (9U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                       | (0xaU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                      | (0xcU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                     | (0xeU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)))) {
                    if ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                        if ((7U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor)) {
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__parent = 7U;
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 5U;
                        } else {
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor 
                                = ((IData)(1U) + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor);
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 3U;
                        }
                    } else if ((6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                        if ((1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__parent)) {
                            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__sum 
                                = vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_data;
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 7U;
                        } else {
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__parent 
                                = (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__parent 
                                   - (IData)(1U));
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 5U;
                        }
                    } else if ((7U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__mean 
                            = vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_data;
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 8U;
                    } else if ((8U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__variance 
                            = vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_data;
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 9U;
                    } else if ((9U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__root 
                            = vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_data;
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0xaU;
                    } else if ((0xaU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor = 0U;
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__reciprocal 
                            = vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_data;
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0xbU;
                    } else if ((0xcU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__product 
                            = vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_data;
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0xdU;
                    } else {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__product 
                            = vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_data;
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0xfU;
                    }
                } else {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__failed = 1U;
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0x11U;
                }
            } else if (((((((((0U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
                              | (1U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                             | (2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                            | (3U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                           | (5U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                          | (0xbU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                         | (0xdU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                        | (0xfU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)))) {
                if ((0U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                    if (((1U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state)) 
                         & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm_start_ready))) {
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor = 0U;
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__failed = 0U;
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting = 0U;
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 1U;
                    }
                } else if ((1U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                    if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__capture) {
                        if ((([&]() {
                                        __Vfunc_bf16_invalid__7__value 
                                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__captured_data;
                                        __Vfunc_bf16_invalid__7__Vfuncout 
                                            = (0xffU 
                                               == (0xffU 
                                                   & ((IData)(__Vfunc_bf16_invalid__7__value) 
                                                      >> 7U)));
                                    }(), (IData)(__Vfunc_bf16_invalid__7__Vfuncout)) 
                             | ([&]() {
                                        __Vfunc_bf16_invalid__8__value 
                                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__captured_gamma;
                                        __Vfunc_bf16_invalid__8__Vfuncout 
                                            = (0xffU 
                                               == (0xffU 
                                                   & ((IData)(__Vfunc_bf16_invalid__8__value) 
                                                      >> 7U)));
                                    }(), (IData)(__Vfunc_bf16_invalid__8__Vfuncout)))) {
                            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__failed = 1U;
                        }
                        if ((7U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor)) {
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor = 0U;
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 3U;
                        } else {
                            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor 
                                = ((IData)(1U) + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor);
                        }
                    }
                } else if ((2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                    if ((7U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor)) {
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor = 0U;
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 3U;
                    } else {
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor 
                            = ((IData)(1U) + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor);
                    }
                } else if ((3U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 4U;
                } else if ((5U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 6U;
                } else if ((0xbU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0xcU;
                } else if ((0xdU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                    if ((0x10000U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__rounded)) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__u = 0U;
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__failed = 1U;
                    } else {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__u 
                            = (0xffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__rounded);
                    }
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0xeU;
                } else {
                    if ((0x10000U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__rounded)) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__result = 0U;
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__failed = 1U;
                    } else {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__result 
                            = (0xffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__rounded);
                    }
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0x10U;
                }
            } else if ((0x10U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                if ((0xaU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) {
                    if ((7U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor)) {
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0x11U;
                    } else {
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor 
                            = ((IData)(1U) + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor);
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0xbU;
                    }
                }
            } else if ((0x11U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__done_reg = 1U;
                vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0U;
            }
        }
    } else {
        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor = 0U;
        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0U;
        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__failed = 0U;
        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__done_reg = 0U;
        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__parent = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__sum = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__mean = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__variance = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__root = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__reciprocal = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__product = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__u = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__result = 0U;
    }
    if (vlSelf->top_tb__DOT__rst_n) {
        if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 0U;
            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting = 0U;
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__failed = 0U;
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__result = 0U;
        } else {
            if ((((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic_state) 
                  & (~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting))) 
                 & (IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.in_ready))) {
                vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting = 1U;
            }
            if (((IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.out_valid) 
                 & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting))) {
                vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting = 0U;
                if (((IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.out_valid) 
                     & (IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.__PVT__result_failed))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__result = 0U;
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__failed = 1U;
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 7U;
                } else if ((3U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__denominator 
                        = ((IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.__PVT__data
                            : 0U);
                    if ((vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x 
                         >> 0x1fU)) {
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 4U;
                    } else {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__numerator 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x;
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 5U;
                    }
                } else if ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__numerator 
                        = ((IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 5U;
                } else if ((5U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__quotient 
                        = ((IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 6U;
                } else {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__result = 0U;
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__failed = 1U;
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 7U;
                }
            } else if ((0U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                if (((9U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
                     & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu_ready))) {
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x 
                        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__gate) 
                           << 0x10U);
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__failed = 0U;
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting = 0U;
                    if (([&]() {
                                __Vfunc_bf16_invalid__17__value 
                                    = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__gate;
                                __Vfunc_bf16_invalid__17__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & ((IData)(__Vfunc_bf16_invalid__17__value) 
                                                    >> 7U)));
                            }(), (IData)(__Vfunc_bf16_invalid__17__Vfuncout))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__result = 0U;
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__failed = 1U;
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 7U;
                    } else {
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 1U;
                    }
                }
            } else if ((1U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exp_ready) {
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 2U;
                }
            } else if ((2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exp_valid) {
                    if (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exp_valid) 
                         & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__failed))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__result = 0U;
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__failed = 1U;
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 7U;
                    } else {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential 
                            = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exp_valid)
                                ? vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result
                                : 0U);
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 3U;
                    }
                }
            } else if ((6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__result 
                    = ((0x10000U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__rounded)
                        ? 0U : (0xffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__rounded));
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__failed 
                    = (1U & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__rounded 
                             >> 0x10U));
                vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 7U;
            } else if ((7U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                if ((0xaU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 0U;
                }
            }
        }
    } else {
        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 0U;
        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__failed = 0U;
        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__denominator = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__numerator = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__quotient = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__result = 0U;
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__cursor 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__cursor;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__gate 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__gate;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state;
    __Vfunc_round_bf16__10__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__sum;
    __Vfunc_round_bf16__10__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__10__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__10__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__10__value)))))));
    __Vfunc_round_bf16__10__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__11__value 
                        = __Vfunc_round_bf16__10__value;
                    vlSelf->__Vfunc_fp32_invalid__11__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__11__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__11__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__10__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__10__rounded));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__10__Vfuncout;
    __Vfunc_round_bf16__5__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__product;
    __Vfunc_round_bf16__5__rounded = (0x1ffffU & ((__Vfunc_round_bf16__5__value 
                                                   >> 0x10U) 
                                                  + 
                                                  (1U 
                                                   & ((__Vfunc_round_bf16__5__value 
                                                       >> 0xfU) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x17fffU 
                                                                  & __Vfunc_round_bf16__5__value)))))));
    __Vfunc_round_bf16__5__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__6__value 
                        = __Vfunc_round_bf16__5__value;
                    vlSelf->__Vfunc_fp32_invalid__6__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__6__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__6__Vfuncout)) 
                                        | (0xffU == 
                                           (0xffU & 
                                            (__Vfunc_round_bf16__5__rounded 
                                             >> 7U))))
                                        ? 0x10000U : 
                                       (0xffffU & __Vfunc_round_bf16__5__rounded));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__5__Vfuncout;
    __Vfunc_round_bf16__15__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__quotient;
    __Vfunc_round_bf16__15__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__15__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__15__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__15__value)))))));
    __Vfunc_round_bf16__15__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__16__value 
                        = __Vfunc_round_bf16__15__value;
                    vlSelf->__Vfunc_fp32_invalid__16__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__16__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__16__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__15__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__15__rounded));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__rounded 
        = __Vfunc_round_bf16__15__Vfuncout;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__projection_wait 
        = ((2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
           | ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
              | (0x10U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))));
    if (vlSelf->top_tb__DOT__rst_n) {
        if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 0U;
            vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__waiting = 0U;
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__failed = 0U;
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result = 0U;
        } else {
            if (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__alu_valid) 
                 & (IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.in_ready))) {
                vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__waiting = 1U;
            }
            if (((IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.out_valid) 
                 & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__waiting))) {
                vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__waiting = 0U;
                if (((IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.out_valid) 
                     & (IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.__PVT__result_failed))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__failed = 1U;
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result = 0U;
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 8U;
                } else if ((2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__temporary 
                        = ((IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 3U;
                } else if ((3U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__r 
                        = ((IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__term = 0x3f800000U;
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__sum = 0x3f800000U;
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order = 1U;
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 4U;
                } else if ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__temporary 
                        = ((IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 5U;
                } else if ((5U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__term 
                        = ((IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 6U;
                } else if ((6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__sum 
                        = ((IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    if ((6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order))) {
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 7U;
                    } else {
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order)));
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 4U;
                    }
                } else {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__failed = 1U;
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result = 0U;
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 8U;
                }
            } else if ((0U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
                if (((1U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state)) 
                     & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exp_ready))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__x 
                        = (0x80000000U | (0x7fffffffU 
                                          & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x));
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent = 0U;
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__failed = 0U;
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__waiting = 0U;
                    if (([&]() {
                                vlSelf->__Vfunc_fp32_invalid__32__value 
                                    = (0x80000000U 
                                       | (0x7fffffffU 
                                          & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x));
                                vlSelf->__Vfunc_fp32_invalid__32__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (vlSelf->__Vfunc_fp32_invalid__32__value 
                                                    >> 0x17U)));
                            }(), (IData)(vlSelf->__Vfunc_fp32_invalid__32__Vfuncout))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__failed = 1U;
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result = 0U;
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 8U;
                    } else if ((0U == (0x7fffffffU 
                                       & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result = 0x3f800000U;
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 8U;
                    } else if ((0x41800000U < (0x7fffffffU 
                                               & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result = 0U;
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 8U;
                    } else {
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__remainder 
                            = ((0x3f317218U > (0x7fffffffU 
                                               & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x))
                                ? 0U : (0x1fffffffU 
                                        & VL_SHIFTL_III(29,29,8, 
                                                        (0x800000U 
                                                         | (0x7fffffU 
                                                            & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x)), 
                                                        (0xffU 
                                                         & ((vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x 
                                                             >> 0x17U) 
                                                            - (IData)(0x7eU))))));
                        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 1U;
                    }
                }
            } else if ((1U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
                if ((0xb17218U <= vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__remainder)) {
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__remainder 
                        = (0x1fffffffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__remainder 
                                          - (IData)(0xb17218U)));
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent)));
                } else {
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 2U;
                }
            } else if ((7U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
                if ((1U & (IData)((vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__scaled 
                                   >> 0x20U)))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result = 0U;
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__failed = 1U;
                } else {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result 
                        = (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__scaled);
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__failed = 0U;
                }
                vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 8U;
            } else if ((8U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
                if ((2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                    vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 0U;
                }
            }
        }
    } else {
        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__waiting = 0U;
        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__failed = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__x = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__r = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__term = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__sum = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__temporary = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result = 0U;
        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__remainder = 0U;
        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent = 0U;
        vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order = 0U;
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__remainder 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__remainder;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent 
        = vlSelf->__Vdly__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic_state 
        = ((3U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state)) 
           | ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state)) 
              | (5U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))));
    __Vfunc_unsigned32_to_fp32__22__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order;
    __Vfunc_leading_zero32__23__value = __Vfunc_unsigned32_to_fp32__22__value;
    __Vfunc_leading_zero32__23__part = __Vfunc_leading_zero32__23__value;
    __Vfunc_leading_zero32__23__count = 0U;
    if ((0U == (__Vfunc_leading_zero32__23__part >> 0x10U))) {
        __Vfunc_leading_zero32__23__count = (0x3fU 
                                             & ((IData)(0x10U) 
                                                + (IData)(__Vfunc_leading_zero32__23__count)));
        __Vfunc_leading_zero32__23__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__23__part, 0x10U);
    }
    if ((0U == (__Vfunc_leading_zero32__23__part >> 0x18U))) {
        __Vfunc_leading_zero32__23__count = (0x3fU 
                                             & ((IData)(8U) 
                                                + (IData)(__Vfunc_leading_zero32__23__count)));
        __Vfunc_leading_zero32__23__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__23__part, 8U);
    }
    if ((0U == (__Vfunc_leading_zero32__23__part >> 0x1cU))) {
        __Vfunc_leading_zero32__23__count = (0x3fU 
                                             & ((IData)(4U) 
                                                + (IData)(__Vfunc_leading_zero32__23__count)));
        __Vfunc_leading_zero32__23__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__23__part, 4U);
    }
    if ((0U == (__Vfunc_leading_zero32__23__part >> 0x1eU))) {
        __Vfunc_leading_zero32__23__count = (0x3fU 
                                             & ((IData)(2U) 
                                                + (IData)(__Vfunc_leading_zero32__23__count)));
        __Vfunc_leading_zero32__23__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__23__part, 2U);
    }
    if ((1U & (~ (__Vfunc_leading_zero32__23__part 
                  >> 0x1fU)))) {
        __Vfunc_leading_zero32__23__count = (0x3fU 
                                             & ((IData)(1U) 
                                                + (IData)(__Vfunc_leading_zero32__23__count)));
    }
    __Vfunc_leading_zero32__23__Vfuncout = ((0U == __Vfunc_leading_zero32__23__value)
                                             ? 0x20U
                                             : (IData)(__Vfunc_leading_zero32__23__count));
    __Vfunc_unsigned32_to_fp32__22__shift = __Vfunc_leading_zero32__23__Vfuncout;
    __Vfunc_unsigned32_to_fp32__22__normalized = VL_SHIFTL_III(32,32,6, __Vfunc_unsigned32_to_fp32__22__value, (IData)(__Vfunc_unsigned32_to_fp32__22__shift));
    __Vfunc_round_pack32__24__significand = ((0x7fffffeU 
                                              & (__Vfunc_unsigned32_to_fp32__22__normalized 
                                                 >> 5U)) 
                                             | (0U 
                                                != 
                                                (0x3fU 
                                                 & __Vfunc_unsigned32_to_fp32__22__normalized)));
    __Vfunc_round_pack32__24__exponent = (0xfffU & 
                                          ((IData)(0x1fU) 
                                           - (IData)(__Vfunc_unsigned32_to_fp32__22__shift)));
    __Vfunc_round_pack32__24__adjusted = __Vfunc_round_pack32__24__exponent;
    __Vfunc_round_pack32__24__shifted = __Vfunc_round_pack32__24__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__24__exponent))) {
        vlSelf->__Vfunc_shift_jam27__25__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__24__exponent)));
        vlSelf->__Vfunc_shift_jam27__25__value = __Vfunc_round_pack32__24__significand;
        __Vfunc_round_pack32__24__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__25__distance))) {
            vlSelf->__Vfunc_shift_jam27__25__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__25__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__25__distance))) {
            vlSelf->__Vfunc_shift_jam27__25__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__25__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__25__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__25__value, (IData)(vlSelf->__Vfunc_shift_jam27__25__distance)));
            vlSelf->__Vfunc_shift_jam27__25__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__25__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__25__distance)))));
            vlSelf->__Vfunc_shift_jam27__25__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__25__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__25__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__25__discarded))));
        }
        __Vfunc_round_pack32__24__shifted = vlSelf->__Vfunc_shift_jam27__25__Vfuncout;
    }
    __Vfunc_round_pack32__24__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__24__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__24__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__24__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__24__rounded)) {
        __Vfunc_round_pack32__24__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__24__rounded, 1U));
        __Vfunc_round_pack32__24__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__24__adjusted)));
    }
    __Vfunc_round_pack32__24__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__24__rounded)) {
        __Vfunc_round_pack32__24__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__24__adjusted)));
    }
    __Vfunc_round_pack32__24__Vfuncout = (((0U == __Vfunc_round_pack32__24__significand) 
                                           | (0U == __Vfunc_round_pack32__24__rounded))
                                           ? 0ULL : 
                                          (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__24__adjusted))
                                            ? 0x100000000ULL
                                            : (QData)((IData)(
                                                              (((IData)(__Vfunc_round_pack32__24__biased) 
                                                                << 0x17U) 
                                                               | (0x7fffffU 
                                                                  & __Vfunc_round_pack32__24__rounded))))));
    __Vfunc_unsigned32_to_fp32__22__packed_value = __Vfunc_round_pack32__24__Vfuncout;
    __Vfunc_unsigned32_to_fp32__22__Vfuncout = ((0U 
                                                 == __Vfunc_unsigned32_to_fp32__22__value)
                                                 ? 0U
                                                 : (IData)(__Vfunc_unsigned32_to_fp32__22__packed_value));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order32 
        = __Vfunc_unsigned32_to_fp32__22__Vfuncout;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__clamped 
        = ((vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__sum 
            >> 0x1fU) ? 0U : (([&]() {
                    vlSelf->__Vfunc_fp32_greater__26__a 
                        = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__sum;
                    vlSelf->__Vfunc_fp32_greater__26__Vfuncout 
                        = (1U & ((vlSelf->__Vfunc_fp32_greater__26__a 
                                  >> 0x1fU) ? (~ (vlSelf->__Vfunc_fp32_greater__26__a 
                                                  >> 0x1fU))
                                  : ((vlSelf->__Vfunc_fp32_greater__26__a 
                                      >> 0x1fU) ? (0x3f800000U 
                                                   > 
                                                   (0x7fffffffU 
                                                    & vlSelf->__Vfunc_fp32_greater__26__a))
                                      : (0x3f800000U 
                                         < (0x7fffffffU 
                                            & vlSelf->__Vfunc_fp32_greater__26__a)))));
                }(), (IData)(vlSelf->__Vfunc_fp32_greater__26__Vfuncout))
                               ? 0x3f800000U : vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__sum));
    __Vfunc_unsigned32_to_fp32__18__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent;
    __Vfunc_leading_zero32__19__value = __Vfunc_unsigned32_to_fp32__18__value;
    __Vfunc_leading_zero32__19__part = __Vfunc_leading_zero32__19__value;
    __Vfunc_leading_zero32__19__count = 0U;
    if ((0U == (__Vfunc_leading_zero32__19__part >> 0x10U))) {
        __Vfunc_leading_zero32__19__count = (0x3fU 
                                             & ((IData)(0x10U) 
                                                + (IData)(__Vfunc_leading_zero32__19__count)));
        __Vfunc_leading_zero32__19__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__19__part, 0x10U);
    }
    if ((0U == (__Vfunc_leading_zero32__19__part >> 0x18U))) {
        __Vfunc_leading_zero32__19__count = (0x3fU 
                                             & ((IData)(8U) 
                                                + (IData)(__Vfunc_leading_zero32__19__count)));
        __Vfunc_leading_zero32__19__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__19__part, 8U);
    }
    if ((0U == (__Vfunc_leading_zero32__19__part >> 0x1cU))) {
        __Vfunc_leading_zero32__19__count = (0x3fU 
                                             & ((IData)(4U) 
                                                + (IData)(__Vfunc_leading_zero32__19__count)));
        __Vfunc_leading_zero32__19__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__19__part, 4U);
    }
    if ((0U == (__Vfunc_leading_zero32__19__part >> 0x1eU))) {
        __Vfunc_leading_zero32__19__count = (0x3fU 
                                             & ((IData)(2U) 
                                                + (IData)(__Vfunc_leading_zero32__19__count)));
        __Vfunc_leading_zero32__19__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__19__part, 2U);
    }
    if ((1U & (~ (__Vfunc_leading_zero32__19__part 
                  >> 0x1fU)))) {
        __Vfunc_leading_zero32__19__count = (0x3fU 
                                             & ((IData)(1U) 
                                                + (IData)(__Vfunc_leading_zero32__19__count)));
    }
    __Vfunc_leading_zero32__19__Vfuncout = ((0U == __Vfunc_leading_zero32__19__value)
                                             ? 0x20U
                                             : (IData)(__Vfunc_leading_zero32__19__count));
    __Vfunc_unsigned32_to_fp32__18__shift = __Vfunc_leading_zero32__19__Vfuncout;
    __Vfunc_unsigned32_to_fp32__18__normalized = VL_SHIFTL_III(32,32,6, __Vfunc_unsigned32_to_fp32__18__value, (IData)(__Vfunc_unsigned32_to_fp32__18__shift));
    __Vfunc_round_pack32__20__significand = ((0x7fffffeU 
                                              & (__Vfunc_unsigned32_to_fp32__18__normalized 
                                                 >> 5U)) 
                                             | (0U 
                                                != 
                                                (0x3fU 
                                                 & __Vfunc_unsigned32_to_fp32__18__normalized)));
    __Vfunc_round_pack32__20__exponent = (0xfffU & 
                                          ((IData)(0x1fU) 
                                           - (IData)(__Vfunc_unsigned32_to_fp32__18__shift)));
    __Vfunc_round_pack32__20__adjusted = __Vfunc_round_pack32__20__exponent;
    __Vfunc_round_pack32__20__shifted = __Vfunc_round_pack32__20__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__20__exponent))) {
        vlSelf->__Vfunc_shift_jam27__21__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__20__exponent)));
        vlSelf->__Vfunc_shift_jam27__21__value = __Vfunc_round_pack32__20__significand;
        __Vfunc_round_pack32__20__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__21__distance))) {
            vlSelf->__Vfunc_shift_jam27__21__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__21__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__21__distance))) {
            vlSelf->__Vfunc_shift_jam27__21__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__21__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__21__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__21__value, (IData)(vlSelf->__Vfunc_shift_jam27__21__distance)));
            vlSelf->__Vfunc_shift_jam27__21__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__21__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__21__distance)))));
            vlSelf->__Vfunc_shift_jam27__21__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__21__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__21__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__21__discarded))));
        }
        __Vfunc_round_pack32__20__shifted = vlSelf->__Vfunc_shift_jam27__21__Vfuncout;
    }
    __Vfunc_round_pack32__20__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__20__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__20__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__20__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__20__rounded)) {
        __Vfunc_round_pack32__20__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__20__rounded, 1U));
        __Vfunc_round_pack32__20__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__20__adjusted)));
    }
    __Vfunc_round_pack32__20__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__20__rounded)) {
        __Vfunc_round_pack32__20__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__20__adjusted)));
    }
    __Vfunc_round_pack32__20__Vfuncout = (((0U == __Vfunc_round_pack32__20__significand) 
                                           | (0U == __Vfunc_round_pack32__20__rounded))
                                           ? 0ULL : 
                                          (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__20__adjusted))
                                            ? 0x100000000ULL
                                            : (QData)((IData)(
                                                              (((IData)(__Vfunc_round_pack32__20__biased) 
                                                                << 0x17U) 
                                                               | (0x7fffffU 
                                                                  & __Vfunc_round_pack32__20__rounded))))));
    __Vfunc_unsigned32_to_fp32__18__packed_value = __Vfunc_round_pack32__20__Vfuncout;
    __Vfunc_unsigned32_to_fp32__18__Vfuncout = ((0U 
                                                 == __Vfunc_unsigned32_to_fp32__18__value)
                                                 ? 0U
                                                 : (IData)(__Vfunc_unsigned32_to_fp32__18__packed_value));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent32 
        = __Vfunc_unsigned32_to_fp32__18__Vfuncout;
    __Vfunc_scale32__27__power = (0xfffU & (- (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent)));
    __Vfunc_scale32__27__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__clamped;
    __Vfunc_scale32__27__raw = (((0U != (0xffU & (__Vfunc_scale32__27__value 
                                                  >> 0x17U))) 
                                 << 0x17U) | (0x7fffffU 
                                              & __Vfunc_scale32__27__value));
    __Vfunc_scale32__27__shift = ((0U == __Vfunc_scale32__27__raw)
                                   ? 0U : (0x3fU & 
                                           (([&]() {
                        vlSelf->__Vfunc_leading_zero32__28__value 
                            = __Vfunc_scale32__27__raw;
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
    __Vfunc_scale32__27__normalized = (0xffffffU & 
                                       VL_SHIFTL_III(24,24,6, __Vfunc_scale32__27__raw, (IData)(__Vfunc_scale32__27__shift)));
    __Vfunc_scale32__27__exponent = (0xfffU & ((((0U 
                                                  == 
                                                  (0xffU 
                                                   & (__Vfunc_scale32__27__value 
                                                      >> 0x17U)))
                                                  ? 0xf82U
                                                  : 
                                                 ((0xffU 
                                                   & (__Vfunc_scale32__27__value 
                                                      >> 0x17U)) 
                                                  - (IData)(0x7fU))) 
                                                - (IData)(__Vfunc_scale32__27__shift)) 
                                               + (IData)(__Vfunc_scale32__27__power)));
    __Vfunc_scale32__27__Vfuncout = (([&]() {
                vlSelf->__Vfunc_fp32_invalid__29__value 
                    = __Vfunc_scale32__27__value;
                vlSelf->__Vfunc_fp32_invalid__29__Vfuncout 
                    = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__29__value 
                                          >> 0x17U)));
            }(), (IData)(vlSelf->__Vfunc_fp32_invalid__29__Vfuncout))
                                      ? 0x100000000ULL
                                      : ([&]() {
                vlSelf->__Vfunc_round_pack32__30__significand 
                    = (__Vfunc_scale32__27__normalized 
                       << 3U);
                vlSelf->__Vfunc_round_pack32__30__exponent 
                    = __Vfunc_scale32__27__exponent;
                vlSelf->__Vfunc_round_pack32__30__negative 
                    = (__Vfunc_scale32__27__value >> 0x1fU);
                vlSelf->__Vfunc_round_pack32__30__adjusted 
                    = vlSelf->__Vfunc_round_pack32__30__exponent;
                vlSelf->__Vfunc_round_pack32__30__shifted 
                    = vlSelf->__Vfunc_round_pack32__30__significand;
                if (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->__Vfunc_round_pack32__30__exponent))) {
                    vlSelf->__Vfunc_shift_jam27__31__distance 
                        = (0xfffU & ((IData)(0xf82U) 
                                     - (IData)(vlSelf->__Vfunc_round_pack32__30__exponent)));
                    vlSelf->__Vfunc_shift_jam27__31__value 
                        = vlSelf->__Vfunc_round_pack32__30__significand;
                    vlSelf->__Vfunc_round_pack32__30__adjusted = 0xf82U;
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
                    vlSelf->__Vfunc_round_pack32__30__shifted 
                        = vlSelf->__Vfunc_shift_jam27__31__Vfuncout;
                }
                vlSelf->__Vfunc_round_pack32__30__rounded 
                    = (0x1ffffffU & ((0xffffffU & (vlSelf->__Vfunc_round_pack32__30__shifted 
                                                   >> 3U)) 
                                     + (1U & ((vlSelf->__Vfunc_round_pack32__30__shifted 
                                               >> 2U) 
                                              & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xbU 
                                                          & vlSelf->__Vfunc_round_pack32__30__shifted)))))));
                if ((0x1000000U & vlSelf->__Vfunc_round_pack32__30__rounded)) {
                    vlSelf->__Vfunc_round_pack32__30__rounded 
                        = (0x1ffffffU & VL_SHIFTR_III(25,25,32, vlSelf->__Vfunc_round_pack32__30__rounded, 1U));
                    vlSelf->__Vfunc_round_pack32__30__adjusted 
                        = (0xfffU & ((IData)(1U) + (IData)(vlSelf->__Vfunc_round_pack32__30__adjusted)));
                }
                vlSelf->__Vfunc_round_pack32__30__biased = 0U;
                if ((0x800000U & vlSelf->__Vfunc_round_pack32__30__rounded)) {
                    vlSelf->__Vfunc_round_pack32__30__biased 
                        = (0xffU & ((IData)(0x7fU) 
                                    + (IData)(vlSelf->__Vfunc_round_pack32__30__adjusted)));
                }
                vlSelf->__Vfunc_round_pack32__30__Vfuncout 
                    = (((0U == vlSelf->__Vfunc_round_pack32__30__significand) 
                        | (0U == vlSelf->__Vfunc_round_pack32__30__rounded))
                        ? ((QData)((IData)(vlSelf->__Vfunc_round_pack32__30__negative)) 
                           << 0x1fU) : (VL_LTS_III(12, 0x7fU, (IData)(vlSelf->__Vfunc_round_pack32__30__adjusted))
                                         ? 0x100000000ULL
                                         : (((QData)((IData)(vlSelf->__Vfunc_round_pack32__30__negative)) 
                                             << 0x1fU) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->__Vfunc_round_pack32__30__biased) 
                                                                << 0x17U) 
                                                               | (0x7fffffU 
                                                                  & vlSelf->__Vfunc_round_pack32__30__rounded)))))));
            }(), vlSelf->__Vfunc_round_pack32__30__Vfuncout));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__scaled 
        = __Vfunc_scale32__27__Vfuncout;
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__43(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__43\n"); );
    // Init
    QData/*63:0*/ __Vfunc_event_add64__7444__Vfuncout;
    __Vfunc_event_add64__7444__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7444__value;
    __Vfunc_event_add64__7444__value = 0;
    IData/*16:0*/ __Vfunc_event_add64__7444__low;
    __Vfunc_event_add64__7444__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7444__carry1;
    __Vfunc_event_add64__7444__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7444__carry2;
    __Vfunc_event_add64__7444__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7444__carry3;
    __Vfunc_event_add64__7444__carry3 = 0;
    CData/*3:0*/ __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v0;
    __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v0;
    __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v1;
    __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v1 = 0;
    IData/*31:0*/ __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v1;
    __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v1;
    __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v1 = 0;
    CData/*3:0*/ __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v2;
    __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v2 = 0;
    IData/*31:0*/ __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v2;
    __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v2 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v2;
    __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v2 = 0;
    CData/*2:0*/ __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw__v0;
    __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw__v0 = 0;
    SData/*15:0*/ __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw__v0;
    __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw__v0;
    __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma__v0;
    __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma__v0 = 0;
    SData/*15:0*/ __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma__v0;
    __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma__v0;
    __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v0;
    __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v0;
    __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v1;
    __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v1 = 0;
    IData/*31:0*/ __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v1;
    __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v1;
    __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v1 = 0;
    // Body
    __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v0 = 0U;
    __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v1 = 0U;
    __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v2 = 0U;
    __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v0 = 0U;
    __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v1 = 0U;
    __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma__v0 = 0U;
    __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw__v0 = 0U;
    if (vlSelf->top_tb__DOT__rst_n) {
        vlSelf->top_tb__DOT__cycle = ((IData)(1U) + vlSelf->top_tb__DOT__cycle);
        if (VL_UNLIKELY(((~ (IData)(vlSelf->top_tb__DOT__negative_test)) 
                         & (((IData)(vlSelf->top_tb__DOT__error) 
                             | (IData)(vlSelf->top_tb__DOT__cancel_done)) 
                            | ((IData)(vlSelf->top_tb__DOT__think_active) 
                               != (IData)(vlSelf->top_tb__DOT__configured_mode)))))) {
            VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:112: Assertion failed in %Ntop_tb: TOP_UNEXPECTED_STATUS case=%0d cycle=%0d error=%b cancel=%b think=%b draft=%b\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->top_tb__DOT__active_case,
                      32,vlSelf->top_tb__DOT__cycle,
                      1,(IData)(vlSelf->top_tb__DOT__error),
                      1,vlSelf->top_tb__DOT__cancel_done,
                      1,(IData)(vlSelf->top_tb__DOT__think_active),
                      1,vlSelf->top_tb__DOT__draft_ready);
            VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 112, "");
        }
        if (((IData)(vlSelf->top_tb__DOT__negative_test) 
             & (IData)(vlSelf->top_tb__DOT__error))) {
            vlSelf->top_tb__DOT__fault_seen = ((IData)(1U) 
                                               + vlSelf->top_tb__DOT__fault_seen);
        }
        if ((((~ (IData)(vlSelf->top_tb__DOT__negative_test)) 
              & (IData)(vlSelf->top_tb__DOT__token_valid)) 
             & (IData)(vlSelf->top_tb__DOT__token_ready))) {
            if (VL_UNLIKELY(((0U != vlSelf->top_tb__DOT__tx_token_seen) 
                             | (IData)(vlSelf->top_tb__DOT__draft_ready)))) {
                VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:115: Assertion failed in %Ntop_tb: SPEC_TOKEN_ORDER\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 115, "");
            }
            vlSelf->top_tb__DOT__tx_token_seen = 1U;
        }
        if (((IData)(vlSelf->top_tb__DOT__draft_valid) 
             & (IData)(vlSelf->top_tb__DOT__draft_ready))) {
            if (VL_UNLIKELY((1U & ((((((~ (IData)((0U 
                                                   != vlSelf->top_tb__DOT__tx_token_seen))) 
                                       | (1U != vlSelf->top_tb__DOT__host_phases
                                          [(7U & vlSelf->top_tb__DOT__active_tx)])) 
                                      | (0U != vlSelf->top_tb__DOT__draft_seen)) 
                                     | (8U != vlSelf->top_tb__DOT__logit_count)) 
                                    | (0U != vlSelf->top_tb__DOT__queued)) 
                                   | (0xfU == ((5U 
                                                >= 
                                                (7U 
                                                 & vlSelf->top_tb__DOT__active_tx))
                                                ? vlSelf->top_tb__DOT__host_positions
                                               [(7U 
                                                 & vlSelf->top_tb__DOT__active_tx)]
                                                : 0U)))))) {
                VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:121: Assertion failed in %Ntop_tb: SPEC_DRAFT_ORDER\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 121, "");
            }
            vlSelf->top_tb__DOT__draft_seen = 1U;
        }
        if (VL_UNLIKELY(((IData)(vlSelf->top_tb__DOT__held_request) 
                         & ((~ (IData)(vlSelf->top_tb__DOT__mem_req_valid)) 
                            | (0U != ((((((((IData)(vlSelf->top_tb__DOT__mem_req_tag) 
                                            ^ vlSelf->top_tb__DOT__saved_request[0U]) 
                                           | ((IData)(
                                                      (vlSelf->top_tb__DOT__mem_req_tag 
                                                       >> 0x20U)) 
                                              ^ vlSelf->top_tb__DOT__saved_request[1U])) 
                                          | (vlSelf->top_tb__DOT__mem_req_wdata 
                                             ^ vlSelf->top_tb__DOT__saved_request[2U])) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->top_tb__DOT__mem_req_row)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->top_tb__DOT__mem_req_col)))) 
                                            ^ vlSelf->top_tb__DOT__saved_request[3U])) 
                                        | ((IData)(
                                                   ((((QData)((IData)(vlSelf->top_tb__DOT__mem_req_row)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->top_tb__DOT__mem_req_col))) 
                                                    >> 0x20U)) 
                                           ^ vlSelf->top_tb__DOT__saved_request[4U])) 
                                       | (((vlSelf->top_tb__DOT__mem_req_layer 
                                            << 3U) 
                                           | (IData)(vlSelf->top_tb__DOT__mem_req_proj)) 
                                          ^ vlSelf->top_tb__DOT__saved_request[5U])) 
                                      | ((((IData)(vlSelf->top_tb__DOT__mem_req_write) 
                                           << 7U) | 
                                          (((IData)(vlSelf->top_tb__DOT__mem_req_kind) 
                                            << 3U) 
                                           | (vlSelf->top_tb__DOT__mem_req_layer 
                                              >> 0x1dU))) 
                                         ^ vlSelf->top_tb__DOT__saved_request[6U]))))))) {
            VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:127: Assertion failed in %Ntop_tb: TOP_REQUEST_STALL\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 127, "");
        }
        if (VL_UNLIKELY(((IData)(vlSelf->top_tb__DOT__held_logit) 
                         & ((~ (IData)(vlSelf->top_tb__DOT__logit_valid)) 
                            | ((((QData)((IData)(vlSelf->top_tb__DOT__logit_index)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->top_tb__DOT__logit_data))) 
                               != vlSelf->top_tb__DOT__saved_logit))))) {
            VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:129: Assertion failed in %Ntop_tb: TOP_LOGIT_STALL\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 129, "");
        }
        if (VL_UNLIKELY(((IData)(vlSelf->top_tb__DOT__held_commit) 
                         & ((~ (IData)(vlSelf->top_tb__DOT__commit_valid)) 
                            | (0U != (((((((vlSelf->top_tb__DOT__commit_pos 
                                            ^ vlSelf->top_tb__DOT__saved_commit[0U]) 
                                           | (vlSelf->top_tb__DOT__commit_tokens[0U] 
                                              ^ vlSelf->top_tb__DOT__saved_commit[1U])) 
                                          | (vlSelf->top_tb__DOT__commit_tokens[1U] 
                                             ^ vlSelf->top_tb__DOT__saved_commit[2U])) 
                                         | (vlSelf->top_tb__DOT__commit_tokens[2U] 
                                            ^ vlSelf->top_tb__DOT__saved_commit[3U])) 
                                        | (vlSelf->top_tb__DOT__commit_tokens[3U] 
                                           ^ vlSelf->top_tb__DOT__saved_commit[4U])) 
                                       | (vlSelf->top_tb__DOT__commit_tokens[4U] 
                                          ^ vlSelf->top_tb__DOT__saved_commit[5U])) 
                                      | ((IData)(vlSelf->top_tb__DOT__commit_count) 
                                         ^ vlSelf->top_tb__DOT__saved_commit[6U]))))))) {
            VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:132: Assertion failed in %Ntop_tb: TOP_COMMIT_STALL\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 132, "");
        }
        vlSelf->top_tb__DOT__held_request = ((IData)(vlSelf->top_tb__DOT__mem_req_valid) 
                                             & (~ (IData)(vlSelf->top_tb__DOT__mem_req_ready)));
        vlSelf->top_tb__DOT__saved_request[0U] = (IData)(vlSelf->top_tb__DOT__mem_req_tag);
        vlSelf->top_tb__DOT__saved_request[1U] = (IData)(
                                                         (vlSelf->top_tb__DOT__mem_req_tag 
                                                          >> 0x20U));
        vlSelf->top_tb__DOT__saved_request[2U] = vlSelf->top_tb__DOT__mem_req_wdata;
        vlSelf->top_tb__DOT__saved_request[3U] = (IData)(
                                                         (((QData)((IData)(vlSelf->top_tb__DOT__mem_req_row)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->top_tb__DOT__mem_req_col))));
        vlSelf->top_tb__DOT__saved_request[4U] = (IData)(
                                                         ((((QData)((IData)(vlSelf->top_tb__DOT__mem_req_row)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->top_tb__DOT__mem_req_col))) 
                                                          >> 0x20U));
        vlSelf->top_tb__DOT__saved_request[5U] = ((vlSelf->top_tb__DOT__mem_req_layer 
                                                   << 3U) 
                                                  | (IData)(vlSelf->top_tb__DOT__mem_req_proj));
        vlSelf->top_tb__DOT__saved_request[6U] = (((IData)(vlSelf->top_tb__DOT__mem_req_write) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->top_tb__DOT__mem_req_kind) 
                                                      << 3U) 
                                                     | (vlSelf->top_tb__DOT__mem_req_layer 
                                                        >> 0x1dU)));
        vlSelf->top_tb__DOT__held_logit = ((IData)(vlSelf->top_tb__DOT__logit_valid) 
                                           & (~ (IData)(vlSelf->top_tb__DOT__logit_ready)));
        vlSelf->top_tb__DOT__saved_logit = (((QData)((IData)(vlSelf->top_tb__DOT__logit_index)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top_tb__DOT__logit_data)));
        vlSelf->top_tb__DOT__held_commit = ((IData)(vlSelf->top_tb__DOT__commit_valid) 
                                            & (~ (IData)(vlSelf->top_tb__DOT__commit_ready)));
        vlSelf->top_tb__DOT__saved_commit[0U] = vlSelf->top_tb__DOT__commit_pos;
        vlSelf->top_tb__DOT__saved_commit[1U] = vlSelf->top_tb__DOT__commit_tokens[0U];
        vlSelf->top_tb__DOT__saved_commit[2U] = vlSelf->top_tb__DOT__commit_tokens[1U];
        vlSelf->top_tb__DOT__saved_commit[3U] = vlSelf->top_tb__DOT__commit_tokens[2U];
        vlSelf->top_tb__DOT__saved_commit[4U] = vlSelf->top_tb__DOT__commit_tokens[3U];
        vlSelf->top_tb__DOT__saved_commit[5U] = vlSelf->top_tb__DOT__commit_tokens[4U];
        vlSelf->top_tb__DOT__saved_commit[6U] = vlSelf->top_tb__DOT__commit_count;
        if (((IData)(vlSelf->top_tb__DOT__mem_rsp_valid) 
             & (IData)(vlSelf->top_tb__DOT__rst_n))) {
            if (VL_UNLIKELY((VL_GTES_III(32, 0U, vlSelf->top_tb__DOT__queued) 
                             | (vlSelf->top_tb__DOT__mem_rsp_tag 
                                != vlSelf->top_tb__DOT__queue_tag
                                [(0x3fU & vlSelf->top_tb__DOT__front)])))) {
                VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:140: Assertion failed in %Ntop_tb: RESPONSE_SCOREBOARD\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 140, "");
            }
            vlSelf->top_tb__DOT__front = VL_MODDIVS_III(32, 
                                                        ((IData)(1U) 
                                                         + vlSelf->top_tb__DOT__front), (IData)(0x40U));
            vlSelf->top_tb__DOT__queued = (vlSelf->top_tb__DOT__queued 
                                           - (IData)(1U));
        }
        if (VL_UNLIKELY(((IData)(vlSelf->top_tb__DOT__negative_test) 
                         & (((IData)(vlSelf->top_tb__DOT__done) 
                             | (IData)(vlSelf->top_tb__DOT__commit_valid)) 
                            | (IData)(vlSelf->top_tb__DOT__logit_valid))))) {
            VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:144: Assertion failed in %Ntop_tb: INVALID_CONTINUATION_PUBLISHED\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 144, "");
        }
        if (((IData)(vlSelf->top_tb__DOT__mem_req_valid) 
             & (IData)(vlSelf->top_tb__DOT__mem_req_ready))) {
            if (VL_UNLIKELY(vlSelf->top_tb__DOT__negative_test)) {
                vlSelf->top_tb__DOT__negative_requests 
                    = ((IData)(1U) + vlSelf->top_tb__DOT__negative_requests);
                VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:149: Assertion failed in %Ntop_tb: INVALID_CONTINUATION_MEMORY_WORK\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 149, "");
            }
            if (VL_UNLIKELY(((0U != vlSelf->top_tb__DOT__mem_req_layer) 
                             | (0x10U <= vlSelf->top_tb__DOT__mem_req_col)))) {
                VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:153: Assertion failed in %Ntop_tb: REQUEST_ADDRESS_BOUND\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 153, "");
            }
            vlSelf->top_tb__DOT__read_data = 0U;
            if (vlSelf->top_tb__DOT__new_evaluation) {
                if (VL_UNLIKELY(((((VL_LTES_III(32, 8U, vlSelf->top_tb__DOT__active_case) 
                                    | (IData)(vlSelf->top_tb__DOT__mem_req_write)) 
                                   | (0U != (IData)(vlSelf->top_tb__DOT__mem_req_kind))) 
                                  | (vlSelf->top_tb__DOT__mem_req_row 
                                     != vlSelf->top_tb__DOT__eval_tokens
                                     [(7U & vlSelf->top_tb__DOT__active_case)])) 
                                 | (0U != vlSelf->top_tb__DOT__mem_req_col)))) {
                    VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:158: Assertion failed in %Ntop_tb: SPEC_OFFPATH_OR_WRONG_INPUT eval=%0d row=%0# expected=%0#\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),32,
                              vlSelf->top_tb__DOT__active_case,
                              32,vlSelf->top_tb__DOT__mem_req_row,
                              32,vlSelf->top_tb__DOT__eval_tokens
                              [(7U & vlSelf->top_tb__DOT__active_case)]);
                    VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 158, "");
                }
                vlSelf->top_tb__DOT__j = 0U;
                vlSelf->top_tb__DOT__new_evaluation = 0U;
                while (VL_GTS_III(32, 0xf0U, vlSelf->top_tb__DOT__j)) {
                    vlSelf->top_tb__DOT____Vlvbound_h4f30d1ae__0 = 0U;
                    vlSelf->top_tb__DOT____Vlvbound_h00df833e__0 = 0U;
                    if ((0xefU >= (0xffU & vlSelf->top_tb__DOT__j))) {
                        vlSelf->top_tb__DOT__writes[(0xffU 
                                                     & vlSelf->top_tb__DOT__j)] 
                            = vlSelf->top_tb__DOT____Vlvbound_h4f30d1ae__0;
                        vlSelf->top_tb__DOT__scratch_valid[(0xffU 
                                                            & vlSelf->top_tb__DOT__j)] 
                            = vlSelf->top_tb__DOT____Vlvbound_h00df833e__0;
                    }
                    vlSelf->top_tb__DOT__j = ((IData)(1U) 
                                              + vlSelf->top_tb__DOT__j);
                }
            }
            if (vlSelf->top_tb__DOT__mem_req_write) {
                if (VL_UNLIKELY((0U != (vlSelf->top_tb__DOT__mem_req_wdata 
                                        >> 0x10U)))) {
                    VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:164: Assertion failed in %Ntop_tb: WRITE_RESERVED_BITS\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 164, "");
                }
                vlSelf->top_tb__DOT__write_count = 
                    ((IData)(1U) + vlSelf->top_tb__DOT__write_count);
                if ((8U == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) {
                    if (VL_UNLIKELY(((0xfU <= vlSelf->top_tb__DOT__mem_req_row) 
                                     | (0xdU == vlSelf->top_tb__DOT__mem_req_row)))) {
                        VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:166: Assertion failed in %Ntop_tb: SCRATCH_ADDRESS\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 166, "");
                    }
                    vlSelf->top_tb__DOT__address = 
                        (VL_SHIFTL_III(32,32,32, vlSelf->top_tb__DOT__mem_req_row, 4U) 
                         + vlSelf->top_tb__DOT__mem_req_col);
                    vlSelf->top_tb__DOT__expected_write 
                        = (((0U == vlSelf->top_tb__DOT__mem_req_row) 
                            & (0U == ((0xefU >= (0xffU 
                                                 & vlSelf->top_tb__DOT__address))
                                       ? vlSelf->top_tb__DOT__writes
                                      [(0xffU & vlSelf->top_tb__DOT__address)]
                                       : 0U))) ? vlSelf->top_tb__DOT__expected_initial
                           [(0x3fU & (VL_SHIFTL_III(6,32,32, vlSelf->top_tb__DOT__active_case, 3U) 
                                      + vlSelf->top_tb__DOT__mem_req_col))]
                            : ((0x77fU >= (0x7ffU & 
                                           (VL_MULS_III(32, (IData)(0xf0U), vlSelf->top_tb__DOT__active_case) 
                                            + vlSelf->top_tb__DOT__address)))
                                ? vlSelf->top_tb__DOT__expected_scratch
                               [(0x7ffU & (VL_MULS_III(32, (IData)(0xf0U), vlSelf->top_tb__DOT__active_case) 
                                           + vlSelf->top_tb__DOT__address))]
                                : 0U));
                    if (VL_UNLIKELY((vlSelf->top_tb__DOT__mem_req_wdata 
                                     != vlSelf->top_tb__DOT__expected_write))) {
                        VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:172: Assertion failed in %Ntop_tb: SCRATCH_COMPARE case=%0d slot=%0# coordinate=%0# write=%0d got=%x expected=%x\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name(),
                                  32,vlSelf->top_tb__DOT__active_case,
                                  32,vlSelf->top_tb__DOT__mem_req_row,
                                  32,vlSelf->top_tb__DOT__mem_req_col,
                                  32,((0xefU >= (0xffU 
                                                 & vlSelf->top_tb__DOT__address))
                                       ? vlSelf->top_tb__DOT__writes
                                      [(0xffU & vlSelf->top_tb__DOT__address)]
                                       : 0U),32,vlSelf->top_tb__DOT__mem_req_wdata,
                                  32,vlSelf->top_tb__DOT__expected_write);
                        VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 172, "");
                    }
                    if (VL_UNLIKELY(VL_GTES_III(32, 
                                                ((0xefU 
                                                  >= 
                                                  (0xffU 
                                                   & vlSelf->top_tb__DOT__address))
                                                  ? 
                                                 vlSelf->top_tb__DOT__writes
                                                 [(0xffU 
                                                   & vlSelf->top_tb__DOT__address)]
                                                  : 0U), 
                                                ((0U 
                                                  == vlSelf->top_tb__DOT__mem_req_row)
                                                  ? 2U
                                                  : 1U)))) {
                        VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:174: Assertion failed in %Ntop_tb: DUPLICATE_SCRATCH_WRITE\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 174, "");
                    }
                    vlSelf->top_tb__DOT____Vlvbound_hce5985e8__0 
                        = vlSelf->top_tb__DOT__mem_req_wdata;
                    vlSelf->top_tb__DOT____Vlvbound_h112dfbbc__0 = 1U;
                    vlSelf->top_tb__DOT____Vlvbound_h3f5a522c__0 
                        = ((IData)(1U) + ((0xefU >= 
                                           (0xffU & vlSelf->top_tb__DOT__address))
                                           ? vlSelf->top_tb__DOT__writes
                                          [(0xffU & vlSelf->top_tb__DOT__address)]
                                           : 0U));
                    if ((0xefU >= (0xffU & vlSelf->top_tb__DOT__address))) {
                        vlSelf->top_tb__DOT__scratch[(0xffU 
                                                      & vlSelf->top_tb__DOT__address)] 
                            = vlSelf->top_tb__DOT____Vlvbound_hce5985e8__0;
                        vlSelf->top_tb__DOT__scratch_valid[(0xffU 
                                                            & vlSelf->top_tb__DOT__address)] 
                            = vlSelf->top_tb__DOT____Vlvbound_h112dfbbc__0;
                        vlSelf->top_tb__DOT__writes[(0xffU 
                                                     & vlSelf->top_tb__DOT__address)] 
                            = vlSelf->top_tb__DOT____Vlvbound_h3f5a522c__0;
                    }
                } else if (VL_LIKELY(((9U == (IData)(vlSelf->top_tb__DOT__mem_req_kind)) 
                                      | (0xaU == (IData)(vlSelf->top_tb__DOT__mem_req_kind))))) {
                    if (VL_UNLIKELY(((vlSelf->top_tb__DOT__mem_req_row 
                                      != vlSelf->top_tb__DOT__active_case) 
                                     | (8U <= vlSelf->top_tb__DOT__mem_req_col)))) {
                        VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:178: Assertion failed in %Ntop_tb: KV_ADDRESS\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 178, "");
                    }
                    vlSelf->top_tb__DOT__address = 
                        (VL_SHIFTL_III(32,32,32, vlSelf->top_tb__DOT__mem_req_row, 3U) 
                         + vlSelf->top_tb__DOT__mem_req_col);
                    if ((9U == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) {
                        if (VL_UNLIKELY(vlSelf->top_tb__DOT__key_valid
                                        [(0x7fU & vlSelf->top_tb__DOT__address)])) {
                            VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:181: Assertion failed in %Ntop_tb: DUPLICATE_KEY\n",
                                      64,VL_TIME_UNITED_Q(1),
                                      -12,vlSymsp->name());
                            VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 181, "");
                        }
                        vlSelf->top_tb__DOT__key_count 
                            = ((IData)(1U) + vlSelf->top_tb__DOT__key_count);
                        if (VL_UNLIKELY((vlSelf->top_tb__DOT__mem_req_wdata 
                                         != vlSelf->top_tb__DOT__expected_keys
                                         [(0x3fU & 
                                           (VL_SHIFTL_III(6,32,32, vlSelf->top_tb__DOT__active_case, 3U) 
                                            + vlSelf->top_tb__DOT__mem_req_col))]))) {
                            VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:183: Assertion failed in %Ntop_tb: KEY_COMPARE case=%0d coordinate=%0# got=%x expected=%x\n",
                                      64,VL_TIME_UNITED_Q(1),
                                      -12,vlSymsp->name(),
                                      32,vlSelf->top_tb__DOT__active_case,
                                      32,vlSelf->top_tb__DOT__mem_req_col,
                                      32,vlSelf->top_tb__DOT__mem_req_wdata,
                                      32,vlSelf->top_tb__DOT__expected_keys
                                      [(0x3fU & (VL_SHIFTL_III(6,32,32, vlSelf->top_tb__DOT__active_case, 3U) 
                                                 + vlSelf->top_tb__DOT__mem_req_col))]);
                            VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 183, "");
                        }
                        vlSelf->top_tb__DOT__keys[(0x7fU 
                                                   & vlSelf->top_tb__DOT__address)] 
                            = vlSelf->top_tb__DOT__mem_req_wdata;
                        vlSelf->top_tb__DOT__key_valid[(0x7fU 
                                                        & vlSelf->top_tb__DOT__address)] = 1U;
                    } else {
                        if (VL_UNLIKELY(vlSelf->top_tb__DOT__value_valid
                                        [(0x7fU & vlSelf->top_tb__DOT__address)])) {
                            VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:187: Assertion failed in %Ntop_tb: DUPLICATE_VALUE\n",
                                      64,VL_TIME_UNITED_Q(1),
                                      -12,vlSymsp->name());
                            VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 187, "");
                        }
                        vlSelf->top_tb__DOT__value_count 
                            = ((IData)(1U) + vlSelf->top_tb__DOT__value_count);
                        if (VL_UNLIKELY((vlSelf->top_tb__DOT__mem_req_wdata 
                                         != vlSelf->top_tb__DOT__expected_values
                                         [(0x3fU & 
                                           (VL_SHIFTL_III(6,32,32, vlSelf->top_tb__DOT__active_case, 3U) 
                                            + vlSelf->top_tb__DOT__mem_req_col))]))) {
                            VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:189: Assertion failed in %Ntop_tb: VALUE_COMPARE\n",
                                      64,VL_TIME_UNITED_Q(1),
                                      -12,vlSymsp->name());
                            VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 189, "");
                        }
                        vlSelf->top_tb__DOT__values[(0x7fU 
                                                     & vlSelf->top_tb__DOT__address)] 
                            = vlSelf->top_tb__DOT__mem_req_wdata;
                        vlSelf->top_tb__DOT__value_valid[(0x7fU 
                                                          & vlSelf->top_tb__DOT__address)] = 1U;
                    }
                } else {
                    VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:192: Assertion failed in %Ntop_tb: ILLEGAL_WRITE_KIND\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 192, "");
                }
            } else if (((((((((0U == (IData)(vlSelf->top_tb__DOT__mem_req_kind)) 
                              | (1U == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) 
                             | (2U == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) 
                            | (3U == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) 
                           | (4U == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) 
                          | (((((5U == (IData)(vlSelf->top_tb__DOT__mem_req_kind)) 
                                || (6U == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) 
                               || (7U == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) 
                              || (0xcU == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) 
                             || (0xdU == (IData)(vlSelf->top_tb__DOT__mem_req_kind)))) 
                         | (8U == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) 
                        | ((9U == (IData)(vlSelf->top_tb__DOT__mem_req_kind)) 
                           || (0xaU == (IData)(vlSelf->top_tb__DOT__mem_req_kind))))) {
                if ((0U == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) {
                    if (VL_UNLIKELY(((8U <= vlSelf->top_tb__DOT__mem_req_row) 
                                     | (8U <= vlSelf->top_tb__DOT__mem_req_col)))) {
                        VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:196: Assertion failed in %Ntop_tb: EMBEDDING_EXTENT\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 196, "");
                    }
                    vlSelf->top_tb__DOT__read_data 
                        = vlSelf->top_tb__DOT__embedding
                        [(0x3fU & (VL_SHIFTL_III(6,32,32, vlSelf->top_tb__DOT__mem_req_row, 3U) 
                                   + vlSelf->top_tb__DOT__mem_req_col))];
                } else if ((1U == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) {
                    if (VL_UNLIKELY((((6U < (IData)(vlSelf->top_tb__DOT__mem_req_proj)) 
                                      | (0x10U <= vlSelf->top_tb__DOT__mem_req_row)) 
                                     | (2U <= vlSelf->top_tb__DOT__mem_req_col)))) {
                        VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:201: Assertion failed in %Ntop_tb: QWEIGHT_EXTENT\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 201, "");
                    }
                    vlSelf->top_tb__DOT__read_data 
                        = ((0xdfU >= (0xffU & (VL_SHIFTL_III(8,32,32, 
                                                             (VL_SHIFTL_III(32,32,32, (IData)(vlSelf->top_tb__DOT__mem_req_proj), 4U) 
                                                              + vlSelf->top_tb__DOT__mem_req_row), 1U) 
                                               + vlSelf->top_tb__DOT__mem_req_col)))
                            ? vlSelf->top_tb__DOT__qweight
                           [(0xffU & (VL_SHIFTL_III(8,32,32, 
                                                    (VL_SHIFTL_III(32,32,32, (IData)(vlSelf->top_tb__DOT__mem_req_proj), 4U) 
                                                     + vlSelf->top_tb__DOT__mem_req_row), 1U) 
                                      + vlSelf->top_tb__DOT__mem_req_col))]
                            : 0U);
                } else if ((2U == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) {
                    if (VL_UNLIKELY((((6U < (IData)(vlSelf->top_tb__DOT__mem_req_proj)) 
                                      | (0x10U <= vlSelf->top_tb__DOT__mem_req_row)) 
                                     | (2U <= vlSelf->top_tb__DOT__mem_req_col)))) {
                        VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:206: Assertion failed in %Ntop_tb: ZERO_EXTENT\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 206, "");
                    }
                    vlSelf->top_tb__DOT__read_data 
                        = ((0xdfU >= (0xffU & (VL_SHIFTL_III(8,32,32, 
                                                             (VL_SHIFTL_III(32,32,32, (IData)(vlSelf->top_tb__DOT__mem_req_proj), 4U) 
                                                              + vlSelf->top_tb__DOT__mem_req_row), 1U) 
                                               + vlSelf->top_tb__DOT__mem_req_col)))
                            ? vlSelf->top_tb__DOT__zero_image
                           [(0xffU & (VL_SHIFTL_III(8,32,32, 
                                                    (VL_SHIFTL_III(32,32,32, (IData)(vlSelf->top_tb__DOT__mem_req_proj), 4U) 
                                                     + vlSelf->top_tb__DOT__mem_req_row), 1U) 
                                      + vlSelf->top_tb__DOT__mem_req_col))]
                            : 0U);
                } else if ((3U == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) {
                    if (VL_UNLIKELY(((6U < (IData)(vlSelf->top_tb__DOT__mem_req_proj)) 
                                     | (0x10U <= vlSelf->top_tb__DOT__mem_req_row)))) {
                        VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:210: Assertion failed in %Ntop_tb: SCALE_EXTENT\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 210, "");
                    }
                    vlSelf->top_tb__DOT__read_data 
                        = ((0x6ffU >= (0x7ffU & (VL_SHIFTL_III(11,32,32, 
                                                               (VL_SHIFTL_III(32,32,32, (IData)(vlSelf->top_tb__DOT__mem_req_proj), 4U) 
                                                                + vlSelf->top_tb__DOT__mem_req_row), 4U) 
                                                 + vlSelf->top_tb__DOT__mem_req_col)))
                            ? vlSelf->top_tb__DOT__scale_image
                           [(0x7ffU & (VL_SHIFTL_III(11,32,32, 
                                                     (VL_SHIFTL_III(32,32,32, (IData)(vlSelf->top_tb__DOT__mem_req_proj), 4U) 
                                                      + vlSelf->top_tb__DOT__mem_req_row), 4U) 
                                       + vlSelf->top_tb__DOT__mem_req_col))]
                            : 0U);
                } else if (VL_UNLIKELY((4U == (IData)(vlSelf->top_tb__DOT__mem_req_kind)))) {
                    vlSelf->top_tb__DOT__bias_count 
                        = ((IData)(1U) + vlSelf->top_tb__DOT__bias_count);
                    VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:213: Assertion failed in %Ntop_tb: NATIVE_BIAS_REQUEST\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 213, "");
                } else if ((((((5U == (IData)(vlSelf->top_tb__DOT__mem_req_kind)) 
                               || (6U == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) 
                              || (7U == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) 
                             || (0xcU == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) 
                            || (0xdU == (IData)(vlSelf->top_tb__DOT__mem_req_kind)))) {
                    if (VL_UNLIKELY((0U != vlSelf->top_tb__DOT__mem_req_row))) {
                        VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:215: Assertion failed in %Ntop_tb: GAMMA_ADDRESS\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 215, "");
                    }
                    vlSelf->top_tb__DOT__read_data 
                        = vlSelf->top_tb__DOT__gamma
                        [(0xffU & (VL_SHIFTL_III(8,32,32, (IData)(vlSelf->top_tb__DOT__mem_req_kind), 4U) 
                                   + vlSelf->top_tb__DOT__mem_req_col))];
                } else if ((8U == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) {
                    if (VL_UNLIKELY((0xfU <= vlSelf->top_tb__DOT__mem_req_row))) {
                        VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:219: Assertion failed in %Ntop_tb: SCRATCH_READ_ADDRESS\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 219, "");
                    }
                    vlSelf->top_tb__DOT__address = 
                        (VL_SHIFTL_III(32,32,32, vlSelf->top_tb__DOT__mem_req_row, 4U) 
                         + vlSelf->top_tb__DOT__mem_req_col);
                    if (VL_UNLIKELY((1U & (~ ((0xefU 
                                               >= (0xffU 
                                                   & vlSelf->top_tb__DOT__address)) 
                                              && vlSelf->top_tb__DOT__scratch_valid
                                              [(0xffU 
                                                & vlSelf->top_tb__DOT__address)]))))) {
                        VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:221: Assertion failed in %Ntop_tb: UNINITIALIZED_SCRATCH_READ\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 221, "");
                    }
                    vlSelf->top_tb__DOT__read_data 
                        = ((0xefU >= (0xffU & vlSelf->top_tb__DOT__address))
                            ? vlSelf->top_tb__DOT__scratch
                           [(0xffU & vlSelf->top_tb__DOT__address)]
                            : 0U);
                } else {
                    if (VL_UNLIKELY(((vlSelf->top_tb__DOT__mem_req_row 
                                      > vlSelf->top_tb__DOT__active_case) 
                                     | (8U <= vlSelf->top_tb__DOT__mem_req_col)))) {
                        VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:225: Assertion failed in %Ntop_tb: CAUSAL_KV_ADDRESS\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 225, "");
                    }
                    vlSelf->top_tb__DOT__address = 
                        (VL_SHIFTL_III(32,32,32, vlSelf->top_tb__DOT__mem_req_row, 3U) 
                         + vlSelf->top_tb__DOT__mem_req_col);
                    if ((9U == (IData)(vlSelf->top_tb__DOT__mem_req_kind))) {
                        if (VL_UNLIKELY((1U & (~ vlSelf->top_tb__DOT__key_valid
                                               [(0x7fU 
                                                 & vlSelf->top_tb__DOT__address)])))) {
                            VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:228: Assertion failed in %Ntop_tb: UNINITIALIZED_KEY_READ\n",
                                      64,VL_TIME_UNITED_Q(1),
                                      -12,vlSymsp->name());
                            VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 228, "");
                        }
                        vlSelf->top_tb__DOT__read_data 
                            = vlSelf->top_tb__DOT__keys
                            [(0x7fU & vlSelf->top_tb__DOT__address)];
                    } else {
                        if (VL_UNLIKELY((1U & (~ vlSelf->top_tb__DOT__value_valid
                                               [(0x7fU 
                                                 & vlSelf->top_tb__DOT__address)])))) {
                            VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:231: Assertion failed in %Ntop_tb: UNINITIALIZED_VALUE_READ\n",
                                      64,VL_TIME_UNITED_Q(1),
                                      -12,vlSymsp->name());
                            VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 231, "");
                        }
                        vlSelf->top_tb__DOT__read_data 
                            = vlSelf->top_tb__DOT__values
                            [(0x7fU & vlSelf->top_tb__DOT__address)];
                    }
                }
            } else if (VL_LIKELY((0xbU == (IData)(vlSelf->top_tb__DOT__mem_req_kind)))) {
                if (VL_UNLIKELY(((vlSelf->top_tb__DOT__mem_req_row 
                                  != vlSelf->top_tb__DOT__active_case) 
                                 | (8U <= vlSelf->top_tb__DOT__mem_req_col)))) {
                    VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:236: Assertion failed in %Ntop_tb: ROPE_ADDRESS\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 236, "");
                }
                vlSelf->top_tb__DOT__read_data = vlSelf->top_tb__DOT__rope
                    [(0x7fU & (VL_SHIFTL_III(7,32,32, vlSelf->top_tb__DOT__mem_req_row, 3U) 
                               + vlSelf->top_tb__DOT__mem_req_col))];
            } else {
                VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:239: Assertion failed in %Ntop_tb: UNDEFINED_MEMORY_KIND\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 239, "");
            }
            if (VL_UNLIKELY(VL_LTES_III(32, 0x40U, vlSelf->top_tb__DOT__queued))) {
                VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:241: Assertion failed in %Ntop_tb: QUEUE_OVERFLOW\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 241, "");
            }
            vlSelf->top_tb__DOT__j = 0U;
            while (VL_LTS_III(32, vlSelf->top_tb__DOT__j, vlSelf->top_tb__DOT__queued)) {
                if (VL_UNLIKELY((vlSelf->top_tb__DOT__queue_tag
                                 [(0x3fU & VL_MODDIVS_III(32, 
                                                          (vlSelf->top_tb__DOT__front 
                                                           + vlSelf->top_tb__DOT__j), (IData)(0x40U)))] 
                                 == vlSelf->top_tb__DOT__mem_req_tag))) {
                    VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:243: Assertion failed in %Ntop_tb: DUPLICATE_TAG\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 243, "");
                }
                vlSelf->top_tb__DOT__j = ((IData)(1U) 
                                          + vlSelf->top_tb__DOT__j);
            }
            vlSelf->top_tb__DOT__queue_data[(0x3fU 
                                             & vlSelf->top_tb__DOT__tail)] 
                = vlSelf->top_tb__DOT__read_data;
            vlSelf->top_tb__DOT__queue_tag[(0x3fU & vlSelf->top_tb__DOT__tail)] 
                = vlSelf->top_tb__DOT__mem_req_tag;
            vlSelf->top_tb__DOT__queue_delay[(0x3fU 
                                              & vlSelf->top_tb__DOT__tail)] 
                = ((IData)(2U) + (vlSelf->top_tb__DOT__cycle 
                                  + VL_MODDIVS_III(32, vlSelf->top_tb__DOT__req_count, (IData)(3U))));
            vlSelf->top_tb__DOT__tail = VL_MODDIVS_III(32, 
                                                       ((IData)(1U) 
                                                        + vlSelf->top_tb__DOT__tail), (IData)(0x40U));
            vlSelf->top_tb__DOT__queued = ((IData)(1U) 
                                           + vlSelf->top_tb__DOT__queued);
            vlSelf->top_tb__DOT__req_count = ((IData)(1U) 
                                              + vlSelf->top_tb__DOT__req_count);
        }
        if (((IData)(vlSelf->top_tb__DOT__logit_valid) 
             & (IData)(vlSelf->top_tb__DOT__logit_ready))) {
            if (VL_UNLIKELY((((VL_LTES_III(32, 8U, vlSelf->top_tb__DOT__active_case) 
                               | (vlSelf->top_tb__DOT__total_frames 
                                  >= ((5U >= (7U & vlSelf->top_tb__DOT__active_tx))
                                       ? vlSelf->top_tb__DOT__expected_frames
                                      [(7U & vlSelf->top_tb__DOT__active_tx)]
                                       : 0U))) | (vlSelf->top_tb__DOT__logit_index 
                                                  != 
                                                  (7U 
                                                   & vlSelf->top_tb__DOT__logit_count))) 
                             | (vlSelf->top_tb__DOT__logit_data 
                                != vlSelf->top_tb__DOT__expected_logits
                                [(0x3fU & (VL_MULS_III(32, (IData)(8U), vlSelf->top_tb__DOT__active_case) 
                                           + VL_MODDIVS_III(32, vlSelf->top_tb__DOT__logit_count, (IData)(8U))))])))) {
                VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:252: Assertion failed in %Ntop_tb: LOGIT_COMPARE case=%0d index=%0d got_index=%0# got=%x expected=%x\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,vlSelf->top_tb__DOT__active_case,
                          32,vlSelf->top_tb__DOT__logit_count,
                          32,vlSelf->top_tb__DOT__logit_index,
                          32,vlSelf->top_tb__DOT__logit_data,
                          32,vlSelf->top_tb__DOT__expected_logits
                          [(0x3fU & (VL_MULS_III(32, (IData)(8U), vlSelf->top_tb__DOT__active_case) 
                                     + VL_MODDIVS_III(32, vlSelf->top_tb__DOT__logit_count, (IData)(8U))))]);
                VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 252, "");
            }
            vlSelf->top_tb__DOT__logit_count = ((IData)(1U) 
                                                + vlSelf->top_tb__DOT__logit_count);
            vlSelf->top_tb__DOT__last_logit_cycle = vlSelf->top_tb__DOT__cycle;
            if ((0U == VL_MODDIVS_III(32, vlSelf->top_tb__DOT__logit_count, (IData)(8U)))) {
                vlSelf->top_tb__DOT__total_frames = 
                    ((IData)(1U) + vlSelf->top_tb__DOT__total_frames);
                vlSelf->top_tb__DOT__active_case = 
                    ((IData)(1U) + vlSelf->top_tb__DOT__active_case);
                vlSelf->top_tb__DOT__new_evaluation = 1U;
            }
        }
        if (vlSelf->top_tb__DOT__commit_valid) {
            if (VL_UNLIKELY(((((((1U != vlSelf->top_tb__DOT__host_phases
                                  [(7U & vlSelf->top_tb__DOT__active_tx)]) 
                                 | (0U == ((5U >= (7U 
                                                   & vlSelf->top_tb__DOT__active_tx))
                                            ? vlSelf->top_tb__DOT__expected_counts
                                           [(7U & vlSelf->top_tb__DOT__active_tx)]
                                            : 0U))) 
                                | (vlSelf->top_tb__DOT__total_frames 
                                   != ((5U >= (7U & vlSelf->top_tb__DOT__active_tx))
                                        ? vlSelf->top_tb__DOT__expected_frames
                                       [(7U & vlSelf->top_tb__DOT__active_tx)]
                                        : 0U))) | (0U 
                                                   != vlSelf->top_tb__DOT__queued)) 
                              | ((IData)(vlSelf->top_tb__DOT__commit_count) 
                                 != ((5U >= (7U & vlSelf->top_tb__DOT__active_tx))
                                      ? (7U & vlSelf->top_tb__DOT__expected_counts
                                         [(7U & vlSelf->top_tb__DOT__active_tx)])
                                      : 0U))) | (vlSelf->top_tb__DOT__commit_pos 
                                                 != 
                                                 ((IData)(1U) 
                                                  + 
                                                  ((5U 
                                                    >= 
                                                    (7U 
                                                     & vlSelf->top_tb__DOT__active_tx))
                                                    ? 
                                                   vlSelf->top_tb__DOT__host_positions
                                                   [
                                                   (7U 
                                                    & vlSelf->top_tb__DOT__active_tx)]
                                                    : 0U)))))) {
                VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:264: Assertion failed in %Ntop_tb: COMMIT_COMPARE case=%0d logits=%0d count=%0# pos=%0# got=%x expected=%x\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,vlSelf->top_tb__DOT__active_tx,
                          32,vlSelf->top_tb__DOT__logit_count,
                          3,(IData)(vlSelf->top_tb__DOT__commit_count),
                          32,vlSelf->top_tb__DOT__commit_pos,
                          160,vlSelf->top_tb__DOT__commit_tokens.data(),
                          32,((5U >= (7U & vlSelf->top_tb__DOT__active_tx))
                               ? vlSelf->top_tb__DOT__expected_counts
                              [(7U & vlSelf->top_tb__DOT__active_tx)]
                               : 0U));
                VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 264, "");
            }
            vlSelf->top_tb__DOT__j = 5U;
            if (VL_UNLIKELY((vlSelf->top_tb__DOT__commit_tokens[0U] 
                             != ((0x1dU >= (0x1fU & 
                                            VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx)))
                                  ? vlSelf->top_tb__DOT__expected_committed
                                 [(0x1fU & VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx))]
                                  : 0U)))) {
                VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:268: Assertion failed in %Ntop_tb: SPEC_COMMIT_TOKEN tx=%0d slice=0 got=%0# expected=%0#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,vlSelf->top_tb__DOT__active_tx,
                          32,vlSelf->top_tb__DOT__commit_tokens[0U],
                          32,((0x1dU >= (0x1fU & VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx)))
                               ? vlSelf->top_tb__DOT__expected_committed
                              [(0x1fU & VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx))]
                               : 0U));
                VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 268, "");
            }
            if (VL_UNLIKELY((vlSelf->top_tb__DOT__commit_tokens[1U] 
                             != ((0x1dU >= (0x1fU & 
                                            ((IData)(1U) 
                                             + VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx))))
                                  ? vlSelf->top_tb__DOT__expected_committed
                                 [(0x1fU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx)))]
                                  : 0U)))) {
                VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:268: Assertion failed in %Ntop_tb: SPEC_COMMIT_TOKEN tx=%0d slice=1 got=%0# expected=%0#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,vlSelf->top_tb__DOT__active_tx,
                          32,vlSelf->top_tb__DOT__commit_tokens[1U],
                          32,((0x1dU >= (0x1fU & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx))))
                               ? vlSelf->top_tb__DOT__expected_committed
                              [(0x1fU & ((IData)(1U) 
                                         + VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx)))]
                               : 0U));
                VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 268, "");
            }
            if (VL_UNLIKELY((vlSelf->top_tb__DOT__commit_tokens[2U] 
                             != ((0x1dU >= (0x1fU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx))))
                                  ? vlSelf->top_tb__DOT__expected_committed
                                 [(0x1fU & ((IData)(2U) 
                                            + VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx)))]
                                  : 0U)))) {
                VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:268: Assertion failed in %Ntop_tb: SPEC_COMMIT_TOKEN tx=%0d slice=2 got=%0# expected=%0#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,vlSelf->top_tb__DOT__active_tx,
                          32,vlSelf->top_tb__DOT__commit_tokens[2U],
                          32,((0x1dU >= (0x1fU & ((IData)(2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx))))
                               ? vlSelf->top_tb__DOT__expected_committed
                              [(0x1fU & ((IData)(2U) 
                                         + VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx)))]
                               : 0U));
                VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 268, "");
            }
            if (VL_UNLIKELY((vlSelf->top_tb__DOT__commit_tokens[3U] 
                             != ((0x1dU >= (0x1fU & 
                                            ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx))))
                                  ? vlSelf->top_tb__DOT__expected_committed
                                 [(0x1fU & ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx)))]
                                  : 0U)))) {
                VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:268: Assertion failed in %Ntop_tb: SPEC_COMMIT_TOKEN tx=%0d slice=3 got=%0# expected=%0#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,vlSelf->top_tb__DOT__active_tx,
                          32,vlSelf->top_tb__DOT__commit_tokens[3U],
                          32,((0x1dU >= (0x1fU & ((IData)(3U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx))))
                               ? vlSelf->top_tb__DOT__expected_committed
                              [(0x1fU & ((IData)(3U) 
                                         + VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx)))]
                               : 0U));
                VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 268, "");
            }
            if (VL_UNLIKELY((vlSelf->top_tb__DOT__commit_tokens[4U] 
                             != ((0x1dU >= (0x1fU & 
                                            ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx))))
                                  ? vlSelf->top_tb__DOT__expected_committed
                                 [(0x1fU & ((IData)(4U) 
                                            + VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx)))]
                                  : 0U)))) {
                VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:268: Assertion failed in %Ntop_tb: SPEC_COMMIT_TOKEN tx=%0d slice=4 got=%0# expected=%0#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,vlSelf->top_tb__DOT__active_tx,
                          32,vlSelf->top_tb__DOT__commit_tokens[4U],
                          32,((0x1dU >= (0x1fU & ((IData)(4U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx))))
                               ? vlSelf->top_tb__DOT__expected_committed
                              [(0x1fU & ((IData)(4U) 
                                         + VL_MULS_III(32, (IData)(5U), vlSelf->top_tb__DOT__active_tx)))]
                               : 0U));
                VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 268, "");
            }
            if (vlSelf->top_tb__DOT__commit_ready) {
                if (VL_UNLIKELY((0U != vlSelf->top_tb__DOT__commit_seen))) {
                    VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:272: Assertion failed in %Ntop_tb: DUPLICATE_COMMIT\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 272, "");
                }
                vlSelf->top_tb__DOT__last_commit_cycle 
                    = vlSelf->top_tb__DOT__cycle;
                vlSelf->top_tb__DOT__commit_seen = 1U;
            }
        }
        if (vlSelf->top_tb__DOT__done) {
            if (VL_UNLIKELY(((((((((vlSelf->top_tb__DOT__total_frames 
                                    != ((5U >= (7U 
                                                & vlSelf->top_tb__DOT__active_tx))
                                         ? vlSelf->top_tb__DOT__expected_frames
                                        [(7U & vlSelf->top_tb__DOT__active_tx)]
                                         : 0U)) | (0U 
                                                   == vlSelf->top_tb__DOT__logit_count)) 
                                  | (0U != VL_MODDIVS_III(32, vlSelf->top_tb__DOT__logit_count, (IData)(8U)))) 
                                 | (0U != vlSelf->top_tb__DOT__queued)) 
                                | (IData)(vlSelf->top_tb__DOT__token_ready)) 
                               | VL_LTES_III(32, vlSelf->top_tb__DOT__cycle, vlSelf->top_tb__DOT__last_logit_cycle)) 
                              | ((0U < ((5U >= (7U 
                                                & vlSelf->top_tb__DOT__active_tx))
                                         ? vlSelf->top_tb__DOT__expected_counts
                                        [(7U & vlSelf->top_tb__DOT__active_tx)]
                                         : 0U)) & (
                                                   (1U 
                                                    != vlSelf->top_tb__DOT__commit_seen) 
                                                   | VL_LTES_III(32, vlSelf->top_tb__DOT__cycle, vlSelf->top_tb__DOT__last_commit_cycle)))) 
                             | ((0U == ((5U >= (7U 
                                                & vlSelf->top_tb__DOT__active_tx))
                                         ? vlSelf->top_tb__DOT__expected_counts
                                        [(7U & vlSelf->top_tb__DOT__active_tx)]
                                         : 0U)) & (0U 
                                                   != vlSelf->top_tb__DOT__commit_seen))))) {
                VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:281: Assertion failed in %Ntop_tb: DONE_ORDER\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 281, "");
            }
            vlSelf->top_tb__DOT__completed = ((IData)(1U) 
                                              + vlSelf->top_tb__DOT__completed);
            if (VL_UNLIKELY(((((1U == vlSelf->top_tb__DOT__host_phases
                                [(7U & vlSelf->top_tb__DOT__active_tx)]) 
                               & (0xfU > ((5U >= (7U 
                                                  & vlSelf->top_tb__DOT__active_tx))
                                           ? vlSelf->top_tb__DOT__host_positions
                                          [(7U & vlSelf->top_tb__DOT__active_tx)]
                                           : 0U))) 
                              & (IData)(vlSelf->top_tb__DOT__configured_mode)) 
                             & (~ (IData)((0U != vlSelf->top_tb__DOT__draft_seen)))))) {
                VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:283: Assertion failed in %Ntop_tb: SPEC_MISSING_DRAFT\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 283, "");
            }
        }
    }
    if ((((IData)(vlSelf->top_tb__DOT__rst_n) & (IData)(vlSelf->top_tb__DOT__dut__DOT____Vcellinp__native__DOT__bank_scheduler__req_valid)) 
         & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_req_ready))) {
        __Vfunc_event_add64__7444__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__serial;
        __Vfunc_event_add64__7444__low = (0x1ffffU 
                                          & ((IData)(1U) 
                                             + (0xffffU 
                                                & (IData)(__Vfunc_event_add64__7444__value))));
        __Vfunc_event_add64__7444__carry1 = (1U & (__Vfunc_event_add64__7444__low 
                                                   >> 0x10U));
        __Vfunc_event_add64__7444__carry2 = ((IData)(__Vfunc_event_add64__7444__carry1) 
                                             & (0xffff0000ULL 
                                                == 
                                                (0xffff0000ULL 
                                                 & __Vfunc_event_add64__7444__value)));
        __Vfunc_event_add64__7444__carry3 = ((IData)(__Vfunc_event_add64__7444__carry1) 
                                             & (0xffffffffU 
                                                == (IData)(
                                                           (__Vfunc_event_add64__7444__value 
                                                            >> 0x10U))));
        __Vfunc_event_add64__7444__Vfuncout = (((QData)((IData)(
                                                                ((((IData)(
                                                                           (__Vfunc_event_add64__7444__value 
                                                                            >> 0x30U)) 
                                                                   + (IData)(__Vfunc_event_add64__7444__carry3)) 
                                                                  << 0x10U) 
                                                                 | (0xffffU 
                                                                    & ((IData)(
                                                                               (__Vfunc_event_add64__7444__value 
                                                                                >> 0x20U)) 
                                                                       + (IData)(__Vfunc_event_add64__7444__carry2)))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((((IData)(
                                                                            (__Vfunc_event_add64__7444__value 
                                                                             >> 0x10U)) 
                                                                    + (IData)(__Vfunc_event_add64__7444__carry1)) 
                                                                   << 0x10U) 
                                                                  | (0xffffU 
                                                                     & __Vfunc_event_add64__7444__low)))));
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__serial 
            = __Vfunc_event_add64__7444__Vfuncout;
    }
    if (((IData)(vlSelf->top_tb__DOT__rst_n) & (~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__unit_flush)))) {
        if ((2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
            __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v0 = 1U;
            __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v0 
                = (0xfU & ((IData)(8U) + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor));
        } else if (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__completed) 
                    & (4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)))) {
            __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v1 
                = vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_data;
            __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v1 = 1U;
            __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v1 
                = (0xfU & ((IData)(8U) + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor));
        } else if (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__completed) 
                    & (6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)))) {
            __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v2 
                = vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_data;
            __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v2 = 1U;
            __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v2 
                = (0xfU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__parent);
        }
    }
    if (((IData)(vlSelf->top_tb__DOT__rst_n) & (~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__abort)))) {
        if ((1U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
            __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v0 = 1U;
            __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v0 
                = (7U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor);
        } else if (((((0xdU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)) 
                      & (IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic.out_valid)) 
                     & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__waiting)) 
                    & (~ (IData)(vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic.out_error)))) {
            __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v1 
                = vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic.out_data;
            __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v1 = 1U;
            __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v1 
                = (7U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor);
        }
    }
    if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__capture) {
        __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma__v0 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__captured_gamma;
        __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma__v0 = 1U;
        __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma__v0 
            = (7U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor);
        __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw__v0 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__captured_data;
        __Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw__v0 = 1U;
        __Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw__v0 
            = (7U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor);
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma_q 
        = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma
        [(7U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor)];
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerator_q 
        = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators
        [(7U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor)];
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__left_q 
        = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree
        [(0xfU & VL_SHIFTL_III(4,4,32, vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__parent, 1U))];
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__right_q 
        = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree
        [(0xfU & ((IData)(1U) + VL_SHIFTL_III(4,4,32, vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__parent, 1U)))];
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw_q 
        = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw
        [(7U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor)];
    if (__Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma__v0) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma[__Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma__v0] 
            = __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma__v0;
    }
    if (__Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v0) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators[__Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v0] = 0U;
    }
    if (__Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v1) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators[__Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v1] 
            = __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerators__v1;
    }
    if (__Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v0) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree[__Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v0] = 0U;
    }
    if (__Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v1) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree[__Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v1] 
            = __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v1;
    }
    if (__Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v2) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree[__Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v2] 
            = __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__tree__v2;
    }
    if (__Vdlyvset__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw__v0) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw[__Vdlyvdim0__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw__v0] 
            = __Vdlyvval__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw__v0;
    }
}

extern const VlWide<16>/*511:0*/ Vtop_tb__ConstPool__CONST_h8016e4ec_0;

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__44(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__44\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->top_tb__DOT__rst_n)))) {
        if (VL_UNLIKELY((0U != ((((((((((((((((Vtop_tb__ConstPool__CONST_h8016e4ec_0[0U] 
                                               ^ (IData)(
                                                         (((QData)((IData)(vlSelf->top_tb__DOT__think_active)) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(vlSelf->top_tb__DOT__csr_ready)) 
                                                              << 0x22U) 
                                                             | (((QData)((IData)(vlSelf->top_tb__DOT__csr_rsp_valid)) 
                                                                 << 0x21U) 
                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->top_tb__DOT__csr_rsp_valid)
                                                                                 ? vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__response_data
                                                                                 : 0U))) 
                                                                    << 1U) 
                                                                   | (QData)((IData)(
                                                                                ((IData)(vlSelf->top_tb__DOT__csr_rsp_valid) 
                                                                                & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__response_error)))))))))) 
                                              | (Vtop_tb__ConstPool__CONST_h8016e4ec_0[1U] 
                                                 ^ 
                                                 ((vlSelf->top_tb__DOT__commit_pos 
                                                   << 4U) 
                                                  | (IData)(
                                                            ((((QData)((IData)(vlSelf->top_tb__DOT__think_active)) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(vlSelf->top_tb__DOT__csr_ready)) 
                                                                  << 0x22U) 
                                                                 | (((QData)((IData)(vlSelf->top_tb__DOT__csr_rsp_valid)) 
                                                                     << 0x21U) 
                                                                    | (((QData)((IData)(
                                                                                ((IData)(vlSelf->top_tb__DOT__csr_rsp_valid)
                                                                                 ? vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__response_data
                                                                                 : 0U))) 
                                                                        << 1U) 
                                                                       | (QData)((IData)(
                                                                                ((IData)(vlSelf->top_tb__DOT__csr_rsp_valid) 
                                                                                & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__response_error)))))))) 
                                                             >> 0x20U))))) 
                                             | (Vtop_tb__ConstPool__CONST_h8016e4ec_0[2U] 
                                                ^ (
                                                   (vlSelf->top_tb__DOT__commit_pos 
                                                    >> 0x1cU) 
                                                   | (vlSelf->top_tb__DOT__commit_tokens[0U] 
                                                      << 4U)))) 
                                            | (Vtop_tb__ConstPool__CONST_h8016e4ec_0[3U] 
                                               ^ ((
                                                   vlSelf->top_tb__DOT__commit_tokens[0U] 
                                                   >> 0x1cU) 
                                                  | (vlSelf->top_tb__DOT__commit_tokens[1U] 
                                                     << 4U)))) 
                                           | (Vtop_tb__ConstPool__CONST_h8016e4ec_0[4U] 
                                              ^ ((vlSelf->top_tb__DOT__commit_tokens[1U] 
                                                  >> 0x1cU) 
                                                 | (vlSelf->top_tb__DOT__commit_tokens[2U] 
                                                    << 4U)))) 
                                          | (Vtop_tb__ConstPool__CONST_h8016e4ec_0[5U] 
                                             ^ ((vlSelf->top_tb__DOT__commit_tokens[2U] 
                                                 >> 0x1cU) 
                                                | (vlSelf->top_tb__DOT__commit_tokens[3U] 
                                                   << 4U)))) 
                                         | (Vtop_tb__ConstPool__CONST_h8016e4ec_0[6U] 
                                            ^ ((vlSelf->top_tb__DOT__commit_tokens[3U] 
                                                >> 0x1cU) 
                                               | (vlSelf->top_tb__DOT__commit_tokens[4U] 
                                                  << 4U)))) 
                                        | (Vtop_tb__ConstPool__CONST_h8016e4ec_0[7U] 
                                           ^ (((IData)(vlSelf->top_tb__DOT__mem_req_tag) 
                                               << 0xaU) 
                                              | (((IData)(vlSelf->top_tb__DOT__rst_n) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->top_tb__DOT__draft_ready) 
                                                     << 8U) 
                                                    | (((IData)(vlSelf->top_tb__DOT__commit_valid) 
                                                        << 7U) 
                                                       | (((IData)(vlSelf->top_tb__DOT__commit_count) 
                                                           << 4U) 
                                                          | (vlSelf->top_tb__DOT__commit_tokens[4U] 
                                                             >> 0x1cU)))))))) 
                                       | (Vtop_tb__ConstPool__CONST_h8016e4ec_0[8U] 
                                          ^ (((IData)(vlSelf->top_tb__DOT__mem_req_tag) 
                                              >> 0x16U) 
                                             | ((IData)(
                                                        (vlSelf->top_tb__DOT__mem_req_tag 
                                                         >> 0x20U)) 
                                                << 0xaU)))) 
                                      | (Vtop_tb__ConstPool__CONST_h8016e4ec_0[9U] 
                                         ^ (((IData)(
                                                     (vlSelf->top_tb__DOT__mem_req_tag 
                                                      >> 0x20U)) 
                                             >> 0x16U) 
                                            | (vlSelf->top_tb__DOT__mem_req_wdata 
                                               << 0xaU)))) 
                                     | (Vtop_tb__ConstPool__CONST_h8016e4ec_0[0xaU] 
                                        ^ ((vlSelf->top_tb__DOT__mem_req_wdata 
                                            >> 0x16U) 
                                           | ((IData)(
                                                      (((QData)((IData)(vlSelf->top_tb__DOT__mem_req_row)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->top_tb__DOT__mem_req_col)))) 
                                              << 0xaU)))) 
                                    | (Vtop_tb__ConstPool__CONST_h8016e4ec_0[0xbU] 
                                       ^ (((IData)(
                                                   (((QData)((IData)(vlSelf->top_tb__DOT__mem_req_row)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->top_tb__DOT__mem_req_col)))) 
                                           >> 0x16U) 
                                          | ((IData)(
                                                     ((((QData)((IData)(vlSelf->top_tb__DOT__mem_req_row)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->top_tb__DOT__mem_req_col))) 
                                                      >> 0x20U)) 
                                             << 0xaU)))) 
                                   | (Vtop_tb__ConstPool__CONST_h8016e4ec_0[0xcU] 
                                      ^ ((vlSelf->top_tb__DOT__mem_req_layer 
                                          << 0xdU) 
                                         | (((IData)(vlSelf->top_tb__DOT__mem_req_proj) 
                                             << 0xaU) 
                                            | ((IData)(
                                                       ((((QData)((IData)(vlSelf->top_tb__DOT__mem_req_row)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->top_tb__DOT__mem_req_col))) 
                                                        >> 0x20U)) 
                                               >> 0x16U))))) 
                                  | (Vtop_tb__ConstPool__CONST_h8016e4ec_0[0xdU] 
                                     ^ (((IData)((((QData)((IData)(vlSelf->top_tb__DOT__logit_index)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top_tb__DOT__logit_data)))) 
                                         << 0x13U) 
                                        | (((IData)(vlSelf->top_tb__DOT__mem_req_valid) 
                                            << 0x12U) 
                                           | (((IData)(vlSelf->top_tb__DOT__mem_req_write) 
                                               << 0x11U) 
                                              | (((IData)(vlSelf->top_tb__DOT__mem_req_kind) 
                                                  << 0xdU) 
                                                 | (vlSelf->top_tb__DOT__mem_req_layer 
                                                    >> 0x13U))))))) 
                                 | (Vtop_tb__ConstPool__CONST_h8016e4ec_0[0xeU] 
                                    ^ (((IData)((((QData)((IData)(vlSelf->top_tb__DOT__logit_index)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->top_tb__DOT__logit_data)))) 
                                        >> 0xdU) | 
                                       ((IData)(((((QData)((IData)(vlSelf->top_tb__DOT__logit_index)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top_tb__DOT__logit_data))) 
                                                 >> 0x20U)) 
                                        << 0x13U)))) 
                                | (Vtop_tb__ConstPool__CONST_h8016e4ec_0[0xfU] 
                                   ^ (((IData)(vlSelf->top_tb__DOT__token_ready) 
                                       << 0x17U) | 
                                      (((IData)(vlSelf->top_tb__DOT__logit_valid) 
                                        << 0x16U) | 
                                       (((IData)(vlSelf->top_tb__DOT__done) 
                                         << 0x15U) 
                                        | (((IData)(vlSelf->top_tb__DOT__error) 
                                            << 0x14U) 
                                           | (((IData)(vlSelf->top_tb__DOT__cancel_done) 
                                               << 0x13U) 
                                              | ((IData)(
                                                         ((((QData)((IData)(vlSelf->top_tb__DOT__logit_index)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->top_tb__DOT__logit_data))) 
                                                          >> 0x20U)) 
                                                 >> 0xdU))))))))))) {
            VL_WRITEF("[%0t] %%Fatal: speculative_tb.sv:93: Assertion failed in %Ntop_tb.reset_outputs: TOP_RESET_XZ_OR_NONZERO\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-behavior-core-case00-20261103T094917Z-daf33fc5/speculative_tb.sv", 93, "");
        }
    }
}

void Vtop_tb___024root___nba_sequent__TOP__0(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__1(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__2(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__3(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__4(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__5(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__6(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__7(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__8(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__9(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__10(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__11(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__12(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__13(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__14(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__15(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__16(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__17(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__18(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__19(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__20(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__21(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__22(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__23(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__24(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__25(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__26(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__27(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__28(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__29(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__30(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__31(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__32(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__33(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__34(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__35(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__36(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__37(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__38(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__39(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__40(Vtop_tb___024root* vlSelf);
void Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add__0(Vtop_tb_anvil_qn1_scalar* vlSelf);
void Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic__0(Vtop_tb_anvil_qn1_scalar* vlSelf);
void Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic__0(Vtop_tb_anvil_qn1_scalar* vlSelf);
void Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__0(Vtop_tb_anvil_qn1_scalar* vlSelf);
void Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic__0(Vtop_tb_anvil_qn1_scalar* vlSelf);
void Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0(Vtop_tb_anvil_qn1_scalar* vlSelf);
void Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic__0(Vtop_tb_anvil_qn1_scalar* vlSelf);
void Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic__0(Vtop_tb_anvil_qn1_scalar* vlSelf);
void Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__1(Vtop_tb_anvil_qn1_scalar* vlSelf);
void Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic__1(Vtop_tb_anvil_qn1_scalar* vlSelf);
void Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic__1(Vtop_tb_anvil_qn1_scalar* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__42(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__0(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__45(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__1(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__2(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_sequent__TOP__4(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_sequent__TOP__46(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__3(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__4(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__6(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__7(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__8(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__9(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__10(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__11(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__12(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__13(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__14(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__15(Vtop_tb___024root* vlSelf);
void Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add__0(Vtop_tb_anvil_qn1_scalar* vlSelf);
void Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic__0(Vtop_tb_anvil_qn1_scalar* vlSelf);
void Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic__0(Vtop_tb_anvil_qn1_scalar* vlSelf);
void Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__0(Vtop_tb_anvil_qn1_scalar* vlSelf);
void Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic__0(Vtop_tb_anvil_qn1_scalar* vlSelf);
void Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0(Vtop_tb_anvil_qn1_scalar* vlSelf);
void Vtop_tb___024root___act_comb__TOP__14(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__27(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__29(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__19(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__20(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__28(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__21(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__22(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__23(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__24(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__25(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__26(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__34(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__31(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__32(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__33(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__35(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__36(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__37(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_comb__TOP__38(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__36(Vtop_tb___024root* vlSelf);

void Vtop_tb___024root___eval_nba(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_nba\n"); );
    // Body
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_sequent__TOP__0(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__1(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__2(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__3(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__4(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__5(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__6(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__7(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__8(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__9(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__10(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__11(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__12(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__13(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__14(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__15(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__16(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__17(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__18(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__19(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__20(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__21(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__22(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__23(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__24(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__25(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__26(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__27(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__28(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__29(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__30(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__31(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__32(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__33(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__34(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__35(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__36(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__37(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__38(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__39(vlSelf);
        Vtop_tb___024root___nba_sequent__TOP__40(vlSelf);
        Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add__0((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add));
        Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic__0((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic));
        Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic__0((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic));
        Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__0((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition));
        Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic__0((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic));
        Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply));
        Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic__0((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic));
        Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic__0((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic));
        Vtop_tb___024root___nba_sequent__TOP__41(vlSelf);
        Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__1((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition));
        Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic__1((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic));
        Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__1((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic));
        Vtop_tb_anvil_qn1_scalar___nba_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic__1((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic));
        Vtop_tb___024root___nba_sequent__TOP__42(vlSelf);
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_sequent__TOP__43(vlSelf);
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_sequent__TOP__44(vlSelf);
    }
    if ((0x28000001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_sequent__TOP__45(vlSelf);
    }
    if ((0x10040000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x38000001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x10100000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_sequent__TOP__46(vlSelf);
    }
    if ((0x10240000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x10440000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x10040800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x10041000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x10042000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x10840000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_comb__TOP__9(vlSelf);
    }
    if ((0x18000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0x10040000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((0x38000001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_comb__TOP__12(vlSelf);
        Vtop_tb___024root___nba_comb__TOP__13(vlSelf);
        Vtop_tb___024root___nba_comb__TOP__14(vlSelf);
        Vtop_tb___024root___nba_comb__TOP__15(vlSelf);
        Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add__0((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add));
        Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic__0((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic));
        Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic__0((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic));
        Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__0((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition));
        Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic__0((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic));
        Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply));
        Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic));
        Vtop_tb_anvil_qn1_scalar___act_comb__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0((&vlSymsp->TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic));
        Vtop_tb___024root___act_comb__TOP__14(vlSelf);
    }
    if ((0x38040801ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_comb__TOP__27(vlSelf);
    }
    if ((0x38041001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_comb__TOP__29(vlSelf);
    }
    if ((0x10940000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_comb__TOP__19(vlSelf);
    }
    if ((0x10843808ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_comb__TOP__20(vlSelf);
    }
    if ((0x38040001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_comb__TOP__28(vlSelf);
    }
    if ((0x38020001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_comb__TOP__21(vlSelf);
    }
    if ((0x39000001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_comb__TOP__22(vlSelf);
        Vtop_tb___024root___act_comb__TOP__23(vlSelf);
        Vtop_tb___024root___act_comb__TOP__24(vlSelf);
        Vtop_tb___024root___act_comb__TOP__25(vlSelf);
    }
    if ((0x38042001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_comb__TOP__26(vlSelf);
    }
    if ((0x38940001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_comb__TOP__34(vlSelf);
    }
    if ((0x1084380aULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_comb__TOP__31(vlSelf);
    }
    if ((0x39650001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_comb__TOP__32(vlSelf);
    }
    if ((0x39043801ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_comb__TOP__33(vlSelf);
    }
    if ((0x3884380bULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_comb__TOP__35(vlSelf);
    }
    if ((0x39e5380bULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_comb__TOP__36(vlSelf);
    }
    if ((0x3984380bULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_comb__TOP__37(vlSelf);
    }
    if ((0x3984b80bULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_comb__TOP__38(vlSelf);
    }
    if ((0x39e5b80bULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_comb__TOP__36(vlSelf);
    }
}
