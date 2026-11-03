// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_tensor_array.h for the primary calling header

#include "Vanvil_qn1_tensor_array__pch.h"
#include "Vanvil_qn1_tensor_array___024root.h"

VL_INLINE_OPT void Vanvil_qn1_tensor_array___024root___ico_sequent__TOP__4(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___ico_sequent__TOP__4\n"); );
    // Body
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__0__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__0__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1286__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__0__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1286__part 
                            = vlSelf->__Vfunc_leading_zero32__1286__value;
                        vlSelf->__Vfunc_leading_zero32__1286__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1286__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1286__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1286__count)));
                            vlSelf->__Vfunc_leading_zero32__1286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1286__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1286__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1286__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1286__count)));
                            vlSelf->__Vfunc_leading_zero32__1286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1286__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1286__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1286__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1286__count)));
                            vlSelf->__Vfunc_leading_zero32__1286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1286__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1286__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1286__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1286__count)));
                            vlSelf->__Vfunc_leading_zero32__1286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1286__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1286__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1286__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1286__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1286__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1286__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1286__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1286__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__1__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__1__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1298__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__1__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1298__part 
                            = vlSelf->__Vfunc_leading_zero32__1298__value;
                        vlSelf->__Vfunc_leading_zero32__1298__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1298__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1298__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1298__count)));
                            vlSelf->__Vfunc_leading_zero32__1298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1298__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1298__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1298__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1298__count)));
                            vlSelf->__Vfunc_leading_zero32__1298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1298__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1298__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1298__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1298__count)));
                            vlSelf->__Vfunc_leading_zero32__1298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1298__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1298__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1298__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1298__count)));
                            vlSelf->__Vfunc_leading_zero32__1298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1298__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1298__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1298__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1298__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1298__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1298__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1298__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1298__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__2__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__2__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1310__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__2__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1310__part 
                            = vlSelf->__Vfunc_leading_zero32__1310__value;
                        vlSelf->__Vfunc_leading_zero32__1310__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1310__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1310__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1310__count)));
                            vlSelf->__Vfunc_leading_zero32__1310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1310__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1310__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1310__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1310__count)));
                            vlSelf->__Vfunc_leading_zero32__1310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1310__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1310__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1310__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1310__count)));
                            vlSelf->__Vfunc_leading_zero32__1310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1310__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1310__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1310__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1310__count)));
                            vlSelf->__Vfunc_leading_zero32__1310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1310__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1310__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1310__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1310__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1310__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1310__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1310__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1310__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__3__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__3__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1322__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__3__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1322__part 
                            = vlSelf->__Vfunc_leading_zero32__1322__value;
                        vlSelf->__Vfunc_leading_zero32__1322__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1322__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1322__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1322__count)));
                            vlSelf->__Vfunc_leading_zero32__1322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1322__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1322__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1322__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1322__count)));
                            vlSelf->__Vfunc_leading_zero32__1322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1322__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1322__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1322__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1322__count)));
                            vlSelf->__Vfunc_leading_zero32__1322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1322__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1322__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1322__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1322__count)));
                            vlSelf->__Vfunc_leading_zero32__1322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1322__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1322__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1322__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1322__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1322__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1322__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1322__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1322__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__4__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__4__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1334__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__4__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1334__part 
                            = vlSelf->__Vfunc_leading_zero32__1334__value;
                        vlSelf->__Vfunc_leading_zero32__1334__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1334__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1334__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1334__count)));
                            vlSelf->__Vfunc_leading_zero32__1334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1334__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1334__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1334__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1334__count)));
                            vlSelf->__Vfunc_leading_zero32__1334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1334__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1334__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1334__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1334__count)));
                            vlSelf->__Vfunc_leading_zero32__1334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1334__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1334__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1334__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1334__count)));
                            vlSelf->__Vfunc_leading_zero32__1334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1334__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1334__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1334__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1334__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1334__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1334__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1334__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1334__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__5__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__5__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1346__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__5__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1346__part 
                            = vlSelf->__Vfunc_leading_zero32__1346__value;
                        vlSelf->__Vfunc_leading_zero32__1346__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1346__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1346__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1346__count)));
                            vlSelf->__Vfunc_leading_zero32__1346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1346__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1346__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1346__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1346__count)));
                            vlSelf->__Vfunc_leading_zero32__1346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1346__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1346__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1346__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1346__count)));
                            vlSelf->__Vfunc_leading_zero32__1346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1346__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1346__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1346__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1346__count)));
                            vlSelf->__Vfunc_leading_zero32__1346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1346__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1346__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1346__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1346__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1346__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1346__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1346__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1346__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__6__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__6__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1358__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__6__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1358__part 
                            = vlSelf->__Vfunc_leading_zero32__1358__value;
                        vlSelf->__Vfunc_leading_zero32__1358__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1358__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1358__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1358__count)));
                            vlSelf->__Vfunc_leading_zero32__1358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1358__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1358__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1358__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1358__count)));
                            vlSelf->__Vfunc_leading_zero32__1358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1358__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1358__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1358__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1358__count)));
                            vlSelf->__Vfunc_leading_zero32__1358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1358__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1358__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1358__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1358__count)));
                            vlSelf->__Vfunc_leading_zero32__1358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1358__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1358__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1358__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1358__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1358__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1358__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1358__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1358__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__7__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__7__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1370__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__7__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1370__part 
                            = vlSelf->__Vfunc_leading_zero32__1370__value;
                        vlSelf->__Vfunc_leading_zero32__1370__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1370__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1370__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1370__count)));
                            vlSelf->__Vfunc_leading_zero32__1370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1370__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1370__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1370__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1370__count)));
                            vlSelf->__Vfunc_leading_zero32__1370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1370__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1370__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1370__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1370__count)));
                            vlSelf->__Vfunc_leading_zero32__1370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1370__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1370__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1370__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1370__count)));
                            vlSelf->__Vfunc_leading_zero32__1370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1370__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1370__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1370__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1370__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1370__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1370__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1370__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1370__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__8__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__8__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1382__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__8__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1382__part 
                            = vlSelf->__Vfunc_leading_zero32__1382__value;
                        vlSelf->__Vfunc_leading_zero32__1382__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1382__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1382__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1382__count)));
                            vlSelf->__Vfunc_leading_zero32__1382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1382__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1382__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1382__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1382__count)));
                            vlSelf->__Vfunc_leading_zero32__1382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1382__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1382__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1382__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1382__count)));
                            vlSelf->__Vfunc_leading_zero32__1382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1382__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1382__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1382__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1382__count)));
                            vlSelf->__Vfunc_leading_zero32__1382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1382__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1382__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1382__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1382__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1382__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1382__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1382__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1382__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__9__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__9__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1394__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__9__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1394__part 
                            = vlSelf->__Vfunc_leading_zero32__1394__value;
                        vlSelf->__Vfunc_leading_zero32__1394__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1394__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1394__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1394__count)));
                            vlSelf->__Vfunc_leading_zero32__1394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1394__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1394__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1394__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1394__count)));
                            vlSelf->__Vfunc_leading_zero32__1394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1394__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1394__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1394__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1394__count)));
                            vlSelf->__Vfunc_leading_zero32__1394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1394__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1394__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1394__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1394__count)));
                            vlSelf->__Vfunc_leading_zero32__1394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1394__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1394__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1394__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1394__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1394__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1394__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1394__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1394__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__10__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__10__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1406__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__10__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1406__part 
                            = vlSelf->__Vfunc_leading_zero32__1406__value;
                        vlSelf->__Vfunc_leading_zero32__1406__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1406__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1406__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1406__count)));
                            vlSelf->__Vfunc_leading_zero32__1406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1406__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1406__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1406__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1406__count)));
                            vlSelf->__Vfunc_leading_zero32__1406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1406__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1406__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1406__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1406__count)));
                            vlSelf->__Vfunc_leading_zero32__1406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1406__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1406__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1406__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1406__count)));
                            vlSelf->__Vfunc_leading_zero32__1406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1406__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1406__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1406__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1406__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1406__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1406__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1406__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1406__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__11__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__11__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1418__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__11__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1418__part 
                            = vlSelf->__Vfunc_leading_zero32__1418__value;
                        vlSelf->__Vfunc_leading_zero32__1418__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1418__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1418__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1418__count)));
                            vlSelf->__Vfunc_leading_zero32__1418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1418__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1418__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1418__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1418__count)));
                            vlSelf->__Vfunc_leading_zero32__1418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1418__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1418__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1418__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1418__count)));
                            vlSelf->__Vfunc_leading_zero32__1418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1418__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1418__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1418__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1418__count)));
                            vlSelf->__Vfunc_leading_zero32__1418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1418__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1418__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1418__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1418__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1418__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1418__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1418__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1418__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__12__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__12__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1430__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__12__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1430__part 
                            = vlSelf->__Vfunc_leading_zero32__1430__value;
                        vlSelf->__Vfunc_leading_zero32__1430__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1430__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1430__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1430__count)));
                            vlSelf->__Vfunc_leading_zero32__1430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1430__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1430__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1430__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1430__count)));
                            vlSelf->__Vfunc_leading_zero32__1430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1430__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1430__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1430__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1430__count)));
                            vlSelf->__Vfunc_leading_zero32__1430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1430__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1430__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1430__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1430__count)));
                            vlSelf->__Vfunc_leading_zero32__1430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1430__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1430__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1430__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1430__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1430__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1430__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1430__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1430__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__13__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__13__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1442__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__13__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1442__part 
                            = vlSelf->__Vfunc_leading_zero32__1442__value;
                        vlSelf->__Vfunc_leading_zero32__1442__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1442__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1442__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1442__count)));
                            vlSelf->__Vfunc_leading_zero32__1442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1442__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1442__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1442__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1442__count)));
                            vlSelf->__Vfunc_leading_zero32__1442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1442__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1442__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1442__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1442__count)));
                            vlSelf->__Vfunc_leading_zero32__1442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1442__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1442__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1442__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1442__count)));
                            vlSelf->__Vfunc_leading_zero32__1442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1442__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1442__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1442__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1442__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1442__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1442__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1442__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1442__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__14__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__14__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1454__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__14__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1454__part 
                            = vlSelf->__Vfunc_leading_zero32__1454__value;
                        vlSelf->__Vfunc_leading_zero32__1454__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1454__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1454__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1454__count)));
                            vlSelf->__Vfunc_leading_zero32__1454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1454__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1454__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1454__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1454__count)));
                            vlSelf->__Vfunc_leading_zero32__1454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1454__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1454__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1454__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1454__count)));
                            vlSelf->__Vfunc_leading_zero32__1454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1454__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1454__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1454__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1454__count)));
                            vlSelf->__Vfunc_leading_zero32__1454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1454__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1454__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1454__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1454__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1454__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1454__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1454__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1454__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__15__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__15__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1466__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__15__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1466__part 
                            = vlSelf->__Vfunc_leading_zero32__1466__value;
                        vlSelf->__Vfunc_leading_zero32__1466__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1466__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1466__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1466__count)));
                            vlSelf->__Vfunc_leading_zero32__1466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1466__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1466__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1466__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1466__count)));
                            vlSelf->__Vfunc_leading_zero32__1466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1466__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1466__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1466__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1466__count)));
                            vlSelf->__Vfunc_leading_zero32__1466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1466__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1466__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1466__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1466__count)));
                            vlSelf->__Vfunc_leading_zero32__1466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1466__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1466__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1466__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1466__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1466__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1466__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1466__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1466__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__16__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__16__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1478__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__16__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1478__part 
                            = vlSelf->__Vfunc_leading_zero32__1478__value;
                        vlSelf->__Vfunc_leading_zero32__1478__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1478__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1478__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1478__count)));
                            vlSelf->__Vfunc_leading_zero32__1478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1478__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1478__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1478__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1478__count)));
                            vlSelf->__Vfunc_leading_zero32__1478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1478__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1478__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1478__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1478__count)));
                            vlSelf->__Vfunc_leading_zero32__1478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1478__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1478__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1478__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1478__count)));
                            vlSelf->__Vfunc_leading_zero32__1478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1478__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1478__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1478__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1478__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1478__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1478__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1478__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1478__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__17__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__17__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1490__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__17__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1490__part 
                            = vlSelf->__Vfunc_leading_zero32__1490__value;
                        vlSelf->__Vfunc_leading_zero32__1490__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1490__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1490__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1490__count)));
                            vlSelf->__Vfunc_leading_zero32__1490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1490__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1490__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1490__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1490__count)));
                            vlSelf->__Vfunc_leading_zero32__1490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1490__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1490__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1490__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1490__count)));
                            vlSelf->__Vfunc_leading_zero32__1490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1490__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1490__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1490__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1490__count)));
                            vlSelf->__Vfunc_leading_zero32__1490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1490__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1490__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1490__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1490__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1490__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1490__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1490__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1490__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__18__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__18__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1502__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__18__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1502__part 
                            = vlSelf->__Vfunc_leading_zero32__1502__value;
                        vlSelf->__Vfunc_leading_zero32__1502__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1502__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1502__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1502__count)));
                            vlSelf->__Vfunc_leading_zero32__1502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1502__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1502__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1502__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1502__count)));
                            vlSelf->__Vfunc_leading_zero32__1502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1502__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1502__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1502__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1502__count)));
                            vlSelf->__Vfunc_leading_zero32__1502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1502__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1502__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1502__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1502__count)));
                            vlSelf->__Vfunc_leading_zero32__1502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1502__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1502__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1502__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1502__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1502__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1502__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1502__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1502__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__19__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__19__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1514__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__19__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1514__part 
                            = vlSelf->__Vfunc_leading_zero32__1514__value;
                        vlSelf->__Vfunc_leading_zero32__1514__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1514__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1514__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1514__count)));
                            vlSelf->__Vfunc_leading_zero32__1514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1514__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1514__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1514__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1514__count)));
                            vlSelf->__Vfunc_leading_zero32__1514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1514__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1514__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1514__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1514__count)));
                            vlSelf->__Vfunc_leading_zero32__1514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1514__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1514__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1514__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1514__count)));
                            vlSelf->__Vfunc_leading_zero32__1514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1514__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1514__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1514__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1514__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1514__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1514__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1514__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1514__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__20__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__20__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1526__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__20__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1526__part 
                            = vlSelf->__Vfunc_leading_zero32__1526__value;
                        vlSelf->__Vfunc_leading_zero32__1526__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1526__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1526__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1526__count)));
                            vlSelf->__Vfunc_leading_zero32__1526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1526__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1526__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1526__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1526__count)));
                            vlSelf->__Vfunc_leading_zero32__1526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1526__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1526__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1526__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1526__count)));
                            vlSelf->__Vfunc_leading_zero32__1526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1526__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1526__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1526__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1526__count)));
                            vlSelf->__Vfunc_leading_zero32__1526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1526__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1526__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1526__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1526__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1526__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1526__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1526__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1526__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__21__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__21__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1538__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__21__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1538__part 
                            = vlSelf->__Vfunc_leading_zero32__1538__value;
                        vlSelf->__Vfunc_leading_zero32__1538__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1538__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1538__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1538__count)));
                            vlSelf->__Vfunc_leading_zero32__1538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1538__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1538__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1538__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1538__count)));
                            vlSelf->__Vfunc_leading_zero32__1538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1538__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1538__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1538__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1538__count)));
                            vlSelf->__Vfunc_leading_zero32__1538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1538__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1538__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1538__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1538__count)));
                            vlSelf->__Vfunc_leading_zero32__1538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1538__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1538__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1538__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1538__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1538__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1538__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1538__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1538__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__22__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__22__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1550__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__22__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1550__part 
                            = vlSelf->__Vfunc_leading_zero32__1550__value;
                        vlSelf->__Vfunc_leading_zero32__1550__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1550__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1550__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1550__count)));
                            vlSelf->__Vfunc_leading_zero32__1550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1550__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1550__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1550__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1550__count)));
                            vlSelf->__Vfunc_leading_zero32__1550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1550__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1550__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1550__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1550__count)));
                            vlSelf->__Vfunc_leading_zero32__1550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1550__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1550__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1550__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1550__count)));
                            vlSelf->__Vfunc_leading_zero32__1550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1550__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1550__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1550__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1550__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1550__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1550__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1550__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1550__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__23__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__23__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1562__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__23__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1562__part 
                            = vlSelf->__Vfunc_leading_zero32__1562__value;
                        vlSelf->__Vfunc_leading_zero32__1562__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1562__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1562__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1562__count)));
                            vlSelf->__Vfunc_leading_zero32__1562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1562__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1562__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1562__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1562__count)));
                            vlSelf->__Vfunc_leading_zero32__1562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1562__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1562__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1562__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1562__count)));
                            vlSelf->__Vfunc_leading_zero32__1562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1562__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1562__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1562__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1562__count)));
                            vlSelf->__Vfunc_leading_zero32__1562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1562__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1562__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1562__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1562__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1562__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1562__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1562__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1562__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__24__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__24__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1574__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__24__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1574__part 
                            = vlSelf->__Vfunc_leading_zero32__1574__value;
                        vlSelf->__Vfunc_leading_zero32__1574__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1574__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1574__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1574__count)));
                            vlSelf->__Vfunc_leading_zero32__1574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1574__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1574__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1574__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1574__count)));
                            vlSelf->__Vfunc_leading_zero32__1574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1574__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1574__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1574__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1574__count)));
                            vlSelf->__Vfunc_leading_zero32__1574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1574__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1574__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1574__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1574__count)));
                            vlSelf->__Vfunc_leading_zero32__1574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1574__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1574__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1574__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1574__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1574__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1574__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1574__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1574__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__25__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__25__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1586__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__25__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1586__part 
                            = vlSelf->__Vfunc_leading_zero32__1586__value;
                        vlSelf->__Vfunc_leading_zero32__1586__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1586__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1586__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1586__count)));
                            vlSelf->__Vfunc_leading_zero32__1586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1586__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1586__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1586__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1586__count)));
                            vlSelf->__Vfunc_leading_zero32__1586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1586__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1586__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1586__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1586__count)));
                            vlSelf->__Vfunc_leading_zero32__1586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1586__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1586__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1586__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1586__count)));
                            vlSelf->__Vfunc_leading_zero32__1586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1586__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1586__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1586__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1586__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1586__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1586__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1586__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1586__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__26__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__26__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1598__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__26__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1598__part 
                            = vlSelf->__Vfunc_leading_zero32__1598__value;
                        vlSelf->__Vfunc_leading_zero32__1598__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1598__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1598__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1598__count)));
                            vlSelf->__Vfunc_leading_zero32__1598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1598__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1598__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1598__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1598__count)));
                            vlSelf->__Vfunc_leading_zero32__1598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1598__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1598__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1598__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1598__count)));
                            vlSelf->__Vfunc_leading_zero32__1598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1598__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1598__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1598__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1598__count)));
                            vlSelf->__Vfunc_leading_zero32__1598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1598__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1598__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1598__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1598__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1598__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1598__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1598__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1598__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__27__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__27__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1610__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__27__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1610__part 
                            = vlSelf->__Vfunc_leading_zero32__1610__value;
                        vlSelf->__Vfunc_leading_zero32__1610__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1610__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1610__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1610__count)));
                            vlSelf->__Vfunc_leading_zero32__1610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1610__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1610__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1610__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1610__count)));
                            vlSelf->__Vfunc_leading_zero32__1610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1610__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1610__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1610__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1610__count)));
                            vlSelf->__Vfunc_leading_zero32__1610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1610__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1610__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1610__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1610__count)));
                            vlSelf->__Vfunc_leading_zero32__1610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1610__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1610__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1610__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1610__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1610__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1610__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1610__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1610__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__28__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__28__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1622__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__28__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1622__part 
                            = vlSelf->__Vfunc_leading_zero32__1622__value;
                        vlSelf->__Vfunc_leading_zero32__1622__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1622__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1622__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1622__count)));
                            vlSelf->__Vfunc_leading_zero32__1622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1622__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1622__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1622__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1622__count)));
                            vlSelf->__Vfunc_leading_zero32__1622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1622__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1622__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1622__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1622__count)));
                            vlSelf->__Vfunc_leading_zero32__1622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1622__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1622__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1622__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1622__count)));
                            vlSelf->__Vfunc_leading_zero32__1622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1622__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1622__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1622__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1622__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1622__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1622__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1622__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1622__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__29__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__29__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1634__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__29__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1634__part 
                            = vlSelf->__Vfunc_leading_zero32__1634__value;
                        vlSelf->__Vfunc_leading_zero32__1634__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1634__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1634__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1634__count)));
                            vlSelf->__Vfunc_leading_zero32__1634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1634__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1634__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1634__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1634__count)));
                            vlSelf->__Vfunc_leading_zero32__1634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1634__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1634__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1634__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1634__count)));
                            vlSelf->__Vfunc_leading_zero32__1634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1634__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1634__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1634__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1634__count)));
                            vlSelf->__Vfunc_leading_zero32__1634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1634__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1634__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1634__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1634__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1634__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1634__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1634__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1634__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__30__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__30__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1646__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__30__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1646__part 
                            = vlSelf->__Vfunc_leading_zero32__1646__value;
                        vlSelf->__Vfunc_leading_zero32__1646__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1646__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1646__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1646__count)));
                            vlSelf->__Vfunc_leading_zero32__1646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1646__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1646__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1646__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1646__count)));
                            vlSelf->__Vfunc_leading_zero32__1646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1646__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1646__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1646__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1646__count)));
                            vlSelf->__Vfunc_leading_zero32__1646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1646__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1646__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1646__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1646__count)));
                            vlSelf->__Vfunc_leading_zero32__1646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1646__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1646__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1646__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1646__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1646__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1646__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1646__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1646__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__31__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__31__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1658__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__31__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1658__part 
                            = vlSelf->__Vfunc_leading_zero32__1658__value;
                        vlSelf->__Vfunc_leading_zero32__1658__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1658__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1658__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1658__count)));
                            vlSelf->__Vfunc_leading_zero32__1658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1658__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1658__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1658__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1658__count)));
                            vlSelf->__Vfunc_leading_zero32__1658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1658__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1658__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1658__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1658__count)));
                            vlSelf->__Vfunc_leading_zero32__1658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1658__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1658__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1658__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1658__count)));
                            vlSelf->__Vfunc_leading_zero32__1658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1658__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1658__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1658__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1658__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1658__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1658__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1658__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1658__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__32__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__32__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1670__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__32__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1670__part 
                            = vlSelf->__Vfunc_leading_zero32__1670__value;
                        vlSelf->__Vfunc_leading_zero32__1670__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1670__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1670__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1670__count)));
                            vlSelf->__Vfunc_leading_zero32__1670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1670__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1670__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1670__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1670__count)));
                            vlSelf->__Vfunc_leading_zero32__1670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1670__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1670__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1670__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1670__count)));
                            vlSelf->__Vfunc_leading_zero32__1670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1670__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1670__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1670__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1670__count)));
                            vlSelf->__Vfunc_leading_zero32__1670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1670__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1670__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1670__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1670__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1670__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1670__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1670__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1670__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__33__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__33__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1682__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__33__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1682__part 
                            = vlSelf->__Vfunc_leading_zero32__1682__value;
                        vlSelf->__Vfunc_leading_zero32__1682__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1682__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1682__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1682__count)));
                            vlSelf->__Vfunc_leading_zero32__1682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1682__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1682__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1682__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1682__count)));
                            vlSelf->__Vfunc_leading_zero32__1682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1682__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1682__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1682__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1682__count)));
                            vlSelf->__Vfunc_leading_zero32__1682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1682__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1682__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1682__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1682__count)));
                            vlSelf->__Vfunc_leading_zero32__1682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1682__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1682__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1682__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1682__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1682__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1682__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1682__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1682__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__34__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__34__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1694__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__34__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1694__part 
                            = vlSelf->__Vfunc_leading_zero32__1694__value;
                        vlSelf->__Vfunc_leading_zero32__1694__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1694__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1694__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1694__count)));
                            vlSelf->__Vfunc_leading_zero32__1694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1694__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1694__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1694__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1694__count)));
                            vlSelf->__Vfunc_leading_zero32__1694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1694__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1694__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1694__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1694__count)));
                            vlSelf->__Vfunc_leading_zero32__1694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1694__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1694__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1694__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1694__count)));
                            vlSelf->__Vfunc_leading_zero32__1694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1694__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1694__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1694__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1694__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1694__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1694__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1694__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1694__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__35__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__35__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1706__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__35__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1706__part 
                            = vlSelf->__Vfunc_leading_zero32__1706__value;
                        vlSelf->__Vfunc_leading_zero32__1706__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1706__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1706__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1706__count)));
                            vlSelf->__Vfunc_leading_zero32__1706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1706__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1706__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1706__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1706__count)));
                            vlSelf->__Vfunc_leading_zero32__1706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1706__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1706__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1706__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1706__count)));
                            vlSelf->__Vfunc_leading_zero32__1706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1706__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1706__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1706__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1706__count)));
                            vlSelf->__Vfunc_leading_zero32__1706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1706__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1706__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1706__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1706__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1706__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1706__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1706__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1706__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__36__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__36__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1718__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__36__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1718__part 
                            = vlSelf->__Vfunc_leading_zero32__1718__value;
                        vlSelf->__Vfunc_leading_zero32__1718__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1718__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1718__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1718__count)));
                            vlSelf->__Vfunc_leading_zero32__1718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1718__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1718__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1718__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1718__count)));
                            vlSelf->__Vfunc_leading_zero32__1718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1718__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1718__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1718__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1718__count)));
                            vlSelf->__Vfunc_leading_zero32__1718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1718__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1718__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1718__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1718__count)));
                            vlSelf->__Vfunc_leading_zero32__1718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1718__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1718__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1718__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1718__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1718__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1718__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1718__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1718__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__37__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__37__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1730__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__37__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1730__part 
                            = vlSelf->__Vfunc_leading_zero32__1730__value;
                        vlSelf->__Vfunc_leading_zero32__1730__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1730__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1730__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1730__count)));
                            vlSelf->__Vfunc_leading_zero32__1730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1730__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1730__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1730__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1730__count)));
                            vlSelf->__Vfunc_leading_zero32__1730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1730__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1730__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1730__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1730__count)));
                            vlSelf->__Vfunc_leading_zero32__1730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1730__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1730__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1730__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1730__count)));
                            vlSelf->__Vfunc_leading_zero32__1730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1730__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1730__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1730__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1730__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1730__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1730__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1730__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1730__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__38__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__38__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1742__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__38__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1742__part 
                            = vlSelf->__Vfunc_leading_zero32__1742__value;
                        vlSelf->__Vfunc_leading_zero32__1742__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1742__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1742__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1742__count)));
                            vlSelf->__Vfunc_leading_zero32__1742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1742__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1742__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1742__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1742__count)));
                            vlSelf->__Vfunc_leading_zero32__1742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1742__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1742__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1742__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1742__count)));
                            vlSelf->__Vfunc_leading_zero32__1742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1742__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1742__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1742__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1742__count)));
                            vlSelf->__Vfunc_leading_zero32__1742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1742__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1742__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1742__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1742__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1742__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1742__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1742__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1742__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__39__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__39__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1754__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__39__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1754__part 
                            = vlSelf->__Vfunc_leading_zero32__1754__value;
                        vlSelf->__Vfunc_leading_zero32__1754__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1754__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1754__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1754__count)));
                            vlSelf->__Vfunc_leading_zero32__1754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1754__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1754__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1754__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1754__count)));
                            vlSelf->__Vfunc_leading_zero32__1754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1754__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1754__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1754__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1754__count)));
                            vlSelf->__Vfunc_leading_zero32__1754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1754__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1754__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1754__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1754__count)));
                            vlSelf->__Vfunc_leading_zero32__1754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1754__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1754__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1754__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1754__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1754__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1754__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1754__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1754__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__40__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__40__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1766__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__40__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1766__part 
                            = vlSelf->__Vfunc_leading_zero32__1766__value;
                        vlSelf->__Vfunc_leading_zero32__1766__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1766__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1766__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1766__count)));
                            vlSelf->__Vfunc_leading_zero32__1766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1766__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1766__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1766__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1766__count)));
                            vlSelf->__Vfunc_leading_zero32__1766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1766__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1766__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1766__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1766__count)));
                            vlSelf->__Vfunc_leading_zero32__1766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1766__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1766__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1766__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1766__count)));
                            vlSelf->__Vfunc_leading_zero32__1766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1766__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1766__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1766__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1766__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1766__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1766__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1766__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1766__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__41__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__41__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1778__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__41__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1778__part 
                            = vlSelf->__Vfunc_leading_zero32__1778__value;
                        vlSelf->__Vfunc_leading_zero32__1778__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1778__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1778__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1778__count)));
                            vlSelf->__Vfunc_leading_zero32__1778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1778__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1778__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1778__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1778__count)));
                            vlSelf->__Vfunc_leading_zero32__1778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1778__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1778__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1778__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1778__count)));
                            vlSelf->__Vfunc_leading_zero32__1778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1778__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1778__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1778__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1778__count)));
                            vlSelf->__Vfunc_leading_zero32__1778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1778__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1778__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1778__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1778__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1778__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1778__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1778__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1778__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__42__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__42__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1790__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__42__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1790__part 
                            = vlSelf->__Vfunc_leading_zero32__1790__value;
                        vlSelf->__Vfunc_leading_zero32__1790__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1790__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1790__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1790__count)));
                            vlSelf->__Vfunc_leading_zero32__1790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1790__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1790__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1790__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1790__count)));
                            vlSelf->__Vfunc_leading_zero32__1790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1790__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1790__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1790__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1790__count)));
                            vlSelf->__Vfunc_leading_zero32__1790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1790__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1790__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1790__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1790__count)));
                            vlSelf->__Vfunc_leading_zero32__1790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1790__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1790__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1790__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1790__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1790__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1790__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1790__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1790__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__43__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__43__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1802__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__43__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1802__part 
                            = vlSelf->__Vfunc_leading_zero32__1802__value;
                        vlSelf->__Vfunc_leading_zero32__1802__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1802__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1802__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1802__count)));
                            vlSelf->__Vfunc_leading_zero32__1802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1802__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1802__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1802__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1802__count)));
                            vlSelf->__Vfunc_leading_zero32__1802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1802__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1802__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1802__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1802__count)));
                            vlSelf->__Vfunc_leading_zero32__1802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1802__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1802__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1802__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1802__count)));
                            vlSelf->__Vfunc_leading_zero32__1802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1802__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1802__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1802__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1802__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1802__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1802__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1802__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1802__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__44__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__44__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1814__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__44__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1814__part 
                            = vlSelf->__Vfunc_leading_zero32__1814__value;
                        vlSelf->__Vfunc_leading_zero32__1814__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1814__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1814__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1814__count)));
                            vlSelf->__Vfunc_leading_zero32__1814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1814__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1814__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1814__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1814__count)));
                            vlSelf->__Vfunc_leading_zero32__1814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1814__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1814__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1814__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1814__count)));
                            vlSelf->__Vfunc_leading_zero32__1814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1814__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1814__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1814__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1814__count)));
                            vlSelf->__Vfunc_leading_zero32__1814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1814__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1814__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1814__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1814__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1814__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1814__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1814__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1814__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__45__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__45__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1826__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__45__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1826__part 
                            = vlSelf->__Vfunc_leading_zero32__1826__value;
                        vlSelf->__Vfunc_leading_zero32__1826__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1826__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1826__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1826__count)));
                            vlSelf->__Vfunc_leading_zero32__1826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1826__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1826__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1826__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1826__count)));
                            vlSelf->__Vfunc_leading_zero32__1826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1826__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1826__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1826__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1826__count)));
                            vlSelf->__Vfunc_leading_zero32__1826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1826__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1826__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1826__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1826__count)));
                            vlSelf->__Vfunc_leading_zero32__1826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1826__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1826__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1826__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1826__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1826__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1826__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1826__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1826__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__46__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__46__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1838__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__46__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1838__part 
                            = vlSelf->__Vfunc_leading_zero32__1838__value;
                        vlSelf->__Vfunc_leading_zero32__1838__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1838__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1838__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1838__count)));
                            vlSelf->__Vfunc_leading_zero32__1838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1838__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1838__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1838__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1838__count)));
                            vlSelf->__Vfunc_leading_zero32__1838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1838__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1838__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1838__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1838__count)));
                            vlSelf->__Vfunc_leading_zero32__1838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1838__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1838__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1838__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1838__count)));
                            vlSelf->__Vfunc_leading_zero32__1838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1838__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1838__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1838__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1838__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1838__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1838__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1838__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1838__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__47__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__47__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1850__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__47__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1850__part 
                            = vlSelf->__Vfunc_leading_zero32__1850__value;
                        vlSelf->__Vfunc_leading_zero32__1850__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1850__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1850__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1850__count)));
                            vlSelf->__Vfunc_leading_zero32__1850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1850__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1850__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1850__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1850__count)));
                            vlSelf->__Vfunc_leading_zero32__1850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1850__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1850__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1850__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1850__count)));
                            vlSelf->__Vfunc_leading_zero32__1850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1850__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1850__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1850__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1850__count)));
                            vlSelf->__Vfunc_leading_zero32__1850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1850__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1850__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1850__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1850__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1850__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1850__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1850__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1850__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__48__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__48__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1862__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__48__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1862__part 
                            = vlSelf->__Vfunc_leading_zero32__1862__value;
                        vlSelf->__Vfunc_leading_zero32__1862__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1862__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1862__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1862__count)));
                            vlSelf->__Vfunc_leading_zero32__1862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1862__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1862__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1862__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1862__count)));
                            vlSelf->__Vfunc_leading_zero32__1862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1862__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1862__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1862__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1862__count)));
                            vlSelf->__Vfunc_leading_zero32__1862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1862__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1862__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1862__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1862__count)));
                            vlSelf->__Vfunc_leading_zero32__1862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1862__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1862__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1862__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1862__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1862__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1862__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1862__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1862__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__49__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__49__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1874__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__49__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1874__part 
                            = vlSelf->__Vfunc_leading_zero32__1874__value;
                        vlSelf->__Vfunc_leading_zero32__1874__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1874__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1874__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1874__count)));
                            vlSelf->__Vfunc_leading_zero32__1874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1874__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1874__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1874__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1874__count)));
                            vlSelf->__Vfunc_leading_zero32__1874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1874__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1874__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1874__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1874__count)));
                            vlSelf->__Vfunc_leading_zero32__1874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1874__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1874__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1874__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1874__count)));
                            vlSelf->__Vfunc_leading_zero32__1874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1874__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1874__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1874__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1874__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1874__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1874__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1874__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1874__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__50__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__50__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1886__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__50__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1886__part 
                            = vlSelf->__Vfunc_leading_zero32__1886__value;
                        vlSelf->__Vfunc_leading_zero32__1886__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1886__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1886__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1886__count)));
                            vlSelf->__Vfunc_leading_zero32__1886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1886__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1886__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1886__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1886__count)));
                            vlSelf->__Vfunc_leading_zero32__1886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1886__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1886__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1886__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1886__count)));
                            vlSelf->__Vfunc_leading_zero32__1886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1886__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1886__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1886__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1886__count)));
                            vlSelf->__Vfunc_leading_zero32__1886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1886__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1886__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1886__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1886__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1886__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1886__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1886__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1886__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__51__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__51__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1898__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__51__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1898__part 
                            = vlSelf->__Vfunc_leading_zero32__1898__value;
                        vlSelf->__Vfunc_leading_zero32__1898__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1898__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1898__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1898__count)));
                            vlSelf->__Vfunc_leading_zero32__1898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1898__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1898__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1898__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1898__count)));
                            vlSelf->__Vfunc_leading_zero32__1898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1898__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1898__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1898__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1898__count)));
                            vlSelf->__Vfunc_leading_zero32__1898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1898__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1898__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1898__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1898__count)));
                            vlSelf->__Vfunc_leading_zero32__1898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1898__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1898__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1898__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1898__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1898__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1898__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1898__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1898__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__52__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__52__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1910__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__52__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1910__part 
                            = vlSelf->__Vfunc_leading_zero32__1910__value;
                        vlSelf->__Vfunc_leading_zero32__1910__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1910__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1910__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1910__count)));
                            vlSelf->__Vfunc_leading_zero32__1910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1910__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1910__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1910__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1910__count)));
                            vlSelf->__Vfunc_leading_zero32__1910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1910__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1910__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1910__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1910__count)));
                            vlSelf->__Vfunc_leading_zero32__1910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1910__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1910__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1910__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1910__count)));
                            vlSelf->__Vfunc_leading_zero32__1910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1910__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1910__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1910__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1910__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1910__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1910__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1910__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1910__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__53__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__53__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1922__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__53__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1922__part 
                            = vlSelf->__Vfunc_leading_zero32__1922__value;
                        vlSelf->__Vfunc_leading_zero32__1922__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1922__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1922__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1922__count)));
                            vlSelf->__Vfunc_leading_zero32__1922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1922__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1922__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1922__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1922__count)));
                            vlSelf->__Vfunc_leading_zero32__1922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1922__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1922__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1922__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1922__count)));
                            vlSelf->__Vfunc_leading_zero32__1922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1922__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1922__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1922__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1922__count)));
                            vlSelf->__Vfunc_leading_zero32__1922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1922__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1922__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1922__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1922__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1922__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1922__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1922__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1922__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__54__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__54__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1934__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__54__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1934__part 
                            = vlSelf->__Vfunc_leading_zero32__1934__value;
                        vlSelf->__Vfunc_leading_zero32__1934__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1934__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1934__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1934__count)));
                            vlSelf->__Vfunc_leading_zero32__1934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1934__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1934__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1934__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1934__count)));
                            vlSelf->__Vfunc_leading_zero32__1934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1934__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1934__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1934__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1934__count)));
                            vlSelf->__Vfunc_leading_zero32__1934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1934__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1934__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1934__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1934__count)));
                            vlSelf->__Vfunc_leading_zero32__1934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1934__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1934__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1934__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1934__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1934__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1934__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1934__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1934__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__55__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__55__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1946__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__55__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1946__part 
                            = vlSelf->__Vfunc_leading_zero32__1946__value;
                        vlSelf->__Vfunc_leading_zero32__1946__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1946__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1946__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1946__count)));
                            vlSelf->__Vfunc_leading_zero32__1946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1946__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1946__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1946__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1946__count)));
                            vlSelf->__Vfunc_leading_zero32__1946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1946__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1946__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1946__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1946__count)));
                            vlSelf->__Vfunc_leading_zero32__1946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1946__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1946__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1946__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1946__count)));
                            vlSelf->__Vfunc_leading_zero32__1946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1946__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1946__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1946__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1946__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1946__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1946__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1946__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1946__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__56__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__56__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1958__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__56__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1958__part 
                            = vlSelf->__Vfunc_leading_zero32__1958__value;
                        vlSelf->__Vfunc_leading_zero32__1958__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1958__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1958__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1958__count)));
                            vlSelf->__Vfunc_leading_zero32__1958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1958__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1958__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1958__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1958__count)));
                            vlSelf->__Vfunc_leading_zero32__1958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1958__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1958__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1958__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1958__count)));
                            vlSelf->__Vfunc_leading_zero32__1958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1958__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1958__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1958__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1958__count)));
                            vlSelf->__Vfunc_leading_zero32__1958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1958__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1958__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1958__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1958__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1958__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1958__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1958__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1958__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__57__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__57__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1970__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__57__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1970__part 
                            = vlSelf->__Vfunc_leading_zero32__1970__value;
                        vlSelf->__Vfunc_leading_zero32__1970__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1970__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1970__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1970__count)));
                            vlSelf->__Vfunc_leading_zero32__1970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1970__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1970__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1970__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1970__count)));
                            vlSelf->__Vfunc_leading_zero32__1970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1970__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1970__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1970__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1970__count)));
                            vlSelf->__Vfunc_leading_zero32__1970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1970__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1970__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1970__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1970__count)));
                            vlSelf->__Vfunc_leading_zero32__1970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1970__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1970__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1970__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1970__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1970__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1970__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1970__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1970__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__58__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__58__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1982__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__58__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1982__part 
                            = vlSelf->__Vfunc_leading_zero32__1982__value;
                        vlSelf->__Vfunc_leading_zero32__1982__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1982__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1982__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1982__count)));
                            vlSelf->__Vfunc_leading_zero32__1982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1982__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1982__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1982__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1982__count)));
                            vlSelf->__Vfunc_leading_zero32__1982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1982__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1982__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1982__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1982__count)));
                            vlSelf->__Vfunc_leading_zero32__1982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1982__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1982__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1982__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1982__count)));
                            vlSelf->__Vfunc_leading_zero32__1982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1982__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1982__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1982__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1982__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1982__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1982__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1982__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1982__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__59__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__59__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1994__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__59__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1994__part 
                            = vlSelf->__Vfunc_leading_zero32__1994__value;
                        vlSelf->__Vfunc_leading_zero32__1994__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1994__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1994__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1994__count)));
                            vlSelf->__Vfunc_leading_zero32__1994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1994__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1994__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1994__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1994__count)));
                            vlSelf->__Vfunc_leading_zero32__1994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1994__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1994__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1994__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1994__count)));
                            vlSelf->__Vfunc_leading_zero32__1994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1994__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1994__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1994__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1994__count)));
                            vlSelf->__Vfunc_leading_zero32__1994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1994__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1994__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1994__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1994__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1994__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1994__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1994__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1994__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__60__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__60__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2006__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__60__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2006__part 
                            = vlSelf->__Vfunc_leading_zero32__2006__value;
                        vlSelf->__Vfunc_leading_zero32__2006__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2006__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2006__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2006__count)));
                            vlSelf->__Vfunc_leading_zero32__2006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2006__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2006__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2006__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2006__count)));
                            vlSelf->__Vfunc_leading_zero32__2006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2006__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2006__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2006__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2006__count)));
                            vlSelf->__Vfunc_leading_zero32__2006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2006__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2006__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2006__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2006__count)));
                            vlSelf->__Vfunc_leading_zero32__2006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2006__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2006__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2006__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2006__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2006__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2006__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2006__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2006__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__61__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__61__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2018__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__61__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2018__part 
                            = vlSelf->__Vfunc_leading_zero32__2018__value;
                        vlSelf->__Vfunc_leading_zero32__2018__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2018__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2018__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2018__count)));
                            vlSelf->__Vfunc_leading_zero32__2018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2018__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2018__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2018__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2018__count)));
                            vlSelf->__Vfunc_leading_zero32__2018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2018__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2018__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2018__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2018__count)));
                            vlSelf->__Vfunc_leading_zero32__2018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2018__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2018__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2018__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2018__count)));
                            vlSelf->__Vfunc_leading_zero32__2018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2018__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2018__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2018__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2018__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2018__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2018__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2018__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2018__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__62__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__62__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2030__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__62__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2030__part 
                            = vlSelf->__Vfunc_leading_zero32__2030__value;
                        vlSelf->__Vfunc_leading_zero32__2030__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2030__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2030__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2030__count)));
                            vlSelf->__Vfunc_leading_zero32__2030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2030__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2030__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2030__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2030__count)));
                            vlSelf->__Vfunc_leading_zero32__2030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2030__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2030__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2030__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2030__count)));
                            vlSelf->__Vfunc_leading_zero32__2030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2030__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2030__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2030__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2030__count)));
                            vlSelf->__Vfunc_leading_zero32__2030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2030__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2030__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2030__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2030__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2030__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2030__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2030__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2030__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__63__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__63__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2042__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__63__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2042__part 
                            = vlSelf->__Vfunc_leading_zero32__2042__value;
                        vlSelf->__Vfunc_leading_zero32__2042__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2042__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2042__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2042__count)));
                            vlSelf->__Vfunc_leading_zero32__2042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2042__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2042__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2042__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2042__count)));
                            vlSelf->__Vfunc_leading_zero32__2042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2042__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2042__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2042__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2042__count)));
                            vlSelf->__Vfunc_leading_zero32__2042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2042__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2042__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2042__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2042__count)));
                            vlSelf->__Vfunc_leading_zero32__2042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2042__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2042__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2042__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2042__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2042__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2042__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2042__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2042__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__64__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__64__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2054__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__64__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2054__part 
                            = vlSelf->__Vfunc_leading_zero32__2054__value;
                        vlSelf->__Vfunc_leading_zero32__2054__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2054__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2054__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2054__count)));
                            vlSelf->__Vfunc_leading_zero32__2054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2054__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2054__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2054__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2054__count)));
                            vlSelf->__Vfunc_leading_zero32__2054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2054__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2054__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2054__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2054__count)));
                            vlSelf->__Vfunc_leading_zero32__2054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2054__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2054__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2054__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2054__count)));
                            vlSelf->__Vfunc_leading_zero32__2054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2054__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2054__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2054__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2054__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2054__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2054__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2054__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2054__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__65__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__65__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2066__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__65__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2066__part 
                            = vlSelf->__Vfunc_leading_zero32__2066__value;
                        vlSelf->__Vfunc_leading_zero32__2066__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2066__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2066__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2066__count)));
                            vlSelf->__Vfunc_leading_zero32__2066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2066__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2066__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2066__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2066__count)));
                            vlSelf->__Vfunc_leading_zero32__2066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2066__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2066__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2066__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2066__count)));
                            vlSelf->__Vfunc_leading_zero32__2066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2066__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2066__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2066__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2066__count)));
                            vlSelf->__Vfunc_leading_zero32__2066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2066__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2066__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2066__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2066__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2066__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2066__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2066__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2066__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__66__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__66__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2078__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__66__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2078__part 
                            = vlSelf->__Vfunc_leading_zero32__2078__value;
                        vlSelf->__Vfunc_leading_zero32__2078__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2078__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2078__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2078__count)));
                            vlSelf->__Vfunc_leading_zero32__2078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2078__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2078__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2078__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2078__count)));
                            vlSelf->__Vfunc_leading_zero32__2078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2078__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2078__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2078__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2078__count)));
                            vlSelf->__Vfunc_leading_zero32__2078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2078__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2078__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2078__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2078__count)));
                            vlSelf->__Vfunc_leading_zero32__2078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2078__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2078__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2078__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2078__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2078__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2078__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2078__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2078__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__67__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__67__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2090__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__67__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2090__part 
                            = vlSelf->__Vfunc_leading_zero32__2090__value;
                        vlSelf->__Vfunc_leading_zero32__2090__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2090__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2090__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2090__count)));
                            vlSelf->__Vfunc_leading_zero32__2090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2090__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2090__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2090__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2090__count)));
                            vlSelf->__Vfunc_leading_zero32__2090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2090__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2090__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2090__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2090__count)));
                            vlSelf->__Vfunc_leading_zero32__2090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2090__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2090__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2090__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2090__count)));
                            vlSelf->__Vfunc_leading_zero32__2090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2090__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2090__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2090__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2090__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2090__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2090__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2090__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2090__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__68__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__68__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2102__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__68__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2102__part 
                            = vlSelf->__Vfunc_leading_zero32__2102__value;
                        vlSelf->__Vfunc_leading_zero32__2102__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2102__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2102__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2102__count)));
                            vlSelf->__Vfunc_leading_zero32__2102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2102__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2102__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2102__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2102__count)));
                            vlSelf->__Vfunc_leading_zero32__2102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2102__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2102__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2102__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2102__count)));
                            vlSelf->__Vfunc_leading_zero32__2102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2102__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2102__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2102__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2102__count)));
                            vlSelf->__Vfunc_leading_zero32__2102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2102__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2102__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2102__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2102__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2102__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2102__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2102__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2102__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__69__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__69__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2114__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__69__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2114__part 
                            = vlSelf->__Vfunc_leading_zero32__2114__value;
                        vlSelf->__Vfunc_leading_zero32__2114__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2114__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2114__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2114__count)));
                            vlSelf->__Vfunc_leading_zero32__2114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2114__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2114__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2114__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2114__count)));
                            vlSelf->__Vfunc_leading_zero32__2114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2114__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2114__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2114__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2114__count)));
                            vlSelf->__Vfunc_leading_zero32__2114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2114__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2114__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2114__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2114__count)));
                            vlSelf->__Vfunc_leading_zero32__2114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2114__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2114__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2114__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2114__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2114__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2114__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2114__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2114__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2126__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2126__part 
                            = vlSelf->__Vfunc_leading_zero32__2126__value;
                        vlSelf->__Vfunc_leading_zero32__2126__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2126__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2126__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2126__count)));
                            vlSelf->__Vfunc_leading_zero32__2126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2126__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2126__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2126__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2126__count)));
                            vlSelf->__Vfunc_leading_zero32__2126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2126__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2126__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2126__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2126__count)));
                            vlSelf->__Vfunc_leading_zero32__2126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2126__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2126__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2126__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2126__count)));
                            vlSelf->__Vfunc_leading_zero32__2126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2126__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2126__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2126__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2126__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2126__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2126__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2126__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2126__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2138__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2138__part 
                            = vlSelf->__Vfunc_leading_zero32__2138__value;
                        vlSelf->__Vfunc_leading_zero32__2138__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2138__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2138__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2138__count)));
                            vlSelf->__Vfunc_leading_zero32__2138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2138__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2138__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2138__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2138__count)));
                            vlSelf->__Vfunc_leading_zero32__2138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2138__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2138__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2138__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2138__count)));
                            vlSelf->__Vfunc_leading_zero32__2138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2138__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2138__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2138__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2138__count)));
                            vlSelf->__Vfunc_leading_zero32__2138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2138__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2138__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2138__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2138__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2138__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2138__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2138__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2138__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2150__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2150__part 
                            = vlSelf->__Vfunc_leading_zero32__2150__value;
                        vlSelf->__Vfunc_leading_zero32__2150__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2150__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2150__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2150__count)));
                            vlSelf->__Vfunc_leading_zero32__2150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2150__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2150__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2150__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2150__count)));
                            vlSelf->__Vfunc_leading_zero32__2150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2150__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2150__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2150__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2150__count)));
                            vlSelf->__Vfunc_leading_zero32__2150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2150__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2150__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2150__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2150__count)));
                            vlSelf->__Vfunc_leading_zero32__2150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2150__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2150__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2150__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2150__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2150__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2150__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2150__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2150__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2162__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2162__part 
                            = vlSelf->__Vfunc_leading_zero32__2162__value;
                        vlSelf->__Vfunc_leading_zero32__2162__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2162__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2162__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2162__count)));
                            vlSelf->__Vfunc_leading_zero32__2162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2162__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2162__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2162__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2162__count)));
                            vlSelf->__Vfunc_leading_zero32__2162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2162__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2162__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2162__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2162__count)));
                            vlSelf->__Vfunc_leading_zero32__2162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2162__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2162__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2162__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2162__count)));
                            vlSelf->__Vfunc_leading_zero32__2162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2162__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2162__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2162__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2162__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2162__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2162__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2162__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2162__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2174__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2174__part 
                            = vlSelf->__Vfunc_leading_zero32__2174__value;
                        vlSelf->__Vfunc_leading_zero32__2174__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2174__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2174__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2174__count)));
                            vlSelf->__Vfunc_leading_zero32__2174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2174__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2174__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2174__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2174__count)));
                            vlSelf->__Vfunc_leading_zero32__2174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2174__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2174__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2174__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2174__count)));
                            vlSelf->__Vfunc_leading_zero32__2174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2174__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2174__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2174__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2174__count)));
                            vlSelf->__Vfunc_leading_zero32__2174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2174__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2174__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2174__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2174__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2174__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2174__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2174__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2174__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2186__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2186__part 
                            = vlSelf->__Vfunc_leading_zero32__2186__value;
                        vlSelf->__Vfunc_leading_zero32__2186__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2186__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2186__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2186__count)));
                            vlSelf->__Vfunc_leading_zero32__2186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2186__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2186__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2186__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2186__count)));
                            vlSelf->__Vfunc_leading_zero32__2186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2186__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2186__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2186__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2186__count)));
                            vlSelf->__Vfunc_leading_zero32__2186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2186__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2186__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2186__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2186__count)));
                            vlSelf->__Vfunc_leading_zero32__2186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2186__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2186__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2186__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2186__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2186__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2186__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2186__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2186__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2198__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2198__part 
                            = vlSelf->__Vfunc_leading_zero32__2198__value;
                        vlSelf->__Vfunc_leading_zero32__2198__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2198__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2198__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2198__count)));
                            vlSelf->__Vfunc_leading_zero32__2198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2198__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2198__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2198__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2198__count)));
                            vlSelf->__Vfunc_leading_zero32__2198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2198__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2198__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2198__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2198__count)));
                            vlSelf->__Vfunc_leading_zero32__2198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2198__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2198__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2198__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2198__count)));
                            vlSelf->__Vfunc_leading_zero32__2198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2198__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2198__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2198__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2198__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2198__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2198__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2198__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2198__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2210__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2210__part 
                            = vlSelf->__Vfunc_leading_zero32__2210__value;
                        vlSelf->__Vfunc_leading_zero32__2210__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2210__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2210__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2210__count)));
                            vlSelf->__Vfunc_leading_zero32__2210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2210__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2210__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2210__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2210__count)));
                            vlSelf->__Vfunc_leading_zero32__2210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2210__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2210__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2210__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2210__count)));
                            vlSelf->__Vfunc_leading_zero32__2210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2210__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2210__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2210__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2210__count)));
                            vlSelf->__Vfunc_leading_zero32__2210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2210__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2210__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2210__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2210__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2210__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2210__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2210__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2210__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2222__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2222__part 
                            = vlSelf->__Vfunc_leading_zero32__2222__value;
                        vlSelf->__Vfunc_leading_zero32__2222__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2222__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2222__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2222__count)));
                            vlSelf->__Vfunc_leading_zero32__2222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2222__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2222__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2222__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2222__count)));
                            vlSelf->__Vfunc_leading_zero32__2222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2222__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2222__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2222__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2222__count)));
                            vlSelf->__Vfunc_leading_zero32__2222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2222__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2222__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2222__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2222__count)));
                            vlSelf->__Vfunc_leading_zero32__2222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2222__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2222__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2222__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2222__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2222__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2222__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2222__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2222__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2234__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2234__part 
                            = vlSelf->__Vfunc_leading_zero32__2234__value;
                        vlSelf->__Vfunc_leading_zero32__2234__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2234__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2234__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2234__count)));
                            vlSelf->__Vfunc_leading_zero32__2234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2234__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2234__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2234__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2234__count)));
                            vlSelf->__Vfunc_leading_zero32__2234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2234__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2234__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2234__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2234__count)));
                            vlSelf->__Vfunc_leading_zero32__2234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2234__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2234__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2234__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2234__count)));
                            vlSelf->__Vfunc_leading_zero32__2234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2234__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2234__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2234__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2234__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2234__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2234__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2234__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2234__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2246__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2246__part 
                            = vlSelf->__Vfunc_leading_zero32__2246__value;
                        vlSelf->__Vfunc_leading_zero32__2246__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2246__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2246__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2246__count)));
                            vlSelf->__Vfunc_leading_zero32__2246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2246__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2246__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2246__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2246__count)));
                            vlSelf->__Vfunc_leading_zero32__2246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2246__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2246__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2246__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2246__count)));
                            vlSelf->__Vfunc_leading_zero32__2246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2246__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2246__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2246__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2246__count)));
                            vlSelf->__Vfunc_leading_zero32__2246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2246__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2246__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2246__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2246__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2246__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2246__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2246__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2246__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2258__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2258__part 
                            = vlSelf->__Vfunc_leading_zero32__2258__value;
                        vlSelf->__Vfunc_leading_zero32__2258__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2258__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2258__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2258__count)));
                            vlSelf->__Vfunc_leading_zero32__2258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2258__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2258__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2258__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2258__count)));
                            vlSelf->__Vfunc_leading_zero32__2258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2258__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2258__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2258__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2258__count)));
                            vlSelf->__Vfunc_leading_zero32__2258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2258__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2258__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2258__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2258__count)));
                            vlSelf->__Vfunc_leading_zero32__2258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2258__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2258__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2258__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2258__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2258__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2258__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2258__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2258__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2270__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2270__part 
                            = vlSelf->__Vfunc_leading_zero32__2270__value;
                        vlSelf->__Vfunc_leading_zero32__2270__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2270__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2270__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2270__count)));
                            vlSelf->__Vfunc_leading_zero32__2270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2270__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2270__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2270__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2270__count)));
                            vlSelf->__Vfunc_leading_zero32__2270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2270__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2270__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2270__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2270__count)));
                            vlSelf->__Vfunc_leading_zero32__2270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2270__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2270__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2270__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2270__count)));
                            vlSelf->__Vfunc_leading_zero32__2270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2270__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2270__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2270__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2270__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2270__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2270__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2270__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2270__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2282__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2282__part 
                            = vlSelf->__Vfunc_leading_zero32__2282__value;
                        vlSelf->__Vfunc_leading_zero32__2282__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2282__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2282__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2282__count)));
                            vlSelf->__Vfunc_leading_zero32__2282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2282__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2282__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2282__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2282__count)));
                            vlSelf->__Vfunc_leading_zero32__2282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2282__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2282__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2282__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2282__count)));
                            vlSelf->__Vfunc_leading_zero32__2282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2282__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2282__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2282__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2282__count)));
                            vlSelf->__Vfunc_leading_zero32__2282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2282__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2282__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2282__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2282__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2282__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2282__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2282__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2282__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2294__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2294__part 
                            = vlSelf->__Vfunc_leading_zero32__2294__value;
                        vlSelf->__Vfunc_leading_zero32__2294__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2294__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2294__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2294__count)));
                            vlSelf->__Vfunc_leading_zero32__2294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2294__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2294__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2294__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2294__count)));
                            vlSelf->__Vfunc_leading_zero32__2294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2294__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2294__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2294__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2294__count)));
                            vlSelf->__Vfunc_leading_zero32__2294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2294__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2294__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2294__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2294__count)));
                            vlSelf->__Vfunc_leading_zero32__2294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2294__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2294__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2294__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2294__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2294__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2294__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2294__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2294__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2306__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2306__part 
                            = vlSelf->__Vfunc_leading_zero32__2306__value;
                        vlSelf->__Vfunc_leading_zero32__2306__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2306__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2306__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2306__count)));
                            vlSelf->__Vfunc_leading_zero32__2306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2306__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2306__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2306__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2306__count)));
                            vlSelf->__Vfunc_leading_zero32__2306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2306__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2306__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2306__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2306__count)));
                            vlSelf->__Vfunc_leading_zero32__2306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2306__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2306__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2306__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2306__count)));
                            vlSelf->__Vfunc_leading_zero32__2306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2306__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2306__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2306__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2306__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2306__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2306__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2306__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2306__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2318__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2318__part 
                            = vlSelf->__Vfunc_leading_zero32__2318__value;
                        vlSelf->__Vfunc_leading_zero32__2318__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2318__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2318__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2318__count)));
                            vlSelf->__Vfunc_leading_zero32__2318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2318__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2318__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2318__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2318__count)));
                            vlSelf->__Vfunc_leading_zero32__2318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2318__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2318__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2318__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2318__count)));
                            vlSelf->__Vfunc_leading_zero32__2318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2318__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2318__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2318__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2318__count)));
                            vlSelf->__Vfunc_leading_zero32__2318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2318__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2318__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2318__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2318__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2318__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2318__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2318__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2318__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2330__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2330__part 
                            = vlSelf->__Vfunc_leading_zero32__2330__value;
                        vlSelf->__Vfunc_leading_zero32__2330__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2330__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2330__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2330__count)));
                            vlSelf->__Vfunc_leading_zero32__2330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2330__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2330__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2330__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2330__count)));
                            vlSelf->__Vfunc_leading_zero32__2330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2330__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2330__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2330__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2330__count)));
                            vlSelf->__Vfunc_leading_zero32__2330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2330__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2330__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2330__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2330__count)));
                            vlSelf->__Vfunc_leading_zero32__2330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2330__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2330__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2330__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2330__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2330__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2330__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2330__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2330__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2342__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2342__part 
                            = vlSelf->__Vfunc_leading_zero32__2342__value;
                        vlSelf->__Vfunc_leading_zero32__2342__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2342__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2342__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2342__count)));
                            vlSelf->__Vfunc_leading_zero32__2342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2342__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2342__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2342__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2342__count)));
                            vlSelf->__Vfunc_leading_zero32__2342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2342__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2342__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2342__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2342__count)));
                            vlSelf->__Vfunc_leading_zero32__2342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2342__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2342__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2342__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2342__count)));
                            vlSelf->__Vfunc_leading_zero32__2342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2342__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2342__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2342__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2342__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2342__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2342__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2342__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2342__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2354__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2354__part 
                            = vlSelf->__Vfunc_leading_zero32__2354__value;
                        vlSelf->__Vfunc_leading_zero32__2354__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2354__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2354__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2354__count)));
                            vlSelf->__Vfunc_leading_zero32__2354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2354__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2354__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2354__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2354__count)));
                            vlSelf->__Vfunc_leading_zero32__2354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2354__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2354__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2354__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2354__count)));
                            vlSelf->__Vfunc_leading_zero32__2354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2354__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2354__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2354__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2354__count)));
                            vlSelf->__Vfunc_leading_zero32__2354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2354__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2354__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2354__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2354__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2354__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2354__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2354__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2354__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2366__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2366__part 
                            = vlSelf->__Vfunc_leading_zero32__2366__value;
                        vlSelf->__Vfunc_leading_zero32__2366__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2366__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2366__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2366__count)));
                            vlSelf->__Vfunc_leading_zero32__2366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2366__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2366__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2366__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2366__count)));
                            vlSelf->__Vfunc_leading_zero32__2366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2366__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2366__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2366__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2366__count)));
                            vlSelf->__Vfunc_leading_zero32__2366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2366__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2366__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2366__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2366__count)));
                            vlSelf->__Vfunc_leading_zero32__2366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2366__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2366__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2366__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2366__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2366__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2366__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2366__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2366__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2378__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2378__part 
                            = vlSelf->__Vfunc_leading_zero32__2378__value;
                        vlSelf->__Vfunc_leading_zero32__2378__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2378__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2378__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2378__count)));
                            vlSelf->__Vfunc_leading_zero32__2378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2378__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2378__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2378__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2378__count)));
                            vlSelf->__Vfunc_leading_zero32__2378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2378__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2378__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2378__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2378__count)));
                            vlSelf->__Vfunc_leading_zero32__2378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2378__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2378__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2378__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2378__count)));
                            vlSelf->__Vfunc_leading_zero32__2378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2378__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2378__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2378__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2378__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2378__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2378__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2378__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2378__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2390__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2390__part 
                            = vlSelf->__Vfunc_leading_zero32__2390__value;
                        vlSelf->__Vfunc_leading_zero32__2390__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2390__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2390__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2390__count)));
                            vlSelf->__Vfunc_leading_zero32__2390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2390__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2390__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2390__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2390__count)));
                            vlSelf->__Vfunc_leading_zero32__2390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2390__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2390__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2390__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2390__count)));
                            vlSelf->__Vfunc_leading_zero32__2390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2390__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2390__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2390__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2390__count)));
                            vlSelf->__Vfunc_leading_zero32__2390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2390__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2390__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2390__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2390__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2390__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2390__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2390__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2390__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2402__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2402__part 
                            = vlSelf->__Vfunc_leading_zero32__2402__value;
                        vlSelf->__Vfunc_leading_zero32__2402__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2402__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2402__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2402__count)));
                            vlSelf->__Vfunc_leading_zero32__2402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2402__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2402__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2402__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2402__count)));
                            vlSelf->__Vfunc_leading_zero32__2402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2402__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2402__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2402__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2402__count)));
                            vlSelf->__Vfunc_leading_zero32__2402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2402__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2402__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2402__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2402__count)));
                            vlSelf->__Vfunc_leading_zero32__2402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2402__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2402__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2402__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2402__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2402__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2402__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2402__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2402__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2414__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2414__part 
                            = vlSelf->__Vfunc_leading_zero32__2414__value;
                        vlSelf->__Vfunc_leading_zero32__2414__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2414__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2414__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2414__count)));
                            vlSelf->__Vfunc_leading_zero32__2414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2414__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2414__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2414__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2414__count)));
                            vlSelf->__Vfunc_leading_zero32__2414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2414__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2414__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2414__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2414__count)));
                            vlSelf->__Vfunc_leading_zero32__2414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2414__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2414__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2414__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2414__count)));
                            vlSelf->__Vfunc_leading_zero32__2414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2414__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2414__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2414__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2414__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2414__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2414__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2414__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2414__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2426__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2426__part 
                            = vlSelf->__Vfunc_leading_zero32__2426__value;
                        vlSelf->__Vfunc_leading_zero32__2426__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2426__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2426__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2426__count)));
                            vlSelf->__Vfunc_leading_zero32__2426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2426__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2426__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2426__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2426__count)));
                            vlSelf->__Vfunc_leading_zero32__2426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2426__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2426__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2426__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2426__count)));
                            vlSelf->__Vfunc_leading_zero32__2426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2426__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2426__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2426__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2426__count)));
                            vlSelf->__Vfunc_leading_zero32__2426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2426__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2426__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2426__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2426__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2426__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2426__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2426__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2426__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2438__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2438__part 
                            = vlSelf->__Vfunc_leading_zero32__2438__value;
                        vlSelf->__Vfunc_leading_zero32__2438__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2438__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2438__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2438__count)));
                            vlSelf->__Vfunc_leading_zero32__2438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2438__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2438__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2438__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2438__count)));
                            vlSelf->__Vfunc_leading_zero32__2438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2438__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2438__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2438__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2438__count)));
                            vlSelf->__Vfunc_leading_zero32__2438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2438__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2438__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2438__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2438__count)));
                            vlSelf->__Vfunc_leading_zero32__2438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2438__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2438__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2438__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2438__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2438__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2438__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2438__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2438__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2450__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2450__part 
                            = vlSelf->__Vfunc_leading_zero32__2450__value;
                        vlSelf->__Vfunc_leading_zero32__2450__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2450__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2450__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2450__count)));
                            vlSelf->__Vfunc_leading_zero32__2450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2450__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2450__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2450__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2450__count)));
                            vlSelf->__Vfunc_leading_zero32__2450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2450__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2450__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2450__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2450__count)));
                            vlSelf->__Vfunc_leading_zero32__2450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2450__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2450__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2450__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2450__count)));
                            vlSelf->__Vfunc_leading_zero32__2450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2450__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2450__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2450__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2450__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2450__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2450__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2450__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2450__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2462__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2462__part 
                            = vlSelf->__Vfunc_leading_zero32__2462__value;
                        vlSelf->__Vfunc_leading_zero32__2462__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2462__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2462__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2462__count)));
                            vlSelf->__Vfunc_leading_zero32__2462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2462__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2462__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2462__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2462__count)));
                            vlSelf->__Vfunc_leading_zero32__2462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2462__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2462__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2462__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2462__count)));
                            vlSelf->__Vfunc_leading_zero32__2462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2462__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2462__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2462__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2462__count)));
                            vlSelf->__Vfunc_leading_zero32__2462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2462__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2462__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2462__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2462__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2462__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2462__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2462__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2462__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2474__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2474__part 
                            = vlSelf->__Vfunc_leading_zero32__2474__value;
                        vlSelf->__Vfunc_leading_zero32__2474__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2474__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2474__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2474__count)));
                            vlSelf->__Vfunc_leading_zero32__2474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2474__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2474__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2474__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2474__count)));
                            vlSelf->__Vfunc_leading_zero32__2474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2474__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2474__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2474__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2474__count)));
                            vlSelf->__Vfunc_leading_zero32__2474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2474__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2474__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2474__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2474__count)));
                            vlSelf->__Vfunc_leading_zero32__2474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2474__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2474__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2474__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2474__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2474__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2474__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2474__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2474__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2486__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2486__part 
                            = vlSelf->__Vfunc_leading_zero32__2486__value;
                        vlSelf->__Vfunc_leading_zero32__2486__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2486__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2486__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2486__count)));
                            vlSelf->__Vfunc_leading_zero32__2486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2486__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2486__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2486__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2486__count)));
                            vlSelf->__Vfunc_leading_zero32__2486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2486__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2486__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2486__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2486__count)));
                            vlSelf->__Vfunc_leading_zero32__2486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2486__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2486__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2486__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2486__count)));
                            vlSelf->__Vfunc_leading_zero32__2486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2486__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2486__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2486__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2486__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2486__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2486__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2486__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2486__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2498__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2498__part 
                            = vlSelf->__Vfunc_leading_zero32__2498__value;
                        vlSelf->__Vfunc_leading_zero32__2498__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2498__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2498__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2498__count)));
                            vlSelf->__Vfunc_leading_zero32__2498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2498__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2498__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2498__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2498__count)));
                            vlSelf->__Vfunc_leading_zero32__2498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2498__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2498__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2498__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2498__count)));
                            vlSelf->__Vfunc_leading_zero32__2498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2498__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2498__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2498__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2498__count)));
                            vlSelf->__Vfunc_leading_zero32__2498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2498__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2498__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2498__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2498__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2498__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2498__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2498__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2498__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2510__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2510__part 
                            = vlSelf->__Vfunc_leading_zero32__2510__value;
                        vlSelf->__Vfunc_leading_zero32__2510__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2510__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2510__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2510__count)));
                            vlSelf->__Vfunc_leading_zero32__2510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2510__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2510__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2510__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2510__count)));
                            vlSelf->__Vfunc_leading_zero32__2510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2510__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2510__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2510__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2510__count)));
                            vlSelf->__Vfunc_leading_zero32__2510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2510__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2510__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2510__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2510__count)));
                            vlSelf->__Vfunc_leading_zero32__2510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2510__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2510__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2510__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2510__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2510__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2510__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2510__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2510__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2522__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2522__part 
                            = vlSelf->__Vfunc_leading_zero32__2522__value;
                        vlSelf->__Vfunc_leading_zero32__2522__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2522__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2522__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2522__count)));
                            vlSelf->__Vfunc_leading_zero32__2522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2522__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2522__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2522__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2522__count)));
                            vlSelf->__Vfunc_leading_zero32__2522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2522__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2522__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2522__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2522__count)));
                            vlSelf->__Vfunc_leading_zero32__2522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2522__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2522__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2522__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2522__count)));
                            vlSelf->__Vfunc_leading_zero32__2522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2522__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2522__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2522__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2522__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2522__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2522__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2522__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2522__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2534__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2534__part 
                            = vlSelf->__Vfunc_leading_zero32__2534__value;
                        vlSelf->__Vfunc_leading_zero32__2534__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2534__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2534__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2534__count)));
                            vlSelf->__Vfunc_leading_zero32__2534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2534__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2534__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2534__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2534__count)));
                            vlSelf->__Vfunc_leading_zero32__2534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2534__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2534__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2534__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2534__count)));
                            vlSelf->__Vfunc_leading_zero32__2534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2534__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2534__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2534__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2534__count)));
                            vlSelf->__Vfunc_leading_zero32__2534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2534__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2534__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2534__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2534__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2534__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2534__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2534__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2534__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2546__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2546__part 
                            = vlSelf->__Vfunc_leading_zero32__2546__value;
                        vlSelf->__Vfunc_leading_zero32__2546__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2546__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2546__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2546__count)));
                            vlSelf->__Vfunc_leading_zero32__2546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2546__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2546__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2546__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2546__count)));
                            vlSelf->__Vfunc_leading_zero32__2546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2546__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2546__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2546__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2546__count)));
                            vlSelf->__Vfunc_leading_zero32__2546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2546__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2546__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2546__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2546__count)));
                            vlSelf->__Vfunc_leading_zero32__2546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2546__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2546__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2546__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2546__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2546__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2546__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2546__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2546__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2558__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2558__part 
                            = vlSelf->__Vfunc_leading_zero32__2558__value;
                        vlSelf->__Vfunc_leading_zero32__2558__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2558__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2558__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2558__count)));
                            vlSelf->__Vfunc_leading_zero32__2558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2558__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2558__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2558__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2558__count)));
                            vlSelf->__Vfunc_leading_zero32__2558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2558__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2558__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2558__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2558__count)));
                            vlSelf->__Vfunc_leading_zero32__2558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2558__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2558__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2558__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2558__count)));
                            vlSelf->__Vfunc_leading_zero32__2558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2558__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2558__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2558__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2558__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2558__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2558__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2558__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2558__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2570__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2570__part 
                            = vlSelf->__Vfunc_leading_zero32__2570__value;
                        vlSelf->__Vfunc_leading_zero32__2570__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2570__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2570__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2570__count)));
                            vlSelf->__Vfunc_leading_zero32__2570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2570__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2570__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2570__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2570__count)));
                            vlSelf->__Vfunc_leading_zero32__2570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2570__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2570__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2570__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2570__count)));
                            vlSelf->__Vfunc_leading_zero32__2570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2570__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2570__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2570__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2570__count)));
                            vlSelf->__Vfunc_leading_zero32__2570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2570__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2570__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2570__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2570__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2570__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2570__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2570__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2570__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2582__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2582__part 
                            = vlSelf->__Vfunc_leading_zero32__2582__value;
                        vlSelf->__Vfunc_leading_zero32__2582__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2582__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2582__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2582__count)));
                            vlSelf->__Vfunc_leading_zero32__2582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2582__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2582__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2582__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2582__count)));
                            vlSelf->__Vfunc_leading_zero32__2582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2582__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2582__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2582__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2582__count)));
                            vlSelf->__Vfunc_leading_zero32__2582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2582__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2582__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2582__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2582__count)));
                            vlSelf->__Vfunc_leading_zero32__2582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2582__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2582__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2582__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2582__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2582__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2582__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2582__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2582__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2594__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2594__part 
                            = vlSelf->__Vfunc_leading_zero32__2594__value;
                        vlSelf->__Vfunc_leading_zero32__2594__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2594__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2594__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2594__count)));
                            vlSelf->__Vfunc_leading_zero32__2594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2594__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2594__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2594__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2594__count)));
                            vlSelf->__Vfunc_leading_zero32__2594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2594__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2594__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2594__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2594__count)));
                            vlSelf->__Vfunc_leading_zero32__2594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2594__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2594__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2594__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2594__count)));
                            vlSelf->__Vfunc_leading_zero32__2594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2594__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2594__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2594__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2594__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2594__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2594__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2594__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2594__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2606__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2606__part 
                            = vlSelf->__Vfunc_leading_zero32__2606__value;
                        vlSelf->__Vfunc_leading_zero32__2606__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2606__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2606__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2606__count)));
                            vlSelf->__Vfunc_leading_zero32__2606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2606__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2606__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2606__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2606__count)));
                            vlSelf->__Vfunc_leading_zero32__2606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2606__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2606__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2606__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2606__count)));
                            vlSelf->__Vfunc_leading_zero32__2606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2606__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2606__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2606__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2606__count)));
                            vlSelf->__Vfunc_leading_zero32__2606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2606__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2606__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2606__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2606__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2606__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2606__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2606__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2606__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2618__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2618__part 
                            = vlSelf->__Vfunc_leading_zero32__2618__value;
                        vlSelf->__Vfunc_leading_zero32__2618__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2618__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2618__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2618__count)));
                            vlSelf->__Vfunc_leading_zero32__2618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2618__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2618__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2618__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2618__count)));
                            vlSelf->__Vfunc_leading_zero32__2618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2618__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2618__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2618__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2618__count)));
                            vlSelf->__Vfunc_leading_zero32__2618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2618__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2618__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2618__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2618__count)));
                            vlSelf->__Vfunc_leading_zero32__2618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2618__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2618__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2618__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2618__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2618__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2618__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2618__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2618__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2630__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2630__part 
                            = vlSelf->__Vfunc_leading_zero32__2630__value;
                        vlSelf->__Vfunc_leading_zero32__2630__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2630__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2630__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2630__count)));
                            vlSelf->__Vfunc_leading_zero32__2630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2630__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2630__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2630__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2630__count)));
                            vlSelf->__Vfunc_leading_zero32__2630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2630__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2630__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2630__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2630__count)));
                            vlSelf->__Vfunc_leading_zero32__2630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2630__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2630__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2630__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2630__count)));
                            vlSelf->__Vfunc_leading_zero32__2630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2630__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2630__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2630__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2630__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2630__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2630__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2630__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2630__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2642__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2642__part 
                            = vlSelf->__Vfunc_leading_zero32__2642__value;
                        vlSelf->__Vfunc_leading_zero32__2642__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2642__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2642__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2642__count)));
                            vlSelf->__Vfunc_leading_zero32__2642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2642__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2642__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2642__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2642__count)));
                            vlSelf->__Vfunc_leading_zero32__2642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2642__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2642__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2642__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2642__count)));
                            vlSelf->__Vfunc_leading_zero32__2642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2642__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2642__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2642__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2642__count)));
                            vlSelf->__Vfunc_leading_zero32__2642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2642__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2642__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2642__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2642__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2642__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2642__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2642__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2642__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2654__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2654__part 
                            = vlSelf->__Vfunc_leading_zero32__2654__value;
                        vlSelf->__Vfunc_leading_zero32__2654__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2654__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2654__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2654__count)));
                            vlSelf->__Vfunc_leading_zero32__2654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2654__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2654__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2654__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2654__count)));
                            vlSelf->__Vfunc_leading_zero32__2654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2654__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2654__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2654__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2654__count)));
                            vlSelf->__Vfunc_leading_zero32__2654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2654__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2654__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2654__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2654__count)));
                            vlSelf->__Vfunc_leading_zero32__2654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2654__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2654__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2654__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2654__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2654__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2654__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2654__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2654__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2666__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2666__part 
                            = vlSelf->__Vfunc_leading_zero32__2666__value;
                        vlSelf->__Vfunc_leading_zero32__2666__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2666__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2666__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2666__count)));
                            vlSelf->__Vfunc_leading_zero32__2666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2666__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2666__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2666__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2666__count)));
                            vlSelf->__Vfunc_leading_zero32__2666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2666__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2666__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2666__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2666__count)));
                            vlSelf->__Vfunc_leading_zero32__2666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2666__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2666__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2666__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2666__count)));
                            vlSelf->__Vfunc_leading_zero32__2666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2666__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2666__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2666__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2666__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2666__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2666__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2666__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2666__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2678__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2678__part 
                            = vlSelf->__Vfunc_leading_zero32__2678__value;
                        vlSelf->__Vfunc_leading_zero32__2678__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2678__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2678__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2678__count)));
                            vlSelf->__Vfunc_leading_zero32__2678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2678__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2678__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2678__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2678__count)));
                            vlSelf->__Vfunc_leading_zero32__2678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2678__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2678__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2678__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2678__count)));
                            vlSelf->__Vfunc_leading_zero32__2678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2678__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2678__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2678__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2678__count)));
                            vlSelf->__Vfunc_leading_zero32__2678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2678__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2678__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2678__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2678__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2678__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2678__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2678__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2678__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2690__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2690__part 
                            = vlSelf->__Vfunc_leading_zero32__2690__value;
                        vlSelf->__Vfunc_leading_zero32__2690__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2690__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2690__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2690__count)));
                            vlSelf->__Vfunc_leading_zero32__2690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2690__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2690__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2690__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2690__count)));
                            vlSelf->__Vfunc_leading_zero32__2690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2690__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2690__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2690__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2690__count)));
                            vlSelf->__Vfunc_leading_zero32__2690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2690__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2690__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2690__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2690__count)));
                            vlSelf->__Vfunc_leading_zero32__2690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2690__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2690__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2690__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2690__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2690__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2690__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2690__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2690__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2702__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2702__part 
                            = vlSelf->__Vfunc_leading_zero32__2702__value;
                        vlSelf->__Vfunc_leading_zero32__2702__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2702__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2702__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2702__count)));
                            vlSelf->__Vfunc_leading_zero32__2702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2702__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2702__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2702__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2702__count)));
                            vlSelf->__Vfunc_leading_zero32__2702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2702__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2702__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2702__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2702__count)));
                            vlSelf->__Vfunc_leading_zero32__2702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2702__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2702__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2702__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2702__count)));
                            vlSelf->__Vfunc_leading_zero32__2702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2702__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2702__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2702__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2702__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2702__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2702__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2702__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2702__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2714__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2714__part 
                            = vlSelf->__Vfunc_leading_zero32__2714__value;
                        vlSelf->__Vfunc_leading_zero32__2714__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2714__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2714__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2714__count)));
                            vlSelf->__Vfunc_leading_zero32__2714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2714__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2714__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2714__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2714__count)));
                            vlSelf->__Vfunc_leading_zero32__2714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2714__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2714__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2714__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2714__count)));
                            vlSelf->__Vfunc_leading_zero32__2714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2714__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2714__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2714__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2714__count)));
                            vlSelf->__Vfunc_leading_zero32__2714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2714__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2714__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2714__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2714__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2714__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2714__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2714__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2714__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2726__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2726__part 
                            = vlSelf->__Vfunc_leading_zero32__2726__value;
                        vlSelf->__Vfunc_leading_zero32__2726__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2726__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2726__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2726__count)));
                            vlSelf->__Vfunc_leading_zero32__2726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2726__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2726__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2726__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2726__count)));
                            vlSelf->__Vfunc_leading_zero32__2726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2726__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2726__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2726__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2726__count)));
                            vlSelf->__Vfunc_leading_zero32__2726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2726__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2726__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2726__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2726__count)));
                            vlSelf->__Vfunc_leading_zero32__2726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2726__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2726__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2726__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2726__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2726__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2726__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2726__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2726__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2738__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2738__part 
                            = vlSelf->__Vfunc_leading_zero32__2738__value;
                        vlSelf->__Vfunc_leading_zero32__2738__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2738__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2738__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2738__count)));
                            vlSelf->__Vfunc_leading_zero32__2738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2738__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2738__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2738__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2738__count)));
                            vlSelf->__Vfunc_leading_zero32__2738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2738__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2738__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2738__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2738__count)));
                            vlSelf->__Vfunc_leading_zero32__2738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2738__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2738__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2738__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2738__count)));
                            vlSelf->__Vfunc_leading_zero32__2738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2738__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2738__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2738__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2738__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2738__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2738__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2738__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2738__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2750__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2750__part 
                            = vlSelf->__Vfunc_leading_zero32__2750__value;
                        vlSelf->__Vfunc_leading_zero32__2750__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2750__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2750__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2750__count)));
                            vlSelf->__Vfunc_leading_zero32__2750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2750__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2750__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2750__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2750__count)));
                            vlSelf->__Vfunc_leading_zero32__2750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2750__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2750__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2750__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2750__count)));
                            vlSelf->__Vfunc_leading_zero32__2750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2750__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2750__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2750__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2750__count)));
                            vlSelf->__Vfunc_leading_zero32__2750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2750__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2750__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2750__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2750__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2750__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2750__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2750__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2750__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2762__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2762__part 
                            = vlSelf->__Vfunc_leading_zero32__2762__value;
                        vlSelf->__Vfunc_leading_zero32__2762__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2762__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2762__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2762__count)));
                            vlSelf->__Vfunc_leading_zero32__2762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2762__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2762__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2762__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2762__count)));
                            vlSelf->__Vfunc_leading_zero32__2762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2762__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2762__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2762__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2762__count)));
                            vlSelf->__Vfunc_leading_zero32__2762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2762__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2762__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2762__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2762__count)));
                            vlSelf->__Vfunc_leading_zero32__2762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2762__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2762__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2762__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2762__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2762__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2762__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2762__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2762__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2774__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2774__part 
                            = vlSelf->__Vfunc_leading_zero32__2774__value;
                        vlSelf->__Vfunc_leading_zero32__2774__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2774__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2774__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2774__count)));
                            vlSelf->__Vfunc_leading_zero32__2774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2774__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2774__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2774__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2774__count)));
                            vlSelf->__Vfunc_leading_zero32__2774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2774__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2774__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2774__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2774__count)));
                            vlSelf->__Vfunc_leading_zero32__2774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2774__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2774__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2774__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2774__count)));
                            vlSelf->__Vfunc_leading_zero32__2774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2774__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2774__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2774__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2774__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2774__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2774__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2774__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2774__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2786__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2786__part 
                            = vlSelf->__Vfunc_leading_zero32__2786__value;
                        vlSelf->__Vfunc_leading_zero32__2786__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2786__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2786__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2786__count)));
                            vlSelf->__Vfunc_leading_zero32__2786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2786__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2786__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2786__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2786__count)));
                            vlSelf->__Vfunc_leading_zero32__2786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2786__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2786__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2786__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2786__count)));
                            vlSelf->__Vfunc_leading_zero32__2786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2786__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2786__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2786__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2786__count)));
                            vlSelf->__Vfunc_leading_zero32__2786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2786__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2786__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2786__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2786__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2786__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2786__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2786__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2786__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2798__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2798__part 
                            = vlSelf->__Vfunc_leading_zero32__2798__value;
                        vlSelf->__Vfunc_leading_zero32__2798__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2798__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2798__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2798__count)));
                            vlSelf->__Vfunc_leading_zero32__2798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2798__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2798__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2798__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2798__count)));
                            vlSelf->__Vfunc_leading_zero32__2798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2798__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2798__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2798__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2798__count)));
                            vlSelf->__Vfunc_leading_zero32__2798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2798__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2798__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2798__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2798__count)));
                            vlSelf->__Vfunc_leading_zero32__2798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2798__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2798__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2798__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2798__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2798__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2798__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2798__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2798__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2810__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2810__part 
                            = vlSelf->__Vfunc_leading_zero32__2810__value;
                        vlSelf->__Vfunc_leading_zero32__2810__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2810__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2810__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2810__count)));
                            vlSelf->__Vfunc_leading_zero32__2810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2810__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2810__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2810__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2810__count)));
                            vlSelf->__Vfunc_leading_zero32__2810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2810__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2810__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2810__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2810__count)));
                            vlSelf->__Vfunc_leading_zero32__2810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2810__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2810__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2810__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2810__count)));
                            vlSelf->__Vfunc_leading_zero32__2810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2810__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2810__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2810__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2810__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2810__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2810__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2810__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2810__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2822__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2822__part 
                            = vlSelf->__Vfunc_leading_zero32__2822__value;
                        vlSelf->__Vfunc_leading_zero32__2822__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2822__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2822__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2822__count)));
                            vlSelf->__Vfunc_leading_zero32__2822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2822__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2822__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2822__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2822__count)));
                            vlSelf->__Vfunc_leading_zero32__2822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2822__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2822__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2822__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2822__count)));
                            vlSelf->__Vfunc_leading_zero32__2822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2822__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2822__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2822__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2822__count)));
                            vlSelf->__Vfunc_leading_zero32__2822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2822__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2822__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2822__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2822__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2822__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2822__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2822__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2822__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2834__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2834__part 
                            = vlSelf->__Vfunc_leading_zero32__2834__value;
                        vlSelf->__Vfunc_leading_zero32__2834__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2834__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2834__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2834__count)));
                            vlSelf->__Vfunc_leading_zero32__2834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2834__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2834__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2834__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2834__count)));
                            vlSelf->__Vfunc_leading_zero32__2834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2834__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2834__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2834__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2834__count)));
                            vlSelf->__Vfunc_leading_zero32__2834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2834__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2834__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2834__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2834__count)));
                            vlSelf->__Vfunc_leading_zero32__2834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2834__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2834__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2834__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2834__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2834__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2834__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2834__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2834__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2846__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2846__part 
                            = vlSelf->__Vfunc_leading_zero32__2846__value;
                        vlSelf->__Vfunc_leading_zero32__2846__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2846__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2846__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2846__count)));
                            vlSelf->__Vfunc_leading_zero32__2846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2846__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2846__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2846__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2846__count)));
                            vlSelf->__Vfunc_leading_zero32__2846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2846__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2846__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2846__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2846__count)));
                            vlSelf->__Vfunc_leading_zero32__2846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2846__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2846__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2846__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2846__count)));
                            vlSelf->__Vfunc_leading_zero32__2846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2846__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2846__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2846__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2846__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2846__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2846__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2846__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2846__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2858__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2858__part 
                            = vlSelf->__Vfunc_leading_zero32__2858__value;
                        vlSelf->__Vfunc_leading_zero32__2858__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2858__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2858__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2858__count)));
                            vlSelf->__Vfunc_leading_zero32__2858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2858__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2858__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2858__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2858__count)));
                            vlSelf->__Vfunc_leading_zero32__2858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2858__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2858__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2858__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2858__count)));
                            vlSelf->__Vfunc_leading_zero32__2858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2858__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2858__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2858__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2858__count)));
                            vlSelf->__Vfunc_leading_zero32__2858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2858__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2858__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2858__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2858__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2858__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2858__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2858__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2858__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2870__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2870__part 
                            = vlSelf->__Vfunc_leading_zero32__2870__value;
                        vlSelf->__Vfunc_leading_zero32__2870__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2870__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2870__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2870__count)));
                            vlSelf->__Vfunc_leading_zero32__2870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2870__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2870__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2870__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2870__count)));
                            vlSelf->__Vfunc_leading_zero32__2870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2870__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2870__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2870__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2870__count)));
                            vlSelf->__Vfunc_leading_zero32__2870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2870__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2870__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2870__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2870__count)));
                            vlSelf->__Vfunc_leading_zero32__2870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2870__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2870__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2870__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2870__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2870__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2870__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2870__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2870__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2882__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2882__part 
                            = vlSelf->__Vfunc_leading_zero32__2882__value;
                        vlSelf->__Vfunc_leading_zero32__2882__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2882__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2882__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2882__count)));
                            vlSelf->__Vfunc_leading_zero32__2882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2882__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2882__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2882__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2882__count)));
                            vlSelf->__Vfunc_leading_zero32__2882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2882__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2882__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2882__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2882__count)));
                            vlSelf->__Vfunc_leading_zero32__2882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2882__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2882__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2882__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2882__count)));
                            vlSelf->__Vfunc_leading_zero32__2882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2882__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2882__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2882__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2882__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2882__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2882__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2882__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2882__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2894__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2894__part 
                            = vlSelf->__Vfunc_leading_zero32__2894__value;
                        vlSelf->__Vfunc_leading_zero32__2894__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2894__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2894__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2894__count)));
                            vlSelf->__Vfunc_leading_zero32__2894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2894__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2894__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2894__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2894__count)));
                            vlSelf->__Vfunc_leading_zero32__2894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2894__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2894__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2894__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2894__count)));
                            vlSelf->__Vfunc_leading_zero32__2894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2894__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2894__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2894__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2894__count)));
                            vlSelf->__Vfunc_leading_zero32__2894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2894__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2894__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2894__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2894__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2894__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2894__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2894__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2894__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2906__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2906__part 
                            = vlSelf->__Vfunc_leading_zero32__2906__value;
                        vlSelf->__Vfunc_leading_zero32__2906__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2906__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2906__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2906__count)));
                            vlSelf->__Vfunc_leading_zero32__2906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2906__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2906__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2906__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2906__count)));
                            vlSelf->__Vfunc_leading_zero32__2906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2906__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2906__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2906__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2906__count)));
                            vlSelf->__Vfunc_leading_zero32__2906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2906__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2906__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2906__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2906__count)));
                            vlSelf->__Vfunc_leading_zero32__2906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2906__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2906__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2906__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2906__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2906__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2906__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2906__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2906__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2918__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2918__part 
                            = vlSelf->__Vfunc_leading_zero32__2918__value;
                        vlSelf->__Vfunc_leading_zero32__2918__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2918__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2918__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2918__count)));
                            vlSelf->__Vfunc_leading_zero32__2918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2918__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2918__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2918__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2918__count)));
                            vlSelf->__Vfunc_leading_zero32__2918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2918__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2918__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2918__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2918__count)));
                            vlSelf->__Vfunc_leading_zero32__2918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2918__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2918__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2918__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2918__count)));
                            vlSelf->__Vfunc_leading_zero32__2918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2918__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2918__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2918__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2918__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2918__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2918__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2918__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2918__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2930__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2930__part 
                            = vlSelf->__Vfunc_leading_zero32__2930__value;
                        vlSelf->__Vfunc_leading_zero32__2930__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2930__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2930__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2930__count)));
                            vlSelf->__Vfunc_leading_zero32__2930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2930__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2930__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2930__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2930__count)));
                            vlSelf->__Vfunc_leading_zero32__2930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2930__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2930__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2930__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2930__count)));
                            vlSelf->__Vfunc_leading_zero32__2930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2930__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2930__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2930__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2930__count)));
                            vlSelf->__Vfunc_leading_zero32__2930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2930__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2930__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2930__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2930__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2930__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2930__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2930__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2930__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2942__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2942__part 
                            = vlSelf->__Vfunc_leading_zero32__2942__value;
                        vlSelf->__Vfunc_leading_zero32__2942__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2942__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2942__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2942__count)));
                            vlSelf->__Vfunc_leading_zero32__2942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2942__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2942__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2942__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2942__count)));
                            vlSelf->__Vfunc_leading_zero32__2942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2942__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2942__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2942__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2942__count)));
                            vlSelf->__Vfunc_leading_zero32__2942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2942__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2942__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2942__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2942__count)));
                            vlSelf->__Vfunc_leading_zero32__2942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2942__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2942__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2942__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2942__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2942__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2942__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2942__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2942__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2954__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2954__part 
                            = vlSelf->__Vfunc_leading_zero32__2954__value;
                        vlSelf->__Vfunc_leading_zero32__2954__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2954__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2954__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2954__count)));
                            vlSelf->__Vfunc_leading_zero32__2954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2954__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2954__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2954__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2954__count)));
                            vlSelf->__Vfunc_leading_zero32__2954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2954__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2954__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2954__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2954__count)));
                            vlSelf->__Vfunc_leading_zero32__2954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2954__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2954__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2954__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2954__count)));
                            vlSelf->__Vfunc_leading_zero32__2954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2954__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2954__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2954__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2954__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2954__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2954__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2954__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2954__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2966__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2966__part 
                            = vlSelf->__Vfunc_leading_zero32__2966__value;
                        vlSelf->__Vfunc_leading_zero32__2966__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2966__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2966__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2966__count)));
                            vlSelf->__Vfunc_leading_zero32__2966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2966__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2966__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2966__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2966__count)));
                            vlSelf->__Vfunc_leading_zero32__2966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2966__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2966__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2966__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2966__count)));
                            vlSelf->__Vfunc_leading_zero32__2966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2966__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2966__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2966__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2966__count)));
                            vlSelf->__Vfunc_leading_zero32__2966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2966__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2966__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2966__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2966__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2966__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2966__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2966__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2966__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2978__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2978__part 
                            = vlSelf->__Vfunc_leading_zero32__2978__value;
                        vlSelf->__Vfunc_leading_zero32__2978__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2978__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2978__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2978__count)));
                            vlSelf->__Vfunc_leading_zero32__2978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2978__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2978__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2978__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2978__count)));
                            vlSelf->__Vfunc_leading_zero32__2978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2978__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2978__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2978__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2978__count)));
                            vlSelf->__Vfunc_leading_zero32__2978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2978__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2978__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2978__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2978__count)));
                            vlSelf->__Vfunc_leading_zero32__2978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2978__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2978__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2978__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2978__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2978__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2978__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2978__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2978__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2990__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2990__part 
                            = vlSelf->__Vfunc_leading_zero32__2990__value;
                        vlSelf->__Vfunc_leading_zero32__2990__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2990__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2990__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2990__count)));
                            vlSelf->__Vfunc_leading_zero32__2990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2990__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2990__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2990__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2990__count)));
                            vlSelf->__Vfunc_leading_zero32__2990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2990__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2990__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2990__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2990__count)));
                            vlSelf->__Vfunc_leading_zero32__2990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2990__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2990__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2990__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2990__count)));
                            vlSelf->__Vfunc_leading_zero32__2990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2990__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2990__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2990__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2990__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2990__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2990__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2990__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2990__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3002__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3002__part 
                            = vlSelf->__Vfunc_leading_zero32__3002__value;
                        vlSelf->__Vfunc_leading_zero32__3002__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3002__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3002__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3002__count)));
                            vlSelf->__Vfunc_leading_zero32__3002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3002__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3002__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3002__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3002__count)));
                            vlSelf->__Vfunc_leading_zero32__3002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3002__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3002__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3002__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3002__count)));
                            vlSelf->__Vfunc_leading_zero32__3002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3002__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3002__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3002__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3002__count)));
                            vlSelf->__Vfunc_leading_zero32__3002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3002__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3002__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3002__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3002__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3002__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3002__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3002__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3002__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3014__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3014__part 
                            = vlSelf->__Vfunc_leading_zero32__3014__value;
                        vlSelf->__Vfunc_leading_zero32__3014__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3014__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3014__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3014__count)));
                            vlSelf->__Vfunc_leading_zero32__3014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3014__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3014__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3014__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3014__count)));
                            vlSelf->__Vfunc_leading_zero32__3014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3014__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3014__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3014__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3014__count)));
                            vlSelf->__Vfunc_leading_zero32__3014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3014__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3014__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3014__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3014__count)));
                            vlSelf->__Vfunc_leading_zero32__3014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3014__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3014__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3014__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3014__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3014__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3014__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3014__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3014__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3026__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3026__part 
                            = vlSelf->__Vfunc_leading_zero32__3026__value;
                        vlSelf->__Vfunc_leading_zero32__3026__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3026__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3026__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3026__count)));
                            vlSelf->__Vfunc_leading_zero32__3026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3026__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3026__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3026__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3026__count)));
                            vlSelf->__Vfunc_leading_zero32__3026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3026__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3026__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3026__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3026__count)));
                            vlSelf->__Vfunc_leading_zero32__3026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3026__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3026__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3026__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3026__count)));
                            vlSelf->__Vfunc_leading_zero32__3026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3026__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3026__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3026__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3026__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3026__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3026__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3026__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3026__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3038__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3038__part 
                            = vlSelf->__Vfunc_leading_zero32__3038__value;
                        vlSelf->__Vfunc_leading_zero32__3038__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3038__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3038__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3038__count)));
                            vlSelf->__Vfunc_leading_zero32__3038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3038__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3038__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3038__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3038__count)));
                            vlSelf->__Vfunc_leading_zero32__3038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3038__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3038__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3038__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3038__count)));
                            vlSelf->__Vfunc_leading_zero32__3038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3038__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3038__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3038__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3038__count)));
                            vlSelf->__Vfunc_leading_zero32__3038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3038__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3038__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3038__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3038__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3038__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3038__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3038__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3038__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3050__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3050__part 
                            = vlSelf->__Vfunc_leading_zero32__3050__value;
                        vlSelf->__Vfunc_leading_zero32__3050__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3050__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3050__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3050__count)));
                            vlSelf->__Vfunc_leading_zero32__3050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3050__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3050__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3050__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3050__count)));
                            vlSelf->__Vfunc_leading_zero32__3050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3050__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3050__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3050__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3050__count)));
                            vlSelf->__Vfunc_leading_zero32__3050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3050__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3050__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3050__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3050__count)));
                            vlSelf->__Vfunc_leading_zero32__3050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3050__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3050__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3050__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3050__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3050__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3050__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3050__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3050__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3062__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3062__part 
                            = vlSelf->__Vfunc_leading_zero32__3062__value;
                        vlSelf->__Vfunc_leading_zero32__3062__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3062__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3062__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3062__count)));
                            vlSelf->__Vfunc_leading_zero32__3062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3062__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3062__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3062__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3062__count)));
                            vlSelf->__Vfunc_leading_zero32__3062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3062__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3062__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3062__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3062__count)));
                            vlSelf->__Vfunc_leading_zero32__3062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3062__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3062__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3062__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3062__count)));
                            vlSelf->__Vfunc_leading_zero32__3062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3062__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3062__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3062__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3062__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3062__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3062__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3062__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3062__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3074__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3074__part 
                            = vlSelf->__Vfunc_leading_zero32__3074__value;
                        vlSelf->__Vfunc_leading_zero32__3074__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3074__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3074__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3074__count)));
                            vlSelf->__Vfunc_leading_zero32__3074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3074__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3074__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3074__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3074__count)));
                            vlSelf->__Vfunc_leading_zero32__3074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3074__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3074__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3074__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3074__count)));
                            vlSelf->__Vfunc_leading_zero32__3074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3074__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3074__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3074__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3074__count)));
                            vlSelf->__Vfunc_leading_zero32__3074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3074__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3074__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3074__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3074__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3074__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3074__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3074__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3074__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3086__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3086__part 
                            = vlSelf->__Vfunc_leading_zero32__3086__value;
                        vlSelf->__Vfunc_leading_zero32__3086__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3086__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3086__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3086__count)));
                            vlSelf->__Vfunc_leading_zero32__3086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3086__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3086__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3086__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3086__count)));
                            vlSelf->__Vfunc_leading_zero32__3086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3086__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3086__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3086__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3086__count)));
                            vlSelf->__Vfunc_leading_zero32__3086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3086__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3086__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3086__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3086__count)));
                            vlSelf->__Vfunc_leading_zero32__3086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3086__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3086__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3086__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3086__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3086__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3086__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3086__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3086__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3098__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3098__part 
                            = vlSelf->__Vfunc_leading_zero32__3098__value;
                        vlSelf->__Vfunc_leading_zero32__3098__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3098__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3098__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3098__count)));
                            vlSelf->__Vfunc_leading_zero32__3098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3098__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3098__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3098__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3098__count)));
                            vlSelf->__Vfunc_leading_zero32__3098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3098__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3098__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3098__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3098__count)));
                            vlSelf->__Vfunc_leading_zero32__3098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3098__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3098__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3098__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3098__count)));
                            vlSelf->__Vfunc_leading_zero32__3098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3098__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3098__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3098__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3098__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3098__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3098__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3098__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3098__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3110__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3110__part 
                            = vlSelf->__Vfunc_leading_zero32__3110__value;
                        vlSelf->__Vfunc_leading_zero32__3110__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3110__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3110__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3110__count)));
                            vlSelf->__Vfunc_leading_zero32__3110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3110__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3110__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3110__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3110__count)));
                            vlSelf->__Vfunc_leading_zero32__3110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3110__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3110__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3110__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3110__count)));
                            vlSelf->__Vfunc_leading_zero32__3110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3110__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3110__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3110__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3110__count)));
                            vlSelf->__Vfunc_leading_zero32__3110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3110__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3110__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3110__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3110__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3110__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3110__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3110__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3110__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3122__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3122__part 
                            = vlSelf->__Vfunc_leading_zero32__3122__value;
                        vlSelf->__Vfunc_leading_zero32__3122__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3122__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3122__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3122__count)));
                            vlSelf->__Vfunc_leading_zero32__3122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3122__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3122__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3122__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3122__count)));
                            vlSelf->__Vfunc_leading_zero32__3122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3122__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3122__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3122__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3122__count)));
                            vlSelf->__Vfunc_leading_zero32__3122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3122__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3122__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3122__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3122__count)));
                            vlSelf->__Vfunc_leading_zero32__3122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3122__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3122__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3122__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3122__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3122__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3122__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3122__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3122__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3134__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3134__part 
                            = vlSelf->__Vfunc_leading_zero32__3134__value;
                        vlSelf->__Vfunc_leading_zero32__3134__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3134__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3134__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3134__count)));
                            vlSelf->__Vfunc_leading_zero32__3134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3134__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3134__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3134__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3134__count)));
                            vlSelf->__Vfunc_leading_zero32__3134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3134__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3134__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3134__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3134__count)));
                            vlSelf->__Vfunc_leading_zero32__3134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3134__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3134__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3134__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3134__count)));
                            vlSelf->__Vfunc_leading_zero32__3134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3134__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3134__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3134__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3134__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3134__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3134__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3134__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3134__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3146__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3146__part 
                            = vlSelf->__Vfunc_leading_zero32__3146__value;
                        vlSelf->__Vfunc_leading_zero32__3146__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3146__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3146__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3146__count)));
                            vlSelf->__Vfunc_leading_zero32__3146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3146__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3146__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3146__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3146__count)));
                            vlSelf->__Vfunc_leading_zero32__3146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3146__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3146__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3146__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3146__count)));
                            vlSelf->__Vfunc_leading_zero32__3146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3146__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3146__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3146__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3146__count)));
                            vlSelf->__Vfunc_leading_zero32__3146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3146__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3146__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3146__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3146__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3146__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3146__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3146__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3146__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3158__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3158__part 
                            = vlSelf->__Vfunc_leading_zero32__3158__value;
                        vlSelf->__Vfunc_leading_zero32__3158__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3158__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3158__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3158__count)));
                            vlSelf->__Vfunc_leading_zero32__3158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3158__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3158__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3158__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3158__count)));
                            vlSelf->__Vfunc_leading_zero32__3158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3158__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3158__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3158__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3158__count)));
                            vlSelf->__Vfunc_leading_zero32__3158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3158__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3158__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3158__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3158__count)));
                            vlSelf->__Vfunc_leading_zero32__3158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3158__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3158__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3158__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3158__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3158__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3158__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3158__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3158__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3170__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3170__part 
                            = vlSelf->__Vfunc_leading_zero32__3170__value;
                        vlSelf->__Vfunc_leading_zero32__3170__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3170__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3170__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3170__count)));
                            vlSelf->__Vfunc_leading_zero32__3170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3170__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3170__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3170__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3170__count)));
                            vlSelf->__Vfunc_leading_zero32__3170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3170__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3170__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3170__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3170__count)));
                            vlSelf->__Vfunc_leading_zero32__3170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3170__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3170__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3170__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3170__count)));
                            vlSelf->__Vfunc_leading_zero32__3170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3170__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3170__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3170__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3170__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3170__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3170__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3170__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3170__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3182__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3182__part 
                            = vlSelf->__Vfunc_leading_zero32__3182__value;
                        vlSelf->__Vfunc_leading_zero32__3182__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3182__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3182__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3182__count)));
                            vlSelf->__Vfunc_leading_zero32__3182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3182__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3182__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3182__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3182__count)));
                            vlSelf->__Vfunc_leading_zero32__3182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3182__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3182__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3182__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3182__count)));
                            vlSelf->__Vfunc_leading_zero32__3182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3182__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3182__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3182__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3182__count)));
                            vlSelf->__Vfunc_leading_zero32__3182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3182__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3182__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3182__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3182__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3182__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3182__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3182__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3182__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3194__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3194__part 
                            = vlSelf->__Vfunc_leading_zero32__3194__value;
                        vlSelf->__Vfunc_leading_zero32__3194__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3194__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3194__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3194__count)));
                            vlSelf->__Vfunc_leading_zero32__3194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3194__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3194__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3194__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3194__count)));
                            vlSelf->__Vfunc_leading_zero32__3194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3194__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3194__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3194__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3194__count)));
                            vlSelf->__Vfunc_leading_zero32__3194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3194__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3194__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3194__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3194__count)));
                            vlSelf->__Vfunc_leading_zero32__3194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3194__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3194__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3194__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3194__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3194__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3194__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3194__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3194__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3206__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3206__part 
                            = vlSelf->__Vfunc_leading_zero32__3206__value;
                        vlSelf->__Vfunc_leading_zero32__3206__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3206__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3206__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3206__count)));
                            vlSelf->__Vfunc_leading_zero32__3206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3206__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3206__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3206__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3206__count)));
                            vlSelf->__Vfunc_leading_zero32__3206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3206__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3206__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3206__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3206__count)));
                            vlSelf->__Vfunc_leading_zero32__3206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3206__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3206__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3206__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3206__count)));
                            vlSelf->__Vfunc_leading_zero32__3206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3206__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3206__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3206__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3206__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3206__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3206__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3206__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3206__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3218__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3218__part 
                            = vlSelf->__Vfunc_leading_zero32__3218__value;
                        vlSelf->__Vfunc_leading_zero32__3218__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3218__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3218__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3218__count)));
                            vlSelf->__Vfunc_leading_zero32__3218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3218__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3218__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3218__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3218__count)));
                            vlSelf->__Vfunc_leading_zero32__3218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3218__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3218__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3218__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3218__count)));
                            vlSelf->__Vfunc_leading_zero32__3218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3218__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3218__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3218__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3218__count)));
                            vlSelf->__Vfunc_leading_zero32__3218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3218__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3218__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3218__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3218__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3218__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3218__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3218__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3218__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3230__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3230__part 
                            = vlSelf->__Vfunc_leading_zero32__3230__value;
                        vlSelf->__Vfunc_leading_zero32__3230__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3230__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3230__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3230__count)));
                            vlSelf->__Vfunc_leading_zero32__3230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3230__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3230__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3230__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3230__count)));
                            vlSelf->__Vfunc_leading_zero32__3230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3230__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3230__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3230__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3230__count)));
                            vlSelf->__Vfunc_leading_zero32__3230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3230__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3230__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3230__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3230__count)));
                            vlSelf->__Vfunc_leading_zero32__3230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3230__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3230__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3230__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3230__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3230__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3230__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3230__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3230__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3242__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3242__part 
                            = vlSelf->__Vfunc_leading_zero32__3242__value;
                        vlSelf->__Vfunc_leading_zero32__3242__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3242__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3242__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3242__count)));
                            vlSelf->__Vfunc_leading_zero32__3242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3242__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3242__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3242__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3242__count)));
                            vlSelf->__Vfunc_leading_zero32__3242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3242__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3242__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3242__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3242__count)));
                            vlSelf->__Vfunc_leading_zero32__3242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3242__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3242__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3242__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3242__count)));
                            vlSelf->__Vfunc_leading_zero32__3242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3242__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3242__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3242__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3242__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3242__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3242__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3242__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3242__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3254__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3254__part 
                            = vlSelf->__Vfunc_leading_zero32__3254__value;
                        vlSelf->__Vfunc_leading_zero32__3254__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3254__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3254__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3254__count)));
                            vlSelf->__Vfunc_leading_zero32__3254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3254__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3254__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3254__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3254__count)));
                            vlSelf->__Vfunc_leading_zero32__3254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3254__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3254__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3254__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3254__count)));
                            vlSelf->__Vfunc_leading_zero32__3254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3254__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3254__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3254__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3254__count)));
                            vlSelf->__Vfunc_leading_zero32__3254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3254__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3254__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3254__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3254__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3254__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3254__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3254__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3254__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3266__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3266__part 
                            = vlSelf->__Vfunc_leading_zero32__3266__value;
                        vlSelf->__Vfunc_leading_zero32__3266__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3266__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3266__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3266__count)));
                            vlSelf->__Vfunc_leading_zero32__3266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3266__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3266__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3266__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3266__count)));
                            vlSelf->__Vfunc_leading_zero32__3266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3266__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3266__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3266__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3266__count)));
                            vlSelf->__Vfunc_leading_zero32__3266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3266__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3266__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3266__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3266__count)));
                            vlSelf->__Vfunc_leading_zero32__3266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3266__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3266__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3266__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3266__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3266__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3266__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3266__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3266__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3278__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3278__part 
                            = vlSelf->__Vfunc_leading_zero32__3278__value;
                        vlSelf->__Vfunc_leading_zero32__3278__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3278__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3278__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3278__count)));
                            vlSelf->__Vfunc_leading_zero32__3278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3278__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3278__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3278__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3278__count)));
                            vlSelf->__Vfunc_leading_zero32__3278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3278__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3278__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3278__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3278__count)));
                            vlSelf->__Vfunc_leading_zero32__3278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3278__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3278__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3278__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3278__count)));
                            vlSelf->__Vfunc_leading_zero32__3278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3278__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3278__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3278__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3278__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3278__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3278__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3278__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3278__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3290__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3290__part 
                            = vlSelf->__Vfunc_leading_zero32__3290__value;
                        vlSelf->__Vfunc_leading_zero32__3290__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3290__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3290__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3290__count)));
                            vlSelf->__Vfunc_leading_zero32__3290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3290__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3290__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3290__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3290__count)));
                            vlSelf->__Vfunc_leading_zero32__3290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3290__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3290__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3290__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3290__count)));
                            vlSelf->__Vfunc_leading_zero32__3290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3290__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3290__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3290__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3290__count)));
                            vlSelf->__Vfunc_leading_zero32__3290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3290__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3290__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3290__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3290__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3290__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3290__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3290__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3290__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3302__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3302__part 
                            = vlSelf->__Vfunc_leading_zero32__3302__value;
                        vlSelf->__Vfunc_leading_zero32__3302__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3302__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3302__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3302__count)));
                            vlSelf->__Vfunc_leading_zero32__3302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3302__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3302__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3302__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3302__count)));
                            vlSelf->__Vfunc_leading_zero32__3302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3302__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3302__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3302__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3302__count)));
                            vlSelf->__Vfunc_leading_zero32__3302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3302__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3302__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3302__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3302__count)));
                            vlSelf->__Vfunc_leading_zero32__3302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3302__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3302__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3302__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3302__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3302__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3302__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3302__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3302__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3314__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3314__part 
                            = vlSelf->__Vfunc_leading_zero32__3314__value;
                        vlSelf->__Vfunc_leading_zero32__3314__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3314__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3314__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3314__count)));
                            vlSelf->__Vfunc_leading_zero32__3314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3314__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3314__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3314__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3314__count)));
                            vlSelf->__Vfunc_leading_zero32__3314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3314__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3314__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3314__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3314__count)));
                            vlSelf->__Vfunc_leading_zero32__3314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3314__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3314__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3314__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3314__count)));
                            vlSelf->__Vfunc_leading_zero32__3314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3314__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3314__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3314__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3314__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3314__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3314__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3314__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3314__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3326__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3326__part 
                            = vlSelf->__Vfunc_leading_zero32__3326__value;
                        vlSelf->__Vfunc_leading_zero32__3326__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3326__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3326__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3326__count)));
                            vlSelf->__Vfunc_leading_zero32__3326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3326__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3326__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3326__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3326__count)));
                            vlSelf->__Vfunc_leading_zero32__3326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3326__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3326__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3326__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3326__count)));
                            vlSelf->__Vfunc_leading_zero32__3326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3326__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3326__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3326__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3326__count)));
                            vlSelf->__Vfunc_leading_zero32__3326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3326__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3326__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3326__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3326__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3326__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3326__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3326__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3326__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3338__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3338__part 
                            = vlSelf->__Vfunc_leading_zero32__3338__value;
                        vlSelf->__Vfunc_leading_zero32__3338__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3338__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3338__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3338__count)));
                            vlSelf->__Vfunc_leading_zero32__3338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3338__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3338__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3338__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3338__count)));
                            vlSelf->__Vfunc_leading_zero32__3338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3338__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3338__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3338__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3338__count)));
                            vlSelf->__Vfunc_leading_zero32__3338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3338__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3338__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3338__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3338__count)));
                            vlSelf->__Vfunc_leading_zero32__3338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3338__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3338__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3338__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3338__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3338__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3338__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3338__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3338__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3350__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3350__part 
                            = vlSelf->__Vfunc_leading_zero32__3350__value;
                        vlSelf->__Vfunc_leading_zero32__3350__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3350__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3350__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3350__count)));
                            vlSelf->__Vfunc_leading_zero32__3350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3350__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3350__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3350__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3350__count)));
                            vlSelf->__Vfunc_leading_zero32__3350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3350__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3350__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3350__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3350__count)));
                            vlSelf->__Vfunc_leading_zero32__3350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3350__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3350__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3350__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3350__count)));
                            vlSelf->__Vfunc_leading_zero32__3350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3350__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3350__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3350__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3350__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3350__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3350__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3350__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3350__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3362__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3362__part 
                            = vlSelf->__Vfunc_leading_zero32__3362__value;
                        vlSelf->__Vfunc_leading_zero32__3362__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3362__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3362__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3362__count)));
                            vlSelf->__Vfunc_leading_zero32__3362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3362__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3362__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3362__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3362__count)));
                            vlSelf->__Vfunc_leading_zero32__3362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3362__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3362__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3362__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3362__count)));
                            vlSelf->__Vfunc_leading_zero32__3362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3362__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3362__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3362__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3362__count)));
                            vlSelf->__Vfunc_leading_zero32__3362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3362__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3362__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3362__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3362__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3362__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3362__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3362__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3362__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3374__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3374__part 
                            = vlSelf->__Vfunc_leading_zero32__3374__value;
                        vlSelf->__Vfunc_leading_zero32__3374__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3374__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3374__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3374__count)));
                            vlSelf->__Vfunc_leading_zero32__3374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3374__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3374__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3374__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3374__count)));
                            vlSelf->__Vfunc_leading_zero32__3374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3374__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3374__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3374__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3374__count)));
                            vlSelf->__Vfunc_leading_zero32__3374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3374__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3374__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3374__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3374__count)));
                            vlSelf->__Vfunc_leading_zero32__3374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3374__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3374__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3374__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3374__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3374__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3374__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3374__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3374__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3386__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3386__part 
                            = vlSelf->__Vfunc_leading_zero32__3386__value;
                        vlSelf->__Vfunc_leading_zero32__3386__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3386__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3386__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3386__count)));
                            vlSelf->__Vfunc_leading_zero32__3386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3386__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3386__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3386__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3386__count)));
                            vlSelf->__Vfunc_leading_zero32__3386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3386__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3386__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3386__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3386__count)));
                            vlSelf->__Vfunc_leading_zero32__3386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3386__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3386__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3386__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3386__count)));
                            vlSelf->__Vfunc_leading_zero32__3386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3386__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3386__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3386__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3386__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3386__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3386__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3386__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3386__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3398__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3398__part 
                            = vlSelf->__Vfunc_leading_zero32__3398__value;
                        vlSelf->__Vfunc_leading_zero32__3398__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3398__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3398__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3398__count)));
                            vlSelf->__Vfunc_leading_zero32__3398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3398__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3398__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3398__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3398__count)));
                            vlSelf->__Vfunc_leading_zero32__3398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3398__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3398__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3398__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3398__count)));
                            vlSelf->__Vfunc_leading_zero32__3398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3398__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3398__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3398__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3398__count)));
                            vlSelf->__Vfunc_leading_zero32__3398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3398__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3398__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3398__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3398__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3398__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3398__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3398__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3398__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3410__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3410__part 
                            = vlSelf->__Vfunc_leading_zero32__3410__value;
                        vlSelf->__Vfunc_leading_zero32__3410__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3410__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3410__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3410__count)));
                            vlSelf->__Vfunc_leading_zero32__3410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3410__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3410__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3410__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3410__count)));
                            vlSelf->__Vfunc_leading_zero32__3410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3410__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3410__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3410__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3410__count)));
                            vlSelf->__Vfunc_leading_zero32__3410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3410__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3410__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3410__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3410__count)));
                            vlSelf->__Vfunc_leading_zero32__3410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3410__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3410__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3410__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3410__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3410__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3410__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3410__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3410__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3422__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3422__part 
                            = vlSelf->__Vfunc_leading_zero32__3422__value;
                        vlSelf->__Vfunc_leading_zero32__3422__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3422__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3422__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3422__count)));
                            vlSelf->__Vfunc_leading_zero32__3422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3422__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3422__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3422__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3422__count)));
                            vlSelf->__Vfunc_leading_zero32__3422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3422__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3422__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3422__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3422__count)));
                            vlSelf->__Vfunc_leading_zero32__3422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3422__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3422__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3422__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3422__count)));
                            vlSelf->__Vfunc_leading_zero32__3422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3422__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3422__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3422__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3422__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3422__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3422__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3422__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3422__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3434__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3434__part 
                            = vlSelf->__Vfunc_leading_zero32__3434__value;
                        vlSelf->__Vfunc_leading_zero32__3434__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3434__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3434__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3434__count)));
                            vlSelf->__Vfunc_leading_zero32__3434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3434__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3434__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3434__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3434__count)));
                            vlSelf->__Vfunc_leading_zero32__3434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3434__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3434__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3434__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3434__count)));
                            vlSelf->__Vfunc_leading_zero32__3434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3434__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3434__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3434__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3434__count)));
                            vlSelf->__Vfunc_leading_zero32__3434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3434__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3434__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3434__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3434__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3434__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3434__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3434__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3434__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3446__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3446__part 
                            = vlSelf->__Vfunc_leading_zero32__3446__value;
                        vlSelf->__Vfunc_leading_zero32__3446__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3446__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3446__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3446__count)));
                            vlSelf->__Vfunc_leading_zero32__3446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3446__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3446__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3446__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3446__count)));
                            vlSelf->__Vfunc_leading_zero32__3446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3446__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3446__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3446__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3446__count)));
                            vlSelf->__Vfunc_leading_zero32__3446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3446__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3446__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3446__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3446__count)));
                            vlSelf->__Vfunc_leading_zero32__3446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3446__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3446__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3446__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3446__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3446__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3446__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3446__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3446__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3458__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3458__part 
                            = vlSelf->__Vfunc_leading_zero32__3458__value;
                        vlSelf->__Vfunc_leading_zero32__3458__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3458__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3458__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3458__count)));
                            vlSelf->__Vfunc_leading_zero32__3458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3458__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3458__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3458__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3458__count)));
                            vlSelf->__Vfunc_leading_zero32__3458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3458__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3458__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3458__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3458__count)));
                            vlSelf->__Vfunc_leading_zero32__3458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3458__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3458__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3458__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3458__count)));
                            vlSelf->__Vfunc_leading_zero32__3458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3458__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3458__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3458__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3458__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3458__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3458__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3458__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3458__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3470__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3470__part 
                            = vlSelf->__Vfunc_leading_zero32__3470__value;
                        vlSelf->__Vfunc_leading_zero32__3470__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3470__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3470__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3470__count)));
                            vlSelf->__Vfunc_leading_zero32__3470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3470__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3470__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3470__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3470__count)));
                            vlSelf->__Vfunc_leading_zero32__3470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3470__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3470__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3470__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3470__count)));
                            vlSelf->__Vfunc_leading_zero32__3470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3470__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3470__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3470__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3470__count)));
                            vlSelf->__Vfunc_leading_zero32__3470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3470__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3470__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3470__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3470__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3470__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3470__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3470__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3470__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3482__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3482__part 
                            = vlSelf->__Vfunc_leading_zero32__3482__value;
                        vlSelf->__Vfunc_leading_zero32__3482__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3482__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3482__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3482__count)));
                            vlSelf->__Vfunc_leading_zero32__3482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3482__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3482__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3482__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3482__count)));
                            vlSelf->__Vfunc_leading_zero32__3482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3482__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3482__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3482__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3482__count)));
                            vlSelf->__Vfunc_leading_zero32__3482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3482__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3482__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3482__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3482__count)));
                            vlSelf->__Vfunc_leading_zero32__3482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3482__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3482__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3482__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3482__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3482__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3482__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3482__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3482__Vfuncout)) 
                             - (IData)(8U))));
}
