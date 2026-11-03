// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_anvil_qn1_scalar.h"

VL_ATTR_COLD void Vtop_tb_anvil_qn1_scalar___stl_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic__0(Vtop_tb_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_tb_anvil_qn1_scalar___stl_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic__0\n"); );
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
    // Body
    vlSelf->__VdfgTmp_h3e0667de__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__b 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__b 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__add__DOT__sum_next = (0xfffffffU 
                                         & ((IData)(vlSelf->__PVT__add__DOT__subtract2)
                                             ? (vlSelf->__PVT__add__DOT__large2 
                                                - vlSelf->__PVT__add__DOT__small2)
                                             : (vlSelf->__PVT__add__DOT__large2 
                                                + vlSelf->__PVT__add__DOT__small2)));
    vlSelf->__VdfgTmp_ha96a2c24__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__a 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__a 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__divide__DOT__take_bit = ((vlSelf->__PVT__divide__DOT__remainder 
                                             << 1U) 
                                            >= vlSelf->__PVT__divide__DOT__divisor);
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
    __PVT__square_root__DOT__shifted_remainder = ((vlSelf->__PVT__square_root__DOT__remainder 
                                                   << 2U) 
                                                  | (3U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__square_root__DOT__pairs 
                                                                >> 0x34U))));
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
    vlSelf->__PVT__divide__DOT__raw_a = (((0U != (0xffU 
                                                  & (vlSelf->__PVT__a 
                                                     >> 0x17U))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & vlSelf->__PVT__a));
    vlSelf->square_root__DOT____VdfgTmp_h0890133b__0 
        = ((~ (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__unit_flush)) 
           & (IData)(vlSymsp->TOP.top_tb__DOT__rst_n));
    vlSelf->__PVT__divide__DOT__next_remainder = (0x3ffffffU 
                                                  & ((IData)(vlSelf->__PVT__divide__DOT__take_bit)
                                                      ? 
                                                     ((vlSelf->__PVT__divide__DOT__remainder 
                                                       << 1U) 
                                                      - vlSelf->__PVT__divide__DOT__divisor)
                                                      : 
                                                     (vlSelf->__PVT__divide__DOT__remainder 
                                                      << 1U)));
    vlSelf->__PVT__square_root__DOT__take_bit = (__PVT__square_root__DOT__shifted_remainder 
                                                 >= 
                                                 (1U 
                                                  | (vlSelf->__PVT__square_root__DOT__root 
                                                     << 2U)));
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
    vlSelf->in_ready = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                        & (0U == (IData)(vlSelf->__PVT__state)));
    vlSelf->__PVT__divide__DOT__ready = ((~ (IData)(vlSelf->__PVT__divide__DOT__active)) 
                                         & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
    vlSelf->__PVT__square_root__DOT__ready = ((~ (IData)(vlSelf->__PVT__square_root__DOT__active)) 
                                              & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
    vlSelf->out_valid = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                         & (3U == (IData)(vlSelf->__PVT__state)));
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
    vlSelf->out_data = ((IData)(vlSelf->out_valid) ? vlSelf->__PVT__data
                         : 0U);
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

VL_ATTR_COLD void Vtop_tb_anvil_qn1_scalar___stl_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__0(Vtop_tb_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_tb_anvil_qn1_scalar___stl_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__0\n"); );
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
    // Body
    vlSelf->__VdfgTmp_h3e0667de__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__b 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__b 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__add__DOT__sum_next = (0xfffffffU 
                                         & ((IData)(vlSelf->__PVT__add__DOT__subtract2)
                                             ? (vlSelf->__PVT__add__DOT__large2 
                                                - vlSelf->__PVT__add__DOT__small2)
                                             : (vlSelf->__PVT__add__DOT__large2 
                                                + vlSelf->__PVT__add__DOT__small2)));
    vlSelf->__VdfgTmp_ha96a2c24__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__a 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__a 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__divide__DOT__take_bit = ((vlSelf->__PVT__divide__DOT__remainder 
                                             << 1U) 
                                            >= vlSelf->__PVT__divide__DOT__divisor);
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
    __PVT__square_root__DOT__shifted_remainder = ((vlSelf->__PVT__square_root__DOT__remainder 
                                                   << 2U) 
                                                  | (3U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__square_root__DOT__pairs 
                                                                >> 0x34U))));
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
    vlSelf->__PVT__divide__DOT__raw_a = (((0U != (0xffU 
                                                  & (vlSelf->__PVT__a 
                                                     >> 0x17U))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & vlSelf->__PVT__a));
    vlSelf->square_root__DOT____VdfgTmp_h0890133b__0 
        = ((~ (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__unit_flush)) 
           & (IData)(vlSymsp->TOP.top_tb__DOT__rst_n));
    vlSelf->__PVT__divide__DOT__next_remainder = (0x3ffffffU 
                                                  & ((IData)(vlSelf->__PVT__divide__DOT__take_bit)
                                                      ? 
                                                     ((vlSelf->__PVT__divide__DOT__remainder 
                                                       << 1U) 
                                                      - vlSelf->__PVT__divide__DOT__divisor)
                                                      : 
                                                     (vlSelf->__PVT__divide__DOT__remainder 
                                                      << 1U)));
    vlSelf->__PVT__square_root__DOT__take_bit = (__PVT__square_root__DOT__shifted_remainder 
                                                 >= 
                                                 (1U 
                                                  | (vlSelf->__PVT__square_root__DOT__root 
                                                     << 2U)));
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
    vlSelf->in_ready = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                        & (0U == (IData)(vlSelf->__PVT__state)));
    vlSelf->out_valid = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                         & (3U == (IData)(vlSelf->__PVT__state)));
    vlSelf->__PVT__divide__DOT__ready = ((~ (IData)(vlSelf->__PVT__divide__DOT__active)) 
                                         & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
    vlSelf->__PVT__square_root__DOT__ready = ((~ (IData)(vlSelf->__PVT__square_root__DOT__active)) 
                                              & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
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

VL_ATTR_COLD void Vtop_tb_anvil_qn1_scalar___stl_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0(Vtop_tb_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_tb_anvil_qn1_scalar___stl_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0\n"); );
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
    // Body
    vlSelf->__VdfgTmp_h3e0667de__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__b 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__b 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__add__DOT__sum_next = (0xfffffffU 
                                         & ((IData)(vlSelf->__PVT__add__DOT__subtract2)
                                             ? (vlSelf->__PVT__add__DOT__large2 
                                                - vlSelf->__PVT__add__DOT__small2)
                                             : (vlSelf->__PVT__add__DOT__large2 
                                                + vlSelf->__PVT__add__DOT__small2)));
    vlSelf->__VdfgTmp_ha96a2c24__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__a 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__a 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__divide__DOT__take_bit = ((vlSelf->__PVT__divide__DOT__remainder 
                                             << 1U) 
                                            >= vlSelf->__PVT__divide__DOT__divisor);
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
    __PVT__square_root__DOT__shifted_remainder = ((vlSelf->__PVT__square_root__DOT__remainder 
                                                   << 2U) 
                                                  | (3U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__square_root__DOT__pairs 
                                                                >> 0x34U))));
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
    vlSelf->__PVT__divide__DOT__raw_a = (((0U != (0xffU 
                                                  & (vlSelf->__PVT__a 
                                                     >> 0x17U))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & vlSelf->__PVT__a));
    vlSelf->square_root__DOT____VdfgTmp_h0890133b__0 
        = ((~ (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush)) 
           & (IData)(vlSymsp->TOP.top_tb__DOT__rst_n));
    vlSelf->__PVT__divide__DOT__next_remainder = (0x3ffffffU 
                                                  & ((IData)(vlSelf->__PVT__divide__DOT__take_bit)
                                                      ? 
                                                     ((vlSelf->__PVT__divide__DOT__remainder 
                                                       << 1U) 
                                                      - vlSelf->__PVT__divide__DOT__divisor)
                                                      : 
                                                     (vlSelf->__PVT__divide__DOT__remainder 
                                                      << 1U)));
    vlSelf->__PVT__square_root__DOT__take_bit = (__PVT__square_root__DOT__shifted_remainder 
                                                 >= 
                                                 (1U 
                                                  | (vlSelf->__PVT__square_root__DOT__root 
                                                     << 2U)));
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
    vlSelf->in_ready = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                        & (0U == (IData)(vlSelf->__PVT__state)));
    vlSelf->out_valid = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                         & (3U == (IData)(vlSelf->__PVT__state)));
    vlSelf->__PVT__divide__DOT__ready = ((~ (IData)(vlSelf->__PVT__divide__DOT__active)) 
                                         & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
    vlSelf->__PVT__square_root__DOT__ready = ((~ (IData)(vlSelf->__PVT__square_root__DOT__active)) 
                                              & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
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

VL_ATTR_COLD void Vtop_tb_anvil_qn1_scalar___stl_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic__0(Vtop_tb_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_tb_anvil_qn1_scalar___stl_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic__0\n"); );
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
    // Body
    vlSelf->__VdfgTmp_h3e0667de__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__b 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__b 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__add__DOT__sum_next = (0xfffffffU 
                                         & ((IData)(vlSelf->__PVT__add__DOT__subtract2)
                                             ? (vlSelf->__PVT__add__DOT__large2 
                                                - vlSelf->__PVT__add__DOT__small2)
                                             : (vlSelf->__PVT__add__DOT__large2 
                                                + vlSelf->__PVT__add__DOT__small2)));
    vlSelf->__VdfgTmp_ha96a2c24__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__a 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__a 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__divide__DOT__take_bit = ((vlSelf->__PVT__divide__DOT__remainder 
                                             << 1U) 
                                            >= vlSelf->__PVT__divide__DOT__divisor);
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
    __PVT__square_root__DOT__shifted_remainder = ((vlSelf->__PVT__square_root__DOT__remainder 
                                                   << 2U) 
                                                  | (3U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__square_root__DOT__pairs 
                                                                >> 0x34U))));
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
    vlSelf->__PVT__divide__DOT__raw_a = (((0U != (0xffU 
                                                  & (vlSelf->__PVT__a 
                                                     >> 0x17U))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & vlSelf->__PVT__a));
    vlSelf->square_root__DOT____VdfgTmp_h0890133b__0 
        = ((~ (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush)) 
           & (IData)(vlSymsp->TOP.top_tb__DOT__rst_n));
    vlSelf->__PVT__divide__DOT__next_remainder = (0x3ffffffU 
                                                  & ((IData)(vlSelf->__PVT__divide__DOT__take_bit)
                                                      ? 
                                                     ((vlSelf->__PVT__divide__DOT__remainder 
                                                       << 1U) 
                                                      - vlSelf->__PVT__divide__DOT__divisor)
                                                      : 
                                                     (vlSelf->__PVT__divide__DOT__remainder 
                                                      << 1U)));
    vlSelf->__PVT__square_root__DOT__take_bit = (__PVT__square_root__DOT__shifted_remainder 
                                                 >= 
                                                 (1U 
                                                  | (vlSelf->__PVT__square_root__DOT__root 
                                                     << 2U)));
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
    vlSelf->in_ready = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                        & (0U == (IData)(vlSelf->__PVT__state)));
    vlSelf->out_valid = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                         & (3U == (IData)(vlSelf->__PVT__state)));
    vlSelf->__PVT__divide__DOT__ready = ((~ (IData)(vlSelf->__PVT__divide__DOT__active)) 
                                         & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
    vlSelf->__PVT__square_root__DOT__ready = ((~ (IData)(vlSelf->__PVT__square_root__DOT__active)) 
                                              & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
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

VL_ATTR_COLD void Vtop_tb_anvil_qn1_scalar___stl_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic__0(Vtop_tb_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_tb_anvil_qn1_scalar___stl_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic__0\n"); );
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
    // Body
    vlSelf->__VdfgTmp_h3e0667de__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__b 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__b 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__add__DOT__sum_next = (0xfffffffU 
                                         & ((IData)(vlSelf->__PVT__add__DOT__subtract2)
                                             ? (vlSelf->__PVT__add__DOT__large2 
                                                - vlSelf->__PVT__add__DOT__small2)
                                             : (vlSelf->__PVT__add__DOT__large2 
                                                + vlSelf->__PVT__add__DOT__small2)));
    vlSelf->__VdfgTmp_ha96a2c24__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__a 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__a 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__divide__DOT__take_bit = ((vlSelf->__PVT__divide__DOT__remainder 
                                             << 1U) 
                                            >= vlSelf->__PVT__divide__DOT__divisor);
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
    __PVT__square_root__DOT__shifted_remainder = ((vlSelf->__PVT__square_root__DOT__remainder 
                                                   << 2U) 
                                                  | (3U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__square_root__DOT__pairs 
                                                                >> 0x34U))));
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
    vlSelf->__PVT__divide__DOT__raw_a = (((0U != (0xffU 
                                                  & (vlSelf->__PVT__a 
                                                     >> 0x17U))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & vlSelf->__PVT__a));
    vlSelf->square_root__DOT____VdfgTmp_h0890133b__0 
        = ((~ (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush)) 
           & (IData)(vlSymsp->TOP.top_tb__DOT__rst_n));
    vlSelf->__PVT__divide__DOT__next_remainder = (0x3ffffffU 
                                                  & ((IData)(vlSelf->__PVT__divide__DOT__take_bit)
                                                      ? 
                                                     ((vlSelf->__PVT__divide__DOT__remainder 
                                                       << 1U) 
                                                      - vlSelf->__PVT__divide__DOT__divisor)
                                                      : 
                                                     (vlSelf->__PVT__divide__DOT__remainder 
                                                      << 1U)));
    vlSelf->__PVT__square_root__DOT__take_bit = (__PVT__square_root__DOT__shifted_remainder 
                                                 >= 
                                                 (1U 
                                                  | (vlSelf->__PVT__square_root__DOT__root 
                                                     << 2U)));
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
    vlSelf->in_ready = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                        & (0U == (IData)(vlSelf->__PVT__state)));
    vlSelf->out_valid = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                         & (3U == (IData)(vlSelf->__PVT__state)));
    vlSelf->__PVT__divide__DOT__ready = ((~ (IData)(vlSelf->__PVT__divide__DOT__active)) 
                                         & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
    vlSelf->__PVT__square_root__DOT__ready = ((~ (IData)(vlSelf->__PVT__square_root__DOT__active)) 
                                              & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
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

VL_ATTR_COLD void Vtop_tb_anvil_qn1_scalar___stl_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic__0(Vtop_tb_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_tb_anvil_qn1_scalar___stl_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic__0\n"); );
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
    // Body
    vlSelf->__VdfgTmp_h3e0667de__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__b 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__b 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__add__DOT__sum_next = (0xfffffffU 
                                         & ((IData)(vlSelf->__PVT__add__DOT__subtract2)
                                             ? (vlSelf->__PVT__add__DOT__large2 
                                                - vlSelf->__PVT__add__DOT__small2)
                                             : (vlSelf->__PVT__add__DOT__large2 
                                                + vlSelf->__PVT__add__DOT__small2)));
    vlSelf->__VdfgTmp_ha96a2c24__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__a 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__a 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__divide__DOT__take_bit = ((vlSelf->__PVT__divide__DOT__remainder 
                                             << 1U) 
                                            >= vlSelf->__PVT__divide__DOT__divisor);
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
    __PVT__square_root__DOT__shifted_remainder = ((vlSelf->__PVT__square_root__DOT__remainder 
                                                   << 2U) 
                                                  | (3U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__square_root__DOT__pairs 
                                                                >> 0x34U))));
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
    vlSelf->__PVT__divide__DOT__raw_a = (((0U != (0xffU 
                                                  & (vlSelf->__PVT__a 
                                                     >> 0x17U))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & vlSelf->__PVT__a));
    vlSelf->square_root__DOT____VdfgTmp_h0890133b__0 
        = ((~ (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__unit_flush)) 
           & (IData)(vlSymsp->TOP.top_tb__DOT__rst_n));
    vlSelf->__PVT__divide__DOT__next_remainder = (0x3ffffffU 
                                                  & ((IData)(vlSelf->__PVT__divide__DOT__take_bit)
                                                      ? 
                                                     ((vlSelf->__PVT__divide__DOT__remainder 
                                                       << 1U) 
                                                      - vlSelf->__PVT__divide__DOT__divisor)
                                                      : 
                                                     (vlSelf->__PVT__divide__DOT__remainder 
                                                      << 1U)));
    vlSelf->__PVT__square_root__DOT__take_bit = (__PVT__square_root__DOT__shifted_remainder 
                                                 >= 
                                                 (1U 
                                                  | (vlSelf->__PVT__square_root__DOT__root 
                                                     << 2U)));
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
    vlSelf->in_ready = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                        & (0U == (IData)(vlSelf->__PVT__state)));
    vlSelf->__PVT__divide__DOT__ready = ((~ (IData)(vlSelf->__PVT__divide__DOT__active)) 
                                         & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
    vlSelf->__PVT__square_root__DOT__ready = ((~ (IData)(vlSelf->__PVT__square_root__DOT__active)) 
                                              & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
    vlSelf->out_valid = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                         & (3U == (IData)(vlSelf->__PVT__state)));
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
    if (vlSelf->out_valid) {
        vlSelf->out_data = vlSelf->__PVT__data;
        vlSelf->out_error = vlSelf->__PVT__result_failed;
    } else {
        vlSelf->out_data = 0U;
        vlSelf->out_error = 0U;
    }
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

VL_ATTR_COLD void Vtop_tb_anvil_qn1_scalar___stl_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic__0(Vtop_tb_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_tb_anvil_qn1_scalar___stl_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic__0\n"); );
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
    // Body
    vlSelf->__VdfgTmp_h3e0667de__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__b 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__b 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__add__DOT__sum_next = (0xfffffffU 
                                         & ((IData)(vlSelf->__PVT__add__DOT__subtract2)
                                             ? (vlSelf->__PVT__add__DOT__large2 
                                                - vlSelf->__PVT__add__DOT__small2)
                                             : (vlSelf->__PVT__add__DOT__large2 
                                                + vlSelf->__PVT__add__DOT__small2)));
    vlSelf->__VdfgTmp_ha96a2c24__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__a 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__a 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__divide__DOT__take_bit = ((vlSelf->__PVT__divide__DOT__remainder 
                                             << 1U) 
                                            >= vlSelf->__PVT__divide__DOT__divisor);
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
    __PVT__square_root__DOT__shifted_remainder = ((vlSelf->__PVT__square_root__DOT__remainder 
                                                   << 2U) 
                                                  | (3U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__square_root__DOT__pairs 
                                                                >> 0x34U))));
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
    vlSelf->__PVT__divide__DOT__raw_a = (((0U != (0xffU 
                                                  & (vlSelf->__PVT__a 
                                                     >> 0x17U))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & vlSelf->__PVT__a));
    vlSelf->square_root__DOT____VdfgTmp_h0890133b__0 
        = ((~ (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__unit_flush)) 
           & (IData)(vlSymsp->TOP.top_tb__DOT__rst_n));
    vlSelf->__PVT__divide__DOT__next_remainder = (0x3ffffffU 
                                                  & ((IData)(vlSelf->__PVT__divide__DOT__take_bit)
                                                      ? 
                                                     ((vlSelf->__PVT__divide__DOT__remainder 
                                                       << 1U) 
                                                      - vlSelf->__PVT__divide__DOT__divisor)
                                                      : 
                                                     (vlSelf->__PVT__divide__DOT__remainder 
                                                      << 1U)));
    vlSelf->__PVT__square_root__DOT__take_bit = (__PVT__square_root__DOT__shifted_remainder 
                                                 >= 
                                                 (1U 
                                                  | (vlSelf->__PVT__square_root__DOT__root 
                                                     << 2U)));
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
    vlSelf->in_ready = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                        & (0U == (IData)(vlSelf->__PVT__state)));
    vlSelf->out_valid = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                         & (3U == (IData)(vlSelf->__PVT__state)));
    vlSelf->__PVT__divide__DOT__ready = ((~ (IData)(vlSelf->__PVT__divide__DOT__active)) 
                                         & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
    vlSelf->__PVT__square_root__DOT__ready = ((~ (IData)(vlSelf->__PVT__square_root__DOT__active)) 
                                              & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
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

VL_ATTR_COLD void Vtop_tb_anvil_qn1_scalar___stl_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add__0(Vtop_tb_anvil_qn1_scalar* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_tb_anvil_qn1_scalar___stl_sequent__TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add__0\n"); );
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
    // Body
    vlSelf->__VdfgTmp_h3e0667de__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__b 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__b 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__add__DOT__sum_next = (0xfffffffU 
                                         & ((IData)(vlSelf->__PVT__add__DOT__subtract2)
                                             ? (vlSelf->__PVT__add__DOT__large2 
                                                - vlSelf->__PVT__add__DOT__small2)
                                             : (vlSelf->__PVT__add__DOT__large2 
                                                + vlSelf->__PVT__add__DOT__small2)));
    vlSelf->__VdfgTmp_ha96a2c24__0 = ((0U == (0xffU 
                                              & (vlSelf->__PVT__a 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->__PVT__a 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__PVT__divide__DOT__take_bit = ((vlSelf->__PVT__divide__DOT__remainder 
                                             << 1U) 
                                            >= vlSelf->__PVT__divide__DOT__divisor);
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
    __PVT__square_root__DOT__shifted_remainder = ((vlSelf->__PVT__square_root__DOT__remainder 
                                                   << 2U) 
                                                  | (3U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__square_root__DOT__pairs 
                                                                >> 0x34U))));
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
    vlSelf->__PVT__divide__DOT__raw_a = (((0U != (0xffU 
                                                  & (vlSelf->__PVT__a 
                                                     >> 0x17U))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & vlSelf->__PVT__a));
    vlSelf->square_root__DOT____VdfgTmp_h0890133b__0 
        = ((~ (IData)(vlSymsp->TOP.top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT____Vcellinp__legal__DOT__accumulator_add__flush)) 
           & (IData)(vlSymsp->TOP.top_tb__DOT__rst_n));
    vlSelf->__PVT__divide__DOT__next_remainder = (0x3ffffffU 
                                                  & ((IData)(vlSelf->__PVT__divide__DOT__take_bit)
                                                      ? 
                                                     ((vlSelf->__PVT__divide__DOT__remainder 
                                                       << 1U) 
                                                      - vlSelf->__PVT__divide__DOT__divisor)
                                                      : 
                                                     (vlSelf->__PVT__divide__DOT__remainder 
                                                      << 1U)));
    vlSelf->__PVT__square_root__DOT__take_bit = (__PVT__square_root__DOT__shifted_remainder 
                                                 >= 
                                                 (1U 
                                                  | (vlSelf->__PVT__square_root__DOT__root 
                                                     << 2U)));
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
    vlSelf->in_ready = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                        & (0U == (IData)(vlSelf->__PVT__state)));
    vlSelf->out_valid = ((IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0) 
                         & (3U == (IData)(vlSelf->__PVT__state)));
    vlSelf->__PVT__divide__DOT__ready = ((~ (IData)(vlSelf->__PVT__divide__DOT__active)) 
                                         & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
    vlSelf->__PVT__square_root__DOT__ready = ((~ (IData)(vlSelf->__PVT__square_root__DOT__active)) 
                                              & (IData)(vlSelf->square_root__DOT____VdfgTmp_h0890133b__0));
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
