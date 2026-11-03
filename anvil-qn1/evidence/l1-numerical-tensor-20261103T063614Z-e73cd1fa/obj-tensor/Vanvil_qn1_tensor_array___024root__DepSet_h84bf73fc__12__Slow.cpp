// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_tensor_array.h for the primary calling header

#include "Vanvil_qn1_tensor_array__pch.h"
#include "Vanvil_qn1_tensor_array___024root.h"

VL_ATTR_COLD void Vanvil_qn1_tensor_array___024root___stl_sequent__TOP__12(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___stl_sequent__TOP__12\n"); );
    // Body
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2456__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2456__part 
                            = vlSelf->__Vfunc_leading_zero32__2456__value;
                        vlSelf->__Vfunc_leading_zero32__2456__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2456__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2456__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2456__count)));
                            vlSelf->__Vfunc_leading_zero32__2456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2456__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2456__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2456__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2456__count)));
                            vlSelf->__Vfunc_leading_zero32__2456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2456__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2456__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2456__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2456__count)));
                            vlSelf->__Vfunc_leading_zero32__2456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2456__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2456__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2456__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2456__count)));
                            vlSelf->__Vfunc_leading_zero32__2456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2456__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2456__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2456__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2456__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2456__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2456__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2456__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2456__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2468__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2468__part 
                            = vlSelf->__Vfunc_leading_zero32__2468__value;
                        vlSelf->__Vfunc_leading_zero32__2468__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2468__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2468__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2468__count)));
                            vlSelf->__Vfunc_leading_zero32__2468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2468__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2468__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2468__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2468__count)));
                            vlSelf->__Vfunc_leading_zero32__2468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2468__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2468__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2468__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2468__count)));
                            vlSelf->__Vfunc_leading_zero32__2468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2468__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2468__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2468__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2468__count)));
                            vlSelf->__Vfunc_leading_zero32__2468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2468__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2468__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2468__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2468__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2468__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2468__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2468__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2468__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2480__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2480__part 
                            = vlSelf->__Vfunc_leading_zero32__2480__value;
                        vlSelf->__Vfunc_leading_zero32__2480__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2480__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2480__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2480__count)));
                            vlSelf->__Vfunc_leading_zero32__2480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2480__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2480__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2480__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2480__count)));
                            vlSelf->__Vfunc_leading_zero32__2480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2480__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2480__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2480__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2480__count)));
                            vlSelf->__Vfunc_leading_zero32__2480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2480__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2480__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2480__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2480__count)));
                            vlSelf->__Vfunc_leading_zero32__2480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2480__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2480__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2480__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2480__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2480__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2480__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2480__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2480__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2492__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2492__part 
                            = vlSelf->__Vfunc_leading_zero32__2492__value;
                        vlSelf->__Vfunc_leading_zero32__2492__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2492__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2492__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2492__count)));
                            vlSelf->__Vfunc_leading_zero32__2492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2492__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2492__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2492__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2492__count)));
                            vlSelf->__Vfunc_leading_zero32__2492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2492__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2492__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2492__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2492__count)));
                            vlSelf->__Vfunc_leading_zero32__2492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2492__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2492__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2492__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2492__count)));
                            vlSelf->__Vfunc_leading_zero32__2492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2492__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2492__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2492__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2492__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2492__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2492__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2492__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2492__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2504__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2504__part 
                            = vlSelf->__Vfunc_leading_zero32__2504__value;
                        vlSelf->__Vfunc_leading_zero32__2504__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2504__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2504__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2504__count)));
                            vlSelf->__Vfunc_leading_zero32__2504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2504__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2504__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2504__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2504__count)));
                            vlSelf->__Vfunc_leading_zero32__2504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2504__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2504__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2504__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2504__count)));
                            vlSelf->__Vfunc_leading_zero32__2504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2504__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2504__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2504__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2504__count)));
                            vlSelf->__Vfunc_leading_zero32__2504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2504__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2504__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2504__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2504__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2504__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2504__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2504__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2504__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2516__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2516__part 
                            = vlSelf->__Vfunc_leading_zero32__2516__value;
                        vlSelf->__Vfunc_leading_zero32__2516__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2516__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2516__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2516__count)));
                            vlSelf->__Vfunc_leading_zero32__2516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2516__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2516__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2516__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2516__count)));
                            vlSelf->__Vfunc_leading_zero32__2516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2516__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2516__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2516__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2516__count)));
                            vlSelf->__Vfunc_leading_zero32__2516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2516__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2516__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2516__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2516__count)));
                            vlSelf->__Vfunc_leading_zero32__2516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2516__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2516__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2516__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2516__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2516__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2516__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2516__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2516__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2528__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2528__part 
                            = vlSelf->__Vfunc_leading_zero32__2528__value;
                        vlSelf->__Vfunc_leading_zero32__2528__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2528__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2528__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2528__count)));
                            vlSelf->__Vfunc_leading_zero32__2528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2528__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2528__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2528__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2528__count)));
                            vlSelf->__Vfunc_leading_zero32__2528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2528__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2528__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2528__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2528__count)));
                            vlSelf->__Vfunc_leading_zero32__2528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2528__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2528__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2528__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2528__count)));
                            vlSelf->__Vfunc_leading_zero32__2528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2528__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2528__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2528__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2528__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2528__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2528__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2528__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2528__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2540__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2540__part 
                            = vlSelf->__Vfunc_leading_zero32__2540__value;
                        vlSelf->__Vfunc_leading_zero32__2540__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2540__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2540__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2540__count)));
                            vlSelf->__Vfunc_leading_zero32__2540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2540__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2540__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2540__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2540__count)));
                            vlSelf->__Vfunc_leading_zero32__2540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2540__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2540__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2540__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2540__count)));
                            vlSelf->__Vfunc_leading_zero32__2540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2540__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2540__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2540__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2540__count)));
                            vlSelf->__Vfunc_leading_zero32__2540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2540__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2540__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2540__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2540__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2540__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2540__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2540__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2540__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2552__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2552__part 
                            = vlSelf->__Vfunc_leading_zero32__2552__value;
                        vlSelf->__Vfunc_leading_zero32__2552__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2552__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2552__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2552__count)));
                            vlSelf->__Vfunc_leading_zero32__2552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2552__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2552__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2552__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2552__count)));
                            vlSelf->__Vfunc_leading_zero32__2552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2552__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2552__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2552__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2552__count)));
                            vlSelf->__Vfunc_leading_zero32__2552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2552__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2552__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2552__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2552__count)));
                            vlSelf->__Vfunc_leading_zero32__2552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2552__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2552__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2552__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2552__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2552__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2552__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2552__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2552__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2564__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2564__part 
                            = vlSelf->__Vfunc_leading_zero32__2564__value;
                        vlSelf->__Vfunc_leading_zero32__2564__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2564__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2564__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2564__count)));
                            vlSelf->__Vfunc_leading_zero32__2564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2564__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2564__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2564__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2564__count)));
                            vlSelf->__Vfunc_leading_zero32__2564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2564__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2564__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2564__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2564__count)));
                            vlSelf->__Vfunc_leading_zero32__2564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2564__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2564__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2564__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2564__count)));
                            vlSelf->__Vfunc_leading_zero32__2564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2564__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2564__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2564__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2564__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2564__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2564__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2564__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2564__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2576__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2576__part 
                            = vlSelf->__Vfunc_leading_zero32__2576__value;
                        vlSelf->__Vfunc_leading_zero32__2576__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2576__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2576__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2576__count)));
                            vlSelf->__Vfunc_leading_zero32__2576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2576__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2576__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2576__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2576__count)));
                            vlSelf->__Vfunc_leading_zero32__2576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2576__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2576__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2576__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2576__count)));
                            vlSelf->__Vfunc_leading_zero32__2576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2576__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2576__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2576__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2576__count)));
                            vlSelf->__Vfunc_leading_zero32__2576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2576__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2576__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2576__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2576__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2576__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2576__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2576__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2576__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2588__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2588__part 
                            = vlSelf->__Vfunc_leading_zero32__2588__value;
                        vlSelf->__Vfunc_leading_zero32__2588__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2588__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2588__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2588__count)));
                            vlSelf->__Vfunc_leading_zero32__2588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2588__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2588__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2588__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2588__count)));
                            vlSelf->__Vfunc_leading_zero32__2588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2588__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2588__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2588__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2588__count)));
                            vlSelf->__Vfunc_leading_zero32__2588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2588__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2588__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2588__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2588__count)));
                            vlSelf->__Vfunc_leading_zero32__2588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2588__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2588__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2588__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2588__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2588__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2588__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2588__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2588__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2600__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2600__part 
                            = vlSelf->__Vfunc_leading_zero32__2600__value;
                        vlSelf->__Vfunc_leading_zero32__2600__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2600__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2600__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2600__count)));
                            vlSelf->__Vfunc_leading_zero32__2600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2600__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2600__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2600__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2600__count)));
                            vlSelf->__Vfunc_leading_zero32__2600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2600__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2600__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2600__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2600__count)));
                            vlSelf->__Vfunc_leading_zero32__2600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2600__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2600__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2600__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2600__count)));
                            vlSelf->__Vfunc_leading_zero32__2600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2600__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2600__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2600__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2600__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2600__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2600__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2600__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2600__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2612__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2612__part 
                            = vlSelf->__Vfunc_leading_zero32__2612__value;
                        vlSelf->__Vfunc_leading_zero32__2612__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2612__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2612__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2612__count)));
                            vlSelf->__Vfunc_leading_zero32__2612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2612__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2612__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2612__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2612__count)));
                            vlSelf->__Vfunc_leading_zero32__2612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2612__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2612__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2612__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2612__count)));
                            vlSelf->__Vfunc_leading_zero32__2612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2612__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2612__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2612__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2612__count)));
                            vlSelf->__Vfunc_leading_zero32__2612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2612__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2612__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2612__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2612__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2612__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2612__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2612__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2612__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2624__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2624__part 
                            = vlSelf->__Vfunc_leading_zero32__2624__value;
                        vlSelf->__Vfunc_leading_zero32__2624__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2624__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2624__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2624__count)));
                            vlSelf->__Vfunc_leading_zero32__2624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2624__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2624__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2624__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2624__count)));
                            vlSelf->__Vfunc_leading_zero32__2624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2624__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2624__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2624__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2624__count)));
                            vlSelf->__Vfunc_leading_zero32__2624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2624__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2624__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2624__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2624__count)));
                            vlSelf->__Vfunc_leading_zero32__2624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2624__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2624__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2624__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2624__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2624__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2624__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2624__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2624__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2636__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2636__part 
                            = vlSelf->__Vfunc_leading_zero32__2636__value;
                        vlSelf->__Vfunc_leading_zero32__2636__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2636__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2636__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2636__count)));
                            vlSelf->__Vfunc_leading_zero32__2636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2636__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2636__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2636__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2636__count)));
                            vlSelf->__Vfunc_leading_zero32__2636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2636__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2636__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2636__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2636__count)));
                            vlSelf->__Vfunc_leading_zero32__2636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2636__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2636__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2636__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2636__count)));
                            vlSelf->__Vfunc_leading_zero32__2636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2636__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2636__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2636__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2636__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2636__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2636__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2636__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2636__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2648__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2648__part 
                            = vlSelf->__Vfunc_leading_zero32__2648__value;
                        vlSelf->__Vfunc_leading_zero32__2648__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2648__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2648__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2648__count)));
                            vlSelf->__Vfunc_leading_zero32__2648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2648__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2648__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2648__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2648__count)));
                            vlSelf->__Vfunc_leading_zero32__2648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2648__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2648__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2648__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2648__count)));
                            vlSelf->__Vfunc_leading_zero32__2648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2648__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2648__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2648__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2648__count)));
                            vlSelf->__Vfunc_leading_zero32__2648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2648__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2648__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2648__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2648__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2648__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2648__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2648__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2648__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2660__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2660__part 
                            = vlSelf->__Vfunc_leading_zero32__2660__value;
                        vlSelf->__Vfunc_leading_zero32__2660__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2660__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2660__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2660__count)));
                            vlSelf->__Vfunc_leading_zero32__2660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2660__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2660__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2660__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2660__count)));
                            vlSelf->__Vfunc_leading_zero32__2660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2660__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2660__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2660__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2660__count)));
                            vlSelf->__Vfunc_leading_zero32__2660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2660__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2660__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2660__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2660__count)));
                            vlSelf->__Vfunc_leading_zero32__2660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2660__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2660__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2660__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2660__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2660__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2660__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2660__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2660__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2672__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2672__part 
                            = vlSelf->__Vfunc_leading_zero32__2672__value;
                        vlSelf->__Vfunc_leading_zero32__2672__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2672__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2672__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2672__count)));
                            vlSelf->__Vfunc_leading_zero32__2672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2672__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2672__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2672__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2672__count)));
                            vlSelf->__Vfunc_leading_zero32__2672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2672__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2672__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2672__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2672__count)));
                            vlSelf->__Vfunc_leading_zero32__2672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2672__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2672__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2672__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2672__count)));
                            vlSelf->__Vfunc_leading_zero32__2672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2672__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2672__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2672__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2672__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2672__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2672__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2672__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2672__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2684__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2684__part 
                            = vlSelf->__Vfunc_leading_zero32__2684__value;
                        vlSelf->__Vfunc_leading_zero32__2684__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2684__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2684__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2684__count)));
                            vlSelf->__Vfunc_leading_zero32__2684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2684__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2684__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2684__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2684__count)));
                            vlSelf->__Vfunc_leading_zero32__2684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2684__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2684__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2684__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2684__count)));
                            vlSelf->__Vfunc_leading_zero32__2684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2684__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2684__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2684__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2684__count)));
                            vlSelf->__Vfunc_leading_zero32__2684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2684__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2684__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2684__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2684__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2684__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2684__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2684__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2684__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2696__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2696__part 
                            = vlSelf->__Vfunc_leading_zero32__2696__value;
                        vlSelf->__Vfunc_leading_zero32__2696__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2696__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2696__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2696__count)));
                            vlSelf->__Vfunc_leading_zero32__2696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2696__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2696__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2696__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2696__count)));
                            vlSelf->__Vfunc_leading_zero32__2696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2696__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2696__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2696__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2696__count)));
                            vlSelf->__Vfunc_leading_zero32__2696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2696__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2696__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2696__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2696__count)));
                            vlSelf->__Vfunc_leading_zero32__2696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2696__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2696__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2696__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2696__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2696__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2696__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2696__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2696__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2708__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2708__part 
                            = vlSelf->__Vfunc_leading_zero32__2708__value;
                        vlSelf->__Vfunc_leading_zero32__2708__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2708__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2708__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2708__count)));
                            vlSelf->__Vfunc_leading_zero32__2708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2708__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2708__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2708__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2708__count)));
                            vlSelf->__Vfunc_leading_zero32__2708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2708__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2708__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2708__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2708__count)));
                            vlSelf->__Vfunc_leading_zero32__2708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2708__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2708__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2708__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2708__count)));
                            vlSelf->__Vfunc_leading_zero32__2708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2708__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2708__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2708__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2708__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2708__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2708__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2708__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2708__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2720__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2720__part 
                            = vlSelf->__Vfunc_leading_zero32__2720__value;
                        vlSelf->__Vfunc_leading_zero32__2720__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2720__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2720__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2720__count)));
                            vlSelf->__Vfunc_leading_zero32__2720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2720__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2720__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2720__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2720__count)));
                            vlSelf->__Vfunc_leading_zero32__2720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2720__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2720__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2720__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2720__count)));
                            vlSelf->__Vfunc_leading_zero32__2720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2720__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2720__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2720__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2720__count)));
                            vlSelf->__Vfunc_leading_zero32__2720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2720__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2720__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2720__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2720__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2720__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2720__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2720__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2720__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2732__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2732__part 
                            = vlSelf->__Vfunc_leading_zero32__2732__value;
                        vlSelf->__Vfunc_leading_zero32__2732__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2732__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2732__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2732__count)));
                            vlSelf->__Vfunc_leading_zero32__2732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2732__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2732__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2732__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2732__count)));
                            vlSelf->__Vfunc_leading_zero32__2732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2732__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2732__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2732__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2732__count)));
                            vlSelf->__Vfunc_leading_zero32__2732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2732__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2732__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2732__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2732__count)));
                            vlSelf->__Vfunc_leading_zero32__2732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2732__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2732__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2732__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2732__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2732__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2732__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2732__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2732__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2744__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2744__part 
                            = vlSelf->__Vfunc_leading_zero32__2744__value;
                        vlSelf->__Vfunc_leading_zero32__2744__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2744__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2744__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2744__count)));
                            vlSelf->__Vfunc_leading_zero32__2744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2744__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2744__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2744__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2744__count)));
                            vlSelf->__Vfunc_leading_zero32__2744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2744__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2744__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2744__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2744__count)));
                            vlSelf->__Vfunc_leading_zero32__2744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2744__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2744__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2744__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2744__count)));
                            vlSelf->__Vfunc_leading_zero32__2744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2744__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2744__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2744__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2744__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2744__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2744__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2744__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2744__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2756__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2756__part 
                            = vlSelf->__Vfunc_leading_zero32__2756__value;
                        vlSelf->__Vfunc_leading_zero32__2756__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2756__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2756__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2756__count)));
                            vlSelf->__Vfunc_leading_zero32__2756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2756__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2756__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2756__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2756__count)));
                            vlSelf->__Vfunc_leading_zero32__2756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2756__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2756__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2756__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2756__count)));
                            vlSelf->__Vfunc_leading_zero32__2756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2756__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2756__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2756__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2756__count)));
                            vlSelf->__Vfunc_leading_zero32__2756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2756__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2756__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2756__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2756__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2756__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2756__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2756__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2756__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2768__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2768__part 
                            = vlSelf->__Vfunc_leading_zero32__2768__value;
                        vlSelf->__Vfunc_leading_zero32__2768__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2768__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2768__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2768__count)));
                            vlSelf->__Vfunc_leading_zero32__2768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2768__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2768__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2768__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2768__count)));
                            vlSelf->__Vfunc_leading_zero32__2768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2768__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2768__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2768__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2768__count)));
                            vlSelf->__Vfunc_leading_zero32__2768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2768__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2768__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2768__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2768__count)));
                            vlSelf->__Vfunc_leading_zero32__2768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2768__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2768__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2768__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2768__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2768__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2768__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2768__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2768__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2780__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2780__part 
                            = vlSelf->__Vfunc_leading_zero32__2780__value;
                        vlSelf->__Vfunc_leading_zero32__2780__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2780__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2780__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2780__count)));
                            vlSelf->__Vfunc_leading_zero32__2780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2780__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2780__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2780__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2780__count)));
                            vlSelf->__Vfunc_leading_zero32__2780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2780__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2780__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2780__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2780__count)));
                            vlSelf->__Vfunc_leading_zero32__2780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2780__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2780__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2780__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2780__count)));
                            vlSelf->__Vfunc_leading_zero32__2780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2780__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2780__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2780__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2780__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2780__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2780__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2780__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2780__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2792__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2792__part 
                            = vlSelf->__Vfunc_leading_zero32__2792__value;
                        vlSelf->__Vfunc_leading_zero32__2792__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2792__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2792__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2792__count)));
                            vlSelf->__Vfunc_leading_zero32__2792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2792__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2792__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2792__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2792__count)));
                            vlSelf->__Vfunc_leading_zero32__2792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2792__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2792__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2792__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2792__count)));
                            vlSelf->__Vfunc_leading_zero32__2792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2792__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2792__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2792__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2792__count)));
                            vlSelf->__Vfunc_leading_zero32__2792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2792__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2792__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2792__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2792__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2792__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2792__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2792__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2792__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2804__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2804__part 
                            = vlSelf->__Vfunc_leading_zero32__2804__value;
                        vlSelf->__Vfunc_leading_zero32__2804__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2804__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2804__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2804__count)));
                            vlSelf->__Vfunc_leading_zero32__2804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2804__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2804__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2804__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2804__count)));
                            vlSelf->__Vfunc_leading_zero32__2804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2804__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2804__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2804__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2804__count)));
                            vlSelf->__Vfunc_leading_zero32__2804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2804__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2804__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2804__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2804__count)));
                            vlSelf->__Vfunc_leading_zero32__2804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2804__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2804__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2804__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2804__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2804__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2804__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2804__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2804__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2816__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2816__part 
                            = vlSelf->__Vfunc_leading_zero32__2816__value;
                        vlSelf->__Vfunc_leading_zero32__2816__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2816__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2816__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2816__count)));
                            vlSelf->__Vfunc_leading_zero32__2816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2816__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2816__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2816__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2816__count)));
                            vlSelf->__Vfunc_leading_zero32__2816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2816__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2816__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2816__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2816__count)));
                            vlSelf->__Vfunc_leading_zero32__2816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2816__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2816__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2816__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2816__count)));
                            vlSelf->__Vfunc_leading_zero32__2816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2816__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2816__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2816__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2816__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2816__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2816__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2816__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2816__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2828__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2828__part 
                            = vlSelf->__Vfunc_leading_zero32__2828__value;
                        vlSelf->__Vfunc_leading_zero32__2828__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2828__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2828__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2828__count)));
                            vlSelf->__Vfunc_leading_zero32__2828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2828__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2828__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2828__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2828__count)));
                            vlSelf->__Vfunc_leading_zero32__2828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2828__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2828__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2828__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2828__count)));
                            vlSelf->__Vfunc_leading_zero32__2828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2828__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2828__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2828__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2828__count)));
                            vlSelf->__Vfunc_leading_zero32__2828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2828__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2828__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2828__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2828__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2828__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2828__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2828__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2828__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2840__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2840__part 
                            = vlSelf->__Vfunc_leading_zero32__2840__value;
                        vlSelf->__Vfunc_leading_zero32__2840__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2840__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2840__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2840__count)));
                            vlSelf->__Vfunc_leading_zero32__2840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2840__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2840__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2840__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2840__count)));
                            vlSelf->__Vfunc_leading_zero32__2840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2840__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2840__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2840__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2840__count)));
                            vlSelf->__Vfunc_leading_zero32__2840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2840__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2840__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2840__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2840__count)));
                            vlSelf->__Vfunc_leading_zero32__2840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2840__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2840__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2840__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2840__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2840__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2840__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2840__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2840__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2852__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2852__part 
                            = vlSelf->__Vfunc_leading_zero32__2852__value;
                        vlSelf->__Vfunc_leading_zero32__2852__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2852__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2852__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2852__count)));
                            vlSelf->__Vfunc_leading_zero32__2852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2852__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2852__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2852__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2852__count)));
                            vlSelf->__Vfunc_leading_zero32__2852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2852__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2852__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2852__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2852__count)));
                            vlSelf->__Vfunc_leading_zero32__2852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2852__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2852__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2852__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2852__count)));
                            vlSelf->__Vfunc_leading_zero32__2852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2852__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2852__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2852__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2852__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2852__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2852__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2852__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2852__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2864__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2864__part 
                            = vlSelf->__Vfunc_leading_zero32__2864__value;
                        vlSelf->__Vfunc_leading_zero32__2864__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2864__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2864__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2864__count)));
                            vlSelf->__Vfunc_leading_zero32__2864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2864__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2864__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2864__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2864__count)));
                            vlSelf->__Vfunc_leading_zero32__2864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2864__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2864__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2864__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2864__count)));
                            vlSelf->__Vfunc_leading_zero32__2864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2864__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2864__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2864__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2864__count)));
                            vlSelf->__Vfunc_leading_zero32__2864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2864__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2864__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2864__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2864__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2864__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2864__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2864__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2864__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2876__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2876__part 
                            = vlSelf->__Vfunc_leading_zero32__2876__value;
                        vlSelf->__Vfunc_leading_zero32__2876__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2876__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2876__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2876__count)));
                            vlSelf->__Vfunc_leading_zero32__2876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2876__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2876__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2876__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2876__count)));
                            vlSelf->__Vfunc_leading_zero32__2876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2876__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2876__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2876__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2876__count)));
                            vlSelf->__Vfunc_leading_zero32__2876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2876__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2876__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2876__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2876__count)));
                            vlSelf->__Vfunc_leading_zero32__2876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2876__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2876__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2876__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2876__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2876__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2876__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2876__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2876__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2888__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2888__part 
                            = vlSelf->__Vfunc_leading_zero32__2888__value;
                        vlSelf->__Vfunc_leading_zero32__2888__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2888__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2888__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2888__count)));
                            vlSelf->__Vfunc_leading_zero32__2888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2888__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2888__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2888__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2888__count)));
                            vlSelf->__Vfunc_leading_zero32__2888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2888__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2888__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2888__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2888__count)));
                            vlSelf->__Vfunc_leading_zero32__2888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2888__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2888__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2888__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2888__count)));
                            vlSelf->__Vfunc_leading_zero32__2888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2888__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2888__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2888__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2888__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2888__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2888__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2888__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2888__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2900__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2900__part 
                            = vlSelf->__Vfunc_leading_zero32__2900__value;
                        vlSelf->__Vfunc_leading_zero32__2900__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2900__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2900__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2900__count)));
                            vlSelf->__Vfunc_leading_zero32__2900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2900__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2900__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2900__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2900__count)));
                            vlSelf->__Vfunc_leading_zero32__2900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2900__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2900__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2900__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2900__count)));
                            vlSelf->__Vfunc_leading_zero32__2900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2900__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2900__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2900__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2900__count)));
                            vlSelf->__Vfunc_leading_zero32__2900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2900__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2900__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2900__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2900__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2900__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2900__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2900__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2900__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2912__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2912__part 
                            = vlSelf->__Vfunc_leading_zero32__2912__value;
                        vlSelf->__Vfunc_leading_zero32__2912__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2912__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2912__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2912__count)));
                            vlSelf->__Vfunc_leading_zero32__2912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2912__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2912__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2912__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2912__count)));
                            vlSelf->__Vfunc_leading_zero32__2912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2912__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2912__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2912__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2912__count)));
                            vlSelf->__Vfunc_leading_zero32__2912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2912__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2912__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2912__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2912__count)));
                            vlSelf->__Vfunc_leading_zero32__2912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2912__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2912__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2912__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2912__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2912__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2912__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2912__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2912__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2924__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2924__part 
                            = vlSelf->__Vfunc_leading_zero32__2924__value;
                        vlSelf->__Vfunc_leading_zero32__2924__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2924__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2924__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2924__count)));
                            vlSelf->__Vfunc_leading_zero32__2924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2924__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2924__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2924__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2924__count)));
                            vlSelf->__Vfunc_leading_zero32__2924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2924__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2924__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2924__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2924__count)));
                            vlSelf->__Vfunc_leading_zero32__2924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2924__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2924__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2924__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2924__count)));
                            vlSelf->__Vfunc_leading_zero32__2924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2924__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2924__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2924__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2924__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2924__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2924__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2924__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2924__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2936__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2936__part 
                            = vlSelf->__Vfunc_leading_zero32__2936__value;
                        vlSelf->__Vfunc_leading_zero32__2936__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2936__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2936__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2936__count)));
                            vlSelf->__Vfunc_leading_zero32__2936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2936__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2936__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2936__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2936__count)));
                            vlSelf->__Vfunc_leading_zero32__2936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2936__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2936__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2936__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2936__count)));
                            vlSelf->__Vfunc_leading_zero32__2936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2936__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2936__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2936__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2936__count)));
                            vlSelf->__Vfunc_leading_zero32__2936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2936__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2936__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2936__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2936__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2936__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2936__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2936__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2936__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2948__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2948__part 
                            = vlSelf->__Vfunc_leading_zero32__2948__value;
                        vlSelf->__Vfunc_leading_zero32__2948__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2948__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2948__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2948__count)));
                            vlSelf->__Vfunc_leading_zero32__2948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2948__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2948__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2948__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2948__count)));
                            vlSelf->__Vfunc_leading_zero32__2948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2948__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2948__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2948__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2948__count)));
                            vlSelf->__Vfunc_leading_zero32__2948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2948__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2948__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2948__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2948__count)));
                            vlSelf->__Vfunc_leading_zero32__2948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2948__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2948__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2948__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2948__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2948__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2948__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2948__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2948__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2960__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2960__part 
                            = vlSelf->__Vfunc_leading_zero32__2960__value;
                        vlSelf->__Vfunc_leading_zero32__2960__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2960__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2960__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2960__count)));
                            vlSelf->__Vfunc_leading_zero32__2960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2960__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2960__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2960__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2960__count)));
                            vlSelf->__Vfunc_leading_zero32__2960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2960__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2960__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2960__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2960__count)));
                            vlSelf->__Vfunc_leading_zero32__2960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2960__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2960__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2960__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2960__count)));
                            vlSelf->__Vfunc_leading_zero32__2960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2960__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2960__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2960__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2960__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2960__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2960__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2960__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2960__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2972__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2972__part 
                            = vlSelf->__Vfunc_leading_zero32__2972__value;
                        vlSelf->__Vfunc_leading_zero32__2972__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2972__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2972__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2972__count)));
                            vlSelf->__Vfunc_leading_zero32__2972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2972__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2972__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2972__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2972__count)));
                            vlSelf->__Vfunc_leading_zero32__2972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2972__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2972__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2972__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2972__count)));
                            vlSelf->__Vfunc_leading_zero32__2972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2972__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2972__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2972__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2972__count)));
                            vlSelf->__Vfunc_leading_zero32__2972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2972__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2972__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2972__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2972__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2972__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2972__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2972__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2972__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2984__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2984__part 
                            = vlSelf->__Vfunc_leading_zero32__2984__value;
                        vlSelf->__Vfunc_leading_zero32__2984__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2984__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2984__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2984__count)));
                            vlSelf->__Vfunc_leading_zero32__2984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2984__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2984__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2984__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2984__count)));
                            vlSelf->__Vfunc_leading_zero32__2984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2984__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2984__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2984__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2984__count)));
                            vlSelf->__Vfunc_leading_zero32__2984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2984__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2984__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2984__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2984__count)));
                            vlSelf->__Vfunc_leading_zero32__2984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2984__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2984__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2984__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2984__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2984__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2984__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2984__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2984__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2996__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2996__part 
                            = vlSelf->__Vfunc_leading_zero32__2996__value;
                        vlSelf->__Vfunc_leading_zero32__2996__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2996__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2996__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2996__count)));
                            vlSelf->__Vfunc_leading_zero32__2996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2996__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2996__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2996__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2996__count)));
                            vlSelf->__Vfunc_leading_zero32__2996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2996__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2996__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2996__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2996__count)));
                            vlSelf->__Vfunc_leading_zero32__2996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2996__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2996__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2996__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2996__count)));
                            vlSelf->__Vfunc_leading_zero32__2996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2996__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2996__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2996__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2996__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2996__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2996__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2996__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2996__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3008__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3008__part 
                            = vlSelf->__Vfunc_leading_zero32__3008__value;
                        vlSelf->__Vfunc_leading_zero32__3008__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3008__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3008__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3008__count)));
                            vlSelf->__Vfunc_leading_zero32__3008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3008__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3008__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3008__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3008__count)));
                            vlSelf->__Vfunc_leading_zero32__3008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3008__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3008__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3008__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3008__count)));
                            vlSelf->__Vfunc_leading_zero32__3008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3008__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3008__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3008__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3008__count)));
                            vlSelf->__Vfunc_leading_zero32__3008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3008__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3008__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3008__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3008__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3008__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3008__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3008__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3008__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3020__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3020__part 
                            = vlSelf->__Vfunc_leading_zero32__3020__value;
                        vlSelf->__Vfunc_leading_zero32__3020__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3020__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3020__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3020__count)));
                            vlSelf->__Vfunc_leading_zero32__3020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3020__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3020__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3020__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3020__count)));
                            vlSelf->__Vfunc_leading_zero32__3020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3020__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3020__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3020__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3020__count)));
                            vlSelf->__Vfunc_leading_zero32__3020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3020__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3020__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3020__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3020__count)));
                            vlSelf->__Vfunc_leading_zero32__3020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3020__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3020__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3020__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3020__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3020__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3020__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3020__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3020__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3032__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3032__part 
                            = vlSelf->__Vfunc_leading_zero32__3032__value;
                        vlSelf->__Vfunc_leading_zero32__3032__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3032__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3032__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3032__count)));
                            vlSelf->__Vfunc_leading_zero32__3032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3032__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3032__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3032__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3032__count)));
                            vlSelf->__Vfunc_leading_zero32__3032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3032__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3032__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3032__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3032__count)));
                            vlSelf->__Vfunc_leading_zero32__3032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3032__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3032__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3032__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3032__count)));
                            vlSelf->__Vfunc_leading_zero32__3032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3032__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3032__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3032__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3032__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3032__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3032__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3032__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3032__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3044__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3044__part 
                            = vlSelf->__Vfunc_leading_zero32__3044__value;
                        vlSelf->__Vfunc_leading_zero32__3044__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3044__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3044__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3044__count)));
                            vlSelf->__Vfunc_leading_zero32__3044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3044__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3044__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3044__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3044__count)));
                            vlSelf->__Vfunc_leading_zero32__3044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3044__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3044__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3044__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3044__count)));
                            vlSelf->__Vfunc_leading_zero32__3044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3044__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3044__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3044__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3044__count)));
                            vlSelf->__Vfunc_leading_zero32__3044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3044__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3044__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3044__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3044__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3044__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3044__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3044__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3044__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3056__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3056__part 
                            = vlSelf->__Vfunc_leading_zero32__3056__value;
                        vlSelf->__Vfunc_leading_zero32__3056__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3056__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3056__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3056__count)));
                            vlSelf->__Vfunc_leading_zero32__3056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3056__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3056__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3056__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3056__count)));
                            vlSelf->__Vfunc_leading_zero32__3056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3056__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3056__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3056__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3056__count)));
                            vlSelf->__Vfunc_leading_zero32__3056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3056__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3056__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3056__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3056__count)));
                            vlSelf->__Vfunc_leading_zero32__3056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3056__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3056__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3056__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3056__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3056__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3056__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3056__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3056__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3068__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3068__part 
                            = vlSelf->__Vfunc_leading_zero32__3068__value;
                        vlSelf->__Vfunc_leading_zero32__3068__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3068__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3068__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3068__count)));
                            vlSelf->__Vfunc_leading_zero32__3068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3068__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3068__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3068__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3068__count)));
                            vlSelf->__Vfunc_leading_zero32__3068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3068__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3068__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3068__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3068__count)));
                            vlSelf->__Vfunc_leading_zero32__3068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3068__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3068__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3068__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3068__count)));
                            vlSelf->__Vfunc_leading_zero32__3068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3068__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3068__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3068__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3068__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3068__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3068__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3068__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3068__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3080__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3080__part 
                            = vlSelf->__Vfunc_leading_zero32__3080__value;
                        vlSelf->__Vfunc_leading_zero32__3080__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3080__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3080__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3080__count)));
                            vlSelf->__Vfunc_leading_zero32__3080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3080__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3080__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3080__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3080__count)));
                            vlSelf->__Vfunc_leading_zero32__3080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3080__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3080__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3080__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3080__count)));
                            vlSelf->__Vfunc_leading_zero32__3080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3080__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3080__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3080__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3080__count)));
                            vlSelf->__Vfunc_leading_zero32__3080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3080__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3080__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3080__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3080__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3080__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3080__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3080__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3080__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3092__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3092__part 
                            = vlSelf->__Vfunc_leading_zero32__3092__value;
                        vlSelf->__Vfunc_leading_zero32__3092__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3092__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3092__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3092__count)));
                            vlSelf->__Vfunc_leading_zero32__3092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3092__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3092__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3092__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3092__count)));
                            vlSelf->__Vfunc_leading_zero32__3092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3092__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3092__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3092__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3092__count)));
                            vlSelf->__Vfunc_leading_zero32__3092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3092__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3092__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3092__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3092__count)));
                            vlSelf->__Vfunc_leading_zero32__3092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3092__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3092__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3092__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3092__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3092__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3092__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3092__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3092__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3104__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3104__part 
                            = vlSelf->__Vfunc_leading_zero32__3104__value;
                        vlSelf->__Vfunc_leading_zero32__3104__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3104__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3104__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3104__count)));
                            vlSelf->__Vfunc_leading_zero32__3104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3104__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3104__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3104__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3104__count)));
                            vlSelf->__Vfunc_leading_zero32__3104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3104__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3104__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3104__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3104__count)));
                            vlSelf->__Vfunc_leading_zero32__3104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3104__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3104__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3104__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3104__count)));
                            vlSelf->__Vfunc_leading_zero32__3104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3104__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3104__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3104__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3104__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3104__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3104__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3104__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3104__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3116__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3116__part 
                            = vlSelf->__Vfunc_leading_zero32__3116__value;
                        vlSelf->__Vfunc_leading_zero32__3116__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3116__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3116__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3116__count)));
                            vlSelf->__Vfunc_leading_zero32__3116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3116__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3116__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3116__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3116__count)));
                            vlSelf->__Vfunc_leading_zero32__3116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3116__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3116__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3116__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3116__count)));
                            vlSelf->__Vfunc_leading_zero32__3116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3116__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3116__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3116__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3116__count)));
                            vlSelf->__Vfunc_leading_zero32__3116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3116__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3116__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3116__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3116__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3116__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3116__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3116__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3116__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3128__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3128__part 
                            = vlSelf->__Vfunc_leading_zero32__3128__value;
                        vlSelf->__Vfunc_leading_zero32__3128__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3128__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3128__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3128__count)));
                            vlSelf->__Vfunc_leading_zero32__3128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3128__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3128__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3128__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3128__count)));
                            vlSelf->__Vfunc_leading_zero32__3128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3128__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3128__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3128__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3128__count)));
                            vlSelf->__Vfunc_leading_zero32__3128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3128__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3128__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3128__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3128__count)));
                            vlSelf->__Vfunc_leading_zero32__3128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3128__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3128__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3128__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3128__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3128__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3128__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3128__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3128__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3140__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3140__part 
                            = vlSelf->__Vfunc_leading_zero32__3140__value;
                        vlSelf->__Vfunc_leading_zero32__3140__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3140__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3140__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3140__count)));
                            vlSelf->__Vfunc_leading_zero32__3140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3140__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3140__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3140__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3140__count)));
                            vlSelf->__Vfunc_leading_zero32__3140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3140__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3140__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3140__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3140__count)));
                            vlSelf->__Vfunc_leading_zero32__3140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3140__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3140__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3140__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3140__count)));
                            vlSelf->__Vfunc_leading_zero32__3140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3140__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3140__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3140__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3140__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3140__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3140__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3140__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3140__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3152__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3152__part 
                            = vlSelf->__Vfunc_leading_zero32__3152__value;
                        vlSelf->__Vfunc_leading_zero32__3152__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3152__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3152__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3152__count)));
                            vlSelf->__Vfunc_leading_zero32__3152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3152__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3152__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3152__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3152__count)));
                            vlSelf->__Vfunc_leading_zero32__3152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3152__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3152__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3152__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3152__count)));
                            vlSelf->__Vfunc_leading_zero32__3152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3152__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3152__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3152__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3152__count)));
                            vlSelf->__Vfunc_leading_zero32__3152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3152__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3152__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3152__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3152__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3152__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3152__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3152__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3152__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3164__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3164__part 
                            = vlSelf->__Vfunc_leading_zero32__3164__value;
                        vlSelf->__Vfunc_leading_zero32__3164__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3164__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3164__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3164__count)));
                            vlSelf->__Vfunc_leading_zero32__3164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3164__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3164__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3164__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3164__count)));
                            vlSelf->__Vfunc_leading_zero32__3164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3164__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3164__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3164__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3164__count)));
                            vlSelf->__Vfunc_leading_zero32__3164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3164__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3164__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3164__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3164__count)));
                            vlSelf->__Vfunc_leading_zero32__3164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3164__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3164__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3164__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3164__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3164__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3164__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3164__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3164__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3176__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3176__part 
                            = vlSelf->__Vfunc_leading_zero32__3176__value;
                        vlSelf->__Vfunc_leading_zero32__3176__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3176__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3176__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3176__count)));
                            vlSelf->__Vfunc_leading_zero32__3176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3176__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3176__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3176__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3176__count)));
                            vlSelf->__Vfunc_leading_zero32__3176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3176__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3176__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3176__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3176__count)));
                            vlSelf->__Vfunc_leading_zero32__3176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3176__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3176__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3176__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3176__count)));
                            vlSelf->__Vfunc_leading_zero32__3176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3176__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3176__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3176__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3176__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3176__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3176__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3176__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3176__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3188__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3188__part 
                            = vlSelf->__Vfunc_leading_zero32__3188__value;
                        vlSelf->__Vfunc_leading_zero32__3188__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3188__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3188__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3188__count)));
                            vlSelf->__Vfunc_leading_zero32__3188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3188__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3188__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3188__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3188__count)));
                            vlSelf->__Vfunc_leading_zero32__3188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3188__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3188__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3188__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3188__count)));
                            vlSelf->__Vfunc_leading_zero32__3188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3188__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3188__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3188__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3188__count)));
                            vlSelf->__Vfunc_leading_zero32__3188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3188__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3188__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3188__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3188__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3188__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3188__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3188__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3188__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3200__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3200__part 
                            = vlSelf->__Vfunc_leading_zero32__3200__value;
                        vlSelf->__Vfunc_leading_zero32__3200__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3200__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3200__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3200__count)));
                            vlSelf->__Vfunc_leading_zero32__3200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3200__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3200__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3200__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3200__count)));
                            vlSelf->__Vfunc_leading_zero32__3200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3200__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3200__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3200__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3200__count)));
                            vlSelf->__Vfunc_leading_zero32__3200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3200__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3200__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3200__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3200__count)));
                            vlSelf->__Vfunc_leading_zero32__3200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3200__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3200__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3200__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3200__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3200__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3200__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3200__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3200__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3212__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3212__part 
                            = vlSelf->__Vfunc_leading_zero32__3212__value;
                        vlSelf->__Vfunc_leading_zero32__3212__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3212__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3212__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3212__count)));
                            vlSelf->__Vfunc_leading_zero32__3212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3212__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3212__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3212__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3212__count)));
                            vlSelf->__Vfunc_leading_zero32__3212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3212__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3212__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3212__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3212__count)));
                            vlSelf->__Vfunc_leading_zero32__3212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3212__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3212__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3212__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3212__count)));
                            vlSelf->__Vfunc_leading_zero32__3212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3212__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3212__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3212__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3212__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3212__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3212__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3212__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3212__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3224__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3224__part 
                            = vlSelf->__Vfunc_leading_zero32__3224__value;
                        vlSelf->__Vfunc_leading_zero32__3224__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3224__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3224__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3224__count)));
                            vlSelf->__Vfunc_leading_zero32__3224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3224__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3224__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3224__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3224__count)));
                            vlSelf->__Vfunc_leading_zero32__3224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3224__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3224__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3224__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3224__count)));
                            vlSelf->__Vfunc_leading_zero32__3224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3224__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3224__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3224__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3224__count)));
                            vlSelf->__Vfunc_leading_zero32__3224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3224__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3224__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3224__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3224__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3224__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3224__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3224__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3224__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3236__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3236__part 
                            = vlSelf->__Vfunc_leading_zero32__3236__value;
                        vlSelf->__Vfunc_leading_zero32__3236__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3236__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3236__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3236__count)));
                            vlSelf->__Vfunc_leading_zero32__3236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3236__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3236__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3236__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3236__count)));
                            vlSelf->__Vfunc_leading_zero32__3236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3236__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3236__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3236__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3236__count)));
                            vlSelf->__Vfunc_leading_zero32__3236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3236__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3236__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3236__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3236__count)));
                            vlSelf->__Vfunc_leading_zero32__3236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3236__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3236__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3236__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3236__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3236__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3236__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3236__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3236__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3248__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3248__part 
                            = vlSelf->__Vfunc_leading_zero32__3248__value;
                        vlSelf->__Vfunc_leading_zero32__3248__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3248__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3248__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3248__count)));
                            vlSelf->__Vfunc_leading_zero32__3248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3248__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3248__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3248__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3248__count)));
                            vlSelf->__Vfunc_leading_zero32__3248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3248__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3248__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3248__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3248__count)));
                            vlSelf->__Vfunc_leading_zero32__3248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3248__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3248__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3248__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3248__count)));
                            vlSelf->__Vfunc_leading_zero32__3248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3248__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3248__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3248__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3248__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3248__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3248__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3248__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3248__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3260__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3260__part 
                            = vlSelf->__Vfunc_leading_zero32__3260__value;
                        vlSelf->__Vfunc_leading_zero32__3260__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3260__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3260__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3260__count)));
                            vlSelf->__Vfunc_leading_zero32__3260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3260__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3260__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3260__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3260__count)));
                            vlSelf->__Vfunc_leading_zero32__3260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3260__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3260__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3260__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3260__count)));
                            vlSelf->__Vfunc_leading_zero32__3260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3260__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3260__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3260__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3260__count)));
                            vlSelf->__Vfunc_leading_zero32__3260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3260__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3260__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3260__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3260__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3260__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3260__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3260__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3260__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3272__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3272__part 
                            = vlSelf->__Vfunc_leading_zero32__3272__value;
                        vlSelf->__Vfunc_leading_zero32__3272__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3272__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3272__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3272__count)));
                            vlSelf->__Vfunc_leading_zero32__3272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3272__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3272__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3272__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3272__count)));
                            vlSelf->__Vfunc_leading_zero32__3272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3272__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3272__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3272__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3272__count)));
                            vlSelf->__Vfunc_leading_zero32__3272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3272__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3272__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3272__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3272__count)));
                            vlSelf->__Vfunc_leading_zero32__3272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3272__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3272__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3272__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3272__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3272__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3272__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3272__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3272__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3284__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3284__part 
                            = vlSelf->__Vfunc_leading_zero32__3284__value;
                        vlSelf->__Vfunc_leading_zero32__3284__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3284__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3284__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3284__count)));
                            vlSelf->__Vfunc_leading_zero32__3284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3284__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3284__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3284__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3284__count)));
                            vlSelf->__Vfunc_leading_zero32__3284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3284__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3284__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3284__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3284__count)));
                            vlSelf->__Vfunc_leading_zero32__3284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3284__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3284__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3284__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3284__count)));
                            vlSelf->__Vfunc_leading_zero32__3284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3284__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3284__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3284__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3284__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3284__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3284__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3284__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3284__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3296__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3296__part 
                            = vlSelf->__Vfunc_leading_zero32__3296__value;
                        vlSelf->__Vfunc_leading_zero32__3296__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3296__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3296__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3296__count)));
                            vlSelf->__Vfunc_leading_zero32__3296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3296__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3296__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3296__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3296__count)));
                            vlSelf->__Vfunc_leading_zero32__3296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3296__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3296__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3296__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3296__count)));
                            vlSelf->__Vfunc_leading_zero32__3296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3296__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3296__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3296__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3296__count)));
                            vlSelf->__Vfunc_leading_zero32__3296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3296__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3296__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3296__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3296__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3296__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3296__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3296__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3296__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3308__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3308__part 
                            = vlSelf->__Vfunc_leading_zero32__3308__value;
                        vlSelf->__Vfunc_leading_zero32__3308__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3308__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3308__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3308__count)));
                            vlSelf->__Vfunc_leading_zero32__3308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3308__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3308__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3308__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3308__count)));
                            vlSelf->__Vfunc_leading_zero32__3308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3308__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3308__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3308__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3308__count)));
                            vlSelf->__Vfunc_leading_zero32__3308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3308__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3308__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3308__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3308__count)));
                            vlSelf->__Vfunc_leading_zero32__3308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3308__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3308__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3308__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3308__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3308__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3308__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3308__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3308__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3320__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3320__part 
                            = vlSelf->__Vfunc_leading_zero32__3320__value;
                        vlSelf->__Vfunc_leading_zero32__3320__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3320__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3320__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3320__count)));
                            vlSelf->__Vfunc_leading_zero32__3320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3320__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3320__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3320__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3320__count)));
                            vlSelf->__Vfunc_leading_zero32__3320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3320__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3320__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3320__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3320__count)));
                            vlSelf->__Vfunc_leading_zero32__3320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3320__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3320__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3320__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3320__count)));
                            vlSelf->__Vfunc_leading_zero32__3320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3320__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3320__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3320__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3320__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3320__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3320__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3320__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3320__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3332__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3332__part 
                            = vlSelf->__Vfunc_leading_zero32__3332__value;
                        vlSelf->__Vfunc_leading_zero32__3332__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3332__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3332__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3332__count)));
                            vlSelf->__Vfunc_leading_zero32__3332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3332__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3332__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3332__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3332__count)));
                            vlSelf->__Vfunc_leading_zero32__3332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3332__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3332__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3332__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3332__count)));
                            vlSelf->__Vfunc_leading_zero32__3332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3332__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3332__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3332__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3332__count)));
                            vlSelf->__Vfunc_leading_zero32__3332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3332__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3332__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3332__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3332__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3332__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3332__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3332__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3332__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3344__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3344__part 
                            = vlSelf->__Vfunc_leading_zero32__3344__value;
                        vlSelf->__Vfunc_leading_zero32__3344__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3344__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3344__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3344__count)));
                            vlSelf->__Vfunc_leading_zero32__3344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3344__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3344__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3344__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3344__count)));
                            vlSelf->__Vfunc_leading_zero32__3344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3344__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3344__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3344__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3344__count)));
                            vlSelf->__Vfunc_leading_zero32__3344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3344__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3344__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3344__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3344__count)));
                            vlSelf->__Vfunc_leading_zero32__3344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3344__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3344__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3344__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3344__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3344__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3344__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3344__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3344__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3356__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3356__part 
                            = vlSelf->__Vfunc_leading_zero32__3356__value;
                        vlSelf->__Vfunc_leading_zero32__3356__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3356__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3356__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3356__count)));
                            vlSelf->__Vfunc_leading_zero32__3356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3356__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3356__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3356__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3356__count)));
                            vlSelf->__Vfunc_leading_zero32__3356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3356__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3356__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3356__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3356__count)));
                            vlSelf->__Vfunc_leading_zero32__3356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3356__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3356__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3356__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3356__count)));
                            vlSelf->__Vfunc_leading_zero32__3356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3356__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3356__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3356__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3356__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3356__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3356__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3356__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3356__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3368__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3368__part 
                            = vlSelf->__Vfunc_leading_zero32__3368__value;
                        vlSelf->__Vfunc_leading_zero32__3368__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3368__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3368__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3368__count)));
                            vlSelf->__Vfunc_leading_zero32__3368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3368__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3368__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3368__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3368__count)));
                            vlSelf->__Vfunc_leading_zero32__3368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3368__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3368__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3368__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3368__count)));
                            vlSelf->__Vfunc_leading_zero32__3368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3368__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3368__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3368__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3368__count)));
                            vlSelf->__Vfunc_leading_zero32__3368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3368__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3368__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3368__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3368__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3368__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3368__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3368__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3368__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3380__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3380__part 
                            = vlSelf->__Vfunc_leading_zero32__3380__value;
                        vlSelf->__Vfunc_leading_zero32__3380__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3380__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3380__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3380__count)));
                            vlSelf->__Vfunc_leading_zero32__3380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3380__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3380__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3380__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3380__count)));
                            vlSelf->__Vfunc_leading_zero32__3380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3380__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3380__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3380__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3380__count)));
                            vlSelf->__Vfunc_leading_zero32__3380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3380__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3380__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3380__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3380__count)));
                            vlSelf->__Vfunc_leading_zero32__3380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3380__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3380__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3380__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3380__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3380__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3380__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3380__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3380__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3392__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3392__part 
                            = vlSelf->__Vfunc_leading_zero32__3392__value;
                        vlSelf->__Vfunc_leading_zero32__3392__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3392__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3392__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3392__count)));
                            vlSelf->__Vfunc_leading_zero32__3392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3392__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3392__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3392__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3392__count)));
                            vlSelf->__Vfunc_leading_zero32__3392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3392__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3392__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3392__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3392__count)));
                            vlSelf->__Vfunc_leading_zero32__3392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3392__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3392__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3392__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3392__count)));
                            vlSelf->__Vfunc_leading_zero32__3392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3392__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3392__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3392__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3392__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3392__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3392__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3392__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3392__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3404__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3404__part 
                            = vlSelf->__Vfunc_leading_zero32__3404__value;
                        vlSelf->__Vfunc_leading_zero32__3404__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3404__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3404__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3404__count)));
                            vlSelf->__Vfunc_leading_zero32__3404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3404__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3404__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3404__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3404__count)));
                            vlSelf->__Vfunc_leading_zero32__3404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3404__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3404__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3404__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3404__count)));
                            vlSelf->__Vfunc_leading_zero32__3404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3404__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3404__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3404__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3404__count)));
                            vlSelf->__Vfunc_leading_zero32__3404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3404__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3404__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3404__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3404__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3404__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3404__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3404__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3404__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3416__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3416__part 
                            = vlSelf->__Vfunc_leading_zero32__3416__value;
                        vlSelf->__Vfunc_leading_zero32__3416__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3416__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3416__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3416__count)));
                            vlSelf->__Vfunc_leading_zero32__3416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3416__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3416__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3416__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3416__count)));
                            vlSelf->__Vfunc_leading_zero32__3416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3416__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3416__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3416__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3416__count)));
                            vlSelf->__Vfunc_leading_zero32__3416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3416__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3416__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3416__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3416__count)));
                            vlSelf->__Vfunc_leading_zero32__3416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3416__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3416__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3416__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3416__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3416__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3416__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3416__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3416__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3428__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3428__part 
                            = vlSelf->__Vfunc_leading_zero32__3428__value;
                        vlSelf->__Vfunc_leading_zero32__3428__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3428__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3428__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3428__count)));
                            vlSelf->__Vfunc_leading_zero32__3428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3428__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3428__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3428__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3428__count)));
                            vlSelf->__Vfunc_leading_zero32__3428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3428__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3428__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3428__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3428__count)));
                            vlSelf->__Vfunc_leading_zero32__3428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3428__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3428__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3428__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3428__count)));
                            vlSelf->__Vfunc_leading_zero32__3428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3428__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3428__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3428__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3428__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3428__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3428__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3428__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3428__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3440__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3440__part 
                            = vlSelf->__Vfunc_leading_zero32__3440__value;
                        vlSelf->__Vfunc_leading_zero32__3440__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3440__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3440__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3440__count)));
                            vlSelf->__Vfunc_leading_zero32__3440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3440__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3440__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3440__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3440__count)));
                            vlSelf->__Vfunc_leading_zero32__3440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3440__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3440__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3440__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3440__count)));
                            vlSelf->__Vfunc_leading_zero32__3440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3440__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3440__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3440__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3440__count)));
                            vlSelf->__Vfunc_leading_zero32__3440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3440__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3440__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3440__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3440__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3440__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3440__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3440__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3440__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3452__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3452__part 
                            = vlSelf->__Vfunc_leading_zero32__3452__value;
                        vlSelf->__Vfunc_leading_zero32__3452__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3452__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3452__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3452__count)));
                            vlSelf->__Vfunc_leading_zero32__3452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3452__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3452__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3452__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3452__count)));
                            vlSelf->__Vfunc_leading_zero32__3452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3452__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3452__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3452__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3452__count)));
                            vlSelf->__Vfunc_leading_zero32__3452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3452__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3452__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3452__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3452__count)));
                            vlSelf->__Vfunc_leading_zero32__3452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3452__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3452__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3452__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3452__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3452__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3452__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3452__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3452__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3464__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3464__part 
                            = vlSelf->__Vfunc_leading_zero32__3464__value;
                        vlSelf->__Vfunc_leading_zero32__3464__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3464__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3464__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3464__count)));
                            vlSelf->__Vfunc_leading_zero32__3464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3464__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3464__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3464__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3464__count)));
                            vlSelf->__Vfunc_leading_zero32__3464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3464__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3464__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3464__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3464__count)));
                            vlSelf->__Vfunc_leading_zero32__3464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3464__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3464__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3464__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3464__count)));
                            vlSelf->__Vfunc_leading_zero32__3464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3464__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3464__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3464__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3464__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3464__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3464__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3464__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3464__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3476__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3476__part 
                            = vlSelf->__Vfunc_leading_zero32__3476__value;
                        vlSelf->__Vfunc_leading_zero32__3476__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3476__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3476__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3476__count)));
                            vlSelf->__Vfunc_leading_zero32__3476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3476__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3476__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3476__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3476__count)));
                            vlSelf->__Vfunc_leading_zero32__3476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3476__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3476__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3476__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3476__count)));
                            vlSelf->__Vfunc_leading_zero32__3476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3476__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3476__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3476__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3476__count)));
                            vlSelf->__Vfunc_leading_zero32__3476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3476__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3476__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3476__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3476__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3476__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3476__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3476__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3476__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3488__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3488__part 
                            = vlSelf->__Vfunc_leading_zero32__3488__value;
                        vlSelf->__Vfunc_leading_zero32__3488__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3488__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3488__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3488__count)));
                            vlSelf->__Vfunc_leading_zero32__3488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3488__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3488__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3488__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3488__count)));
                            vlSelf->__Vfunc_leading_zero32__3488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3488__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3488__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3488__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3488__count)));
                            vlSelf->__Vfunc_leading_zero32__3488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3488__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3488__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3488__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3488__count)));
                            vlSelf->__Vfunc_leading_zero32__3488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3488__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3488__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3488__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3488__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3488__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3488__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3488__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3488__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3500__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3500__part 
                            = vlSelf->__Vfunc_leading_zero32__3500__value;
                        vlSelf->__Vfunc_leading_zero32__3500__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3500__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3500__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3500__count)));
                            vlSelf->__Vfunc_leading_zero32__3500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3500__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3500__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3500__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3500__count)));
                            vlSelf->__Vfunc_leading_zero32__3500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3500__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3500__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3500__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3500__count)));
                            vlSelf->__Vfunc_leading_zero32__3500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3500__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3500__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3500__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3500__count)));
                            vlSelf->__Vfunc_leading_zero32__3500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3500__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3500__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3500__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3500__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3500__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3500__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3500__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3500__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3512__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3512__part 
                            = vlSelf->__Vfunc_leading_zero32__3512__value;
                        vlSelf->__Vfunc_leading_zero32__3512__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3512__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3512__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3512__count)));
                            vlSelf->__Vfunc_leading_zero32__3512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3512__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3512__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3512__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3512__count)));
                            vlSelf->__Vfunc_leading_zero32__3512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3512__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3512__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3512__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3512__count)));
                            vlSelf->__Vfunc_leading_zero32__3512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3512__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3512__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3512__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3512__count)));
                            vlSelf->__Vfunc_leading_zero32__3512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3512__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3512__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3512__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3512__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3512__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3512__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3512__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3512__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3524__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3524__part 
                            = vlSelf->__Vfunc_leading_zero32__3524__value;
                        vlSelf->__Vfunc_leading_zero32__3524__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3524__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3524__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3524__count)));
                            vlSelf->__Vfunc_leading_zero32__3524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3524__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3524__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3524__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3524__count)));
                            vlSelf->__Vfunc_leading_zero32__3524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3524__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3524__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3524__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3524__count)));
                            vlSelf->__Vfunc_leading_zero32__3524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3524__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3524__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3524__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3524__count)));
                            vlSelf->__Vfunc_leading_zero32__3524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3524__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3524__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3524__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3524__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3524__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3524__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3524__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3524__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3536__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3536__part 
                            = vlSelf->__Vfunc_leading_zero32__3536__value;
                        vlSelf->__Vfunc_leading_zero32__3536__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3536__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3536__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3536__count)));
                            vlSelf->__Vfunc_leading_zero32__3536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3536__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3536__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3536__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3536__count)));
                            vlSelf->__Vfunc_leading_zero32__3536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3536__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3536__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3536__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3536__count)));
                            vlSelf->__Vfunc_leading_zero32__3536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3536__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3536__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3536__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3536__count)));
                            vlSelf->__Vfunc_leading_zero32__3536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3536__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3536__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3536__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3536__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3536__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3536__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3536__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3536__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3548__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3548__part 
                            = vlSelf->__Vfunc_leading_zero32__3548__value;
                        vlSelf->__Vfunc_leading_zero32__3548__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3548__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3548__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3548__count)));
                            vlSelf->__Vfunc_leading_zero32__3548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3548__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3548__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3548__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3548__count)));
                            vlSelf->__Vfunc_leading_zero32__3548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3548__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3548__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3548__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3548__count)));
                            vlSelf->__Vfunc_leading_zero32__3548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3548__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3548__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3548__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3548__count)));
                            vlSelf->__Vfunc_leading_zero32__3548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3548__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3548__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3548__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3548__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3548__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3548__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3548__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3548__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3560__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3560__part 
                            = vlSelf->__Vfunc_leading_zero32__3560__value;
                        vlSelf->__Vfunc_leading_zero32__3560__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3560__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3560__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3560__count)));
                            vlSelf->__Vfunc_leading_zero32__3560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3560__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3560__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3560__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3560__count)));
                            vlSelf->__Vfunc_leading_zero32__3560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3560__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3560__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3560__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3560__count)));
                            vlSelf->__Vfunc_leading_zero32__3560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3560__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3560__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3560__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3560__count)));
                            vlSelf->__Vfunc_leading_zero32__3560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3560__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3560__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3560__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3560__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3560__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3560__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3560__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3560__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3572__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3572__part 
                            = vlSelf->__Vfunc_leading_zero32__3572__value;
                        vlSelf->__Vfunc_leading_zero32__3572__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3572__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3572__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3572__count)));
                            vlSelf->__Vfunc_leading_zero32__3572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3572__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3572__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3572__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3572__count)));
                            vlSelf->__Vfunc_leading_zero32__3572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3572__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3572__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3572__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3572__count)));
                            vlSelf->__Vfunc_leading_zero32__3572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3572__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3572__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3572__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3572__count)));
                            vlSelf->__Vfunc_leading_zero32__3572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3572__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3572__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3572__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3572__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3572__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3572__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3572__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3572__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3584__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3584__part 
                            = vlSelf->__Vfunc_leading_zero32__3584__value;
                        vlSelf->__Vfunc_leading_zero32__3584__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3584__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3584__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3584__count)));
                            vlSelf->__Vfunc_leading_zero32__3584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3584__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3584__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3584__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3584__count)));
                            vlSelf->__Vfunc_leading_zero32__3584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3584__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3584__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3584__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3584__count)));
                            vlSelf->__Vfunc_leading_zero32__3584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3584__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3584__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3584__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3584__count)));
                            vlSelf->__Vfunc_leading_zero32__3584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3584__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3584__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3584__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3584__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3584__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3584__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3584__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3584__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3596__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3596__part 
                            = vlSelf->__Vfunc_leading_zero32__3596__value;
                        vlSelf->__Vfunc_leading_zero32__3596__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3596__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3596__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3596__count)));
                            vlSelf->__Vfunc_leading_zero32__3596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3596__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3596__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3596__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3596__count)));
                            vlSelf->__Vfunc_leading_zero32__3596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3596__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3596__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3596__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3596__count)));
                            vlSelf->__Vfunc_leading_zero32__3596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3596__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3596__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3596__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3596__count)));
                            vlSelf->__Vfunc_leading_zero32__3596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3596__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3596__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3596__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3596__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3596__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3596__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3596__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3596__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3608__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3608__part 
                            = vlSelf->__Vfunc_leading_zero32__3608__value;
                        vlSelf->__Vfunc_leading_zero32__3608__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3608__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3608__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3608__count)));
                            vlSelf->__Vfunc_leading_zero32__3608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3608__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3608__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3608__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3608__count)));
                            vlSelf->__Vfunc_leading_zero32__3608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3608__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3608__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3608__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3608__count)));
                            vlSelf->__Vfunc_leading_zero32__3608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3608__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3608__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3608__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3608__count)));
                            vlSelf->__Vfunc_leading_zero32__3608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3608__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3608__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3608__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3608__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3608__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3608__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3608__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3608__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3620__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3620__part 
                            = vlSelf->__Vfunc_leading_zero32__3620__value;
                        vlSelf->__Vfunc_leading_zero32__3620__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3620__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3620__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3620__count)));
                            vlSelf->__Vfunc_leading_zero32__3620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3620__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3620__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3620__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3620__count)));
                            vlSelf->__Vfunc_leading_zero32__3620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3620__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3620__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3620__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3620__count)));
                            vlSelf->__Vfunc_leading_zero32__3620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3620__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3620__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3620__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3620__count)));
                            vlSelf->__Vfunc_leading_zero32__3620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3620__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3620__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3620__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3620__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3620__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3620__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3620__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3620__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3632__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3632__part 
                            = vlSelf->__Vfunc_leading_zero32__3632__value;
                        vlSelf->__Vfunc_leading_zero32__3632__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3632__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3632__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3632__count)));
                            vlSelf->__Vfunc_leading_zero32__3632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3632__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3632__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3632__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3632__count)));
                            vlSelf->__Vfunc_leading_zero32__3632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3632__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3632__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3632__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3632__count)));
                            vlSelf->__Vfunc_leading_zero32__3632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3632__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3632__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3632__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3632__count)));
                            vlSelf->__Vfunc_leading_zero32__3632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3632__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3632__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3632__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3632__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3632__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3632__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3632__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3632__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3644__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3644__part 
                            = vlSelf->__Vfunc_leading_zero32__3644__value;
                        vlSelf->__Vfunc_leading_zero32__3644__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3644__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3644__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3644__count)));
                            vlSelf->__Vfunc_leading_zero32__3644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3644__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3644__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3644__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3644__count)));
                            vlSelf->__Vfunc_leading_zero32__3644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3644__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3644__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3644__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3644__count)));
                            vlSelf->__Vfunc_leading_zero32__3644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3644__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3644__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3644__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3644__count)));
                            vlSelf->__Vfunc_leading_zero32__3644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3644__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3644__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3644__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3644__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3644__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3644__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3644__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3644__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3656__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3656__part 
                            = vlSelf->__Vfunc_leading_zero32__3656__value;
                        vlSelf->__Vfunc_leading_zero32__3656__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3656__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3656__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3656__count)));
                            vlSelf->__Vfunc_leading_zero32__3656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3656__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3656__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3656__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3656__count)));
                            vlSelf->__Vfunc_leading_zero32__3656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3656__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3656__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3656__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3656__count)));
                            vlSelf->__Vfunc_leading_zero32__3656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3656__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3656__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3656__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3656__count)));
                            vlSelf->__Vfunc_leading_zero32__3656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3656__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3656__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3656__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3656__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3656__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3656__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3656__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3656__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3668__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3668__part 
                            = vlSelf->__Vfunc_leading_zero32__3668__value;
                        vlSelf->__Vfunc_leading_zero32__3668__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3668__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3668__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3668__count)));
                            vlSelf->__Vfunc_leading_zero32__3668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3668__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3668__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3668__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3668__count)));
                            vlSelf->__Vfunc_leading_zero32__3668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3668__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3668__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3668__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3668__count)));
                            vlSelf->__Vfunc_leading_zero32__3668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3668__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3668__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3668__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3668__count)));
                            vlSelf->__Vfunc_leading_zero32__3668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3668__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3668__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3668__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3668__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3668__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3668__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3668__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3668__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3680__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3680__part 
                            = vlSelf->__Vfunc_leading_zero32__3680__value;
                        vlSelf->__Vfunc_leading_zero32__3680__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3680__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3680__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3680__count)));
                            vlSelf->__Vfunc_leading_zero32__3680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3680__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3680__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3680__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3680__count)));
                            vlSelf->__Vfunc_leading_zero32__3680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3680__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3680__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3680__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3680__count)));
                            vlSelf->__Vfunc_leading_zero32__3680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3680__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3680__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3680__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3680__count)));
                            vlSelf->__Vfunc_leading_zero32__3680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3680__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3680__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3680__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3680__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3680__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3680__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3680__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3680__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3692__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3692__part 
                            = vlSelf->__Vfunc_leading_zero32__3692__value;
                        vlSelf->__Vfunc_leading_zero32__3692__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3692__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3692__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3692__count)));
                            vlSelf->__Vfunc_leading_zero32__3692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3692__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3692__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3692__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3692__count)));
                            vlSelf->__Vfunc_leading_zero32__3692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3692__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3692__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3692__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3692__count)));
                            vlSelf->__Vfunc_leading_zero32__3692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3692__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3692__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3692__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3692__count)));
                            vlSelf->__Vfunc_leading_zero32__3692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3692__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3692__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3692__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3692__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3692__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3692__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3692__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3692__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3704__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3704__part 
                            = vlSelf->__Vfunc_leading_zero32__3704__value;
                        vlSelf->__Vfunc_leading_zero32__3704__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3704__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3704__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3704__count)));
                            vlSelf->__Vfunc_leading_zero32__3704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3704__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3704__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3704__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3704__count)));
                            vlSelf->__Vfunc_leading_zero32__3704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3704__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3704__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3704__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3704__count)));
                            vlSelf->__Vfunc_leading_zero32__3704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3704__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3704__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3704__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3704__count)));
                            vlSelf->__Vfunc_leading_zero32__3704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3704__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3704__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3704__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3704__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3704__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3704__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3704__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3704__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3716__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3716__part 
                            = vlSelf->__Vfunc_leading_zero32__3716__value;
                        vlSelf->__Vfunc_leading_zero32__3716__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3716__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3716__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3716__count)));
                            vlSelf->__Vfunc_leading_zero32__3716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3716__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3716__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3716__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3716__count)));
                            vlSelf->__Vfunc_leading_zero32__3716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3716__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3716__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3716__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3716__count)));
                            vlSelf->__Vfunc_leading_zero32__3716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3716__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3716__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3716__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3716__count)));
                            vlSelf->__Vfunc_leading_zero32__3716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3716__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3716__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3716__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3716__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3716__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3716__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3716__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3716__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3728__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3728__part 
                            = vlSelf->__Vfunc_leading_zero32__3728__value;
                        vlSelf->__Vfunc_leading_zero32__3728__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3728__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3728__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3728__count)));
                            vlSelf->__Vfunc_leading_zero32__3728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3728__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3728__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3728__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3728__count)));
                            vlSelf->__Vfunc_leading_zero32__3728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3728__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3728__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3728__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3728__count)));
                            vlSelf->__Vfunc_leading_zero32__3728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3728__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3728__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3728__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3728__count)));
                            vlSelf->__Vfunc_leading_zero32__3728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3728__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3728__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3728__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3728__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3728__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3728__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3728__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3728__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3740__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3740__part 
                            = vlSelf->__Vfunc_leading_zero32__3740__value;
                        vlSelf->__Vfunc_leading_zero32__3740__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3740__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3740__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3740__count)));
                            vlSelf->__Vfunc_leading_zero32__3740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3740__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3740__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3740__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3740__count)));
                            vlSelf->__Vfunc_leading_zero32__3740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3740__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3740__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3740__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3740__count)));
                            vlSelf->__Vfunc_leading_zero32__3740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3740__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3740__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3740__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3740__count)));
                            vlSelf->__Vfunc_leading_zero32__3740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3740__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3740__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3740__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3740__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3740__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3740__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3740__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3740__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3752__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3752__part 
                            = vlSelf->__Vfunc_leading_zero32__3752__value;
                        vlSelf->__Vfunc_leading_zero32__3752__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3752__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3752__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3752__count)));
                            vlSelf->__Vfunc_leading_zero32__3752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3752__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3752__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3752__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3752__count)));
                            vlSelf->__Vfunc_leading_zero32__3752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3752__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3752__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3752__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3752__count)));
                            vlSelf->__Vfunc_leading_zero32__3752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3752__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3752__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3752__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3752__count)));
                            vlSelf->__Vfunc_leading_zero32__3752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3752__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3752__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3752__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3752__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3752__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3752__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3752__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3752__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3764__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3764__part 
                            = vlSelf->__Vfunc_leading_zero32__3764__value;
                        vlSelf->__Vfunc_leading_zero32__3764__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3764__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3764__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3764__count)));
                            vlSelf->__Vfunc_leading_zero32__3764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3764__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3764__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3764__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3764__count)));
                            vlSelf->__Vfunc_leading_zero32__3764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3764__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3764__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3764__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3764__count)));
                            vlSelf->__Vfunc_leading_zero32__3764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3764__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3764__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3764__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3764__count)));
                            vlSelf->__Vfunc_leading_zero32__3764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3764__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3764__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3764__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3764__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3764__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3764__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3764__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3764__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3776__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3776__part 
                            = vlSelf->__Vfunc_leading_zero32__3776__value;
                        vlSelf->__Vfunc_leading_zero32__3776__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3776__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3776__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3776__count)));
                            vlSelf->__Vfunc_leading_zero32__3776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3776__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3776__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3776__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3776__count)));
                            vlSelf->__Vfunc_leading_zero32__3776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3776__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3776__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3776__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3776__count)));
                            vlSelf->__Vfunc_leading_zero32__3776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3776__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3776__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3776__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3776__count)));
                            vlSelf->__Vfunc_leading_zero32__3776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3776__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3776__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3776__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3776__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3776__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3776__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3776__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3776__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3788__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3788__part 
                            = vlSelf->__Vfunc_leading_zero32__3788__value;
                        vlSelf->__Vfunc_leading_zero32__3788__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3788__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3788__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3788__count)));
                            vlSelf->__Vfunc_leading_zero32__3788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3788__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3788__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3788__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3788__count)));
                            vlSelf->__Vfunc_leading_zero32__3788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3788__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3788__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3788__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3788__count)));
                            vlSelf->__Vfunc_leading_zero32__3788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3788__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3788__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3788__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3788__count)));
                            vlSelf->__Vfunc_leading_zero32__3788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3788__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3788__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3788__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3788__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3788__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3788__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3788__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3788__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3800__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3800__part 
                            = vlSelf->__Vfunc_leading_zero32__3800__value;
                        vlSelf->__Vfunc_leading_zero32__3800__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3800__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3800__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3800__count)));
                            vlSelf->__Vfunc_leading_zero32__3800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3800__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3800__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3800__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3800__count)));
                            vlSelf->__Vfunc_leading_zero32__3800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3800__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3800__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3800__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3800__count)));
                            vlSelf->__Vfunc_leading_zero32__3800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3800__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3800__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3800__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3800__count)));
                            vlSelf->__Vfunc_leading_zero32__3800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3800__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3800__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3800__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3800__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3800__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3800__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3800__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3800__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3812__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3812__part 
                            = vlSelf->__Vfunc_leading_zero32__3812__value;
                        vlSelf->__Vfunc_leading_zero32__3812__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3812__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3812__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3812__count)));
                            vlSelf->__Vfunc_leading_zero32__3812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3812__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3812__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3812__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3812__count)));
                            vlSelf->__Vfunc_leading_zero32__3812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3812__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3812__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3812__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3812__count)));
                            vlSelf->__Vfunc_leading_zero32__3812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3812__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3812__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3812__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3812__count)));
                            vlSelf->__Vfunc_leading_zero32__3812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3812__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3812__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3812__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3812__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3812__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3812__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3812__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3812__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3824__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3824__part 
                            = vlSelf->__Vfunc_leading_zero32__3824__value;
                        vlSelf->__Vfunc_leading_zero32__3824__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3824__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3824__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3824__count)));
                            vlSelf->__Vfunc_leading_zero32__3824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3824__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3824__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3824__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3824__count)));
                            vlSelf->__Vfunc_leading_zero32__3824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3824__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3824__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3824__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3824__count)));
                            vlSelf->__Vfunc_leading_zero32__3824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3824__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3824__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3824__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3824__count)));
                            vlSelf->__Vfunc_leading_zero32__3824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3824__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3824__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3824__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3824__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3824__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3824__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3824__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3824__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3836__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3836__part 
                            = vlSelf->__Vfunc_leading_zero32__3836__value;
                        vlSelf->__Vfunc_leading_zero32__3836__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3836__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3836__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3836__count)));
                            vlSelf->__Vfunc_leading_zero32__3836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3836__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3836__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3836__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3836__count)));
                            vlSelf->__Vfunc_leading_zero32__3836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3836__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3836__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3836__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3836__count)));
                            vlSelf->__Vfunc_leading_zero32__3836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3836__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3836__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3836__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3836__count)));
                            vlSelf->__Vfunc_leading_zero32__3836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3836__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3836__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3836__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3836__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3836__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3836__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3836__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3836__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3848__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3848__part 
                            = vlSelf->__Vfunc_leading_zero32__3848__value;
                        vlSelf->__Vfunc_leading_zero32__3848__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3848__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3848__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3848__count)));
                            vlSelf->__Vfunc_leading_zero32__3848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3848__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3848__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3848__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3848__count)));
                            vlSelf->__Vfunc_leading_zero32__3848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3848__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3848__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3848__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3848__count)));
                            vlSelf->__Vfunc_leading_zero32__3848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3848__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3848__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3848__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3848__count)));
                            vlSelf->__Vfunc_leading_zero32__3848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3848__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3848__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3848__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3848__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3848__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3848__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3848__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3848__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3860__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3860__part 
                            = vlSelf->__Vfunc_leading_zero32__3860__value;
                        vlSelf->__Vfunc_leading_zero32__3860__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3860__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3860__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3860__count)));
                            vlSelf->__Vfunc_leading_zero32__3860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3860__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3860__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3860__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3860__count)));
                            vlSelf->__Vfunc_leading_zero32__3860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3860__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3860__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3860__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3860__count)));
                            vlSelf->__Vfunc_leading_zero32__3860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3860__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3860__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3860__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3860__count)));
                            vlSelf->__Vfunc_leading_zero32__3860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3860__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3860__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3860__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3860__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3860__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3860__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3860__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3860__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3872__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3872__part 
                            = vlSelf->__Vfunc_leading_zero32__3872__value;
                        vlSelf->__Vfunc_leading_zero32__3872__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3872__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3872__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3872__count)));
                            vlSelf->__Vfunc_leading_zero32__3872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3872__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3872__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3872__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3872__count)));
                            vlSelf->__Vfunc_leading_zero32__3872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3872__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3872__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3872__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3872__count)));
                            vlSelf->__Vfunc_leading_zero32__3872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3872__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3872__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3872__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3872__count)));
                            vlSelf->__Vfunc_leading_zero32__3872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3872__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3872__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3872__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3872__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3872__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3872__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3872__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3872__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3884__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3884__part 
                            = vlSelf->__Vfunc_leading_zero32__3884__value;
                        vlSelf->__Vfunc_leading_zero32__3884__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3884__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3884__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3884__count)));
                            vlSelf->__Vfunc_leading_zero32__3884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3884__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3884__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3884__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3884__count)));
                            vlSelf->__Vfunc_leading_zero32__3884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3884__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3884__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3884__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3884__count)));
                            vlSelf->__Vfunc_leading_zero32__3884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3884__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3884__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3884__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3884__count)));
                            vlSelf->__Vfunc_leading_zero32__3884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3884__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3884__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3884__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3884__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3884__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3884__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3884__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3884__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3896__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3896__part 
                            = vlSelf->__Vfunc_leading_zero32__3896__value;
                        vlSelf->__Vfunc_leading_zero32__3896__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3896__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3896__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3896__count)));
                            vlSelf->__Vfunc_leading_zero32__3896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3896__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3896__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3896__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3896__count)));
                            vlSelf->__Vfunc_leading_zero32__3896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3896__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3896__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3896__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3896__count)));
                            vlSelf->__Vfunc_leading_zero32__3896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3896__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3896__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3896__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3896__count)));
                            vlSelf->__Vfunc_leading_zero32__3896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3896__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3896__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3896__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3896__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3896__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3896__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3896__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3896__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3908__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3908__part 
                            = vlSelf->__Vfunc_leading_zero32__3908__value;
                        vlSelf->__Vfunc_leading_zero32__3908__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3908__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3908__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3908__count)));
                            vlSelf->__Vfunc_leading_zero32__3908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3908__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3908__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3908__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3908__count)));
                            vlSelf->__Vfunc_leading_zero32__3908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3908__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3908__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3908__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3908__count)));
                            vlSelf->__Vfunc_leading_zero32__3908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3908__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3908__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3908__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3908__count)));
                            vlSelf->__Vfunc_leading_zero32__3908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3908__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3908__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3908__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3908__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3908__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3908__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3908__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3908__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3920__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3920__part 
                            = vlSelf->__Vfunc_leading_zero32__3920__value;
                        vlSelf->__Vfunc_leading_zero32__3920__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3920__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3920__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3920__count)));
                            vlSelf->__Vfunc_leading_zero32__3920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3920__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3920__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3920__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3920__count)));
                            vlSelf->__Vfunc_leading_zero32__3920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3920__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3920__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3920__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3920__count)));
                            vlSelf->__Vfunc_leading_zero32__3920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3920__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3920__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3920__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3920__count)));
                            vlSelf->__Vfunc_leading_zero32__3920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3920__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3920__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3920__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3920__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3920__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3920__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3920__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3920__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3932__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3932__part 
                            = vlSelf->__Vfunc_leading_zero32__3932__value;
                        vlSelf->__Vfunc_leading_zero32__3932__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3932__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3932__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3932__count)));
                            vlSelf->__Vfunc_leading_zero32__3932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3932__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3932__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3932__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3932__count)));
                            vlSelf->__Vfunc_leading_zero32__3932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3932__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3932__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3932__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3932__count)));
                            vlSelf->__Vfunc_leading_zero32__3932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3932__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3932__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3932__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3932__count)));
                            vlSelf->__Vfunc_leading_zero32__3932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3932__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3932__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3932__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3932__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3932__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3932__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3932__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3932__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3944__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3944__part 
                            = vlSelf->__Vfunc_leading_zero32__3944__value;
                        vlSelf->__Vfunc_leading_zero32__3944__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3944__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3944__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3944__count)));
                            vlSelf->__Vfunc_leading_zero32__3944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3944__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3944__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3944__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3944__count)));
                            vlSelf->__Vfunc_leading_zero32__3944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3944__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3944__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3944__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3944__count)));
                            vlSelf->__Vfunc_leading_zero32__3944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3944__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3944__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3944__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3944__count)));
                            vlSelf->__Vfunc_leading_zero32__3944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3944__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3944__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3944__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3944__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3944__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3944__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3944__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3944__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3956__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3956__part 
                            = vlSelf->__Vfunc_leading_zero32__3956__value;
                        vlSelf->__Vfunc_leading_zero32__3956__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3956__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3956__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3956__count)));
                            vlSelf->__Vfunc_leading_zero32__3956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3956__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3956__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3956__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3956__count)));
                            vlSelf->__Vfunc_leading_zero32__3956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3956__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3956__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3956__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3956__count)));
                            vlSelf->__Vfunc_leading_zero32__3956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3956__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3956__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3956__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3956__count)));
                            vlSelf->__Vfunc_leading_zero32__3956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3956__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3956__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3956__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3956__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3956__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3956__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3956__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3956__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3968__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3968__part 
                            = vlSelf->__Vfunc_leading_zero32__3968__value;
                        vlSelf->__Vfunc_leading_zero32__3968__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3968__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3968__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3968__count)));
                            vlSelf->__Vfunc_leading_zero32__3968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3968__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3968__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3968__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3968__count)));
                            vlSelf->__Vfunc_leading_zero32__3968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3968__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3968__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3968__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3968__count)));
                            vlSelf->__Vfunc_leading_zero32__3968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3968__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3968__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3968__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3968__count)));
                            vlSelf->__Vfunc_leading_zero32__3968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3968__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3968__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3968__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3968__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3968__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3968__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3968__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3968__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3980__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3980__part 
                            = vlSelf->__Vfunc_leading_zero32__3980__value;
                        vlSelf->__Vfunc_leading_zero32__3980__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3980__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3980__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3980__count)));
                            vlSelf->__Vfunc_leading_zero32__3980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3980__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3980__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3980__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3980__count)));
                            vlSelf->__Vfunc_leading_zero32__3980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3980__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3980__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3980__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3980__count)));
                            vlSelf->__Vfunc_leading_zero32__3980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3980__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3980__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3980__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3980__count)));
                            vlSelf->__Vfunc_leading_zero32__3980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3980__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3980__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3980__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3980__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3980__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3980__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3980__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3980__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3992__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3992__part 
                            = vlSelf->__Vfunc_leading_zero32__3992__value;
                        vlSelf->__Vfunc_leading_zero32__3992__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3992__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3992__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3992__count)));
                            vlSelf->__Vfunc_leading_zero32__3992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3992__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3992__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3992__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3992__count)));
                            vlSelf->__Vfunc_leading_zero32__3992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3992__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3992__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3992__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3992__count)));
                            vlSelf->__Vfunc_leading_zero32__3992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3992__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3992__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3992__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3992__count)));
                            vlSelf->__Vfunc_leading_zero32__3992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3992__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3992__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3992__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3992__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3992__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3992__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3992__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3992__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4004__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4004__part 
                            = vlSelf->__Vfunc_leading_zero32__4004__value;
                        vlSelf->__Vfunc_leading_zero32__4004__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4004__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4004__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4004__count)));
                            vlSelf->__Vfunc_leading_zero32__4004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4004__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4004__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4004__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4004__count)));
                            vlSelf->__Vfunc_leading_zero32__4004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4004__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4004__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4004__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4004__count)));
                            vlSelf->__Vfunc_leading_zero32__4004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4004__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4004__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4004__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4004__count)));
                            vlSelf->__Vfunc_leading_zero32__4004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4004__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4004__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4004__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4004__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4004__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4004__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4004__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4004__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4016__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4016__part 
                            = vlSelf->__Vfunc_leading_zero32__4016__value;
                        vlSelf->__Vfunc_leading_zero32__4016__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4016__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4016__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4016__count)));
                            vlSelf->__Vfunc_leading_zero32__4016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4016__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4016__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4016__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4016__count)));
                            vlSelf->__Vfunc_leading_zero32__4016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4016__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4016__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4016__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4016__count)));
                            vlSelf->__Vfunc_leading_zero32__4016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4016__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4016__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4016__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4016__count)));
                            vlSelf->__Vfunc_leading_zero32__4016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4016__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4016__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4016__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4016__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4016__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4016__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4016__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4016__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4028__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4028__part 
                            = vlSelf->__Vfunc_leading_zero32__4028__value;
                        vlSelf->__Vfunc_leading_zero32__4028__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4028__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4028__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4028__count)));
                            vlSelf->__Vfunc_leading_zero32__4028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4028__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4028__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4028__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4028__count)));
                            vlSelf->__Vfunc_leading_zero32__4028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4028__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4028__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4028__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4028__count)));
                            vlSelf->__Vfunc_leading_zero32__4028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4028__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4028__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4028__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4028__count)));
                            vlSelf->__Vfunc_leading_zero32__4028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4028__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4028__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4028__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4028__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4028__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4028__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4028__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4028__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4040__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4040__part 
                            = vlSelf->__Vfunc_leading_zero32__4040__value;
                        vlSelf->__Vfunc_leading_zero32__4040__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4040__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4040__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4040__count)));
                            vlSelf->__Vfunc_leading_zero32__4040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4040__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4040__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4040__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4040__count)));
                            vlSelf->__Vfunc_leading_zero32__4040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4040__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4040__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4040__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4040__count)));
                            vlSelf->__Vfunc_leading_zero32__4040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4040__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4040__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4040__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4040__count)));
                            vlSelf->__Vfunc_leading_zero32__4040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4040__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4040__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4040__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4040__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4040__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4040__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4040__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4040__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4052__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4052__part 
                            = vlSelf->__Vfunc_leading_zero32__4052__value;
                        vlSelf->__Vfunc_leading_zero32__4052__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4052__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4052__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4052__count)));
                            vlSelf->__Vfunc_leading_zero32__4052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4052__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4052__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4052__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4052__count)));
                            vlSelf->__Vfunc_leading_zero32__4052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4052__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4052__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4052__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4052__count)));
                            vlSelf->__Vfunc_leading_zero32__4052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4052__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4052__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4052__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4052__count)));
                            vlSelf->__Vfunc_leading_zero32__4052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4052__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4052__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4052__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4052__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4052__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4052__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4052__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4052__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4064__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4064__part 
                            = vlSelf->__Vfunc_leading_zero32__4064__value;
                        vlSelf->__Vfunc_leading_zero32__4064__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4064__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4064__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4064__count)));
                            vlSelf->__Vfunc_leading_zero32__4064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4064__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4064__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4064__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4064__count)));
                            vlSelf->__Vfunc_leading_zero32__4064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4064__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4064__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4064__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4064__count)));
                            vlSelf->__Vfunc_leading_zero32__4064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4064__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4064__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4064__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4064__count)));
                            vlSelf->__Vfunc_leading_zero32__4064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4064__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4064__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4064__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4064__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4064__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4064__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4064__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4064__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4076__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4076__part 
                            = vlSelf->__Vfunc_leading_zero32__4076__value;
                        vlSelf->__Vfunc_leading_zero32__4076__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4076__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4076__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4076__count)));
                            vlSelf->__Vfunc_leading_zero32__4076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4076__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4076__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4076__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4076__count)));
                            vlSelf->__Vfunc_leading_zero32__4076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4076__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4076__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4076__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4076__count)));
                            vlSelf->__Vfunc_leading_zero32__4076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4076__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4076__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4076__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4076__count)));
                            vlSelf->__Vfunc_leading_zero32__4076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4076__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4076__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4076__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4076__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4076__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4076__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4076__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4076__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4088__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4088__part 
                            = vlSelf->__Vfunc_leading_zero32__4088__value;
                        vlSelf->__Vfunc_leading_zero32__4088__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4088__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4088__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4088__count)));
                            vlSelf->__Vfunc_leading_zero32__4088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4088__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4088__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4088__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4088__count)));
                            vlSelf->__Vfunc_leading_zero32__4088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4088__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4088__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4088__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4088__count)));
                            vlSelf->__Vfunc_leading_zero32__4088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4088__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4088__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4088__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4088__count)));
                            vlSelf->__Vfunc_leading_zero32__4088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4088__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4088__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4088__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4088__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4088__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4088__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4088__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4088__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4100__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4100__part 
                            = vlSelf->__Vfunc_leading_zero32__4100__value;
                        vlSelf->__Vfunc_leading_zero32__4100__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4100__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4100__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4100__count)));
                            vlSelf->__Vfunc_leading_zero32__4100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4100__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4100__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4100__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4100__count)));
                            vlSelf->__Vfunc_leading_zero32__4100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4100__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4100__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4100__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4100__count)));
                            vlSelf->__Vfunc_leading_zero32__4100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4100__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4100__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4100__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4100__count)));
                            vlSelf->__Vfunc_leading_zero32__4100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4100__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4100__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4100__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4100__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4100__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4100__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4100__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4100__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4112__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4112__part 
                            = vlSelf->__Vfunc_leading_zero32__4112__value;
                        vlSelf->__Vfunc_leading_zero32__4112__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4112__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4112__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4112__count)));
                            vlSelf->__Vfunc_leading_zero32__4112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4112__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4112__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4112__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4112__count)));
                            vlSelf->__Vfunc_leading_zero32__4112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4112__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4112__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4112__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4112__count)));
                            vlSelf->__Vfunc_leading_zero32__4112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4112__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4112__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4112__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4112__count)));
                            vlSelf->__Vfunc_leading_zero32__4112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4112__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4112__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4112__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4112__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4112__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4112__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4112__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4112__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4124__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4124__part 
                            = vlSelf->__Vfunc_leading_zero32__4124__value;
                        vlSelf->__Vfunc_leading_zero32__4124__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4124__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4124__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4124__count)));
                            vlSelf->__Vfunc_leading_zero32__4124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4124__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4124__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4124__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4124__count)));
                            vlSelf->__Vfunc_leading_zero32__4124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4124__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4124__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4124__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4124__count)));
                            vlSelf->__Vfunc_leading_zero32__4124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4124__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4124__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4124__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4124__count)));
                            vlSelf->__Vfunc_leading_zero32__4124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4124__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4124__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4124__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4124__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4124__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4124__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4124__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4124__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4136__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4136__part 
                            = vlSelf->__Vfunc_leading_zero32__4136__value;
                        vlSelf->__Vfunc_leading_zero32__4136__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4136__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4136__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4136__count)));
                            vlSelf->__Vfunc_leading_zero32__4136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4136__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4136__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4136__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4136__count)));
                            vlSelf->__Vfunc_leading_zero32__4136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4136__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4136__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4136__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4136__count)));
                            vlSelf->__Vfunc_leading_zero32__4136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4136__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4136__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4136__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4136__count)));
                            vlSelf->__Vfunc_leading_zero32__4136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4136__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4136__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4136__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4136__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4136__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4136__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4136__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4136__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4148__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4148__part 
                            = vlSelf->__Vfunc_leading_zero32__4148__value;
                        vlSelf->__Vfunc_leading_zero32__4148__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4148__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4148__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4148__count)));
                            vlSelf->__Vfunc_leading_zero32__4148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4148__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4148__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4148__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4148__count)));
                            vlSelf->__Vfunc_leading_zero32__4148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4148__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4148__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4148__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4148__count)));
                            vlSelf->__Vfunc_leading_zero32__4148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4148__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4148__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4148__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4148__count)));
                            vlSelf->__Vfunc_leading_zero32__4148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4148__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4148__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4148__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4148__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4148__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4148__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4148__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4148__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4160__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4160__part 
                            = vlSelf->__Vfunc_leading_zero32__4160__value;
                        vlSelf->__Vfunc_leading_zero32__4160__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4160__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4160__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4160__count)));
                            vlSelf->__Vfunc_leading_zero32__4160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4160__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4160__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4160__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4160__count)));
                            vlSelf->__Vfunc_leading_zero32__4160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4160__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4160__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4160__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4160__count)));
                            vlSelf->__Vfunc_leading_zero32__4160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4160__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4160__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4160__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4160__count)));
                            vlSelf->__Vfunc_leading_zero32__4160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4160__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4160__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4160__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4160__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4160__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4160__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4160__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4160__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4172__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4172__part 
                            = vlSelf->__Vfunc_leading_zero32__4172__value;
                        vlSelf->__Vfunc_leading_zero32__4172__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4172__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4172__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4172__count)));
                            vlSelf->__Vfunc_leading_zero32__4172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4172__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4172__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4172__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4172__count)));
                            vlSelf->__Vfunc_leading_zero32__4172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4172__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4172__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4172__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4172__count)));
                            vlSelf->__Vfunc_leading_zero32__4172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4172__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4172__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4172__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4172__count)));
                            vlSelf->__Vfunc_leading_zero32__4172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4172__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4172__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4172__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4172__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4172__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4172__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4172__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4172__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4184__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4184__part 
                            = vlSelf->__Vfunc_leading_zero32__4184__value;
                        vlSelf->__Vfunc_leading_zero32__4184__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4184__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4184__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4184__count)));
                            vlSelf->__Vfunc_leading_zero32__4184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4184__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4184__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4184__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4184__count)));
                            vlSelf->__Vfunc_leading_zero32__4184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4184__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4184__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4184__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4184__count)));
                            vlSelf->__Vfunc_leading_zero32__4184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4184__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4184__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4184__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4184__count)));
                            vlSelf->__Vfunc_leading_zero32__4184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4184__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4184__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4184__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4184__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4184__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4184__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4184__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4184__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4196__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4196__part 
                            = vlSelf->__Vfunc_leading_zero32__4196__value;
                        vlSelf->__Vfunc_leading_zero32__4196__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4196__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4196__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4196__count)));
                            vlSelf->__Vfunc_leading_zero32__4196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4196__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4196__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4196__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4196__count)));
                            vlSelf->__Vfunc_leading_zero32__4196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4196__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4196__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4196__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4196__count)));
                            vlSelf->__Vfunc_leading_zero32__4196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4196__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4196__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4196__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4196__count)));
                            vlSelf->__Vfunc_leading_zero32__4196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4196__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4196__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4196__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4196__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4196__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4196__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4196__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4196__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4208__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4208__part 
                            = vlSelf->__Vfunc_leading_zero32__4208__value;
                        vlSelf->__Vfunc_leading_zero32__4208__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4208__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4208__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4208__count)));
                            vlSelf->__Vfunc_leading_zero32__4208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4208__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4208__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4208__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4208__count)));
                            vlSelf->__Vfunc_leading_zero32__4208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4208__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4208__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4208__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4208__count)));
                            vlSelf->__Vfunc_leading_zero32__4208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4208__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4208__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4208__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4208__count)));
                            vlSelf->__Vfunc_leading_zero32__4208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4208__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4208__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4208__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4208__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4208__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4208__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4208__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4208__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4220__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4220__part 
                            = vlSelf->__Vfunc_leading_zero32__4220__value;
                        vlSelf->__Vfunc_leading_zero32__4220__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4220__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4220__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4220__count)));
                            vlSelf->__Vfunc_leading_zero32__4220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4220__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4220__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4220__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4220__count)));
                            vlSelf->__Vfunc_leading_zero32__4220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4220__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4220__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4220__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4220__count)));
                            vlSelf->__Vfunc_leading_zero32__4220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4220__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4220__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4220__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4220__count)));
                            vlSelf->__Vfunc_leading_zero32__4220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4220__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4220__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4220__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4220__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4220__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4220__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4220__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4220__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4232__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4232__part 
                            = vlSelf->__Vfunc_leading_zero32__4232__value;
                        vlSelf->__Vfunc_leading_zero32__4232__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4232__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4232__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4232__count)));
                            vlSelf->__Vfunc_leading_zero32__4232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4232__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4232__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4232__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4232__count)));
                            vlSelf->__Vfunc_leading_zero32__4232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4232__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4232__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4232__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4232__count)));
                            vlSelf->__Vfunc_leading_zero32__4232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4232__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4232__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4232__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4232__count)));
                            vlSelf->__Vfunc_leading_zero32__4232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4232__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4232__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4232__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4232__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4232__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4232__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4232__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4232__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4244__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4244__part 
                            = vlSelf->__Vfunc_leading_zero32__4244__value;
                        vlSelf->__Vfunc_leading_zero32__4244__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4244__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4244__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4244__count)));
                            vlSelf->__Vfunc_leading_zero32__4244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4244__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4244__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4244__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4244__count)));
                            vlSelf->__Vfunc_leading_zero32__4244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4244__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4244__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4244__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4244__count)));
                            vlSelf->__Vfunc_leading_zero32__4244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4244__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4244__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4244__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4244__count)));
                            vlSelf->__Vfunc_leading_zero32__4244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4244__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4244__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4244__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4244__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4244__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4244__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4244__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4244__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4256__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4256__part 
                            = vlSelf->__Vfunc_leading_zero32__4256__value;
                        vlSelf->__Vfunc_leading_zero32__4256__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4256__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4256__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4256__count)));
                            vlSelf->__Vfunc_leading_zero32__4256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4256__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4256__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4256__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4256__count)));
                            vlSelf->__Vfunc_leading_zero32__4256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4256__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4256__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4256__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4256__count)));
                            vlSelf->__Vfunc_leading_zero32__4256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4256__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4256__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4256__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4256__count)));
                            vlSelf->__Vfunc_leading_zero32__4256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4256__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4256__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4256__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4256__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4256__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4256__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4256__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4256__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4268__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4268__part 
                            = vlSelf->__Vfunc_leading_zero32__4268__value;
                        vlSelf->__Vfunc_leading_zero32__4268__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4268__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4268__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4268__count)));
                            vlSelf->__Vfunc_leading_zero32__4268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4268__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4268__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4268__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4268__count)));
                            vlSelf->__Vfunc_leading_zero32__4268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4268__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4268__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4268__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4268__count)));
                            vlSelf->__Vfunc_leading_zero32__4268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4268__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4268__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4268__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4268__count)));
                            vlSelf->__Vfunc_leading_zero32__4268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4268__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4268__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4268__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4268__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4268__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4268__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4268__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4268__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4280__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4280__part 
                            = vlSelf->__Vfunc_leading_zero32__4280__value;
                        vlSelf->__Vfunc_leading_zero32__4280__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4280__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4280__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4280__count)));
                            vlSelf->__Vfunc_leading_zero32__4280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4280__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4280__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4280__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4280__count)));
                            vlSelf->__Vfunc_leading_zero32__4280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4280__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4280__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4280__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4280__count)));
                            vlSelf->__Vfunc_leading_zero32__4280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4280__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4280__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4280__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4280__count)));
                            vlSelf->__Vfunc_leading_zero32__4280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4280__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4280__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4280__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4280__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4280__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4280__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4280__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4280__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4292__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4292__part 
                            = vlSelf->__Vfunc_leading_zero32__4292__value;
                        vlSelf->__Vfunc_leading_zero32__4292__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4292__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4292__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4292__count)));
                            vlSelf->__Vfunc_leading_zero32__4292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4292__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4292__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4292__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4292__count)));
                            vlSelf->__Vfunc_leading_zero32__4292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4292__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4292__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4292__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4292__count)));
                            vlSelf->__Vfunc_leading_zero32__4292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4292__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4292__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4292__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4292__count)));
                            vlSelf->__Vfunc_leading_zero32__4292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4292__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4292__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4292__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4292__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4292__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4292__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4292__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4292__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4304__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4304__part 
                            = vlSelf->__Vfunc_leading_zero32__4304__value;
                        vlSelf->__Vfunc_leading_zero32__4304__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4304__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4304__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4304__count)));
                            vlSelf->__Vfunc_leading_zero32__4304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4304__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4304__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4304__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4304__count)));
                            vlSelf->__Vfunc_leading_zero32__4304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4304__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4304__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4304__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4304__count)));
                            vlSelf->__Vfunc_leading_zero32__4304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4304__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4304__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4304__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4304__count)));
                            vlSelf->__Vfunc_leading_zero32__4304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4304__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4304__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4304__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4304__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4304__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4304__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4304__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4304__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4316__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4316__part 
                            = vlSelf->__Vfunc_leading_zero32__4316__value;
                        vlSelf->__Vfunc_leading_zero32__4316__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4316__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4316__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4316__count)));
                            vlSelf->__Vfunc_leading_zero32__4316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4316__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4316__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4316__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4316__count)));
                            vlSelf->__Vfunc_leading_zero32__4316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4316__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4316__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4316__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4316__count)));
                            vlSelf->__Vfunc_leading_zero32__4316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4316__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4316__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4316__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4316__count)));
                            vlSelf->__Vfunc_leading_zero32__4316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4316__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4316__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4316__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4316__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4316__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4316__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4316__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4316__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4328__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4328__part 
                            = vlSelf->__Vfunc_leading_zero32__4328__value;
                        vlSelf->__Vfunc_leading_zero32__4328__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4328__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4328__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4328__count)));
                            vlSelf->__Vfunc_leading_zero32__4328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4328__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4328__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4328__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4328__count)));
                            vlSelf->__Vfunc_leading_zero32__4328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4328__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4328__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4328__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4328__count)));
                            vlSelf->__Vfunc_leading_zero32__4328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4328__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4328__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4328__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4328__count)));
                            vlSelf->__Vfunc_leading_zero32__4328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4328__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4328__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4328__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4328__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4328__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4328__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4328__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4328__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4340__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4340__part 
                            = vlSelf->__Vfunc_leading_zero32__4340__value;
                        vlSelf->__Vfunc_leading_zero32__4340__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4340__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4340__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4340__count)));
                            vlSelf->__Vfunc_leading_zero32__4340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4340__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4340__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4340__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4340__count)));
                            vlSelf->__Vfunc_leading_zero32__4340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4340__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4340__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4340__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4340__count)));
                            vlSelf->__Vfunc_leading_zero32__4340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4340__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4340__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4340__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4340__count)));
                            vlSelf->__Vfunc_leading_zero32__4340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4340__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4340__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4340__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4340__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4340__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4340__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4340__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4340__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1281__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1281__part 
                            = vlSelf->__Vfunc_leading_zero32__1281__value;
                        vlSelf->__Vfunc_leading_zero32__1281__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1281__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1281__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1281__count)));
                            vlSelf->__Vfunc_leading_zero32__1281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1281__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1281__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1281__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1281__count)));
                            vlSelf->__Vfunc_leading_zero32__1281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1281__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1281__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1281__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1281__count)));
                            vlSelf->__Vfunc_leading_zero32__1281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1281__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1281__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1281__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1281__count)));
                            vlSelf->__Vfunc_leading_zero32__1281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1281__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1281__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1281__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1281__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1281__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1281__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1281__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1281__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1293__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1293__part 
                            = vlSelf->__Vfunc_leading_zero32__1293__value;
                        vlSelf->__Vfunc_leading_zero32__1293__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1293__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1293__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1293__count)));
                            vlSelf->__Vfunc_leading_zero32__1293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1293__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1293__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1293__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1293__count)));
                            vlSelf->__Vfunc_leading_zero32__1293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1293__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1293__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1293__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1293__count)));
                            vlSelf->__Vfunc_leading_zero32__1293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1293__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1293__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1293__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1293__count)));
                            vlSelf->__Vfunc_leading_zero32__1293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1293__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1293__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1293__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1293__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1293__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1293__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1293__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1293__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1305__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1305__part 
                            = vlSelf->__Vfunc_leading_zero32__1305__value;
                        vlSelf->__Vfunc_leading_zero32__1305__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1305__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1305__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1305__count)));
                            vlSelf->__Vfunc_leading_zero32__1305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1305__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1305__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1305__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1305__count)));
                            vlSelf->__Vfunc_leading_zero32__1305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1305__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1305__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1305__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1305__count)));
                            vlSelf->__Vfunc_leading_zero32__1305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1305__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1305__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1305__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1305__count)));
                            vlSelf->__Vfunc_leading_zero32__1305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1305__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1305__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1305__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1305__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1305__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1305__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1305__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1305__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1317__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1317__part 
                            = vlSelf->__Vfunc_leading_zero32__1317__value;
                        vlSelf->__Vfunc_leading_zero32__1317__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1317__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1317__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1317__count)));
                            vlSelf->__Vfunc_leading_zero32__1317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1317__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1317__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1317__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1317__count)));
                            vlSelf->__Vfunc_leading_zero32__1317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1317__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1317__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1317__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1317__count)));
                            vlSelf->__Vfunc_leading_zero32__1317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1317__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1317__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1317__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1317__count)));
                            vlSelf->__Vfunc_leading_zero32__1317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1317__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1317__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1317__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1317__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1317__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1317__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1317__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1317__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1329__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1329__part 
                            = vlSelf->__Vfunc_leading_zero32__1329__value;
                        vlSelf->__Vfunc_leading_zero32__1329__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1329__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1329__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1329__count)));
                            vlSelf->__Vfunc_leading_zero32__1329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1329__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1329__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1329__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1329__count)));
                            vlSelf->__Vfunc_leading_zero32__1329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1329__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1329__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1329__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1329__count)));
                            vlSelf->__Vfunc_leading_zero32__1329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1329__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1329__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1329__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1329__count)));
                            vlSelf->__Vfunc_leading_zero32__1329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1329__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1329__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1329__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1329__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1329__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1329__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1329__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1329__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1341__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1341__part 
                            = vlSelf->__Vfunc_leading_zero32__1341__value;
                        vlSelf->__Vfunc_leading_zero32__1341__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1341__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1341__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1341__count)));
                            vlSelf->__Vfunc_leading_zero32__1341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1341__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1341__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1341__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1341__count)));
                            vlSelf->__Vfunc_leading_zero32__1341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1341__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1341__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1341__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1341__count)));
                            vlSelf->__Vfunc_leading_zero32__1341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1341__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1341__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1341__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1341__count)));
                            vlSelf->__Vfunc_leading_zero32__1341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1341__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1341__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1341__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1341__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1341__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1341__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1341__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1341__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1353__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1353__part 
                            = vlSelf->__Vfunc_leading_zero32__1353__value;
                        vlSelf->__Vfunc_leading_zero32__1353__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1353__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1353__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1353__count)));
                            vlSelf->__Vfunc_leading_zero32__1353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1353__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1353__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1353__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1353__count)));
                            vlSelf->__Vfunc_leading_zero32__1353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1353__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1353__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1353__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1353__count)));
                            vlSelf->__Vfunc_leading_zero32__1353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1353__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1353__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1353__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1353__count)));
                            vlSelf->__Vfunc_leading_zero32__1353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1353__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1353__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1353__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1353__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1353__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1353__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1353__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1353__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1365__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1365__part 
                            = vlSelf->__Vfunc_leading_zero32__1365__value;
                        vlSelf->__Vfunc_leading_zero32__1365__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1365__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1365__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1365__count)));
                            vlSelf->__Vfunc_leading_zero32__1365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1365__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1365__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1365__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1365__count)));
                            vlSelf->__Vfunc_leading_zero32__1365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1365__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1365__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1365__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1365__count)));
                            vlSelf->__Vfunc_leading_zero32__1365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1365__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1365__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1365__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1365__count)));
                            vlSelf->__Vfunc_leading_zero32__1365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1365__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1365__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1365__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1365__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1365__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1365__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1365__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1365__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1377__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1377__part 
                            = vlSelf->__Vfunc_leading_zero32__1377__value;
                        vlSelf->__Vfunc_leading_zero32__1377__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1377__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1377__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1377__count)));
                            vlSelf->__Vfunc_leading_zero32__1377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1377__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1377__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1377__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1377__count)));
                            vlSelf->__Vfunc_leading_zero32__1377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1377__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1377__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1377__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1377__count)));
                            vlSelf->__Vfunc_leading_zero32__1377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1377__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1377__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1377__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1377__count)));
                            vlSelf->__Vfunc_leading_zero32__1377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1377__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1377__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1377__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1377__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1377__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1377__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1377__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1377__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1389__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1389__part 
                            = vlSelf->__Vfunc_leading_zero32__1389__value;
                        vlSelf->__Vfunc_leading_zero32__1389__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1389__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1389__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1389__count)));
                            vlSelf->__Vfunc_leading_zero32__1389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1389__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1389__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1389__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1389__count)));
                            vlSelf->__Vfunc_leading_zero32__1389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1389__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1389__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1389__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1389__count)));
                            vlSelf->__Vfunc_leading_zero32__1389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1389__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1389__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1389__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1389__count)));
                            vlSelf->__Vfunc_leading_zero32__1389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1389__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1389__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1389__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1389__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1389__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1389__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1389__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1389__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1401__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1401__part 
                            = vlSelf->__Vfunc_leading_zero32__1401__value;
                        vlSelf->__Vfunc_leading_zero32__1401__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1401__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1401__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1401__count)));
                            vlSelf->__Vfunc_leading_zero32__1401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1401__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1401__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1401__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1401__count)));
                            vlSelf->__Vfunc_leading_zero32__1401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1401__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1401__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1401__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1401__count)));
                            vlSelf->__Vfunc_leading_zero32__1401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1401__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1401__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1401__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1401__count)));
                            vlSelf->__Vfunc_leading_zero32__1401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1401__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1401__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1401__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1401__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1401__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1401__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1401__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1401__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1413__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1413__part 
                            = vlSelf->__Vfunc_leading_zero32__1413__value;
                        vlSelf->__Vfunc_leading_zero32__1413__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1413__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1413__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1413__count)));
                            vlSelf->__Vfunc_leading_zero32__1413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1413__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1413__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1413__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1413__count)));
                            vlSelf->__Vfunc_leading_zero32__1413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1413__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1413__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1413__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1413__count)));
                            vlSelf->__Vfunc_leading_zero32__1413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1413__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1413__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1413__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1413__count)));
                            vlSelf->__Vfunc_leading_zero32__1413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1413__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1413__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1413__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1413__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1413__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1413__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1413__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1413__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1425__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1425__part 
                            = vlSelf->__Vfunc_leading_zero32__1425__value;
                        vlSelf->__Vfunc_leading_zero32__1425__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1425__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1425__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1425__count)));
                            vlSelf->__Vfunc_leading_zero32__1425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1425__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1425__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1425__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1425__count)));
                            vlSelf->__Vfunc_leading_zero32__1425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1425__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1425__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1425__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1425__count)));
                            vlSelf->__Vfunc_leading_zero32__1425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1425__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1425__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1425__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1425__count)));
                            vlSelf->__Vfunc_leading_zero32__1425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1425__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1425__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1425__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1425__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1425__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1425__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1425__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1425__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1437__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1437__part 
                            = vlSelf->__Vfunc_leading_zero32__1437__value;
                        vlSelf->__Vfunc_leading_zero32__1437__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1437__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1437__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1437__count)));
                            vlSelf->__Vfunc_leading_zero32__1437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1437__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1437__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1437__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1437__count)));
                            vlSelf->__Vfunc_leading_zero32__1437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1437__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1437__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1437__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1437__count)));
                            vlSelf->__Vfunc_leading_zero32__1437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1437__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1437__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1437__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1437__count)));
                            vlSelf->__Vfunc_leading_zero32__1437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1437__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1437__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1437__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1437__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1437__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1437__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1437__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1437__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1449__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1449__part 
                            = vlSelf->__Vfunc_leading_zero32__1449__value;
                        vlSelf->__Vfunc_leading_zero32__1449__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1449__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1449__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1449__count)));
                            vlSelf->__Vfunc_leading_zero32__1449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1449__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1449__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1449__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1449__count)));
                            vlSelf->__Vfunc_leading_zero32__1449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1449__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1449__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1449__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1449__count)));
                            vlSelf->__Vfunc_leading_zero32__1449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1449__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1449__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1449__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1449__count)));
                            vlSelf->__Vfunc_leading_zero32__1449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1449__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1449__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1449__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1449__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1449__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1449__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1449__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1449__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1461__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1461__part 
                            = vlSelf->__Vfunc_leading_zero32__1461__value;
                        vlSelf->__Vfunc_leading_zero32__1461__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1461__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1461__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1461__count)));
                            vlSelf->__Vfunc_leading_zero32__1461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1461__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1461__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1461__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1461__count)));
                            vlSelf->__Vfunc_leading_zero32__1461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1461__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1461__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1461__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1461__count)));
                            vlSelf->__Vfunc_leading_zero32__1461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1461__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1461__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1461__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1461__count)));
                            vlSelf->__Vfunc_leading_zero32__1461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1461__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1461__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1461__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1461__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1461__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1461__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1461__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1461__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1473__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1473__part 
                            = vlSelf->__Vfunc_leading_zero32__1473__value;
                        vlSelf->__Vfunc_leading_zero32__1473__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1473__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1473__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1473__count)));
                            vlSelf->__Vfunc_leading_zero32__1473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1473__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1473__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1473__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1473__count)));
                            vlSelf->__Vfunc_leading_zero32__1473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1473__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1473__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1473__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1473__count)));
                            vlSelf->__Vfunc_leading_zero32__1473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1473__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1473__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1473__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1473__count)));
                            vlSelf->__Vfunc_leading_zero32__1473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1473__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1473__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1473__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1473__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1473__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1473__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1473__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1473__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1485__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1485__part 
                            = vlSelf->__Vfunc_leading_zero32__1485__value;
                        vlSelf->__Vfunc_leading_zero32__1485__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1485__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1485__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1485__count)));
                            vlSelf->__Vfunc_leading_zero32__1485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1485__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1485__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1485__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1485__count)));
                            vlSelf->__Vfunc_leading_zero32__1485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1485__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1485__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1485__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1485__count)));
                            vlSelf->__Vfunc_leading_zero32__1485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1485__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1485__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1485__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1485__count)));
                            vlSelf->__Vfunc_leading_zero32__1485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1485__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1485__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1485__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1485__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1485__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1485__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1485__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1485__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1497__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1497__part 
                            = vlSelf->__Vfunc_leading_zero32__1497__value;
                        vlSelf->__Vfunc_leading_zero32__1497__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1497__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1497__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1497__count)));
                            vlSelf->__Vfunc_leading_zero32__1497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1497__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1497__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1497__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1497__count)));
                            vlSelf->__Vfunc_leading_zero32__1497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1497__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1497__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1497__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1497__count)));
                            vlSelf->__Vfunc_leading_zero32__1497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1497__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1497__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1497__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1497__count)));
                            vlSelf->__Vfunc_leading_zero32__1497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1497__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1497__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1497__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1497__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1497__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1497__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1497__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1497__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1509__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1509__part 
                            = vlSelf->__Vfunc_leading_zero32__1509__value;
                        vlSelf->__Vfunc_leading_zero32__1509__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1509__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1509__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1509__count)));
                            vlSelf->__Vfunc_leading_zero32__1509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1509__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1509__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1509__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1509__count)));
                            vlSelf->__Vfunc_leading_zero32__1509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1509__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1509__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1509__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1509__count)));
                            vlSelf->__Vfunc_leading_zero32__1509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1509__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1509__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1509__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1509__count)));
                            vlSelf->__Vfunc_leading_zero32__1509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1509__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1509__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1509__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1509__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1509__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1509__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1509__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1509__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1521__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1521__part 
                            = vlSelf->__Vfunc_leading_zero32__1521__value;
                        vlSelf->__Vfunc_leading_zero32__1521__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1521__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1521__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1521__count)));
                            vlSelf->__Vfunc_leading_zero32__1521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1521__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1521__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1521__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1521__count)));
                            vlSelf->__Vfunc_leading_zero32__1521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1521__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1521__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1521__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1521__count)));
                            vlSelf->__Vfunc_leading_zero32__1521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1521__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1521__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1521__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1521__count)));
                            vlSelf->__Vfunc_leading_zero32__1521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1521__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1521__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1521__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1521__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1521__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1521__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1521__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1521__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1533__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1533__part 
                            = vlSelf->__Vfunc_leading_zero32__1533__value;
                        vlSelf->__Vfunc_leading_zero32__1533__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1533__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1533__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1533__count)));
                            vlSelf->__Vfunc_leading_zero32__1533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1533__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1533__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1533__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1533__count)));
                            vlSelf->__Vfunc_leading_zero32__1533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1533__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1533__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1533__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1533__count)));
                            vlSelf->__Vfunc_leading_zero32__1533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1533__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1533__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1533__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1533__count)));
                            vlSelf->__Vfunc_leading_zero32__1533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1533__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1533__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1533__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1533__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1533__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1533__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1533__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1533__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1545__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1545__part 
                            = vlSelf->__Vfunc_leading_zero32__1545__value;
                        vlSelf->__Vfunc_leading_zero32__1545__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1545__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1545__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1545__count)));
                            vlSelf->__Vfunc_leading_zero32__1545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1545__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1545__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1545__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1545__count)));
                            vlSelf->__Vfunc_leading_zero32__1545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1545__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1545__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1545__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1545__count)));
                            vlSelf->__Vfunc_leading_zero32__1545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1545__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1545__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1545__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1545__count)));
                            vlSelf->__Vfunc_leading_zero32__1545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1545__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1545__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1545__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1545__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1545__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1545__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1545__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1545__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1557__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1557__part 
                            = vlSelf->__Vfunc_leading_zero32__1557__value;
                        vlSelf->__Vfunc_leading_zero32__1557__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1557__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1557__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1557__count)));
                            vlSelf->__Vfunc_leading_zero32__1557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1557__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1557__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1557__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1557__count)));
                            vlSelf->__Vfunc_leading_zero32__1557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1557__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1557__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1557__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1557__count)));
                            vlSelf->__Vfunc_leading_zero32__1557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1557__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1557__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1557__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1557__count)));
                            vlSelf->__Vfunc_leading_zero32__1557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1557__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1557__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1557__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1557__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1557__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1557__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1557__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1557__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1569__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1569__part 
                            = vlSelf->__Vfunc_leading_zero32__1569__value;
                        vlSelf->__Vfunc_leading_zero32__1569__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1569__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1569__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1569__count)));
                            vlSelf->__Vfunc_leading_zero32__1569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1569__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1569__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1569__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1569__count)));
                            vlSelf->__Vfunc_leading_zero32__1569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1569__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1569__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1569__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1569__count)));
                            vlSelf->__Vfunc_leading_zero32__1569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1569__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1569__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1569__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1569__count)));
                            vlSelf->__Vfunc_leading_zero32__1569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1569__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1569__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1569__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1569__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1569__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1569__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1569__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1569__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1581__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1581__part 
                            = vlSelf->__Vfunc_leading_zero32__1581__value;
                        vlSelf->__Vfunc_leading_zero32__1581__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1581__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1581__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1581__count)));
                            vlSelf->__Vfunc_leading_zero32__1581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1581__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1581__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1581__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1581__count)));
                            vlSelf->__Vfunc_leading_zero32__1581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1581__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1581__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1581__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1581__count)));
                            vlSelf->__Vfunc_leading_zero32__1581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1581__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1581__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1581__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1581__count)));
                            vlSelf->__Vfunc_leading_zero32__1581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1581__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1581__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1581__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1581__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1581__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1581__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1581__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1581__Vfuncout)) 
                             - (IData)(8U))));
}
