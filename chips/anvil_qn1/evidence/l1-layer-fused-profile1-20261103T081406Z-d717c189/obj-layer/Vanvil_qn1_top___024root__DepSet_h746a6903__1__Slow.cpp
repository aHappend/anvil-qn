// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_ATTR_COLD void Vanvil_qn1_top___024root___stl_sequent__TOP__2(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___stl_sequent__TOP__2\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__834__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__834__part 
                            = vlSelf->__Vfunc_leading_zero32__834__value;
                        vlSelf->__Vfunc_leading_zero32__834__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__834__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__834__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__834__count)));
                            vlSelf->__Vfunc_leading_zero32__834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__834__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__834__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__834__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__834__count)));
                            vlSelf->__Vfunc_leading_zero32__834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__834__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__834__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__834__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__834__count)));
                            vlSelf->__Vfunc_leading_zero32__834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__834__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__834__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__834__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__834__count)));
                            vlSelf->__Vfunc_leading_zero32__834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__834__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__834__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__834__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__834__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__834__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__834__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__834__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__834__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__840__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__840__part 
                            = vlSelf->__Vfunc_leading_zero32__840__value;
                        vlSelf->__Vfunc_leading_zero32__840__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__840__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__840__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__840__count)));
                            vlSelf->__Vfunc_leading_zero32__840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__840__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__840__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__840__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__840__count)));
                            vlSelf->__Vfunc_leading_zero32__840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__840__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__840__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__840__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__840__count)));
                            vlSelf->__Vfunc_leading_zero32__840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__840__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__840__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__840__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__840__count)));
                            vlSelf->__Vfunc_leading_zero32__840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__840__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__840__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__840__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__840__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__840__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__840__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__840__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__840__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__846__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__846__part 
                            = vlSelf->__Vfunc_leading_zero32__846__value;
                        vlSelf->__Vfunc_leading_zero32__846__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__846__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__846__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__846__count)));
                            vlSelf->__Vfunc_leading_zero32__846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__846__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__846__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__846__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__846__count)));
                            vlSelf->__Vfunc_leading_zero32__846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__846__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__846__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__846__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__846__count)));
                            vlSelf->__Vfunc_leading_zero32__846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__846__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__846__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__846__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__846__count)));
                            vlSelf->__Vfunc_leading_zero32__846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__846__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__846__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__846__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__846__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__846__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__846__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__846__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__846__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__8__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__8__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__852__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__8__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__852__part 
                            = vlSelf->__Vfunc_leading_zero32__852__value;
                        vlSelf->__Vfunc_leading_zero32__852__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__852__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__852__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__852__count)));
                            vlSelf->__Vfunc_leading_zero32__852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__852__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__852__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__852__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__852__count)));
                            vlSelf->__Vfunc_leading_zero32__852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__852__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__852__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__852__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__852__count)));
                            vlSelf->__Vfunc_leading_zero32__852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__852__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__852__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__852__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__852__count)));
                            vlSelf->__Vfunc_leading_zero32__852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__852__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__852__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__852__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__852__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__852__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__852__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__852__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__852__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__9__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__9__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__858__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__9__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__858__part 
                            = vlSelf->__Vfunc_leading_zero32__858__value;
                        vlSelf->__Vfunc_leading_zero32__858__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__858__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__858__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__858__count)));
                            vlSelf->__Vfunc_leading_zero32__858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__858__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__858__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__858__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__858__count)));
                            vlSelf->__Vfunc_leading_zero32__858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__858__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__858__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__858__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__858__count)));
                            vlSelf->__Vfunc_leading_zero32__858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__858__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__858__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__858__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__858__count)));
                            vlSelf->__Vfunc_leading_zero32__858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__858__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__858__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__858__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__858__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__858__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__858__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__858__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__858__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__10__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__10__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__864__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__10__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__864__part 
                            = vlSelf->__Vfunc_leading_zero32__864__value;
                        vlSelf->__Vfunc_leading_zero32__864__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__864__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__864__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__864__count)));
                            vlSelf->__Vfunc_leading_zero32__864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__864__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__864__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__864__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__864__count)));
                            vlSelf->__Vfunc_leading_zero32__864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__864__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__864__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__864__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__864__count)));
                            vlSelf->__Vfunc_leading_zero32__864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__864__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__864__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__864__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__864__count)));
                            vlSelf->__Vfunc_leading_zero32__864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__864__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__864__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__864__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__864__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__864__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__864__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__864__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__864__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__11__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__11__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__870__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__11__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__870__part 
                            = vlSelf->__Vfunc_leading_zero32__870__value;
                        vlSelf->__Vfunc_leading_zero32__870__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__870__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__870__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__870__count)));
                            vlSelf->__Vfunc_leading_zero32__870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__870__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__870__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__870__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__870__count)));
                            vlSelf->__Vfunc_leading_zero32__870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__870__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__870__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__870__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__870__count)));
                            vlSelf->__Vfunc_leading_zero32__870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__870__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__870__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__870__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__870__count)));
                            vlSelf->__Vfunc_leading_zero32__870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__870__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__870__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__870__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__870__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__870__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__870__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__870__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__870__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__12__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__12__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__876__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__12__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__876__part 
                            = vlSelf->__Vfunc_leading_zero32__876__value;
                        vlSelf->__Vfunc_leading_zero32__876__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__876__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__876__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__876__count)));
                            vlSelf->__Vfunc_leading_zero32__876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__876__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__876__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__876__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__876__count)));
                            vlSelf->__Vfunc_leading_zero32__876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__876__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__876__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__876__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__876__count)));
                            vlSelf->__Vfunc_leading_zero32__876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__876__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__876__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__876__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__876__count)));
                            vlSelf->__Vfunc_leading_zero32__876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__876__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__876__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__876__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__876__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__876__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__876__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__876__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__876__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__13__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__13__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__882__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__13__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__882__part 
                            = vlSelf->__Vfunc_leading_zero32__882__value;
                        vlSelf->__Vfunc_leading_zero32__882__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__882__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__882__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__882__count)));
                            vlSelf->__Vfunc_leading_zero32__882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__882__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__882__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__882__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__882__count)));
                            vlSelf->__Vfunc_leading_zero32__882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__882__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__882__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__882__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__882__count)));
                            vlSelf->__Vfunc_leading_zero32__882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__882__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__882__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__882__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__882__count)));
                            vlSelf->__Vfunc_leading_zero32__882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__882__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__882__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__882__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__882__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__882__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__882__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__882__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__882__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__14__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__14__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__888__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__14__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__888__part 
                            = vlSelf->__Vfunc_leading_zero32__888__value;
                        vlSelf->__Vfunc_leading_zero32__888__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__888__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__888__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__888__count)));
                            vlSelf->__Vfunc_leading_zero32__888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__888__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__888__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__888__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__888__count)));
                            vlSelf->__Vfunc_leading_zero32__888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__888__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__888__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__888__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__888__count)));
                            vlSelf->__Vfunc_leading_zero32__888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__888__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__888__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__888__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__888__count)));
                            vlSelf->__Vfunc_leading_zero32__888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__888__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__888__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__888__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__888__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__888__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__888__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__888__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__888__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__15__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__15__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__894__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__15__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__894__part 
                            = vlSelf->__Vfunc_leading_zero32__894__value;
                        vlSelf->__Vfunc_leading_zero32__894__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__894__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__894__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__894__count)));
                            vlSelf->__Vfunc_leading_zero32__894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__894__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__894__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__894__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__894__count)));
                            vlSelf->__Vfunc_leading_zero32__894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__894__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__894__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__894__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__894__count)));
                            vlSelf->__Vfunc_leading_zero32__894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__894__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__894__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__894__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__894__count)));
                            vlSelf->__Vfunc_leading_zero32__894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__894__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__894__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__894__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__894__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__894__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__894__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__894__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__894__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__16__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__16__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__900__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__16__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__900__part 
                            = vlSelf->__Vfunc_leading_zero32__900__value;
                        vlSelf->__Vfunc_leading_zero32__900__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__900__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__900__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__900__count)));
                            vlSelf->__Vfunc_leading_zero32__900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__900__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__900__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__900__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__900__count)));
                            vlSelf->__Vfunc_leading_zero32__900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__900__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__900__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__900__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__900__count)));
                            vlSelf->__Vfunc_leading_zero32__900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__900__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__900__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__900__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__900__count)));
                            vlSelf->__Vfunc_leading_zero32__900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__900__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__900__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__900__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__900__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__900__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__900__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__900__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__900__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__17__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__17__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__906__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__17__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__906__part 
                            = vlSelf->__Vfunc_leading_zero32__906__value;
                        vlSelf->__Vfunc_leading_zero32__906__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__906__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__906__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__906__count)));
                            vlSelf->__Vfunc_leading_zero32__906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__906__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__906__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__906__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__906__count)));
                            vlSelf->__Vfunc_leading_zero32__906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__906__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__906__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__906__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__906__count)));
                            vlSelf->__Vfunc_leading_zero32__906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__906__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__906__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__906__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__906__count)));
                            vlSelf->__Vfunc_leading_zero32__906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__906__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__906__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__906__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__906__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__906__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__906__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__906__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__906__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__18__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__18__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__912__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__18__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__912__part 
                            = vlSelf->__Vfunc_leading_zero32__912__value;
                        vlSelf->__Vfunc_leading_zero32__912__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__912__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__912__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__912__count)));
                            vlSelf->__Vfunc_leading_zero32__912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__912__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__912__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__912__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__912__count)));
                            vlSelf->__Vfunc_leading_zero32__912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__912__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__912__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__912__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__912__count)));
                            vlSelf->__Vfunc_leading_zero32__912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__912__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__912__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__912__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__912__count)));
                            vlSelf->__Vfunc_leading_zero32__912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__912__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__912__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__912__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__912__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__912__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__912__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__912__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__912__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__19__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__19__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__918__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__19__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__918__part 
                            = vlSelf->__Vfunc_leading_zero32__918__value;
                        vlSelf->__Vfunc_leading_zero32__918__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__918__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__918__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__918__count)));
                            vlSelf->__Vfunc_leading_zero32__918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__918__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__918__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__918__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__918__count)));
                            vlSelf->__Vfunc_leading_zero32__918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__918__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__918__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__918__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__918__count)));
                            vlSelf->__Vfunc_leading_zero32__918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__918__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__918__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__918__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__918__count)));
                            vlSelf->__Vfunc_leading_zero32__918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__918__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__918__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__918__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__918__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__918__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__918__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__918__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__918__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__20__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__20__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__924__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__20__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__924__part 
                            = vlSelf->__Vfunc_leading_zero32__924__value;
                        vlSelf->__Vfunc_leading_zero32__924__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__924__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__924__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__924__count)));
                            vlSelf->__Vfunc_leading_zero32__924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__924__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__924__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__924__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__924__count)));
                            vlSelf->__Vfunc_leading_zero32__924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__924__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__924__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__924__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__924__count)));
                            vlSelf->__Vfunc_leading_zero32__924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__924__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__924__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__924__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__924__count)));
                            vlSelf->__Vfunc_leading_zero32__924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__924__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__924__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__924__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__924__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__924__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__924__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__924__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__924__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__21__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__21__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__930__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__21__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__930__part 
                            = vlSelf->__Vfunc_leading_zero32__930__value;
                        vlSelf->__Vfunc_leading_zero32__930__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__930__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__930__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__930__count)));
                            vlSelf->__Vfunc_leading_zero32__930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__930__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__930__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__930__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__930__count)));
                            vlSelf->__Vfunc_leading_zero32__930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__930__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__930__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__930__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__930__count)));
                            vlSelf->__Vfunc_leading_zero32__930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__930__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__930__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__930__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__930__count)));
                            vlSelf->__Vfunc_leading_zero32__930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__930__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__930__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__930__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__930__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__930__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__930__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__930__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__930__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__22__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__22__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__936__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__22__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__936__part 
                            = vlSelf->__Vfunc_leading_zero32__936__value;
                        vlSelf->__Vfunc_leading_zero32__936__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__936__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__936__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__936__count)));
                            vlSelf->__Vfunc_leading_zero32__936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__936__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__936__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__936__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__936__count)));
                            vlSelf->__Vfunc_leading_zero32__936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__936__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__936__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__936__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__936__count)));
                            vlSelf->__Vfunc_leading_zero32__936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__936__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__936__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__936__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__936__count)));
                            vlSelf->__Vfunc_leading_zero32__936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__936__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__936__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__936__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__936__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__936__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__936__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__936__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__936__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__23__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__23__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__942__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__23__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__942__part 
                            = vlSelf->__Vfunc_leading_zero32__942__value;
                        vlSelf->__Vfunc_leading_zero32__942__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__942__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__942__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__942__count)));
                            vlSelf->__Vfunc_leading_zero32__942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__942__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__942__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__942__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__942__count)));
                            vlSelf->__Vfunc_leading_zero32__942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__942__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__942__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__942__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__942__count)));
                            vlSelf->__Vfunc_leading_zero32__942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__942__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__942__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__942__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__942__count)));
                            vlSelf->__Vfunc_leading_zero32__942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__942__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__942__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__942__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__942__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__942__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__942__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__942__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__942__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__24__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__24__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__948__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__24__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__948__part 
                            = vlSelf->__Vfunc_leading_zero32__948__value;
                        vlSelf->__Vfunc_leading_zero32__948__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__948__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__948__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__948__count)));
                            vlSelf->__Vfunc_leading_zero32__948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__948__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__948__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__948__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__948__count)));
                            vlSelf->__Vfunc_leading_zero32__948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__948__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__948__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__948__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__948__count)));
                            vlSelf->__Vfunc_leading_zero32__948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__948__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__948__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__948__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__948__count)));
                            vlSelf->__Vfunc_leading_zero32__948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__948__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__948__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__948__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__948__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__948__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__948__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__948__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__948__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__25__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__25__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__954__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__25__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__954__part 
                            = vlSelf->__Vfunc_leading_zero32__954__value;
                        vlSelf->__Vfunc_leading_zero32__954__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__954__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__954__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__954__count)));
                            vlSelf->__Vfunc_leading_zero32__954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__954__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__954__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__954__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__954__count)));
                            vlSelf->__Vfunc_leading_zero32__954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__954__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__954__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__954__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__954__count)));
                            vlSelf->__Vfunc_leading_zero32__954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__954__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__954__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__954__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__954__count)));
                            vlSelf->__Vfunc_leading_zero32__954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__954__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__954__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__954__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__954__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__954__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__954__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__954__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__954__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__26__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__26__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__960__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__26__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__960__part 
                            = vlSelf->__Vfunc_leading_zero32__960__value;
                        vlSelf->__Vfunc_leading_zero32__960__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__960__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__960__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__960__count)));
                            vlSelf->__Vfunc_leading_zero32__960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__960__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__960__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__960__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__960__count)));
                            vlSelf->__Vfunc_leading_zero32__960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__960__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__960__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__960__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__960__count)));
                            vlSelf->__Vfunc_leading_zero32__960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__960__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__960__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__960__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__960__count)));
                            vlSelf->__Vfunc_leading_zero32__960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__960__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__960__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__960__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__960__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__960__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__960__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__960__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__960__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__27__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__27__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__966__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__27__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__966__part 
                            = vlSelf->__Vfunc_leading_zero32__966__value;
                        vlSelf->__Vfunc_leading_zero32__966__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__966__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__966__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__966__count)));
                            vlSelf->__Vfunc_leading_zero32__966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__966__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__966__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__966__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__966__count)));
                            vlSelf->__Vfunc_leading_zero32__966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__966__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__966__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__966__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__966__count)));
                            vlSelf->__Vfunc_leading_zero32__966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__966__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__966__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__966__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__966__count)));
                            vlSelf->__Vfunc_leading_zero32__966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__966__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__966__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__966__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__966__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__966__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__966__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__966__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__966__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__28__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__28__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__972__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__28__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__972__part 
                            = vlSelf->__Vfunc_leading_zero32__972__value;
                        vlSelf->__Vfunc_leading_zero32__972__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__972__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__972__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__972__count)));
                            vlSelf->__Vfunc_leading_zero32__972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__972__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__972__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__972__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__972__count)));
                            vlSelf->__Vfunc_leading_zero32__972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__972__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__972__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__972__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__972__count)));
                            vlSelf->__Vfunc_leading_zero32__972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__972__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__972__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__972__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__972__count)));
                            vlSelf->__Vfunc_leading_zero32__972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__972__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__972__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__972__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__972__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__972__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__972__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__972__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__972__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__29__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__29__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__978__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__29__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__978__part 
                            = vlSelf->__Vfunc_leading_zero32__978__value;
                        vlSelf->__Vfunc_leading_zero32__978__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__978__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__978__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__978__count)));
                            vlSelf->__Vfunc_leading_zero32__978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__978__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__978__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__978__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__978__count)));
                            vlSelf->__Vfunc_leading_zero32__978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__978__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__978__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__978__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__978__count)));
                            vlSelf->__Vfunc_leading_zero32__978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__978__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__978__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__978__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__978__count)));
                            vlSelf->__Vfunc_leading_zero32__978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__978__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__978__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__978__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__978__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__978__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__978__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__978__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__978__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__30__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__30__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__984__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__30__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__984__part 
                            = vlSelf->__Vfunc_leading_zero32__984__value;
                        vlSelf->__Vfunc_leading_zero32__984__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__984__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__984__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__984__count)));
                            vlSelf->__Vfunc_leading_zero32__984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__984__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__984__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__984__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__984__count)));
                            vlSelf->__Vfunc_leading_zero32__984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__984__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__984__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__984__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__984__count)));
                            vlSelf->__Vfunc_leading_zero32__984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__984__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__984__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__984__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__984__count)));
                            vlSelf->__Vfunc_leading_zero32__984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__984__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__984__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__984__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__984__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__984__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__984__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__984__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__984__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__31__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__31__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__990__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__31__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__990__part 
                            = vlSelf->__Vfunc_leading_zero32__990__value;
                        vlSelf->__Vfunc_leading_zero32__990__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__990__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__990__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__990__count)));
                            vlSelf->__Vfunc_leading_zero32__990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__990__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__990__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__990__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__990__count)));
                            vlSelf->__Vfunc_leading_zero32__990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__990__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__990__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__990__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__990__count)));
                            vlSelf->__Vfunc_leading_zero32__990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__990__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__990__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__990__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__990__count)));
                            vlSelf->__Vfunc_leading_zero32__990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__990__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__990__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__990__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__990__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__990__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__990__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__990__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__990__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__32__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__32__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__996__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__32__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__996__part 
                            = vlSelf->__Vfunc_leading_zero32__996__value;
                        vlSelf->__Vfunc_leading_zero32__996__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__996__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__996__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__996__count)));
                            vlSelf->__Vfunc_leading_zero32__996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__996__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__996__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__996__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__996__count)));
                            vlSelf->__Vfunc_leading_zero32__996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__996__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__996__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__996__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__996__count)));
                            vlSelf->__Vfunc_leading_zero32__996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__996__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__996__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__996__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__996__count)));
                            vlSelf->__Vfunc_leading_zero32__996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__996__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__996__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__996__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__996__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__996__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__996__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__996__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__996__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__33__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__33__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1002__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__33__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1002__part 
                            = vlSelf->__Vfunc_leading_zero32__1002__value;
                        vlSelf->__Vfunc_leading_zero32__1002__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1002__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1002__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1002__count)));
                            vlSelf->__Vfunc_leading_zero32__1002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1002__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1002__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1002__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1002__count)));
                            vlSelf->__Vfunc_leading_zero32__1002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1002__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1002__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1002__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1002__count)));
                            vlSelf->__Vfunc_leading_zero32__1002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1002__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1002__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1002__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1002__count)));
                            vlSelf->__Vfunc_leading_zero32__1002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1002__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1002__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1002__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1002__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1002__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1002__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1002__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1002__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__34__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__34__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1008__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__34__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1008__part 
                            = vlSelf->__Vfunc_leading_zero32__1008__value;
                        vlSelf->__Vfunc_leading_zero32__1008__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1008__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1008__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1008__count)));
                            vlSelf->__Vfunc_leading_zero32__1008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1008__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1008__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1008__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1008__count)));
                            vlSelf->__Vfunc_leading_zero32__1008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1008__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1008__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1008__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1008__count)));
                            vlSelf->__Vfunc_leading_zero32__1008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1008__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1008__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1008__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1008__count)));
                            vlSelf->__Vfunc_leading_zero32__1008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1008__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1008__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1008__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1008__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1008__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1008__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1008__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1008__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__35__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__35__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1014__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__35__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1014__part 
                            = vlSelf->__Vfunc_leading_zero32__1014__value;
                        vlSelf->__Vfunc_leading_zero32__1014__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1014__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1014__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1014__count)));
                            vlSelf->__Vfunc_leading_zero32__1014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1014__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1014__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1014__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1014__count)));
                            vlSelf->__Vfunc_leading_zero32__1014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1014__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1014__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1014__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1014__count)));
                            vlSelf->__Vfunc_leading_zero32__1014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1014__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1014__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1014__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1014__count)));
                            vlSelf->__Vfunc_leading_zero32__1014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1014__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1014__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1014__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1014__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1014__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1014__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1014__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1014__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__36__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__36__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1020__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__36__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1020__part 
                            = vlSelf->__Vfunc_leading_zero32__1020__value;
                        vlSelf->__Vfunc_leading_zero32__1020__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1020__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1020__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1020__count)));
                            vlSelf->__Vfunc_leading_zero32__1020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1020__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1020__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1020__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1020__count)));
                            vlSelf->__Vfunc_leading_zero32__1020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1020__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1020__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1020__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1020__count)));
                            vlSelf->__Vfunc_leading_zero32__1020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1020__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1020__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1020__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1020__count)));
                            vlSelf->__Vfunc_leading_zero32__1020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1020__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1020__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1020__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1020__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1020__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1020__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1020__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1020__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__37__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__37__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1026__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__37__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1026__part 
                            = vlSelf->__Vfunc_leading_zero32__1026__value;
                        vlSelf->__Vfunc_leading_zero32__1026__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1026__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1026__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1026__count)));
                            vlSelf->__Vfunc_leading_zero32__1026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1026__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1026__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1026__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1026__count)));
                            vlSelf->__Vfunc_leading_zero32__1026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1026__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1026__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1026__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1026__count)));
                            vlSelf->__Vfunc_leading_zero32__1026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1026__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1026__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1026__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1026__count)));
                            vlSelf->__Vfunc_leading_zero32__1026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1026__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1026__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1026__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1026__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1026__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1026__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1026__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1026__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__38__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__38__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1032__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__38__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1032__part 
                            = vlSelf->__Vfunc_leading_zero32__1032__value;
                        vlSelf->__Vfunc_leading_zero32__1032__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1032__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1032__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1032__count)));
                            vlSelf->__Vfunc_leading_zero32__1032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1032__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1032__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1032__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1032__count)));
                            vlSelf->__Vfunc_leading_zero32__1032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1032__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1032__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1032__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1032__count)));
                            vlSelf->__Vfunc_leading_zero32__1032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1032__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1032__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1032__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1032__count)));
                            vlSelf->__Vfunc_leading_zero32__1032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1032__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1032__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1032__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1032__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1032__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1032__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1032__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1032__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__39__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__39__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1038__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__39__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1038__part 
                            = vlSelf->__Vfunc_leading_zero32__1038__value;
                        vlSelf->__Vfunc_leading_zero32__1038__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1038__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1038__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1038__count)));
                            vlSelf->__Vfunc_leading_zero32__1038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1038__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1038__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1038__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1038__count)));
                            vlSelf->__Vfunc_leading_zero32__1038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1038__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1038__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1038__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1038__count)));
                            vlSelf->__Vfunc_leading_zero32__1038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1038__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1038__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1038__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1038__count)));
                            vlSelf->__Vfunc_leading_zero32__1038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1038__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1038__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1038__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1038__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1038__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1038__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1038__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1038__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__40__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__40__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1044__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__40__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1044__part 
                            = vlSelf->__Vfunc_leading_zero32__1044__value;
                        vlSelf->__Vfunc_leading_zero32__1044__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1044__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1044__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1044__count)));
                            vlSelf->__Vfunc_leading_zero32__1044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1044__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1044__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1044__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1044__count)));
                            vlSelf->__Vfunc_leading_zero32__1044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1044__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1044__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1044__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1044__count)));
                            vlSelf->__Vfunc_leading_zero32__1044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1044__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1044__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1044__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1044__count)));
                            vlSelf->__Vfunc_leading_zero32__1044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1044__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1044__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1044__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1044__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1044__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1044__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1044__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1044__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__41__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__41__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1050__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__41__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1050__part 
                            = vlSelf->__Vfunc_leading_zero32__1050__value;
                        vlSelf->__Vfunc_leading_zero32__1050__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1050__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1050__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1050__count)));
                            vlSelf->__Vfunc_leading_zero32__1050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1050__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1050__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1050__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1050__count)));
                            vlSelf->__Vfunc_leading_zero32__1050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1050__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1050__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1050__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1050__count)));
                            vlSelf->__Vfunc_leading_zero32__1050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1050__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1050__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1050__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1050__count)));
                            vlSelf->__Vfunc_leading_zero32__1050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1050__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1050__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1050__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1050__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1050__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1050__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1050__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1050__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__42__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__42__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1056__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__42__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1056__part 
                            = vlSelf->__Vfunc_leading_zero32__1056__value;
                        vlSelf->__Vfunc_leading_zero32__1056__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1056__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1056__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1056__count)));
                            vlSelf->__Vfunc_leading_zero32__1056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1056__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1056__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1056__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1056__count)));
                            vlSelf->__Vfunc_leading_zero32__1056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1056__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1056__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1056__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1056__count)));
                            vlSelf->__Vfunc_leading_zero32__1056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1056__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1056__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1056__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1056__count)));
                            vlSelf->__Vfunc_leading_zero32__1056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1056__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1056__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1056__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1056__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1056__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1056__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1056__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1056__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__43__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__43__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1062__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__43__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1062__part 
                            = vlSelf->__Vfunc_leading_zero32__1062__value;
                        vlSelf->__Vfunc_leading_zero32__1062__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1062__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1062__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1062__count)));
                            vlSelf->__Vfunc_leading_zero32__1062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1062__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1062__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1062__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1062__count)));
                            vlSelf->__Vfunc_leading_zero32__1062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1062__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1062__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1062__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1062__count)));
                            vlSelf->__Vfunc_leading_zero32__1062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1062__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1062__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1062__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1062__count)));
                            vlSelf->__Vfunc_leading_zero32__1062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1062__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1062__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1062__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1062__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1062__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1062__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1062__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1062__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__44__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__44__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1068__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__44__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1068__part 
                            = vlSelf->__Vfunc_leading_zero32__1068__value;
                        vlSelf->__Vfunc_leading_zero32__1068__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1068__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1068__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1068__count)));
                            vlSelf->__Vfunc_leading_zero32__1068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1068__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1068__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1068__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1068__count)));
                            vlSelf->__Vfunc_leading_zero32__1068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1068__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1068__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1068__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1068__count)));
                            vlSelf->__Vfunc_leading_zero32__1068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1068__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1068__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1068__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1068__count)));
                            vlSelf->__Vfunc_leading_zero32__1068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1068__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1068__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1068__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1068__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1068__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1068__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1068__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1068__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__45__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__45__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1074__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__45__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1074__part 
                            = vlSelf->__Vfunc_leading_zero32__1074__value;
                        vlSelf->__Vfunc_leading_zero32__1074__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1074__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1074__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1074__count)));
                            vlSelf->__Vfunc_leading_zero32__1074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1074__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1074__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1074__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1074__count)));
                            vlSelf->__Vfunc_leading_zero32__1074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1074__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1074__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1074__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1074__count)));
                            vlSelf->__Vfunc_leading_zero32__1074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1074__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1074__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1074__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1074__count)));
                            vlSelf->__Vfunc_leading_zero32__1074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1074__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1074__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1074__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1074__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1074__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1074__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1074__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1074__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__46__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__46__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1080__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__46__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1080__part 
                            = vlSelf->__Vfunc_leading_zero32__1080__value;
                        vlSelf->__Vfunc_leading_zero32__1080__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1080__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1080__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1080__count)));
                            vlSelf->__Vfunc_leading_zero32__1080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1080__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1080__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1080__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1080__count)));
                            vlSelf->__Vfunc_leading_zero32__1080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1080__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1080__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1080__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1080__count)));
                            vlSelf->__Vfunc_leading_zero32__1080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1080__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1080__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1080__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1080__count)));
                            vlSelf->__Vfunc_leading_zero32__1080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1080__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1080__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1080__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1080__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1080__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1080__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1080__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1080__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__47__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__47__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1086__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__47__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1086__part 
                            = vlSelf->__Vfunc_leading_zero32__1086__value;
                        vlSelf->__Vfunc_leading_zero32__1086__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1086__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1086__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1086__count)));
                            vlSelf->__Vfunc_leading_zero32__1086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1086__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1086__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1086__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1086__count)));
                            vlSelf->__Vfunc_leading_zero32__1086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1086__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1086__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1086__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1086__count)));
                            vlSelf->__Vfunc_leading_zero32__1086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1086__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1086__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1086__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1086__count)));
                            vlSelf->__Vfunc_leading_zero32__1086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1086__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1086__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1086__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1086__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1086__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1086__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1086__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1086__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__48__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__48__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1092__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__48__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1092__part 
                            = vlSelf->__Vfunc_leading_zero32__1092__value;
                        vlSelf->__Vfunc_leading_zero32__1092__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1092__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1092__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1092__count)));
                            vlSelf->__Vfunc_leading_zero32__1092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1092__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1092__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1092__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1092__count)));
                            vlSelf->__Vfunc_leading_zero32__1092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1092__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1092__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1092__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1092__count)));
                            vlSelf->__Vfunc_leading_zero32__1092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1092__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1092__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1092__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1092__count)));
                            vlSelf->__Vfunc_leading_zero32__1092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1092__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1092__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1092__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1092__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1092__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1092__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1092__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1092__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__49__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__49__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1098__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__49__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1098__part 
                            = vlSelf->__Vfunc_leading_zero32__1098__value;
                        vlSelf->__Vfunc_leading_zero32__1098__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1098__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1098__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1098__count)));
                            vlSelf->__Vfunc_leading_zero32__1098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1098__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1098__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1098__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1098__count)));
                            vlSelf->__Vfunc_leading_zero32__1098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1098__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1098__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1098__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1098__count)));
                            vlSelf->__Vfunc_leading_zero32__1098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1098__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1098__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1098__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1098__count)));
                            vlSelf->__Vfunc_leading_zero32__1098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1098__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1098__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1098__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1098__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1098__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1098__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1098__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1098__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__50__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__50__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1104__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__50__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1104__part 
                            = vlSelf->__Vfunc_leading_zero32__1104__value;
                        vlSelf->__Vfunc_leading_zero32__1104__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1104__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1104__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1104__count)));
                            vlSelf->__Vfunc_leading_zero32__1104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1104__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1104__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1104__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1104__count)));
                            vlSelf->__Vfunc_leading_zero32__1104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1104__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1104__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1104__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1104__count)));
                            vlSelf->__Vfunc_leading_zero32__1104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1104__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1104__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1104__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1104__count)));
                            vlSelf->__Vfunc_leading_zero32__1104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1104__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1104__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1104__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1104__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1104__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1104__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1104__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1104__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__51__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__51__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1110__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__51__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1110__part 
                            = vlSelf->__Vfunc_leading_zero32__1110__value;
                        vlSelf->__Vfunc_leading_zero32__1110__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1110__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1110__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1110__count)));
                            vlSelf->__Vfunc_leading_zero32__1110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1110__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1110__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1110__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1110__count)));
                            vlSelf->__Vfunc_leading_zero32__1110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1110__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1110__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1110__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1110__count)));
                            vlSelf->__Vfunc_leading_zero32__1110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1110__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1110__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1110__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1110__count)));
                            vlSelf->__Vfunc_leading_zero32__1110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1110__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1110__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1110__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1110__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1110__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1110__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1110__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1110__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__52__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__52__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1116__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__52__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1116__part 
                            = vlSelf->__Vfunc_leading_zero32__1116__value;
                        vlSelf->__Vfunc_leading_zero32__1116__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1116__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1116__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1116__count)));
                            vlSelf->__Vfunc_leading_zero32__1116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1116__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1116__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1116__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1116__count)));
                            vlSelf->__Vfunc_leading_zero32__1116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1116__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1116__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1116__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1116__count)));
                            vlSelf->__Vfunc_leading_zero32__1116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1116__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1116__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1116__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1116__count)));
                            vlSelf->__Vfunc_leading_zero32__1116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1116__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1116__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1116__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1116__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1116__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1116__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1116__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1116__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__53__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__53__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1122__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__53__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1122__part 
                            = vlSelf->__Vfunc_leading_zero32__1122__value;
                        vlSelf->__Vfunc_leading_zero32__1122__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1122__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1122__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1122__count)));
                            vlSelf->__Vfunc_leading_zero32__1122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1122__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1122__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1122__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1122__count)));
                            vlSelf->__Vfunc_leading_zero32__1122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1122__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1122__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1122__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1122__count)));
                            vlSelf->__Vfunc_leading_zero32__1122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1122__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1122__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1122__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1122__count)));
                            vlSelf->__Vfunc_leading_zero32__1122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1122__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1122__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1122__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1122__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1122__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1122__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1122__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1122__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__54__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__54__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1128__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__54__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1128__part 
                            = vlSelf->__Vfunc_leading_zero32__1128__value;
                        vlSelf->__Vfunc_leading_zero32__1128__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1128__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1128__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1128__count)));
                            vlSelf->__Vfunc_leading_zero32__1128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1128__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1128__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1128__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1128__count)));
                            vlSelf->__Vfunc_leading_zero32__1128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1128__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1128__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1128__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1128__count)));
                            vlSelf->__Vfunc_leading_zero32__1128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1128__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1128__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1128__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1128__count)));
                            vlSelf->__Vfunc_leading_zero32__1128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1128__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1128__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1128__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1128__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1128__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1128__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1128__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1128__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__55__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__55__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1134__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__55__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1134__part 
                            = vlSelf->__Vfunc_leading_zero32__1134__value;
                        vlSelf->__Vfunc_leading_zero32__1134__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1134__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1134__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1134__count)));
                            vlSelf->__Vfunc_leading_zero32__1134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1134__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1134__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1134__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1134__count)));
                            vlSelf->__Vfunc_leading_zero32__1134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1134__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1134__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1134__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1134__count)));
                            vlSelf->__Vfunc_leading_zero32__1134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1134__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1134__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1134__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1134__count)));
                            vlSelf->__Vfunc_leading_zero32__1134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1134__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1134__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1134__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1134__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1134__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1134__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1134__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1134__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__56__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__56__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1140__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__56__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1140__part 
                            = vlSelf->__Vfunc_leading_zero32__1140__value;
                        vlSelf->__Vfunc_leading_zero32__1140__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1140__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1140__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1140__count)));
                            vlSelf->__Vfunc_leading_zero32__1140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1140__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1140__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1140__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1140__count)));
                            vlSelf->__Vfunc_leading_zero32__1140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1140__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1140__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1140__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1140__count)));
                            vlSelf->__Vfunc_leading_zero32__1140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1140__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1140__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1140__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1140__count)));
                            vlSelf->__Vfunc_leading_zero32__1140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1140__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1140__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1140__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1140__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1140__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1140__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1140__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1140__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__57__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__57__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1146__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__57__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1146__part 
                            = vlSelf->__Vfunc_leading_zero32__1146__value;
                        vlSelf->__Vfunc_leading_zero32__1146__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1146__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1146__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1146__count)));
                            vlSelf->__Vfunc_leading_zero32__1146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1146__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1146__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1146__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1146__count)));
                            vlSelf->__Vfunc_leading_zero32__1146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1146__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1146__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1146__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1146__count)));
                            vlSelf->__Vfunc_leading_zero32__1146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1146__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1146__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1146__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1146__count)));
                            vlSelf->__Vfunc_leading_zero32__1146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1146__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1146__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1146__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1146__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1146__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1146__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1146__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1146__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__58__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__58__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1152__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__58__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1152__part 
                            = vlSelf->__Vfunc_leading_zero32__1152__value;
                        vlSelf->__Vfunc_leading_zero32__1152__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1152__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1152__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1152__count)));
                            vlSelf->__Vfunc_leading_zero32__1152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1152__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1152__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1152__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1152__count)));
                            vlSelf->__Vfunc_leading_zero32__1152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1152__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1152__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1152__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1152__count)));
                            vlSelf->__Vfunc_leading_zero32__1152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1152__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1152__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1152__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1152__count)));
                            vlSelf->__Vfunc_leading_zero32__1152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1152__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1152__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1152__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1152__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1152__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1152__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1152__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1152__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__59__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__59__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1158__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__59__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1158__part 
                            = vlSelf->__Vfunc_leading_zero32__1158__value;
                        vlSelf->__Vfunc_leading_zero32__1158__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1158__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1158__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1158__count)));
                            vlSelf->__Vfunc_leading_zero32__1158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1158__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1158__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1158__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1158__count)));
                            vlSelf->__Vfunc_leading_zero32__1158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1158__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1158__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1158__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1158__count)));
                            vlSelf->__Vfunc_leading_zero32__1158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1158__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1158__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1158__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1158__count)));
                            vlSelf->__Vfunc_leading_zero32__1158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1158__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1158__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1158__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1158__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1158__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1158__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1158__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1158__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__60__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__60__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1164__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__60__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1164__part 
                            = vlSelf->__Vfunc_leading_zero32__1164__value;
                        vlSelf->__Vfunc_leading_zero32__1164__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1164__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1164__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1164__count)));
                            vlSelf->__Vfunc_leading_zero32__1164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1164__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1164__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1164__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1164__count)));
                            vlSelf->__Vfunc_leading_zero32__1164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1164__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1164__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1164__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1164__count)));
                            vlSelf->__Vfunc_leading_zero32__1164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1164__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1164__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1164__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1164__count)));
                            vlSelf->__Vfunc_leading_zero32__1164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1164__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1164__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1164__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1164__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1164__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1164__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1164__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1164__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__61__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__61__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1170__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__61__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1170__part 
                            = vlSelf->__Vfunc_leading_zero32__1170__value;
                        vlSelf->__Vfunc_leading_zero32__1170__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1170__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1170__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1170__count)));
                            vlSelf->__Vfunc_leading_zero32__1170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1170__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1170__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1170__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1170__count)));
                            vlSelf->__Vfunc_leading_zero32__1170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1170__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1170__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1170__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1170__count)));
                            vlSelf->__Vfunc_leading_zero32__1170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1170__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1170__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1170__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1170__count)));
                            vlSelf->__Vfunc_leading_zero32__1170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1170__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1170__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1170__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1170__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1170__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1170__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1170__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1170__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__62__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__62__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1176__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__62__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1176__part 
                            = vlSelf->__Vfunc_leading_zero32__1176__value;
                        vlSelf->__Vfunc_leading_zero32__1176__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1176__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1176__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1176__count)));
                            vlSelf->__Vfunc_leading_zero32__1176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1176__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1176__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1176__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1176__count)));
                            vlSelf->__Vfunc_leading_zero32__1176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1176__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1176__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1176__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1176__count)));
                            vlSelf->__Vfunc_leading_zero32__1176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1176__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1176__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1176__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1176__count)));
                            vlSelf->__Vfunc_leading_zero32__1176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1176__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1176__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1176__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1176__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1176__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1176__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1176__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1176__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__63__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__63__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1182__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__63__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1182__part 
                            = vlSelf->__Vfunc_leading_zero32__1182__value;
                        vlSelf->__Vfunc_leading_zero32__1182__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1182__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1182__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1182__count)));
                            vlSelf->__Vfunc_leading_zero32__1182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1182__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1182__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1182__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1182__count)));
                            vlSelf->__Vfunc_leading_zero32__1182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1182__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1182__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1182__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1182__count)));
                            vlSelf->__Vfunc_leading_zero32__1182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1182__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1182__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1182__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1182__count)));
                            vlSelf->__Vfunc_leading_zero32__1182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1182__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1182__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1182__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1182__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1182__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1182__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1182__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1182__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1188__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1188__part 
                            = vlSelf->__Vfunc_leading_zero32__1188__value;
                        vlSelf->__Vfunc_leading_zero32__1188__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1188__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1188__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1188__count)));
                            vlSelf->__Vfunc_leading_zero32__1188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1188__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1188__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1188__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1188__count)));
                            vlSelf->__Vfunc_leading_zero32__1188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1188__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1188__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1188__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1188__count)));
                            vlSelf->__Vfunc_leading_zero32__1188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1188__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1188__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1188__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1188__count)));
                            vlSelf->__Vfunc_leading_zero32__1188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1188__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1188__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1188__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1188__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1188__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1188__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1188__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1188__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1194__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1194__part 
                            = vlSelf->__Vfunc_leading_zero32__1194__value;
                        vlSelf->__Vfunc_leading_zero32__1194__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1194__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1194__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1194__count)));
                            vlSelf->__Vfunc_leading_zero32__1194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1194__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1194__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1194__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1194__count)));
                            vlSelf->__Vfunc_leading_zero32__1194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1194__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1194__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1194__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1194__count)));
                            vlSelf->__Vfunc_leading_zero32__1194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1194__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1194__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1194__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1194__count)));
                            vlSelf->__Vfunc_leading_zero32__1194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1194__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1194__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1194__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1194__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1194__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1194__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1194__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1194__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1200__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1200__part 
                            = vlSelf->__Vfunc_leading_zero32__1200__value;
                        vlSelf->__Vfunc_leading_zero32__1200__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1200__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1200__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1200__count)));
                            vlSelf->__Vfunc_leading_zero32__1200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1200__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1200__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1200__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1200__count)));
                            vlSelf->__Vfunc_leading_zero32__1200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1200__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1200__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1200__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1200__count)));
                            vlSelf->__Vfunc_leading_zero32__1200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1200__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1200__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1200__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1200__count)));
                            vlSelf->__Vfunc_leading_zero32__1200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1200__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1200__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1200__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1200__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1200__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1200__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1200__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1200__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1206__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1206__part 
                            = vlSelf->__Vfunc_leading_zero32__1206__value;
                        vlSelf->__Vfunc_leading_zero32__1206__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1206__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1206__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1206__count)));
                            vlSelf->__Vfunc_leading_zero32__1206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1206__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1206__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1206__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1206__count)));
                            vlSelf->__Vfunc_leading_zero32__1206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1206__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1206__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1206__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1206__count)));
                            vlSelf->__Vfunc_leading_zero32__1206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1206__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1206__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1206__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1206__count)));
                            vlSelf->__Vfunc_leading_zero32__1206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1206__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1206__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1206__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1206__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1206__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1206__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1206__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1206__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1212__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1212__part 
                            = vlSelf->__Vfunc_leading_zero32__1212__value;
                        vlSelf->__Vfunc_leading_zero32__1212__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1212__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1212__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1212__count)));
                            vlSelf->__Vfunc_leading_zero32__1212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1212__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1212__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1212__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1212__count)));
                            vlSelf->__Vfunc_leading_zero32__1212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1212__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1212__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1212__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1212__count)));
                            vlSelf->__Vfunc_leading_zero32__1212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1212__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1212__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1212__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1212__count)));
                            vlSelf->__Vfunc_leading_zero32__1212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1212__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1212__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1212__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1212__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1212__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1212__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1212__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1212__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1218__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1218__part 
                            = vlSelf->__Vfunc_leading_zero32__1218__value;
                        vlSelf->__Vfunc_leading_zero32__1218__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1218__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1218__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1218__count)));
                            vlSelf->__Vfunc_leading_zero32__1218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1218__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1218__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1218__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1218__count)));
                            vlSelf->__Vfunc_leading_zero32__1218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1218__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1218__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1218__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1218__count)));
                            vlSelf->__Vfunc_leading_zero32__1218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1218__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1218__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1218__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1218__count)));
                            vlSelf->__Vfunc_leading_zero32__1218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1218__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1218__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1218__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1218__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1218__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1218__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1218__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1218__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1224__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1224__part 
                            = vlSelf->__Vfunc_leading_zero32__1224__value;
                        vlSelf->__Vfunc_leading_zero32__1224__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1224__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1224__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1224__count)));
                            vlSelf->__Vfunc_leading_zero32__1224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1224__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1224__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1224__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1224__count)));
                            vlSelf->__Vfunc_leading_zero32__1224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1224__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1224__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1224__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1224__count)));
                            vlSelf->__Vfunc_leading_zero32__1224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1224__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1224__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1224__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1224__count)));
                            vlSelf->__Vfunc_leading_zero32__1224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1224__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1224__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1224__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1224__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1224__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1224__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1224__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1224__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1230__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1230__part 
                            = vlSelf->__Vfunc_leading_zero32__1230__value;
                        vlSelf->__Vfunc_leading_zero32__1230__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1230__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1230__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1230__count)));
                            vlSelf->__Vfunc_leading_zero32__1230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1230__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1230__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1230__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1230__count)));
                            vlSelf->__Vfunc_leading_zero32__1230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1230__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1230__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1230__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1230__count)));
                            vlSelf->__Vfunc_leading_zero32__1230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1230__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1230__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1230__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1230__count)));
                            vlSelf->__Vfunc_leading_zero32__1230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1230__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1230__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1230__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1230__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1230__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1230__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1230__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1230__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__8__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__8__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1236__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__8__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1236__part 
                            = vlSelf->__Vfunc_leading_zero32__1236__value;
                        vlSelf->__Vfunc_leading_zero32__1236__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1236__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1236__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1236__count)));
                            vlSelf->__Vfunc_leading_zero32__1236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1236__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1236__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1236__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1236__count)));
                            vlSelf->__Vfunc_leading_zero32__1236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1236__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1236__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1236__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1236__count)));
                            vlSelf->__Vfunc_leading_zero32__1236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1236__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1236__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1236__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1236__count)));
                            vlSelf->__Vfunc_leading_zero32__1236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1236__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1236__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1236__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1236__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1236__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1236__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1236__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1236__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__9__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__9__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1242__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__9__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1242__part 
                            = vlSelf->__Vfunc_leading_zero32__1242__value;
                        vlSelf->__Vfunc_leading_zero32__1242__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1242__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1242__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1242__count)));
                            vlSelf->__Vfunc_leading_zero32__1242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1242__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1242__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1242__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1242__count)));
                            vlSelf->__Vfunc_leading_zero32__1242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1242__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1242__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1242__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1242__count)));
                            vlSelf->__Vfunc_leading_zero32__1242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1242__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1242__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1242__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1242__count)));
                            vlSelf->__Vfunc_leading_zero32__1242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1242__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1242__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1242__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1242__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1242__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1242__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1242__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1242__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__10__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__10__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1248__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__10__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1248__part 
                            = vlSelf->__Vfunc_leading_zero32__1248__value;
                        vlSelf->__Vfunc_leading_zero32__1248__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1248__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1248__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1248__count)));
                            vlSelf->__Vfunc_leading_zero32__1248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1248__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1248__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1248__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1248__count)));
                            vlSelf->__Vfunc_leading_zero32__1248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1248__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1248__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1248__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1248__count)));
                            vlSelf->__Vfunc_leading_zero32__1248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1248__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1248__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1248__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1248__count)));
                            vlSelf->__Vfunc_leading_zero32__1248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1248__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1248__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1248__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1248__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1248__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1248__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1248__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1248__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__11__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__11__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1254__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__11__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1254__part 
                            = vlSelf->__Vfunc_leading_zero32__1254__value;
                        vlSelf->__Vfunc_leading_zero32__1254__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1254__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1254__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1254__count)));
                            vlSelf->__Vfunc_leading_zero32__1254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1254__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1254__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1254__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1254__count)));
                            vlSelf->__Vfunc_leading_zero32__1254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1254__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1254__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1254__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1254__count)));
                            vlSelf->__Vfunc_leading_zero32__1254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1254__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1254__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1254__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1254__count)));
                            vlSelf->__Vfunc_leading_zero32__1254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1254__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1254__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1254__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1254__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1254__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1254__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1254__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1254__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__12__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__12__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1260__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__12__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1260__part 
                            = vlSelf->__Vfunc_leading_zero32__1260__value;
                        vlSelf->__Vfunc_leading_zero32__1260__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1260__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1260__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1260__count)));
                            vlSelf->__Vfunc_leading_zero32__1260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1260__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1260__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1260__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1260__count)));
                            vlSelf->__Vfunc_leading_zero32__1260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1260__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1260__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1260__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1260__count)));
                            vlSelf->__Vfunc_leading_zero32__1260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1260__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1260__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1260__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1260__count)));
                            vlSelf->__Vfunc_leading_zero32__1260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1260__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1260__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1260__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1260__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1260__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1260__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1260__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1260__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__13__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__13__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1266__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__13__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1266__part 
                            = vlSelf->__Vfunc_leading_zero32__1266__value;
                        vlSelf->__Vfunc_leading_zero32__1266__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1266__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1266__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1266__count)));
                            vlSelf->__Vfunc_leading_zero32__1266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1266__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1266__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1266__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1266__count)));
                            vlSelf->__Vfunc_leading_zero32__1266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1266__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1266__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1266__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1266__count)));
                            vlSelf->__Vfunc_leading_zero32__1266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1266__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1266__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1266__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1266__count)));
                            vlSelf->__Vfunc_leading_zero32__1266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1266__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1266__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1266__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1266__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1266__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1266__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1266__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1266__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__14__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__14__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1272__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__14__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1272__part 
                            = vlSelf->__Vfunc_leading_zero32__1272__value;
                        vlSelf->__Vfunc_leading_zero32__1272__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1272__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1272__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1272__count)));
                            vlSelf->__Vfunc_leading_zero32__1272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1272__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1272__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1272__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1272__count)));
                            vlSelf->__Vfunc_leading_zero32__1272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1272__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1272__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1272__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1272__count)));
                            vlSelf->__Vfunc_leading_zero32__1272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1272__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1272__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1272__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1272__count)));
                            vlSelf->__Vfunc_leading_zero32__1272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1272__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1272__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1272__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1272__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1272__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1272__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1272__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1272__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__15__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__15__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1278__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__15__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1278__part 
                            = vlSelf->__Vfunc_leading_zero32__1278__value;
                        vlSelf->__Vfunc_leading_zero32__1278__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1278__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1278__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1278__count)));
                            vlSelf->__Vfunc_leading_zero32__1278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1278__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1278__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1278__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1278__count)));
                            vlSelf->__Vfunc_leading_zero32__1278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1278__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1278__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1278__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1278__count)));
                            vlSelf->__Vfunc_leading_zero32__1278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1278__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1278__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1278__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1278__count)));
                            vlSelf->__Vfunc_leading_zero32__1278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1278__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1278__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1278__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1278__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1278__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1278__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1278__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1278__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__16__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__16__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1284__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__16__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1284__part 
                            = vlSelf->__Vfunc_leading_zero32__1284__value;
                        vlSelf->__Vfunc_leading_zero32__1284__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1284__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1284__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1284__count)));
                            vlSelf->__Vfunc_leading_zero32__1284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1284__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1284__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1284__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1284__count)));
                            vlSelf->__Vfunc_leading_zero32__1284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1284__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1284__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1284__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1284__count)));
                            vlSelf->__Vfunc_leading_zero32__1284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1284__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1284__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1284__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1284__count)));
                            vlSelf->__Vfunc_leading_zero32__1284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1284__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1284__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1284__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1284__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1284__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1284__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1284__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1284__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__17__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__17__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1290__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__17__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1290__part 
                            = vlSelf->__Vfunc_leading_zero32__1290__value;
                        vlSelf->__Vfunc_leading_zero32__1290__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1290__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1290__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1290__count)));
                            vlSelf->__Vfunc_leading_zero32__1290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1290__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1290__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1290__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1290__count)));
                            vlSelf->__Vfunc_leading_zero32__1290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1290__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1290__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1290__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1290__count)));
                            vlSelf->__Vfunc_leading_zero32__1290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1290__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1290__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1290__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1290__count)));
                            vlSelf->__Vfunc_leading_zero32__1290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1290__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1290__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1290__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1290__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1290__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1290__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1290__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1290__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__18__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__18__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1296__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__18__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1296__part 
                            = vlSelf->__Vfunc_leading_zero32__1296__value;
                        vlSelf->__Vfunc_leading_zero32__1296__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1296__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1296__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1296__count)));
                            vlSelf->__Vfunc_leading_zero32__1296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1296__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1296__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1296__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1296__count)));
                            vlSelf->__Vfunc_leading_zero32__1296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1296__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1296__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1296__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1296__count)));
                            vlSelf->__Vfunc_leading_zero32__1296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1296__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1296__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1296__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1296__count)));
                            vlSelf->__Vfunc_leading_zero32__1296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1296__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1296__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1296__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1296__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1296__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1296__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1296__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1296__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__19__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__19__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1302__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__19__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1302__part 
                            = vlSelf->__Vfunc_leading_zero32__1302__value;
                        vlSelf->__Vfunc_leading_zero32__1302__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1302__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1302__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1302__count)));
                            vlSelf->__Vfunc_leading_zero32__1302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1302__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1302__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1302__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1302__count)));
                            vlSelf->__Vfunc_leading_zero32__1302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1302__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1302__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1302__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1302__count)));
                            vlSelf->__Vfunc_leading_zero32__1302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1302__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1302__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1302__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1302__count)));
                            vlSelf->__Vfunc_leading_zero32__1302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1302__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1302__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1302__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1302__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1302__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1302__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1302__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1302__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__20__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__20__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1308__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__20__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1308__part 
                            = vlSelf->__Vfunc_leading_zero32__1308__value;
                        vlSelf->__Vfunc_leading_zero32__1308__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1308__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1308__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1308__count)));
                            vlSelf->__Vfunc_leading_zero32__1308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1308__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1308__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1308__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1308__count)));
                            vlSelf->__Vfunc_leading_zero32__1308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1308__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1308__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1308__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1308__count)));
                            vlSelf->__Vfunc_leading_zero32__1308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1308__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1308__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1308__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1308__count)));
                            vlSelf->__Vfunc_leading_zero32__1308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1308__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1308__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1308__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1308__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1308__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1308__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1308__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1308__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__21__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__21__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1314__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__21__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1314__part 
                            = vlSelf->__Vfunc_leading_zero32__1314__value;
                        vlSelf->__Vfunc_leading_zero32__1314__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1314__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1314__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1314__count)));
                            vlSelf->__Vfunc_leading_zero32__1314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1314__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1314__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1314__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1314__count)));
                            vlSelf->__Vfunc_leading_zero32__1314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1314__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1314__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1314__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1314__count)));
                            vlSelf->__Vfunc_leading_zero32__1314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1314__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1314__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1314__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1314__count)));
                            vlSelf->__Vfunc_leading_zero32__1314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1314__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1314__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1314__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1314__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1314__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1314__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1314__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1314__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__22__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__22__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1320__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__22__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1320__part 
                            = vlSelf->__Vfunc_leading_zero32__1320__value;
                        vlSelf->__Vfunc_leading_zero32__1320__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1320__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1320__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1320__count)));
                            vlSelf->__Vfunc_leading_zero32__1320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1320__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1320__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1320__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1320__count)));
                            vlSelf->__Vfunc_leading_zero32__1320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1320__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1320__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1320__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1320__count)));
                            vlSelf->__Vfunc_leading_zero32__1320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1320__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1320__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1320__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1320__count)));
                            vlSelf->__Vfunc_leading_zero32__1320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1320__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1320__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1320__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1320__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1320__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1320__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1320__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1320__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__23__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__23__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1326__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__23__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1326__part 
                            = vlSelf->__Vfunc_leading_zero32__1326__value;
                        vlSelf->__Vfunc_leading_zero32__1326__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1326__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1326__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1326__count)));
                            vlSelf->__Vfunc_leading_zero32__1326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1326__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1326__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1326__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1326__count)));
                            vlSelf->__Vfunc_leading_zero32__1326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1326__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1326__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1326__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1326__count)));
                            vlSelf->__Vfunc_leading_zero32__1326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1326__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1326__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1326__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1326__count)));
                            vlSelf->__Vfunc_leading_zero32__1326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1326__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1326__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1326__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1326__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1326__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1326__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1326__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1326__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__24__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__24__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1332__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__24__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1332__part 
                            = vlSelf->__Vfunc_leading_zero32__1332__value;
                        vlSelf->__Vfunc_leading_zero32__1332__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1332__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1332__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1332__count)));
                            vlSelf->__Vfunc_leading_zero32__1332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1332__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1332__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1332__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1332__count)));
                            vlSelf->__Vfunc_leading_zero32__1332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1332__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1332__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1332__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1332__count)));
                            vlSelf->__Vfunc_leading_zero32__1332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1332__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1332__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1332__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1332__count)));
                            vlSelf->__Vfunc_leading_zero32__1332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1332__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1332__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1332__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1332__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1332__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1332__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1332__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1332__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__25__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__25__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1338__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__25__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1338__part 
                            = vlSelf->__Vfunc_leading_zero32__1338__value;
                        vlSelf->__Vfunc_leading_zero32__1338__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1338__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1338__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1338__count)));
                            vlSelf->__Vfunc_leading_zero32__1338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1338__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1338__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1338__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1338__count)));
                            vlSelf->__Vfunc_leading_zero32__1338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1338__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1338__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1338__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1338__count)));
                            vlSelf->__Vfunc_leading_zero32__1338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1338__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1338__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1338__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1338__count)));
                            vlSelf->__Vfunc_leading_zero32__1338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1338__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1338__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1338__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1338__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1338__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1338__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1338__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1338__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__26__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__26__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1344__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__26__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1344__part 
                            = vlSelf->__Vfunc_leading_zero32__1344__value;
                        vlSelf->__Vfunc_leading_zero32__1344__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1344__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1344__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1344__count)));
                            vlSelf->__Vfunc_leading_zero32__1344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1344__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1344__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1344__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1344__count)));
                            vlSelf->__Vfunc_leading_zero32__1344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1344__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1344__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1344__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1344__count)));
                            vlSelf->__Vfunc_leading_zero32__1344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1344__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1344__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1344__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1344__count)));
                            vlSelf->__Vfunc_leading_zero32__1344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1344__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1344__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1344__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1344__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1344__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1344__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1344__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1344__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__27__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__27__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1350__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__27__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1350__part 
                            = vlSelf->__Vfunc_leading_zero32__1350__value;
                        vlSelf->__Vfunc_leading_zero32__1350__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1350__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1350__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1350__count)));
                            vlSelf->__Vfunc_leading_zero32__1350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1350__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1350__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1350__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1350__count)));
                            vlSelf->__Vfunc_leading_zero32__1350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1350__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1350__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1350__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1350__count)));
                            vlSelf->__Vfunc_leading_zero32__1350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1350__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1350__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1350__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1350__count)));
                            vlSelf->__Vfunc_leading_zero32__1350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1350__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1350__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1350__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1350__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1350__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1350__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1350__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1350__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__28__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__28__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1356__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__28__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1356__part 
                            = vlSelf->__Vfunc_leading_zero32__1356__value;
                        vlSelf->__Vfunc_leading_zero32__1356__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1356__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1356__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1356__count)));
                            vlSelf->__Vfunc_leading_zero32__1356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1356__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1356__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1356__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1356__count)));
                            vlSelf->__Vfunc_leading_zero32__1356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1356__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1356__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1356__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1356__count)));
                            vlSelf->__Vfunc_leading_zero32__1356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1356__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1356__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1356__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1356__count)));
                            vlSelf->__Vfunc_leading_zero32__1356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1356__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1356__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1356__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1356__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1356__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1356__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1356__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1356__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__29__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__29__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1362__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__29__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1362__part 
                            = vlSelf->__Vfunc_leading_zero32__1362__value;
                        vlSelf->__Vfunc_leading_zero32__1362__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1362__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1362__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1362__count)));
                            vlSelf->__Vfunc_leading_zero32__1362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1362__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1362__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1362__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1362__count)));
                            vlSelf->__Vfunc_leading_zero32__1362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1362__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1362__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1362__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1362__count)));
                            vlSelf->__Vfunc_leading_zero32__1362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1362__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1362__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1362__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1362__count)));
                            vlSelf->__Vfunc_leading_zero32__1362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1362__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1362__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1362__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1362__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1362__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1362__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1362__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1362__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__30__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__30__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1368__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__30__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1368__part 
                            = vlSelf->__Vfunc_leading_zero32__1368__value;
                        vlSelf->__Vfunc_leading_zero32__1368__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1368__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1368__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1368__count)));
                            vlSelf->__Vfunc_leading_zero32__1368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1368__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1368__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1368__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1368__count)));
                            vlSelf->__Vfunc_leading_zero32__1368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1368__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1368__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1368__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1368__count)));
                            vlSelf->__Vfunc_leading_zero32__1368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1368__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1368__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1368__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1368__count)));
                            vlSelf->__Vfunc_leading_zero32__1368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1368__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1368__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1368__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1368__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1368__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1368__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1368__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1368__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__31__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__31__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1374__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__31__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1374__part 
                            = vlSelf->__Vfunc_leading_zero32__1374__value;
                        vlSelf->__Vfunc_leading_zero32__1374__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1374__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1374__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1374__count)));
                            vlSelf->__Vfunc_leading_zero32__1374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1374__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1374__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1374__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1374__count)));
                            vlSelf->__Vfunc_leading_zero32__1374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1374__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1374__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1374__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1374__count)));
                            vlSelf->__Vfunc_leading_zero32__1374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1374__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1374__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1374__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1374__count)));
                            vlSelf->__Vfunc_leading_zero32__1374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1374__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1374__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1374__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1374__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1374__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1374__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1374__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1374__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1380__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1380__part 
                            = vlSelf->__Vfunc_leading_zero32__1380__value;
                        vlSelf->__Vfunc_leading_zero32__1380__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1380__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1380__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1380__count)));
                            vlSelf->__Vfunc_leading_zero32__1380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1380__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1380__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1380__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1380__count)));
                            vlSelf->__Vfunc_leading_zero32__1380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1380__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1380__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1380__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1380__count)));
                            vlSelf->__Vfunc_leading_zero32__1380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1380__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1380__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1380__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1380__count)));
                            vlSelf->__Vfunc_leading_zero32__1380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1380__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1380__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1380__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1380__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1380__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1380__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1380__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1380__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1386__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1386__part 
                            = vlSelf->__Vfunc_leading_zero32__1386__value;
                        vlSelf->__Vfunc_leading_zero32__1386__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1386__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1386__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1386__count)));
                            vlSelf->__Vfunc_leading_zero32__1386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1386__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1386__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1386__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1386__count)));
                            vlSelf->__Vfunc_leading_zero32__1386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1386__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1386__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1386__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1386__count)));
                            vlSelf->__Vfunc_leading_zero32__1386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1386__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1386__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1386__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1386__count)));
                            vlSelf->__Vfunc_leading_zero32__1386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1386__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1386__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1386__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1386__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1386__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1386__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1386__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1386__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1392__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1392__part 
                            = vlSelf->__Vfunc_leading_zero32__1392__value;
                        vlSelf->__Vfunc_leading_zero32__1392__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1392__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1392__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1392__count)));
                            vlSelf->__Vfunc_leading_zero32__1392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1392__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1392__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1392__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1392__count)));
                            vlSelf->__Vfunc_leading_zero32__1392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1392__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1392__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1392__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1392__count)));
                            vlSelf->__Vfunc_leading_zero32__1392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1392__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1392__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1392__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1392__count)));
                            vlSelf->__Vfunc_leading_zero32__1392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1392__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1392__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1392__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1392__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1392__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1392__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1392__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1392__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1398__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1398__part 
                            = vlSelf->__Vfunc_leading_zero32__1398__value;
                        vlSelf->__Vfunc_leading_zero32__1398__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1398__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1398__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1398__count)));
                            vlSelf->__Vfunc_leading_zero32__1398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1398__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1398__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1398__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1398__count)));
                            vlSelf->__Vfunc_leading_zero32__1398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1398__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1398__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1398__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1398__count)));
                            vlSelf->__Vfunc_leading_zero32__1398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1398__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1398__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1398__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1398__count)));
                            vlSelf->__Vfunc_leading_zero32__1398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1398__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1398__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1398__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1398__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1398__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1398__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1398__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1398__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1404__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1404__part 
                            = vlSelf->__Vfunc_leading_zero32__1404__value;
                        vlSelf->__Vfunc_leading_zero32__1404__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1404__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1404__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1404__count)));
                            vlSelf->__Vfunc_leading_zero32__1404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1404__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1404__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1404__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1404__count)));
                            vlSelf->__Vfunc_leading_zero32__1404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1404__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1404__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1404__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1404__count)));
                            vlSelf->__Vfunc_leading_zero32__1404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1404__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1404__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1404__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1404__count)));
                            vlSelf->__Vfunc_leading_zero32__1404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1404__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1404__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1404__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1404__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1404__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1404__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1404__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1404__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1410__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1410__part 
                            = vlSelf->__Vfunc_leading_zero32__1410__value;
                        vlSelf->__Vfunc_leading_zero32__1410__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1410__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1410__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1410__count)));
                            vlSelf->__Vfunc_leading_zero32__1410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1410__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1410__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1410__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1410__count)));
                            vlSelf->__Vfunc_leading_zero32__1410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1410__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1410__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1410__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1410__count)));
                            vlSelf->__Vfunc_leading_zero32__1410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1410__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1410__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1410__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1410__count)));
                            vlSelf->__Vfunc_leading_zero32__1410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1410__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1410__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1410__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1410__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1410__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1410__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1410__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1410__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1416__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1416__part 
                            = vlSelf->__Vfunc_leading_zero32__1416__value;
                        vlSelf->__Vfunc_leading_zero32__1416__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1416__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1416__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1416__count)));
                            vlSelf->__Vfunc_leading_zero32__1416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1416__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1416__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1416__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1416__count)));
                            vlSelf->__Vfunc_leading_zero32__1416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1416__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1416__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1416__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1416__count)));
                            vlSelf->__Vfunc_leading_zero32__1416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1416__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1416__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1416__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1416__count)));
                            vlSelf->__Vfunc_leading_zero32__1416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1416__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1416__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1416__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1416__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1416__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1416__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1416__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1416__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1422__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1422__part 
                            = vlSelf->__Vfunc_leading_zero32__1422__value;
                        vlSelf->__Vfunc_leading_zero32__1422__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1422__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1422__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1422__count)));
                            vlSelf->__Vfunc_leading_zero32__1422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1422__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1422__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1422__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1422__count)));
                            vlSelf->__Vfunc_leading_zero32__1422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1422__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1422__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1422__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1422__count)));
                            vlSelf->__Vfunc_leading_zero32__1422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1422__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1422__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1422__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1422__count)));
                            vlSelf->__Vfunc_leading_zero32__1422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1422__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1422__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1422__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1422__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1422__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1422__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1422__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1422__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__8__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__8__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1428__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__8__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1428__part 
                            = vlSelf->__Vfunc_leading_zero32__1428__value;
                        vlSelf->__Vfunc_leading_zero32__1428__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1428__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1428__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1428__count)));
                            vlSelf->__Vfunc_leading_zero32__1428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1428__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1428__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1428__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1428__count)));
                            vlSelf->__Vfunc_leading_zero32__1428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1428__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1428__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1428__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1428__count)));
                            vlSelf->__Vfunc_leading_zero32__1428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1428__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1428__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1428__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1428__count)));
                            vlSelf->__Vfunc_leading_zero32__1428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1428__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1428__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1428__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1428__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1428__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1428__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1428__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1428__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__9__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__9__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1434__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__9__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1434__part 
                            = vlSelf->__Vfunc_leading_zero32__1434__value;
                        vlSelf->__Vfunc_leading_zero32__1434__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1434__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1434__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1434__count)));
                            vlSelf->__Vfunc_leading_zero32__1434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1434__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1434__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1434__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1434__count)));
                            vlSelf->__Vfunc_leading_zero32__1434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1434__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1434__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1434__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1434__count)));
                            vlSelf->__Vfunc_leading_zero32__1434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1434__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1434__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1434__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1434__count)));
                            vlSelf->__Vfunc_leading_zero32__1434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1434__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1434__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1434__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1434__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1434__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1434__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1434__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1434__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__10__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__10__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1440__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__10__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1440__part 
                            = vlSelf->__Vfunc_leading_zero32__1440__value;
                        vlSelf->__Vfunc_leading_zero32__1440__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1440__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1440__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1440__count)));
                            vlSelf->__Vfunc_leading_zero32__1440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1440__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1440__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1440__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1440__count)));
                            vlSelf->__Vfunc_leading_zero32__1440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1440__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1440__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1440__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1440__count)));
                            vlSelf->__Vfunc_leading_zero32__1440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1440__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1440__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1440__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1440__count)));
                            vlSelf->__Vfunc_leading_zero32__1440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1440__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1440__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1440__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1440__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1440__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1440__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1440__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1440__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__11__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__11__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1446__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__11__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1446__part 
                            = vlSelf->__Vfunc_leading_zero32__1446__value;
                        vlSelf->__Vfunc_leading_zero32__1446__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1446__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1446__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1446__count)));
                            vlSelf->__Vfunc_leading_zero32__1446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1446__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1446__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1446__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1446__count)));
                            vlSelf->__Vfunc_leading_zero32__1446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1446__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1446__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1446__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1446__count)));
                            vlSelf->__Vfunc_leading_zero32__1446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1446__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1446__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1446__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1446__count)));
                            vlSelf->__Vfunc_leading_zero32__1446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1446__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1446__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1446__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1446__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1446__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1446__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1446__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1446__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__12__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__12__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1452__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__12__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1452__part 
                            = vlSelf->__Vfunc_leading_zero32__1452__value;
                        vlSelf->__Vfunc_leading_zero32__1452__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1452__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1452__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1452__count)));
                            vlSelf->__Vfunc_leading_zero32__1452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1452__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1452__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1452__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1452__count)));
                            vlSelf->__Vfunc_leading_zero32__1452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1452__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1452__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1452__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1452__count)));
                            vlSelf->__Vfunc_leading_zero32__1452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1452__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1452__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1452__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1452__count)));
                            vlSelf->__Vfunc_leading_zero32__1452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1452__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1452__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1452__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1452__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1452__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1452__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1452__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1452__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__13__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__13__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1458__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__13__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1458__part 
                            = vlSelf->__Vfunc_leading_zero32__1458__value;
                        vlSelf->__Vfunc_leading_zero32__1458__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1458__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1458__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1458__count)));
                            vlSelf->__Vfunc_leading_zero32__1458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1458__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1458__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1458__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1458__count)));
                            vlSelf->__Vfunc_leading_zero32__1458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1458__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1458__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1458__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1458__count)));
                            vlSelf->__Vfunc_leading_zero32__1458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1458__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1458__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1458__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1458__count)));
                            vlSelf->__Vfunc_leading_zero32__1458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1458__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1458__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1458__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1458__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1458__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1458__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1458__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1458__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__14__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__14__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1464__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__14__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1464__part 
                            = vlSelf->__Vfunc_leading_zero32__1464__value;
                        vlSelf->__Vfunc_leading_zero32__1464__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1464__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1464__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1464__count)));
                            vlSelf->__Vfunc_leading_zero32__1464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1464__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1464__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1464__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1464__count)));
                            vlSelf->__Vfunc_leading_zero32__1464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1464__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1464__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1464__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1464__count)));
                            vlSelf->__Vfunc_leading_zero32__1464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1464__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1464__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1464__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1464__count)));
                            vlSelf->__Vfunc_leading_zero32__1464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1464__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1464__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1464__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1464__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1464__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1464__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1464__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1464__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__15__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__15__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1470__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__15__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1470__part 
                            = vlSelf->__Vfunc_leading_zero32__1470__value;
                        vlSelf->__Vfunc_leading_zero32__1470__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1470__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1470__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1470__count)));
                            vlSelf->__Vfunc_leading_zero32__1470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1470__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1470__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1470__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1470__count)));
                            vlSelf->__Vfunc_leading_zero32__1470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1470__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1470__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1470__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1470__count)));
                            vlSelf->__Vfunc_leading_zero32__1470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1470__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1470__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1470__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1470__count)));
                            vlSelf->__Vfunc_leading_zero32__1470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1470__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1470__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1470__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1470__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1470__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1470__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1470__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1470__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1476__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1476__part 
                            = vlSelf->__Vfunc_leading_zero32__1476__value;
                        vlSelf->__Vfunc_leading_zero32__1476__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1476__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1476__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1476__count)));
                            vlSelf->__Vfunc_leading_zero32__1476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1476__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1476__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1476__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1476__count)));
                            vlSelf->__Vfunc_leading_zero32__1476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1476__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1476__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1476__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1476__count)));
                            vlSelf->__Vfunc_leading_zero32__1476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1476__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1476__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1476__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1476__count)));
                            vlSelf->__Vfunc_leading_zero32__1476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1476__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1476__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1476__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1476__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1476__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1476__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1476__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1476__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1482__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1482__part 
                            = vlSelf->__Vfunc_leading_zero32__1482__value;
                        vlSelf->__Vfunc_leading_zero32__1482__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1482__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1482__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1482__count)));
                            vlSelf->__Vfunc_leading_zero32__1482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1482__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1482__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1482__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1482__count)));
                            vlSelf->__Vfunc_leading_zero32__1482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1482__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1482__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1482__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1482__count)));
                            vlSelf->__Vfunc_leading_zero32__1482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1482__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1482__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1482__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1482__count)));
                            vlSelf->__Vfunc_leading_zero32__1482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1482__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1482__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1482__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1482__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1482__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1482__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1482__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1482__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1488__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1488__part 
                            = vlSelf->__Vfunc_leading_zero32__1488__value;
                        vlSelf->__Vfunc_leading_zero32__1488__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1488__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1488__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1488__count)));
                            vlSelf->__Vfunc_leading_zero32__1488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1488__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1488__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1488__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1488__count)));
                            vlSelf->__Vfunc_leading_zero32__1488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1488__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1488__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1488__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1488__count)));
                            vlSelf->__Vfunc_leading_zero32__1488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1488__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1488__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1488__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1488__count)));
                            vlSelf->__Vfunc_leading_zero32__1488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1488__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1488__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1488__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1488__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1488__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1488__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1488__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1488__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1494__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1494__part 
                            = vlSelf->__Vfunc_leading_zero32__1494__value;
                        vlSelf->__Vfunc_leading_zero32__1494__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1494__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1494__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1494__count)));
                            vlSelf->__Vfunc_leading_zero32__1494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1494__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1494__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1494__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1494__count)));
                            vlSelf->__Vfunc_leading_zero32__1494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1494__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1494__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1494__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1494__count)));
                            vlSelf->__Vfunc_leading_zero32__1494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1494__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1494__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1494__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1494__count)));
                            vlSelf->__Vfunc_leading_zero32__1494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1494__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1494__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1494__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1494__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1494__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1494__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1494__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1494__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1500__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1500__part 
                            = vlSelf->__Vfunc_leading_zero32__1500__value;
                        vlSelf->__Vfunc_leading_zero32__1500__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1500__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1500__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1500__count)));
                            vlSelf->__Vfunc_leading_zero32__1500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1500__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1500__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1500__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1500__count)));
                            vlSelf->__Vfunc_leading_zero32__1500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1500__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1500__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1500__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1500__count)));
                            vlSelf->__Vfunc_leading_zero32__1500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1500__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1500__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1500__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1500__count)));
                            vlSelf->__Vfunc_leading_zero32__1500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1500__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1500__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1500__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1500__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1500__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1500__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1500__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1500__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1506__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1506__part 
                            = vlSelf->__Vfunc_leading_zero32__1506__value;
                        vlSelf->__Vfunc_leading_zero32__1506__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1506__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1506__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1506__count)));
                            vlSelf->__Vfunc_leading_zero32__1506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1506__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1506__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1506__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1506__count)));
                            vlSelf->__Vfunc_leading_zero32__1506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1506__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1506__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1506__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1506__count)));
                            vlSelf->__Vfunc_leading_zero32__1506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1506__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1506__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1506__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1506__count)));
                            vlSelf->__Vfunc_leading_zero32__1506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1506__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1506__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1506__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1506__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1506__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1506__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1506__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1506__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1512__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1512__part 
                            = vlSelf->__Vfunc_leading_zero32__1512__value;
                        vlSelf->__Vfunc_leading_zero32__1512__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1512__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1512__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1512__count)));
                            vlSelf->__Vfunc_leading_zero32__1512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1512__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1512__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1512__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1512__count)));
                            vlSelf->__Vfunc_leading_zero32__1512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1512__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1512__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1512__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1512__count)));
                            vlSelf->__Vfunc_leading_zero32__1512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1512__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1512__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1512__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1512__count)));
                            vlSelf->__Vfunc_leading_zero32__1512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1512__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1512__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1512__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1512__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1512__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1512__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1512__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1512__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1518__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1518__part 
                            = vlSelf->__Vfunc_leading_zero32__1518__value;
                        vlSelf->__Vfunc_leading_zero32__1518__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1518__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1518__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1518__count)));
                            vlSelf->__Vfunc_leading_zero32__1518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1518__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1518__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1518__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1518__count)));
                            vlSelf->__Vfunc_leading_zero32__1518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1518__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1518__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1518__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1518__count)));
                            vlSelf->__Vfunc_leading_zero32__1518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1518__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1518__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1518__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1518__count)));
                            vlSelf->__Vfunc_leading_zero32__1518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1518__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1518__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1518__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1518__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1518__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1518__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1518__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1518__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1524__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1524__part 
                            = vlSelf->__Vfunc_leading_zero32__1524__value;
                        vlSelf->__Vfunc_leading_zero32__1524__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1524__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1524__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1524__count)));
                            vlSelf->__Vfunc_leading_zero32__1524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1524__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1524__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1524__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1524__count)));
                            vlSelf->__Vfunc_leading_zero32__1524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1524__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1524__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1524__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1524__count)));
                            vlSelf->__Vfunc_leading_zero32__1524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1524__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1524__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1524__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1524__count)));
                            vlSelf->__Vfunc_leading_zero32__1524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1524__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1524__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1524__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1524__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1524__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1524__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1524__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1524__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1530__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1530__part 
                            = vlSelf->__Vfunc_leading_zero32__1530__value;
                        vlSelf->__Vfunc_leading_zero32__1530__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1530__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1530__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1530__count)));
                            vlSelf->__Vfunc_leading_zero32__1530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1530__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1530__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1530__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1530__count)));
                            vlSelf->__Vfunc_leading_zero32__1530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1530__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1530__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1530__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1530__count)));
                            vlSelf->__Vfunc_leading_zero32__1530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1530__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1530__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1530__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1530__count)));
                            vlSelf->__Vfunc_leading_zero32__1530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1530__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1530__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1530__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1530__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1530__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1530__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1530__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1530__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1536__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1536__part 
                            = vlSelf->__Vfunc_leading_zero32__1536__value;
                        vlSelf->__Vfunc_leading_zero32__1536__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1536__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1536__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1536__count)));
                            vlSelf->__Vfunc_leading_zero32__1536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1536__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1536__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1536__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1536__count)));
                            vlSelf->__Vfunc_leading_zero32__1536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1536__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1536__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1536__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1536__count)));
                            vlSelf->__Vfunc_leading_zero32__1536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1536__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1536__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1536__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1536__count)));
                            vlSelf->__Vfunc_leading_zero32__1536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1536__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1536__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1536__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1536__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1536__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1536__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1536__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1536__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1542__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1542__part 
                            = vlSelf->__Vfunc_leading_zero32__1542__value;
                        vlSelf->__Vfunc_leading_zero32__1542__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1542__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1542__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1542__count)));
                            vlSelf->__Vfunc_leading_zero32__1542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1542__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1542__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1542__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1542__count)));
                            vlSelf->__Vfunc_leading_zero32__1542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1542__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1542__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1542__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1542__count)));
                            vlSelf->__Vfunc_leading_zero32__1542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1542__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1542__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1542__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1542__count)));
                            vlSelf->__Vfunc_leading_zero32__1542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1542__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1542__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1542__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1542__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1542__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1542__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1542__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1542__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__5__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__5__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1548__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__5__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1548__part 
                            = vlSelf->__Vfunc_leading_zero32__1548__value;
                        vlSelf->__Vfunc_leading_zero32__1548__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1548__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1548__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1548__count)));
                            vlSelf->__Vfunc_leading_zero32__1548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1548__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1548__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1548__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1548__count)));
                            vlSelf->__Vfunc_leading_zero32__1548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1548__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1548__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1548__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1548__count)));
                            vlSelf->__Vfunc_leading_zero32__1548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1548__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1548__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1548__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1548__count)));
                            vlSelf->__Vfunc_leading_zero32__1548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1548__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1548__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1548__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1548__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1548__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1548__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1548__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1548__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__5__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__5__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1554__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__5__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1554__part 
                            = vlSelf->__Vfunc_leading_zero32__1554__value;
                        vlSelf->__Vfunc_leading_zero32__1554__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1554__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1554__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1554__count)));
                            vlSelf->__Vfunc_leading_zero32__1554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1554__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1554__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1554__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1554__count)));
                            vlSelf->__Vfunc_leading_zero32__1554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1554__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1554__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1554__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1554__count)));
                            vlSelf->__Vfunc_leading_zero32__1554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1554__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1554__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1554__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1554__count)));
                            vlSelf->__Vfunc_leading_zero32__1554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1554__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1554__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1554__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1554__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1554__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1554__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1554__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1554__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__6__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__6__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1560__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__6__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1560__part 
                            = vlSelf->__Vfunc_leading_zero32__1560__value;
                        vlSelf->__Vfunc_leading_zero32__1560__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1560__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1560__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1560__count)));
                            vlSelf->__Vfunc_leading_zero32__1560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1560__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1560__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1560__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1560__count)));
                            vlSelf->__Vfunc_leading_zero32__1560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1560__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1560__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1560__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1560__count)));
                            vlSelf->__Vfunc_leading_zero32__1560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1560__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1560__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1560__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1560__count)));
                            vlSelf->__Vfunc_leading_zero32__1560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1560__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1560__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1560__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1560__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1560__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1560__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1560__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1560__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6196__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6196__part 
                            = vlSelf->__Vfunc_leading_zero32__6196__value;
                        vlSelf->__Vfunc_leading_zero32__6196__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6196__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6196__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6196__count)));
                            vlSelf->__Vfunc_leading_zero32__6196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6196__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6196__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6196__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6196__count)));
                            vlSelf->__Vfunc_leading_zero32__6196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6196__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6196__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6196__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6196__count)));
                            vlSelf->__Vfunc_leading_zero32__6196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6196__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6196__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6196__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6196__count)));
                            vlSelf->__Vfunc_leading_zero32__6196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6196__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6196__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6196__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6196__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6196__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6196__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6196__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6196__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6202__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6202__part 
                            = vlSelf->__Vfunc_leading_zero32__6202__value;
                        vlSelf->__Vfunc_leading_zero32__6202__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6202__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6202__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6202__count)));
                            vlSelf->__Vfunc_leading_zero32__6202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6202__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6202__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6202__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6202__count)));
                            vlSelf->__Vfunc_leading_zero32__6202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6202__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6202__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6202__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6202__count)));
                            vlSelf->__Vfunc_leading_zero32__6202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6202__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6202__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6202__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6202__count)));
                            vlSelf->__Vfunc_leading_zero32__6202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6202__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6202__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6202__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6202__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6202__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6202__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6202__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6202__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6208__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6208__part 
                            = vlSelf->__Vfunc_leading_zero32__6208__value;
                        vlSelf->__Vfunc_leading_zero32__6208__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6208__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6208__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6208__count)));
                            vlSelf->__Vfunc_leading_zero32__6208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6208__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6208__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6208__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6208__count)));
                            vlSelf->__Vfunc_leading_zero32__6208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6208__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6208__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6208__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6208__count)));
                            vlSelf->__Vfunc_leading_zero32__6208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6208__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6208__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6208__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6208__count)));
                            vlSelf->__Vfunc_leading_zero32__6208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6208__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6208__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6208__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6208__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6208__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6208__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6208__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6208__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6214__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6214__part 
                            = vlSelf->__Vfunc_leading_zero32__6214__value;
                        vlSelf->__Vfunc_leading_zero32__6214__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6214__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6214__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6214__count)));
                            vlSelf->__Vfunc_leading_zero32__6214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6214__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6214__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6214__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6214__count)));
                            vlSelf->__Vfunc_leading_zero32__6214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6214__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6214__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6214__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6214__count)));
                            vlSelf->__Vfunc_leading_zero32__6214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6214__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6214__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6214__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6214__count)));
                            vlSelf->__Vfunc_leading_zero32__6214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6214__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6214__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6214__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6214__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6214__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6214__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6214__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6214__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6220__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6220__part 
                            = vlSelf->__Vfunc_leading_zero32__6220__value;
                        vlSelf->__Vfunc_leading_zero32__6220__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6220__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6220__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6220__count)));
                            vlSelf->__Vfunc_leading_zero32__6220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6220__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6220__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6220__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6220__count)));
                            vlSelf->__Vfunc_leading_zero32__6220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6220__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6220__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6220__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6220__count)));
                            vlSelf->__Vfunc_leading_zero32__6220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6220__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6220__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6220__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6220__count)));
                            vlSelf->__Vfunc_leading_zero32__6220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6220__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6220__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6220__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6220__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6220__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6220__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6220__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6220__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6226__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6226__part 
                            = vlSelf->__Vfunc_leading_zero32__6226__value;
                        vlSelf->__Vfunc_leading_zero32__6226__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6226__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6226__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6226__count)));
                            vlSelf->__Vfunc_leading_zero32__6226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6226__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6226__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6226__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6226__count)));
                            vlSelf->__Vfunc_leading_zero32__6226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6226__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6226__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6226__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6226__count)));
                            vlSelf->__Vfunc_leading_zero32__6226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6226__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6226__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6226__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6226__count)));
                            vlSelf->__Vfunc_leading_zero32__6226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6226__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6226__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6226__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6226__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6226__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6226__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6226__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6226__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6232__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6232__part 
                            = vlSelf->__Vfunc_leading_zero32__6232__value;
                        vlSelf->__Vfunc_leading_zero32__6232__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6232__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6232__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6232__count)));
                            vlSelf->__Vfunc_leading_zero32__6232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6232__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6232__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6232__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6232__count)));
                            vlSelf->__Vfunc_leading_zero32__6232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6232__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6232__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6232__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6232__count)));
                            vlSelf->__Vfunc_leading_zero32__6232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6232__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6232__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6232__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6232__count)));
                            vlSelf->__Vfunc_leading_zero32__6232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6232__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6232__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6232__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6232__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6232__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6232__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6232__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6232__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6238__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6238__part 
                            = vlSelf->__Vfunc_leading_zero32__6238__value;
                        vlSelf->__Vfunc_leading_zero32__6238__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6238__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6238__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6238__count)));
                            vlSelf->__Vfunc_leading_zero32__6238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6238__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6238__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6238__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6238__count)));
                            vlSelf->__Vfunc_leading_zero32__6238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6238__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6238__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6238__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6238__count)));
                            vlSelf->__Vfunc_leading_zero32__6238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6238__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6238__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6238__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6238__count)));
                            vlSelf->__Vfunc_leading_zero32__6238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6238__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6238__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6238__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6238__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6238__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6238__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6238__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6238__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6244__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6244__part 
                            = vlSelf->__Vfunc_leading_zero32__6244__value;
                        vlSelf->__Vfunc_leading_zero32__6244__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6244__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6244__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6244__count)));
                            vlSelf->__Vfunc_leading_zero32__6244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6244__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6244__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6244__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6244__count)));
                            vlSelf->__Vfunc_leading_zero32__6244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6244__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6244__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6244__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6244__count)));
                            vlSelf->__Vfunc_leading_zero32__6244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6244__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6244__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6244__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6244__count)));
                            vlSelf->__Vfunc_leading_zero32__6244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6244__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6244__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6244__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6244__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6244__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6244__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6244__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6244__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6250__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6250__part 
                            = vlSelf->__Vfunc_leading_zero32__6250__value;
                        vlSelf->__Vfunc_leading_zero32__6250__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6250__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6250__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6250__count)));
                            vlSelf->__Vfunc_leading_zero32__6250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6250__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6250__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6250__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6250__count)));
                            vlSelf->__Vfunc_leading_zero32__6250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6250__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6250__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6250__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6250__count)));
                            vlSelf->__Vfunc_leading_zero32__6250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6250__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6250__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6250__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6250__count)));
                            vlSelf->__Vfunc_leading_zero32__6250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6250__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6250__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6250__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6250__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6250__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6250__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6250__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6250__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6256__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6256__part 
                            = vlSelf->__Vfunc_leading_zero32__6256__value;
                        vlSelf->__Vfunc_leading_zero32__6256__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6256__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6256__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6256__count)));
                            vlSelf->__Vfunc_leading_zero32__6256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6256__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6256__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6256__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6256__count)));
                            vlSelf->__Vfunc_leading_zero32__6256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6256__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6256__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6256__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6256__count)));
                            vlSelf->__Vfunc_leading_zero32__6256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6256__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6256__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6256__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6256__count)));
                            vlSelf->__Vfunc_leading_zero32__6256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6256__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6256__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6256__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6256__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6256__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6256__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6256__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6256__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6262__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6262__part 
                            = vlSelf->__Vfunc_leading_zero32__6262__value;
                        vlSelf->__Vfunc_leading_zero32__6262__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6262__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6262__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6262__count)));
                            vlSelf->__Vfunc_leading_zero32__6262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6262__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6262__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6262__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6262__count)));
                            vlSelf->__Vfunc_leading_zero32__6262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6262__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6262__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6262__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6262__count)));
                            vlSelf->__Vfunc_leading_zero32__6262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6262__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6262__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6262__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6262__count)));
                            vlSelf->__Vfunc_leading_zero32__6262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6262__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6262__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6262__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6262__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6262__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6262__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6262__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6262__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6268__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6268__part 
                            = vlSelf->__Vfunc_leading_zero32__6268__value;
                        vlSelf->__Vfunc_leading_zero32__6268__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6268__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6268__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6268__count)));
                            vlSelf->__Vfunc_leading_zero32__6268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6268__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6268__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6268__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6268__count)));
                            vlSelf->__Vfunc_leading_zero32__6268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6268__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6268__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6268__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6268__count)));
                            vlSelf->__Vfunc_leading_zero32__6268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6268__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6268__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6268__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6268__count)));
                            vlSelf->__Vfunc_leading_zero32__6268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6268__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6268__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6268__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6268__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6268__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6268__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6268__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6268__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6274__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6274__part 
                            = vlSelf->__Vfunc_leading_zero32__6274__value;
                        vlSelf->__Vfunc_leading_zero32__6274__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6274__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6274__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6274__count)));
                            vlSelf->__Vfunc_leading_zero32__6274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6274__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6274__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6274__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6274__count)));
                            vlSelf->__Vfunc_leading_zero32__6274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6274__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6274__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6274__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6274__count)));
                            vlSelf->__Vfunc_leading_zero32__6274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6274__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6274__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6274__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6274__count)));
                            vlSelf->__Vfunc_leading_zero32__6274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6274__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6274__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6274__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6274__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6274__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6274__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6274__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6274__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6280__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6280__part 
                            = vlSelf->__Vfunc_leading_zero32__6280__value;
                        vlSelf->__Vfunc_leading_zero32__6280__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6280__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6280__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6280__count)));
                            vlSelf->__Vfunc_leading_zero32__6280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6280__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6280__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6280__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6280__count)));
                            vlSelf->__Vfunc_leading_zero32__6280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6280__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6280__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6280__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6280__count)));
                            vlSelf->__Vfunc_leading_zero32__6280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6280__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6280__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6280__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6280__count)));
                            vlSelf->__Vfunc_leading_zero32__6280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6280__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6280__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6280__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6280__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6280__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6280__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6280__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6280__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6286__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6286__part 
                            = vlSelf->__Vfunc_leading_zero32__6286__value;
                        vlSelf->__Vfunc_leading_zero32__6286__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6286__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6286__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6286__count)));
                            vlSelf->__Vfunc_leading_zero32__6286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6286__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6286__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6286__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6286__count)));
                            vlSelf->__Vfunc_leading_zero32__6286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6286__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6286__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6286__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6286__count)));
                            vlSelf->__Vfunc_leading_zero32__6286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6286__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6286__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6286__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6286__count)));
                            vlSelf->__Vfunc_leading_zero32__6286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6286__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6286__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6286__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6286__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6286__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6286__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6286__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6286__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6292__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6292__part 
                            = vlSelf->__Vfunc_leading_zero32__6292__value;
                        vlSelf->__Vfunc_leading_zero32__6292__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6292__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6292__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6292__count)));
                            vlSelf->__Vfunc_leading_zero32__6292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6292__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6292__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6292__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6292__count)));
                            vlSelf->__Vfunc_leading_zero32__6292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6292__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6292__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6292__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6292__count)));
                            vlSelf->__Vfunc_leading_zero32__6292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6292__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6292__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6292__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6292__count)));
                            vlSelf->__Vfunc_leading_zero32__6292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6292__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6292__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6292__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6292__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6292__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6292__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6292__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6292__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6298__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6298__part 
                            = vlSelf->__Vfunc_leading_zero32__6298__value;
                        vlSelf->__Vfunc_leading_zero32__6298__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6298__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6298__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6298__count)));
                            vlSelf->__Vfunc_leading_zero32__6298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6298__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6298__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6298__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6298__count)));
                            vlSelf->__Vfunc_leading_zero32__6298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6298__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6298__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6298__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6298__count)));
                            vlSelf->__Vfunc_leading_zero32__6298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6298__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6298__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6298__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6298__count)));
                            vlSelf->__Vfunc_leading_zero32__6298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6298__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6298__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6298__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6298__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6298__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6298__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6298__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6298__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6304__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6304__part 
                            = vlSelf->__Vfunc_leading_zero32__6304__value;
                        vlSelf->__Vfunc_leading_zero32__6304__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6304__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6304__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6304__count)));
                            vlSelf->__Vfunc_leading_zero32__6304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6304__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6304__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6304__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6304__count)));
                            vlSelf->__Vfunc_leading_zero32__6304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6304__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6304__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6304__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6304__count)));
                            vlSelf->__Vfunc_leading_zero32__6304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6304__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6304__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6304__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6304__count)));
                            vlSelf->__Vfunc_leading_zero32__6304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6304__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6304__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6304__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6304__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6304__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6304__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6304__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6304__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6310__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6310__part 
                            = vlSelf->__Vfunc_leading_zero32__6310__value;
                        vlSelf->__Vfunc_leading_zero32__6310__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6310__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6310__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6310__count)));
                            vlSelf->__Vfunc_leading_zero32__6310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6310__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6310__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6310__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6310__count)));
                            vlSelf->__Vfunc_leading_zero32__6310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6310__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6310__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6310__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6310__count)));
                            vlSelf->__Vfunc_leading_zero32__6310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6310__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6310__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6310__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6310__count)));
                            vlSelf->__Vfunc_leading_zero32__6310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6310__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6310__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6310__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6310__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6310__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6310__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6310__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6310__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6316__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6316__part 
                            = vlSelf->__Vfunc_leading_zero32__6316__value;
                        vlSelf->__Vfunc_leading_zero32__6316__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6316__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6316__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6316__count)));
                            vlSelf->__Vfunc_leading_zero32__6316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6316__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6316__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6316__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6316__count)));
                            vlSelf->__Vfunc_leading_zero32__6316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6316__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6316__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6316__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6316__count)));
                            vlSelf->__Vfunc_leading_zero32__6316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6316__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6316__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6316__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6316__count)));
                            vlSelf->__Vfunc_leading_zero32__6316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6316__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6316__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6316__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6316__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6316__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6316__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6316__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6316__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6322__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6322__part 
                            = vlSelf->__Vfunc_leading_zero32__6322__value;
                        vlSelf->__Vfunc_leading_zero32__6322__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6322__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6322__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6322__count)));
                            vlSelf->__Vfunc_leading_zero32__6322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6322__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6322__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6322__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6322__count)));
                            vlSelf->__Vfunc_leading_zero32__6322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6322__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6322__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6322__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6322__count)));
                            vlSelf->__Vfunc_leading_zero32__6322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6322__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6322__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6322__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6322__count)));
                            vlSelf->__Vfunc_leading_zero32__6322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6322__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6322__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6322__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6322__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6322__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6322__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6322__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6322__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6328__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6328__part 
                            = vlSelf->__Vfunc_leading_zero32__6328__value;
                        vlSelf->__Vfunc_leading_zero32__6328__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6328__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6328__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6328__count)));
                            vlSelf->__Vfunc_leading_zero32__6328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6328__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6328__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6328__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6328__count)));
                            vlSelf->__Vfunc_leading_zero32__6328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6328__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6328__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6328__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6328__count)));
                            vlSelf->__Vfunc_leading_zero32__6328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6328__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6328__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6328__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6328__count)));
                            vlSelf->__Vfunc_leading_zero32__6328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6328__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6328__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6328__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6328__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6328__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6328__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6328__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6328__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6334__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6334__part 
                            = vlSelf->__Vfunc_leading_zero32__6334__value;
                        vlSelf->__Vfunc_leading_zero32__6334__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6334__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6334__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6334__count)));
                            vlSelf->__Vfunc_leading_zero32__6334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6334__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6334__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6334__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6334__count)));
                            vlSelf->__Vfunc_leading_zero32__6334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6334__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6334__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6334__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6334__count)));
                            vlSelf->__Vfunc_leading_zero32__6334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6334__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6334__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6334__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6334__count)));
                            vlSelf->__Vfunc_leading_zero32__6334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6334__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6334__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6334__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6334__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6334__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6334__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6334__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6334__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6340__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6340__part 
                            = vlSelf->__Vfunc_leading_zero32__6340__value;
                        vlSelf->__Vfunc_leading_zero32__6340__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6340__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6340__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6340__count)));
                            vlSelf->__Vfunc_leading_zero32__6340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6340__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6340__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6340__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6340__count)));
                            vlSelf->__Vfunc_leading_zero32__6340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6340__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6340__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6340__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6340__count)));
                            vlSelf->__Vfunc_leading_zero32__6340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6340__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6340__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6340__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6340__count)));
                            vlSelf->__Vfunc_leading_zero32__6340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6340__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6340__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6340__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6340__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6340__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6340__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6340__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6340__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6346__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6346__part 
                            = vlSelf->__Vfunc_leading_zero32__6346__value;
                        vlSelf->__Vfunc_leading_zero32__6346__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6346__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6346__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6346__count)));
                            vlSelf->__Vfunc_leading_zero32__6346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6346__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6346__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6346__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6346__count)));
                            vlSelf->__Vfunc_leading_zero32__6346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6346__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6346__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6346__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6346__count)));
                            vlSelf->__Vfunc_leading_zero32__6346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6346__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6346__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6346__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6346__count)));
                            vlSelf->__Vfunc_leading_zero32__6346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6346__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6346__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6346__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6346__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6346__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6346__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6346__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6346__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6352__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6352__part 
                            = vlSelf->__Vfunc_leading_zero32__6352__value;
                        vlSelf->__Vfunc_leading_zero32__6352__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6352__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6352__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6352__count)));
                            vlSelf->__Vfunc_leading_zero32__6352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6352__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6352__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6352__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6352__count)));
                            vlSelf->__Vfunc_leading_zero32__6352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6352__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6352__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6352__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6352__count)));
                            vlSelf->__Vfunc_leading_zero32__6352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6352__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6352__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6352__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6352__count)));
                            vlSelf->__Vfunc_leading_zero32__6352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6352__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6352__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6352__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6352__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6352__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6352__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6352__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6352__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6358__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6358__part 
                            = vlSelf->__Vfunc_leading_zero32__6358__value;
                        vlSelf->__Vfunc_leading_zero32__6358__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6358__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6358__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6358__count)));
                            vlSelf->__Vfunc_leading_zero32__6358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6358__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6358__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6358__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6358__count)));
                            vlSelf->__Vfunc_leading_zero32__6358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6358__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6358__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6358__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6358__count)));
                            vlSelf->__Vfunc_leading_zero32__6358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6358__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6358__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6358__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6358__count)));
                            vlSelf->__Vfunc_leading_zero32__6358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6358__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6358__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6358__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6358__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6358__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6358__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6358__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6358__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6364__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6364__part 
                            = vlSelf->__Vfunc_leading_zero32__6364__value;
                        vlSelf->__Vfunc_leading_zero32__6364__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6364__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6364__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6364__count)));
                            vlSelf->__Vfunc_leading_zero32__6364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6364__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6364__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6364__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6364__count)));
                            vlSelf->__Vfunc_leading_zero32__6364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6364__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6364__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6364__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6364__count)));
                            vlSelf->__Vfunc_leading_zero32__6364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6364__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6364__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6364__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6364__count)));
                            vlSelf->__Vfunc_leading_zero32__6364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6364__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6364__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6364__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6364__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6364__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6364__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6364__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6364__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6370__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6370__part 
                            = vlSelf->__Vfunc_leading_zero32__6370__value;
                        vlSelf->__Vfunc_leading_zero32__6370__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6370__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6370__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6370__count)));
                            vlSelf->__Vfunc_leading_zero32__6370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6370__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6370__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6370__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6370__count)));
                            vlSelf->__Vfunc_leading_zero32__6370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6370__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6370__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6370__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6370__count)));
                            vlSelf->__Vfunc_leading_zero32__6370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6370__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6370__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6370__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6370__count)));
                            vlSelf->__Vfunc_leading_zero32__6370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6370__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6370__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6370__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6370__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6370__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6370__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6370__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6370__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6376__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6376__part 
                            = vlSelf->__Vfunc_leading_zero32__6376__value;
                        vlSelf->__Vfunc_leading_zero32__6376__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6376__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6376__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6376__count)));
                            vlSelf->__Vfunc_leading_zero32__6376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6376__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6376__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6376__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6376__count)));
                            vlSelf->__Vfunc_leading_zero32__6376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6376__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6376__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6376__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6376__count)));
                            vlSelf->__Vfunc_leading_zero32__6376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6376__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6376__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6376__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6376__count)));
                            vlSelf->__Vfunc_leading_zero32__6376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6376__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6376__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6376__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6376__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6376__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6376__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6376__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6376__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6382__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6382__part 
                            = vlSelf->__Vfunc_leading_zero32__6382__value;
                        vlSelf->__Vfunc_leading_zero32__6382__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6382__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6382__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6382__count)));
                            vlSelf->__Vfunc_leading_zero32__6382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6382__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6382__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6382__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6382__count)));
                            vlSelf->__Vfunc_leading_zero32__6382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6382__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6382__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6382__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6382__count)));
                            vlSelf->__Vfunc_leading_zero32__6382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6382__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6382__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6382__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6382__count)));
                            vlSelf->__Vfunc_leading_zero32__6382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6382__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6382__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6382__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6382__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6382__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6382__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6382__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6382__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6388__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6388__part 
                            = vlSelf->__Vfunc_leading_zero32__6388__value;
                        vlSelf->__Vfunc_leading_zero32__6388__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6388__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6388__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6388__count)));
                            vlSelf->__Vfunc_leading_zero32__6388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6388__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6388__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6388__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6388__count)));
                            vlSelf->__Vfunc_leading_zero32__6388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6388__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6388__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6388__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6388__count)));
                            vlSelf->__Vfunc_leading_zero32__6388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6388__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6388__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6388__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6388__count)));
                            vlSelf->__Vfunc_leading_zero32__6388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6388__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6388__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6388__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6388__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6388__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6388__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6388__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6388__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6394__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6394__part 
                            = vlSelf->__Vfunc_leading_zero32__6394__value;
                        vlSelf->__Vfunc_leading_zero32__6394__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6394__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6394__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6394__count)));
                            vlSelf->__Vfunc_leading_zero32__6394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6394__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6394__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6394__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6394__count)));
                            vlSelf->__Vfunc_leading_zero32__6394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6394__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6394__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6394__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6394__count)));
                            vlSelf->__Vfunc_leading_zero32__6394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6394__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6394__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6394__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6394__count)));
                            vlSelf->__Vfunc_leading_zero32__6394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6394__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6394__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6394__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6394__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6394__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6394__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6394__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6394__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6400__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6400__part 
                            = vlSelf->__Vfunc_leading_zero32__6400__value;
                        vlSelf->__Vfunc_leading_zero32__6400__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6400__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6400__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6400__count)));
                            vlSelf->__Vfunc_leading_zero32__6400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6400__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6400__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6400__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6400__count)));
                            vlSelf->__Vfunc_leading_zero32__6400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6400__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6400__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6400__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6400__count)));
                            vlSelf->__Vfunc_leading_zero32__6400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6400__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6400__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6400__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6400__count)));
                            vlSelf->__Vfunc_leading_zero32__6400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6400__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6400__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6400__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6400__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6400__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6400__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6400__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6400__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6406__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6406__part 
                            = vlSelf->__Vfunc_leading_zero32__6406__value;
                        vlSelf->__Vfunc_leading_zero32__6406__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6406__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6406__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6406__count)));
                            vlSelf->__Vfunc_leading_zero32__6406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6406__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6406__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6406__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6406__count)));
                            vlSelf->__Vfunc_leading_zero32__6406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6406__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6406__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6406__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6406__count)));
                            vlSelf->__Vfunc_leading_zero32__6406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6406__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6406__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6406__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6406__count)));
                            vlSelf->__Vfunc_leading_zero32__6406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6406__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6406__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6406__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6406__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6406__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6406__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6406__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6406__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6412__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6412__part 
                            = vlSelf->__Vfunc_leading_zero32__6412__value;
                        vlSelf->__Vfunc_leading_zero32__6412__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6412__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6412__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6412__count)));
                            vlSelf->__Vfunc_leading_zero32__6412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6412__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6412__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6412__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6412__count)));
                            vlSelf->__Vfunc_leading_zero32__6412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6412__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6412__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6412__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6412__count)));
                            vlSelf->__Vfunc_leading_zero32__6412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6412__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6412__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6412__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6412__count)));
                            vlSelf->__Vfunc_leading_zero32__6412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6412__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6412__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6412__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6412__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6412__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6412__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6412__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6412__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6418__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6418__part 
                            = vlSelf->__Vfunc_leading_zero32__6418__value;
                        vlSelf->__Vfunc_leading_zero32__6418__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6418__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6418__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6418__count)));
                            vlSelf->__Vfunc_leading_zero32__6418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6418__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6418__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6418__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6418__count)));
                            vlSelf->__Vfunc_leading_zero32__6418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6418__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6418__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6418__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6418__count)));
                            vlSelf->__Vfunc_leading_zero32__6418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6418__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6418__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6418__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6418__count)));
                            vlSelf->__Vfunc_leading_zero32__6418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6418__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6418__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6418__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6418__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6418__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6418__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6418__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6418__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6424__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6424__part 
                            = vlSelf->__Vfunc_leading_zero32__6424__value;
                        vlSelf->__Vfunc_leading_zero32__6424__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6424__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6424__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6424__count)));
                            vlSelf->__Vfunc_leading_zero32__6424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6424__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6424__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6424__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6424__count)));
                            vlSelf->__Vfunc_leading_zero32__6424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6424__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6424__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6424__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6424__count)));
                            vlSelf->__Vfunc_leading_zero32__6424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6424__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6424__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6424__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6424__count)));
                            vlSelf->__Vfunc_leading_zero32__6424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6424__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6424__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6424__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6424__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6424__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6424__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6424__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6424__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6430__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6430__part 
                            = vlSelf->__Vfunc_leading_zero32__6430__value;
                        vlSelf->__Vfunc_leading_zero32__6430__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6430__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6430__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6430__count)));
                            vlSelf->__Vfunc_leading_zero32__6430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6430__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6430__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6430__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6430__count)));
                            vlSelf->__Vfunc_leading_zero32__6430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6430__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6430__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6430__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6430__count)));
                            vlSelf->__Vfunc_leading_zero32__6430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6430__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6430__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6430__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6430__count)));
                            vlSelf->__Vfunc_leading_zero32__6430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6430__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6430__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6430__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6430__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6430__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6430__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6430__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6430__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6436__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6436__part 
                            = vlSelf->__Vfunc_leading_zero32__6436__value;
                        vlSelf->__Vfunc_leading_zero32__6436__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6436__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6436__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6436__count)));
                            vlSelf->__Vfunc_leading_zero32__6436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6436__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6436__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6436__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6436__count)));
                            vlSelf->__Vfunc_leading_zero32__6436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6436__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6436__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6436__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6436__count)));
                            vlSelf->__Vfunc_leading_zero32__6436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6436__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6436__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6436__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6436__count)));
                            vlSelf->__Vfunc_leading_zero32__6436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6436__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6436__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6436__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6436__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6436__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6436__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6436__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6436__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6442__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6442__part 
                            = vlSelf->__Vfunc_leading_zero32__6442__value;
                        vlSelf->__Vfunc_leading_zero32__6442__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6442__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6442__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6442__count)));
                            vlSelf->__Vfunc_leading_zero32__6442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6442__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6442__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6442__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6442__count)));
                            vlSelf->__Vfunc_leading_zero32__6442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6442__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6442__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6442__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6442__count)));
                            vlSelf->__Vfunc_leading_zero32__6442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6442__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6442__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6442__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6442__count)));
                            vlSelf->__Vfunc_leading_zero32__6442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6442__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6442__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6442__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6442__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6442__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6442__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6442__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6442__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6448__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6448__part 
                            = vlSelf->__Vfunc_leading_zero32__6448__value;
                        vlSelf->__Vfunc_leading_zero32__6448__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6448__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6448__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6448__count)));
                            vlSelf->__Vfunc_leading_zero32__6448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6448__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6448__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6448__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6448__count)));
                            vlSelf->__Vfunc_leading_zero32__6448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6448__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6448__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6448__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6448__count)));
                            vlSelf->__Vfunc_leading_zero32__6448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6448__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6448__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6448__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6448__count)));
                            vlSelf->__Vfunc_leading_zero32__6448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6448__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6448__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6448__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6448__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6448__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6448__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6448__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6448__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6454__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6454__part 
                            = vlSelf->__Vfunc_leading_zero32__6454__value;
                        vlSelf->__Vfunc_leading_zero32__6454__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6454__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6454__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6454__count)));
                            vlSelf->__Vfunc_leading_zero32__6454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6454__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6454__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6454__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6454__count)));
                            vlSelf->__Vfunc_leading_zero32__6454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6454__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6454__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6454__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6454__count)));
                            vlSelf->__Vfunc_leading_zero32__6454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6454__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6454__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6454__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6454__count)));
                            vlSelf->__Vfunc_leading_zero32__6454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6454__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6454__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6454__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6454__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6454__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6454__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6454__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6454__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6460__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6460__part 
                            = vlSelf->__Vfunc_leading_zero32__6460__value;
                        vlSelf->__Vfunc_leading_zero32__6460__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6460__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6460__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6460__count)));
                            vlSelf->__Vfunc_leading_zero32__6460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6460__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6460__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6460__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6460__count)));
                            vlSelf->__Vfunc_leading_zero32__6460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6460__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6460__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6460__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6460__count)));
                            vlSelf->__Vfunc_leading_zero32__6460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6460__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6460__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6460__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6460__count)));
                            vlSelf->__Vfunc_leading_zero32__6460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6460__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6460__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6460__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6460__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6460__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6460__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6460__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6460__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6466__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6466__part 
                            = vlSelf->__Vfunc_leading_zero32__6466__value;
                        vlSelf->__Vfunc_leading_zero32__6466__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6466__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6466__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6466__count)));
                            vlSelf->__Vfunc_leading_zero32__6466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6466__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6466__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6466__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6466__count)));
                            vlSelf->__Vfunc_leading_zero32__6466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6466__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6466__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6466__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6466__count)));
                            vlSelf->__Vfunc_leading_zero32__6466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6466__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6466__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6466__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6466__count)));
                            vlSelf->__Vfunc_leading_zero32__6466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6466__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6466__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6466__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6466__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6466__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6466__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6466__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6466__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6472__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6472__part 
                            = vlSelf->__Vfunc_leading_zero32__6472__value;
                        vlSelf->__Vfunc_leading_zero32__6472__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6472__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6472__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6472__count)));
                            vlSelf->__Vfunc_leading_zero32__6472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6472__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6472__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6472__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6472__count)));
                            vlSelf->__Vfunc_leading_zero32__6472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6472__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6472__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6472__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6472__count)));
                            vlSelf->__Vfunc_leading_zero32__6472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6472__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6472__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6472__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6472__count)));
                            vlSelf->__Vfunc_leading_zero32__6472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6472__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6472__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6472__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6472__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6472__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6472__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6472__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6472__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6478__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6478__part 
                            = vlSelf->__Vfunc_leading_zero32__6478__value;
                        vlSelf->__Vfunc_leading_zero32__6478__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6478__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6478__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6478__count)));
                            vlSelf->__Vfunc_leading_zero32__6478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6478__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6478__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6478__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6478__count)));
                            vlSelf->__Vfunc_leading_zero32__6478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6478__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6478__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6478__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6478__count)));
                            vlSelf->__Vfunc_leading_zero32__6478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6478__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6478__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6478__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6478__count)));
                            vlSelf->__Vfunc_leading_zero32__6478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6478__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6478__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6478__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6478__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6478__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6478__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6478__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6478__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6484__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6484__part 
                            = vlSelf->__Vfunc_leading_zero32__6484__value;
                        vlSelf->__Vfunc_leading_zero32__6484__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6484__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6484__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6484__count)));
                            vlSelf->__Vfunc_leading_zero32__6484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6484__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6484__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6484__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6484__count)));
                            vlSelf->__Vfunc_leading_zero32__6484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6484__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6484__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6484__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6484__count)));
                            vlSelf->__Vfunc_leading_zero32__6484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6484__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6484__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6484__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6484__count)));
                            vlSelf->__Vfunc_leading_zero32__6484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6484__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6484__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6484__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6484__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6484__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6484__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6484__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6484__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6490__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6490__part 
                            = vlSelf->__Vfunc_leading_zero32__6490__value;
                        vlSelf->__Vfunc_leading_zero32__6490__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6490__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6490__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6490__count)));
                            vlSelf->__Vfunc_leading_zero32__6490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6490__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6490__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6490__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6490__count)));
                            vlSelf->__Vfunc_leading_zero32__6490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6490__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6490__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6490__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6490__count)));
                            vlSelf->__Vfunc_leading_zero32__6490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6490__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6490__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6490__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6490__count)));
                            vlSelf->__Vfunc_leading_zero32__6490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6490__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6490__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6490__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6490__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6490__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6490__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6490__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6490__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6496__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6496__part 
                            = vlSelf->__Vfunc_leading_zero32__6496__value;
                        vlSelf->__Vfunc_leading_zero32__6496__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6496__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6496__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6496__count)));
                            vlSelf->__Vfunc_leading_zero32__6496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6496__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6496__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6496__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6496__count)));
                            vlSelf->__Vfunc_leading_zero32__6496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6496__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6496__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6496__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6496__count)));
                            vlSelf->__Vfunc_leading_zero32__6496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6496__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6496__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6496__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6496__count)));
                            vlSelf->__Vfunc_leading_zero32__6496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6496__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6496__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6496__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6496__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6496__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6496__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6496__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6496__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6502__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6502__part 
                            = vlSelf->__Vfunc_leading_zero32__6502__value;
                        vlSelf->__Vfunc_leading_zero32__6502__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6502__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6502__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6502__count)));
                            vlSelf->__Vfunc_leading_zero32__6502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6502__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6502__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6502__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6502__count)));
                            vlSelf->__Vfunc_leading_zero32__6502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6502__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6502__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6502__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6502__count)));
                            vlSelf->__Vfunc_leading_zero32__6502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6502__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6502__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6502__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6502__count)));
                            vlSelf->__Vfunc_leading_zero32__6502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6502__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6502__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6502__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6502__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6502__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6502__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6502__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6502__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6508__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6508__part 
                            = vlSelf->__Vfunc_leading_zero32__6508__value;
                        vlSelf->__Vfunc_leading_zero32__6508__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6508__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6508__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6508__count)));
                            vlSelf->__Vfunc_leading_zero32__6508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6508__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6508__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6508__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6508__count)));
                            vlSelf->__Vfunc_leading_zero32__6508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6508__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6508__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6508__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6508__count)));
                            vlSelf->__Vfunc_leading_zero32__6508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6508__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6508__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6508__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6508__count)));
                            vlSelf->__Vfunc_leading_zero32__6508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6508__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6508__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6508__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6508__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6508__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6508__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6508__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6508__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6514__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6514__part 
                            = vlSelf->__Vfunc_leading_zero32__6514__value;
                        vlSelf->__Vfunc_leading_zero32__6514__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6514__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6514__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6514__count)));
                            vlSelf->__Vfunc_leading_zero32__6514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6514__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6514__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6514__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6514__count)));
                            vlSelf->__Vfunc_leading_zero32__6514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6514__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6514__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6514__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6514__count)));
                            vlSelf->__Vfunc_leading_zero32__6514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6514__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6514__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6514__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6514__count)));
                            vlSelf->__Vfunc_leading_zero32__6514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6514__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6514__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6514__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6514__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6514__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6514__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6514__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6514__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6520__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6520__part 
                            = vlSelf->__Vfunc_leading_zero32__6520__value;
                        vlSelf->__Vfunc_leading_zero32__6520__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6520__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6520__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6520__count)));
                            vlSelf->__Vfunc_leading_zero32__6520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6520__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6520__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6520__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6520__count)));
                            vlSelf->__Vfunc_leading_zero32__6520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6520__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6520__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6520__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6520__count)));
                            vlSelf->__Vfunc_leading_zero32__6520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6520__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6520__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6520__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6520__count)));
                            vlSelf->__Vfunc_leading_zero32__6520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6520__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6520__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6520__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6520__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6520__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6520__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6520__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6520__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6526__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6526__part 
                            = vlSelf->__Vfunc_leading_zero32__6526__value;
                        vlSelf->__Vfunc_leading_zero32__6526__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6526__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6526__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6526__count)));
                            vlSelf->__Vfunc_leading_zero32__6526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6526__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6526__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6526__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6526__count)));
                            vlSelf->__Vfunc_leading_zero32__6526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6526__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6526__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6526__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6526__count)));
                            vlSelf->__Vfunc_leading_zero32__6526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6526__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6526__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6526__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6526__count)));
                            vlSelf->__Vfunc_leading_zero32__6526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6526__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6526__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6526__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6526__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6526__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6526__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6526__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6526__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6532__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6532__part 
                            = vlSelf->__Vfunc_leading_zero32__6532__value;
                        vlSelf->__Vfunc_leading_zero32__6532__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6532__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6532__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6532__count)));
                            vlSelf->__Vfunc_leading_zero32__6532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6532__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6532__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6532__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6532__count)));
                            vlSelf->__Vfunc_leading_zero32__6532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6532__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6532__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6532__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6532__count)));
                            vlSelf->__Vfunc_leading_zero32__6532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6532__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6532__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6532__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6532__count)));
                            vlSelf->__Vfunc_leading_zero32__6532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6532__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6532__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6532__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6532__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6532__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6532__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6532__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6532__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6538__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6538__part 
                            = vlSelf->__Vfunc_leading_zero32__6538__value;
                        vlSelf->__Vfunc_leading_zero32__6538__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6538__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6538__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6538__count)));
                            vlSelf->__Vfunc_leading_zero32__6538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6538__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6538__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6538__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6538__count)));
                            vlSelf->__Vfunc_leading_zero32__6538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6538__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6538__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6538__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6538__count)));
                            vlSelf->__Vfunc_leading_zero32__6538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6538__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6538__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6538__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6538__count)));
                            vlSelf->__Vfunc_leading_zero32__6538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6538__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6538__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6538__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6538__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6538__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6538__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6538__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6538__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6544__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6544__part 
                            = vlSelf->__Vfunc_leading_zero32__6544__value;
                        vlSelf->__Vfunc_leading_zero32__6544__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6544__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6544__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6544__count)));
                            vlSelf->__Vfunc_leading_zero32__6544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6544__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6544__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6544__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6544__count)));
                            vlSelf->__Vfunc_leading_zero32__6544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6544__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6544__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6544__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6544__count)));
                            vlSelf->__Vfunc_leading_zero32__6544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6544__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6544__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6544__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6544__count)));
                            vlSelf->__Vfunc_leading_zero32__6544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6544__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6544__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6544__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6544__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6544__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6544__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6544__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6544__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6550__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6550__part 
                            = vlSelf->__Vfunc_leading_zero32__6550__value;
                        vlSelf->__Vfunc_leading_zero32__6550__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6550__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6550__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6550__count)));
                            vlSelf->__Vfunc_leading_zero32__6550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6550__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6550__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6550__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6550__count)));
                            vlSelf->__Vfunc_leading_zero32__6550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6550__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6550__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6550__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6550__count)));
                            vlSelf->__Vfunc_leading_zero32__6550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6550__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6550__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6550__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6550__count)));
                            vlSelf->__Vfunc_leading_zero32__6550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6550__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6550__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6550__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6550__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6550__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6550__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6550__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6550__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6556__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6556__part 
                            = vlSelf->__Vfunc_leading_zero32__6556__value;
                        vlSelf->__Vfunc_leading_zero32__6556__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6556__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6556__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6556__count)));
                            vlSelf->__Vfunc_leading_zero32__6556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6556__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6556__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6556__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6556__count)));
                            vlSelf->__Vfunc_leading_zero32__6556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6556__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6556__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6556__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6556__count)));
                            vlSelf->__Vfunc_leading_zero32__6556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6556__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6556__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6556__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6556__count)));
                            vlSelf->__Vfunc_leading_zero32__6556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6556__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6556__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6556__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6556__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6556__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6556__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6556__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6556__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6562__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6562__part 
                            = vlSelf->__Vfunc_leading_zero32__6562__value;
                        vlSelf->__Vfunc_leading_zero32__6562__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6562__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6562__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6562__count)));
                            vlSelf->__Vfunc_leading_zero32__6562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6562__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6562__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6562__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6562__count)));
                            vlSelf->__Vfunc_leading_zero32__6562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6562__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6562__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6562__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6562__count)));
                            vlSelf->__Vfunc_leading_zero32__6562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6562__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6562__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6562__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6562__count)));
                            vlSelf->__Vfunc_leading_zero32__6562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6562__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6562__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6562__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6562__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6562__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6562__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6562__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6562__Vfuncout)) 
                             - (IData)(5U))));
}
